<?php
/**
 * @file
 * ddd_ct_rapport_annuel.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ddd_ct_rapport_annuel_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ddd_ct_rapport_annuel_node_info() {
  $items = array(
    'ct_rapport_annuel' => array(
      'name' => t('Rapport annuel'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
    'ct_section_rapport_annuel' => array(
      'name' => t('Section du rapport annuel'),
      'base' => 'node_content',
      'description' => t('Une section du rapport annuel.'),
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
