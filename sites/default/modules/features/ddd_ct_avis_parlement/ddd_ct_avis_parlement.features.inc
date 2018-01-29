<?php
/**
 * @file
 * ddd_ct_avis_parlement.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ddd_ct_avis_parlement_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ddd_ct_avis_parlement_node_info() {
  $items = array(
    'ct_avis_parlement' => array(
      'name' => t('Avis au Parlement'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
