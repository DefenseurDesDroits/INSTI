<?php
/**
 * @file
 * ddd_cf_configuration.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ddd_cf_configuration_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer redirects'.
  $permissions['administer redirects'] = array(
    'name' => 'administer redirects',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'redirect',
  );

  return $permissions;
}
