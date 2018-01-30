<?php
/**
 * @file
 * sl_ct_accueil.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sl_ct_accueil_ctools_plugin_api($module = NULL, $api = NULL) {
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
function sl_ct_accueil_node_info() {
  $items = array(
    'accueil' => array(
      'name' => t('Page d\'accueil'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
