<?php
/**
 * @file
 * sl_vu_publications.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function sl_vu_publications_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-6870f372b5155df9ad278fe68015c4a3'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '6870f372b5155df9ad278fe68015c4a3',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'contact',
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
        'region' => 'sidebar',
        'status' => 1,
        'theme' => 'socle_lab',
        'weight' => -14,
      ),
      'soclelab_ddd' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'soclelab_ddd',
        'weight' => -14,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-9c8c31431d90b9240c845b935a048f23'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '9c8c31431d90b9240c845b935a048f23',
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
        'weight' => 4,
      ),
      'soclelab_ddd' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'soclelab_ddd',
        'weight' => 4,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
