<?php
/**
 * @file
 * ddd_vu_taxonomy.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ddd_vu_taxonomy_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-vue_taxonomy-block_taxonomy_sub'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'vue_taxonomy-block_taxonomy_sub',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'socle_lab' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'socle_lab',
        'weight' => 6,
      ),
      'soclelab_ddd' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'soclelab_ddd',
        'weight' => 3,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
