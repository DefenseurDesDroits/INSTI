<?php
/**
 * @file
 * sl_cf_sociaux.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function sl_cf_sociaux_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['sharethis-sharethis_block'] = array(
    'cache' => 4,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'sharethis_block',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'sharethis',
    'node_types' => array(
      0 => 'article',
      1 => 'evenement',
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
        'region' => 'sidebar',
        'status' => 1,
        'theme' => 'socle_lab',
        'weight' => -22,
      ),
      'soclelab_ddd' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'soclelab_ddd',
        'weight' => -22,
      ),
    ),
    'title' => 'Partager cet article',
    'visibility' => 0,
  );

  $export['social_media_links-social-media-links'] = array(
    'cache' => 1,
    'css_class' => 'pull-left',
    'custom' => 0,
    'delta' => 'social-media-links',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'social_media_links',
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
        'weight' => -20,
      ),
      'soclelab_ddd' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'soclelab_ddd',
        'weight' => -39,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
