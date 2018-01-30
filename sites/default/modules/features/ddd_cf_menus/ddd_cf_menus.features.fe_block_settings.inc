<?php
/**
 * @file
 * ddd_cf_menus.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ddd_cf_menus_default_fe_block_settings() {
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
      'soclelab_ddd' => array(
        'region' => 'footer_before',
        'status' => 1,
        'theme' => 'soclelab_ddd',
        'weight' => -43,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu-menu-footer-en'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-footer-en',
    'i18n_block_language' => array(
      0 => 'en',
    ),
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
        'region' => '',
        'status' => 0,
        'theme' => 'socle_lab',
        'weight' => 0,
      ),
      'soclelab_ddd' => array(
        'region' => 'footer_before',
        'status' => 1,
        'theme' => 'soclelab_ddd',
        'weight' => -43,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu-menu-footer-menu-decision-en'] = array(
    'cache' => -1,
    'css_class' => 'col-xs-12 col-sm-6 col-md-4 col-lg-4',
    'custom' => 0,
    'delta' => 'menu-footer-menu-decision-en',
    'i18n_block_language' => array(
      0 => 'en',
    ),
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
        'region' => '',
        'status' => 0,
        'theme' => 'socle_lab',
        'weight' => 0,
      ),
      'soclelab_ddd' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'soclelab_ddd',
        'weight' => -44,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-footer-menu-decisions'] = array(
    'cache' => -1,
    'css_class' => 'col-xs-12 col-sm-6 col-md-4 col-lg-4',
    'custom' => 0,
    'delta' => 'menu-footer-menu-decisions',
    'i18n_block_language' => array(
      0 => 'fr',
      1 => 'fr-DC',
    ),
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
        'region' => '',
        'status' => 0,
        'theme' => 'socle_lab',
        'weight' => 0,
      ),
      'soclelab_ddd' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'soclelab_ddd',
        'weight' => -44,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-footer-qr'] = array(
    'cache' => -1,
    'css_class' => 'col-xs-12 col-sm-6 col-md-4 col-lg-5',
    'custom' => 0,
    'delta' => 'menu-footer-qr',
    'i18n_block_language' => array(
      0 => 'fr',
      1 => 'fr-DC',
    ),
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
        'region' => '',
        'status' => 0,
        'theme' => 'socle_lab',
        'weight' => 0,
      ),
      'soclelab_ddd' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'soclelab_ddd',
        'weight' => -43,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-footer-qr-en'] = array(
    'cache' => -1,
    'css_class' => 'col-xs-12 col-sm-6 col-md-4 col-lg-5',
    'custom' => 0,
    'delta' => 'menu-footer-qr-en',
    'i18n_block_language' => array(
      0 => 'en',
    ),
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
        'region' => '',
        'status' => 0,
        'theme' => 'socle_lab',
        'weight' => 0,
      ),
      'soclelab_ddd' => array(
        'region' => 'footer',
        'status' => 1,
        'theme' => 'soclelab_ddd',
        'weight' => -42,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-main-menu-en'] = array(
    'cache' => -1,
    'css_class' => 'header-main-menu',
    'custom' => 0,
    'delta' => 'menu-main-menu-en',
    'i18n_block_language' => array(
      0 => 'en',
    ),
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
        'region' => 'header',
        'status' => 1,
        'theme' => 'socle_lab',
        'weight' => 0,
      ),
      'soclelab_ddd' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'soclelab_ddd',
        'weight' => -35,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu-menu-main-menu-fr-dc'] = array(
    'cache' => -1,
    'css_class' => 'header-main-menu',
    'custom' => 0,
    'delta' => 'menu-main-menu-fr-dc',
    'i18n_block_language' => array(
      0 => 'fr-DC',
    ),
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
        'region' => '',
        'status' => 0,
        'theme' => 'socle_lab',
        'weight' => 0,
      ),
      'soclelab_ddd' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'soclelab_ddd',
        'weight' => -36,
      ),
    ),
    'title' => '<none>',
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
      'soclelab_ddd' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'soclelab_ddd',
        'weight' => -15,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-menu-utilitaire'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'menu-menu-utilitaire',
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
        'region' => '',
        'status' => 0,
        'theme' => 'socle_lab',
        'weight' => 0,
      ),
      'soclelab_ddd' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'soclelab_ddd',
        'weight' => -37,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
