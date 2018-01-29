<?php
/**
 * @file
 * ddd_vu_qr.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ddd_vu_qr_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-vue_qr-block_qr_baspage'] = array(
    'cache' => -1,
    'css_class' => 'container',
    'custom' => 0,
    'delta' => 'vue_qr-block_qr_baspage',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'actions/*
actions
action
action/*',
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
        'region' => 'baspage',
        'status' => 1,
        'theme' => 'soclelab_ddd',
        'weight' => -40,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['views-vue_qr-block_qr_footer'] = array(
    'cache' => -1,
    'css_class' => 'col-xs-12 col-sm-6 col-md-4 col-lg-5',
    'custom' => 0,
    'delta' => 'vue_qr-block_qr_footer',
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
        'weight' => 1,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
