<?php
/**
 * @file
 * Enables modules and site configuration for a ScoleLab' site installation.
 */

/*
 * Define soclelab' minimum execution time required to operate.
 */
define('DRUPAL_MINIMUM_MAX_EXECUTION_TIME', 120);
 
/*
 * Define soclelab' minimum APC cache required to operate.
 */
define('SOCLELAB_MINIMUM_APC_CACHE', 96);

/**
 * Implements hook_admin_paths_alter().
 */
function soclelab_admin_paths_alter(&$paths) {
  // Avoid switching between themes when users edit their account.
  $paths['user'] = FALSE;
  $paths['user/*'] = FALSE;
}

/**
 * Implements hook_update_projects_alter().
 */
function soclelab_update_projects_alter(&$projects) {
  // Enable update status for the SocleLab' profile.
  $modules = system_rebuild_module_data();
  // The module object is shared in the request, so we need to clone it here.
  $soclelab = clone $modules['soclelab'];
  $soclelab->info['hidden'] = FALSE;
  _update_process_info_list($projects, array('soclelab' => $soclelab), 'module', TRUE);
}

/**
 * Implements hook_hook_info().
 */
function soclelab_hook_info() {
  $hooks = array(
    'soclelab_entity_integration',
    'soclelab_entity_integration_alter',
  );

  return array_fill_keys($hooks, array('group' => 'soclelab'));
}

/**
 * Get SocleLab' entity integration information.
 *
 * @param $entity_type
 *   (optional) The entity type to load, e.g. node or user.
 *
 * @return
 *   An associative array of entity integrations whose keys define the entity
 *   type for each integration and whose values contain the bundles which have
 *   been integrated. Each bundle is itself an associative array, whose keys
 *   define the type of integration to enable and whose values contain the
 *   status of the integration. TRUE = enabled, FALSE = disabled.
 */
function soclelab_entity_integration_info($entity_type = NULL, $cache = TRUE) {
  $info = &drupal_static(__FUNCTION__);
  if (!$info || !$cache) {
    $info = module_invoke_all('soclelab_entity_integration');
    drupal_alter('soclelab_entity_integration', $info);
  }
  if ($entity_type) {
    return isset($info[$entity_type]) ? $info[$entity_type] : array();
  }
  else {
    return $info;
  }
}

/**
 * Implements hook_form_FORM_ID_alter() for install_configure_form().
 *
 * Allows the profile to alter the site configuration form.
 */
function soclelab_form_install_configure_form_alter(&$form, $form_state) {
  // Clear all non-error messages that might be set by enabled modules
  drupal_get_messages('status', TRUE);
  drupal_get_messages('completed', TRUE);

  // Pre-populate the site name with the server name.
  $form['site_information']['site_name']['#default_value'] = $_SERVER['SERVER_NAME'];

  $form['admin_account']['field_name_first'] = array(
    '#type' => 'textfield',
    '#title' => 'First name',
    '#weight' => -10,
  );

  $form['admin_account']['field_name_last'] = array(
    '#type' => 'textfield',
    '#title' => 'Last name',
    '#weight' => -9,
  );
  
  $form['#submit'][] = 'soclelab_admin_save_fullname';
}

/**
 * Save the full name of the first user.
 */
function soclelab_admin_save_fullname($form_id, &$form_state) {
  $values = $form_state['values'];
  if (!empty($values['field_name_first']) || !empty($values['field_name_last'])) {
    $account = user_load(1);
    $account->field_name_first[LANGUAGE_NONE][0]['value'] = $values['field_name_first'];
    $account->field_name_last[LANGUAGE_NONE][0]['value'] = $values['field_name_last'];
    user_save($account);
    realname_update($account);
  }
}
