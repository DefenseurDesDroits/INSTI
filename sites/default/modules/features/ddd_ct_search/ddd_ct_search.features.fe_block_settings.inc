<?php
/**
 * @file
 * ddd_ct_search.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ddd_ct_search_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['facetapi-GiIy4zr9Gu0ZSa0bumw1Y9qIIpIDf1wu'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'GiIy4zr9Gu0ZSa0bumw1Y9qIIpIDf1wu',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
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
        'region' => 'content',
        'status' => 1,
        'theme' => 'soclelab_ddd',
        'weight' => -38,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['facetapi-IRyHGFDa1FIGczNDu0Hh1cq30TCZMOkX'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'IRyHGFDa1FIGczNDu0Hh1cq30TCZMOkX',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'search/site
search/site/*',
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
        'region' => 'content',
        'status' => 1,
        'theme' => 'soclelab_ddd',
        'weight' => -37,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
