<?php
/**
 * @file
 * ct_homepage.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ct_homepage_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['ddd_blocks-block_agenda_title'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'block_agenda_title',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'ddd_blocks',
    'node_types' => array(
      0 => 'accueil',
    ),
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
        'region' => 'baspage',
        'status' => 1,
        'theme' => 'soclelab_ddd',
        'weight' => -44,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['ddd_blocks-block_annualreport'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'block_annualreport',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'ddd_blocks',
    'node_types' => array(
      0 => 'accueil',
    ),
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
        'region' => 'baspage',
        'status' => 1,
        'theme' => 'soclelab_ddd',
        'weight' => -47,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['ddd_blocks-block_maptext'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'block_maptext',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'ddd_blocks',
    'node_types' => array(
      0 => 'accueil',
    ),
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
        'region' => 'baspage',
        'status' => 1,
        'theme' => 'soclelab_ddd',
        'weight' => -39,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['ddd_blocks-block_pointvue'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'block_pointvue',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'ddd_blocks',
    'node_types' => array(
      0 => 'accueil',
    ),
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
        'region' => 'baspage',
        'status' => 1,
        'theme' => 'soclelab_ddd',
        'weight' => -41,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-f6944d30ea3a15f3de5019195d0d8a69'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'f6944d30ea3a15f3de5019195d0d8a69',
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
