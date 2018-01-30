<?php
/**
 * @file
 * ddd_ct_decision.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ddd_ct_decision_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ddd_ct_decision_node_info() {
  $items = array(
    'ct_decision' => array(
      'name' => t('Décision'),
      'base' => 'node_content',
      'description' => t('Décision'),
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
