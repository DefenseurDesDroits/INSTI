<?php
/**
 * @file
 * ddd_vu_relarticle.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ddd_vu_relarticle_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['ddd_blocks-block_relatedcontent'] = array(
    'cache' => -1,
    'css_class' => 'container',
    'custom' => 0,
    'delta' => 'block_relatedcontent',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'ddd_blocks',
    'node_types' => array(
      0 => 'blog',
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

  $export['views-1aefad65209054dd54195ba78d36ad7a'] = array(
    'cache' => -1,
    'css_class' => 'col-xs-12 col-sm-6 col-md-4 col-lg-4',
    'custom' => 0,
    'delta' => '1aefad65209054dd54195ba78d36ad7a',
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
        'weight' => -29,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-3c2220ddcd5ef7e9bbb8213b62edbd81'] = array(
    'cache' => -1,
    'css_class' => 'col-xs-12 col-sm-6 col-md-4 col-lg-4',
    'custom' => 0,
    'delta' => '3c2220ddcd5ef7e9bbb8213b62edbd81',
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
        'weight' => -28,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-e6b96be7ff505a67f3c6e603fa6068b4'] = array(
    'cache' => -1,
    'css_class' => 'col-xs-12 col-sm-6 col-md-4 col-lg-4',
    'custom' => 0,
    'delta' => 'e6b96be7ff505a67f3c6e603fa6068b4',
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
        'weight' => -30,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-vu_ctasso-block_related_article'] = array(
    'cache' => -1,
    'css_class' => 'col-xs-12 col-sm-6 col-md-4 col-lg-4',
    'custom' => 0,
    'delta' => 'vu_ctasso-block_related_article',
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
        'weight' => -27,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
