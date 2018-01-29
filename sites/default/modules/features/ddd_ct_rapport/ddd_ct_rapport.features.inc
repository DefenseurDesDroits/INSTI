<?php
/**
 * @file
 * ddd_ct_rapport.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ddd_ct_rapport_ctools_plugin_api($module = NULL, $api = NULL) {
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
function ddd_ct_rapport_node_info() {
  $items = array(
    'ct_rapport' => array(
      'name' => t('Rapport'),
      'base' => 'node_content',
      'description' => t('Type de contenu utilisé pour les rapports thématiques pour les rapports thématique ou les rapports des droits de l\'enfant.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
