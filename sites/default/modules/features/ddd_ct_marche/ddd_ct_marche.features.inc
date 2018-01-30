<?php
/**
 * @file
 * ddd_ct_marche.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ddd_ct_marche_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ddd_ct_marche_node_info() {
  $items = array(
    'ct_marche' => array(
      'name' => t('Marché public'),
      'base' => 'node_content',
      'description' => t('Permet d\'ajouter des contenus de type "marché public"'),
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
