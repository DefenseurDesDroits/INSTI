<?php
/**
 * @file
 * ddd_saisir.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ddd_saisir_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ddd_saisir_node_info() {
  $items = array(
    'ddd_saisir_le_defenseur' => array(
      'name' => t('ddd_saisir_le_defenseur'),
      'base' => 'node_content',
      'description' => t('champs pour le form saisir le defenseur'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'suivi_dossier' => array(
      'name' => t('suivi de dossier'),
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
