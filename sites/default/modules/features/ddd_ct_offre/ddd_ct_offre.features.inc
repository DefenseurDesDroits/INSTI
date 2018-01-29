<?php
/**
 * @file
 * ddd_ct_offre.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ddd_ct_offre_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ddd_ct_offre_node_info() {
  $items = array(
    'ct_offre' => array(
      'name' => t('Élément RLIP'),
      'base' => 'node_content',
      'description' => t('Permet d\'ajouter des contenus de type "Offre d’emploi / recrutement et stage"'),
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
