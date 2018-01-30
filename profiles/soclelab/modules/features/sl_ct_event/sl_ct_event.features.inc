<?php
/**
 * @file
 * sl_ct_event.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sl_ct_event_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function sl_ct_event_node_info() {
  $items = array(
    'evenement' => array(
      'name' => t('Evènement'),
      'base' => 'node_content',
      'description' => t('Type de contenu utilisé pour affiché des articles de type événementiels'),
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
