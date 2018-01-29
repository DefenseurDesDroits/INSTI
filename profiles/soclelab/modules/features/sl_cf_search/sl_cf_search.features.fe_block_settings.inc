<?php
/**
 * @file
 * sl_cf_search.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function sl_cf_search_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['apachesolr_search-mlt-001'] = array(
    'cache' => 4,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'mlt-001',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'apachesolr_search',
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
        'weight' => -3,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['apachesolr_search-sort'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'sort',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'apachesolr_search',
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
        'weight' => -20,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['apachesolr_sort-sort'] = array(
    'cache' => 4,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'sort',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'apachesolr_sort',
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
        'weight' => -18,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['search-form'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'form',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => -1,
      ),
      'seven' => array(
        'region' => 'dashboard_sidebar',
        'status' => 1,
        'theme' => 'seven',
        'weight' => -10,
      ),
      'socle_lab' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'socle_lab',
        'weight' => -9,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['sl_search-block_header_search'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'block_header_search',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'sl_search',
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
        'region' => 'header',
        'status' => 1,
        'theme' => 'socle_lab',
        'weight' => -18,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
