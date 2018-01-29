<?php
/**
 * @file
 * ddd_vu_mediatheque.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ddd_vu_mediatheque_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['ddd_blocks-block_seemore'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'block_seemore',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'ddd_blocks',
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
        'weight' => 0,
      ),
      'soclelab_ddd' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'soclelab_ddd',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-9566a607cfc6606317f3b515f8cfe922'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '9566a607cfc6606317f3b515f8cfe922',
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
        'weight' => 0,
      ),
      'soclelab_ddd' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'soclelab_ddd',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
