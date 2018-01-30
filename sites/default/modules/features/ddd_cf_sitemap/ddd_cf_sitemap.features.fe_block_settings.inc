<?php
/**
 * @file
 * ddd_cf_sitemap.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ddd_cf_sitemap_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['crumbs-breadcrumb'] = array(
    'cache' => -1,
    'css_class' => 'col-xs-12 col-sm-6 col-md-6 col-lg-6 pull-right',
    'custom' => 0,
    'delta' => 'breadcrumb',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'crumbs',
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
        'region' => 'highlighted',
        'status' => 1,
        'theme' => 'socle_lab',
        'weight' => -19,
      ),
      'soclelab_ddd' => array(
        'region' => 'highlighted',
        'status' => 1,
        'theme' => 'soclelab_ddd',
        'weight' => -41,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
