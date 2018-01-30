<?php
/**
 * @file
 * sl_ct_accueil.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function sl_ct_accueil_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['sl_ct_accueil-block_carousel'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'block_carousel',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'sl_ct_accueil',
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
        'region' => 'highlighted_banner',
        'status' => 1,
        'theme' => 'socle_lab',
        'weight' => -21,
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

  $export['sl_ct_accueil-block_highlighted'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'block_highlighted',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'sl_ct_accueil',
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
        'region' => 'highlighted',
        'status' => 1,
        'theme' => 'socle_lab',
        'weight' => -20,
      ),
      'soclelab_ddd' => array(
        'region' => 'highlighted',
        'status' => 1,
        'theme' => 'soclelab_ddd',
        'weight' => -38,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['sl_ct_accueil-block_liste_taxo'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'block_liste_taxo',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'sl_ct_accueil',
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
        'region' => 'content',
        'status' => 1,
        'theme' => 'socle_lab',
        'weight' => -19,
      ),
      'soclelab_ddd' => array(
        'region' => 'highlighted_banner',
        'status' => 1,
        'theme' => 'soclelab_ddd',
        'weight' => -44,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['sl_ct_accueil-block_vignette_acc'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'block_vignette_acc',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'sl_ct_accueil',
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
        'weight' => -43,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-e4038fa8695f4fd1768f67b926aa29ba'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'e4038fa8695f4fd1768f67b926aa29ba',
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
        'weight' => 3,
      ),
      'soclelab_ddd' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'soclelab_ddd',
        'weight' => 3,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-vue_events-block_agenda_home'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'vue_events-block_agenda_home',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
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
        'region' => 'content',
        'status' => 1,
        'theme' => 'socle_lab',
        'weight' => -20,
      ),
      'soclelab_ddd' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'soclelab_ddd',
        'weight' => -31,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
