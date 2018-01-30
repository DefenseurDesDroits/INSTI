<?php
/**
 * @file
 * ddd_cf_menus.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ddd_cf_menus_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_cache_client';
  $strongarm->value = 0;
  $export['admin_menu_cache_client'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_components';
  $strongarm->value = array(
    'admin_menu.icon' => TRUE,
    'admin_menu.menu' => TRUE,
    'admin_menu.search' => TRUE,
    'admin_menu.users' => TRUE,
    'admin_menu.account' => TRUE,
    'shortcut.links' => FALSE,
  );
  $export['admin_menu_components'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_devel_modules_skip';
  $strongarm->value = array(
    'admin_devel' => 0,
    'context_ui' => 0,
    'devel' => 0,
    'devel_node_access' => 0,
    'field_ui' => 0,
    'l10n_update' => 0,
    'views_ui' => 0,
  );
  $export['admin_menu_devel_modules_skip'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_margin_top';
  $strongarm->value = 1;
  $export['admin_menu_margin_top'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_position_fixed';
  $strongarm->value = 1;
  $export['admin_menu_position_fixed'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_tweak_modules';
  $strongarm->value = 0;
  $export['admin_menu_tweak_modules'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_tweak_permissions';
  $strongarm->value = 0;
  $export['admin_menu_tweak_permissions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_tweak_tabs';
  $strongarm->value = 0;
  $export['admin_menu_tweak_tabs'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_expanded';
  $strongarm->value = array(
    0 => 'main-menu',
    1 => 'menu-footer',
    2 => 'menu-main-menu-en',
    3 => 'menu-menu-utilitaire',
  );
  $export['menu_expanded'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_masks';
  $strongarm->value = array(
    0 => 503,
    1 => 501,
    2 => 490,
    3 => 255,
    4 => 253,
    5 => 251,
    6 => 250,
    7 => 245,
    8 => 242,
    9 => 241,
    10 => 238,
    11 => 234,
    12 => 127,
    13 => 126,
    14 => 125,
    15 => 124,
    16 => 123,
    17 => 122,
    18 => 121,
    19 => 119,
    20 => 117,
    21 => 116,
    22 => 63,
    23 => 62,
    24 => 61,
    25 => 60,
    26 => 59,
    27 => 58,
    28 => 56,
    29 => 44,
    30 => 31,
    31 => 30,
    32 => 29,
    33 => 28,
    34 => 27,
    35 => 26,
    36 => 24,
    37 => 21,
    38 => 15,
    39 => 14,
    40 => 13,
    41 => 12,
    42 => 11,
    43 => 10,
    44 => 7,
    45 => 6,
    46 => 5,
    47 => 4,
    48 => 3,
    49 => 2,
    50 => 1,
  );
  $export['menu_masks'] = $strongarm;

  return $export;
}
