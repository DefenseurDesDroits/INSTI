<?php
/**
 * @file
 * ddd_ct_outils.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ddd_ct_outils_ctools_plugin_api($module = NULL, $api = NULL) {
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
function ddd_ct_outils_node_info() {
  $items = array(
    'ct_outils' => array(
      'name' => t('Outils'),
      'base' => 'node_content',
      'description' => t('Permet d\'ajouter du contenu de types : Dépliats, fiches thématiques, guides, affiches, Lettres d\'information, études, actes de rencontres.'),
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
