<?php
/**
 * @file
 * sl_cf_menus.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function sl_cf_menus_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu-menu-footer'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-footer',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu',
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
        'region' => 'footer',
        'status' => 1,
        'theme' => 'socle_lab',
        'weight' => -22,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-menu-dans-sidebar'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-menu-dans-sidebar',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'menu',
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
        'region' => 'sidebar',
        'status' => 1,
        'theme' => 'socle_lab',
        'weight' => -15,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
