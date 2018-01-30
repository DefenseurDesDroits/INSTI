<?php
/**
 * @file
 * ct_article.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ct_article_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['ddd_blocks-block_typearticle'] = array(
    'cache' => 4,
    'css_class' => 'col-xs-12 col-sm-6 col-md-6 col-lg-6',
    'custom' => 0,
    'delta' => 'block_typearticle',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'ddd_blocks',
    'node_types' => array(
      0 => 'article',
      1 => 'ct_decision',
      2 => 'ct_marche',
      3 => 'ct_offre',
      4 => 'evenement',
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
        'region' => 'highlighted',
        'status' => 1,
        'theme' => 'soclelab_ddd',
        'weight' => -42,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['prev_next-0'] = array(
    'cache' => 4,
    'css_class' => '',
    'custom' => 0,
    'delta' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'prev_next',
    'node_types' => array(
      0 => 'article',
      1 => 'blog',
      2 => 'ct_outils',
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
        'region' => 'content',
        'status' => 1,
        'theme' => 'soclelab_ddd',
        'weight' => 1,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
