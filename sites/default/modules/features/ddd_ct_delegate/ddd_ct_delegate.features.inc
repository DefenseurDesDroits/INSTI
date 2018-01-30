<?php
/**
 * @file
 * ddd_ct_delegate.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ddd_ct_delegate_ctools_plugin_api($module = NULL, $api = NULL) {
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
function ddd_ct_delegate_node_info() {
  $items = array(
    'ct_delegate' => array(
      'name' => t('Delegate'),
      'base' => 'node_content',
      'description' => t('Delegate content type'),
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
