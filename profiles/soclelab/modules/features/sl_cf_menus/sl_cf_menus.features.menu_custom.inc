<?php
/**
 * @file
 * sl_cf_menus.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function sl_cf_menus_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-footer.
  $menus['menu-footer'] = array(
    'menu_name' => 'menu-footer',
    'title' => 'Menu secondaire',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-menu-dans-sidebar.
  $menus['menu-menu-dans-sidebar'] = array(
    'menu_name' => 'menu-menu-dans-sidebar',
    'title' => 'Menu dans sidebar',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Main menu');
  t('Menu dans sidebar');
  t('Menu secondaire');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');


  return $menus;
}
