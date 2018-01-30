<?php
/**
 * @file
 * ddd_cf_menus.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function ddd_cf_menus_menu_default_menu_custom() {
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
  // Exported menu: menu-footer-en.
  $menus['menu-footer-en'] = array(
    'menu_name' => 'menu-footer-en',
    'title' => 'Menu secondaire en',
    'description' => '',
    'language' => 'en',
    'i18n_mode' => 2,
  );
  // Exported menu: menu-footer-menu-decision-en.
  $menus['menu-footer-menu-decision-en'] = array(
    'menu_name' => 'menu-footer-menu-decision-en',
    'title' => 'Individual Decisions',
    'description' => 'Menu du footer listant les principale Décisions individuelles (EN)',
    'language' => 'en',
    'i18n_mode' => 2,
  );
  // Exported menu: menu-footer-menu-decisions.
  $menus['menu-footer-menu-decisions'] = array(
    'menu_name' => 'menu-footer-menu-decisions',
    'title' => 'Décisions du Défenseur',
    'description' => 'Menu du footer listant les principale Décisions individuelles',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-footer-qr.
  $menus['menu-footer-qr'] = array(
    'menu_name' => 'menu-footer-qr',
    'title' => 'Questions / réponses',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-footer-qr-en.
  $menus['menu-footer-qr-en'] = array(
    'menu_name' => 'menu-footer-qr-en',
    'title' => 'Questions and Answers',
    'description' => '',
    'language' => 'en',
    'i18n_mode' => 2,
  );
  // Exported menu: menu-main-menu-en.
  $menus['menu-main-menu-en'] = array(
    'menu_name' => 'menu-main-menu-en',
    'title' => 'Main menu en',
    'description' => '',
    'language' => 'en',
    'i18n_mode' => 2,
  );
  // Exported menu: menu-main-menu-fr-dc.
  $menus['menu-main-menu-fr-dc'] = array(
    'menu_name' => 'menu-main-menu-fr-dc',
    'title' => 'Main menu fr-dc',
    'description' => '',
    'language' => 'fr-DC',
    'i18n_mode' => 2,
  );
  // Exported menu: menu-menu-dans-sidebar.
  $menus['menu-menu-dans-sidebar'] = array(
    'menu_name' => 'menu-menu-dans-sidebar',
    'title' => 'Menu dans sidebar',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Exported menu: menu-menu-utilitaire.
  $menus['menu-menu-utilitaire'] = array(
    'menu_name' => 'menu-menu-utilitaire',
    'title' => 'Menu utilitaire',
    'description' => 'Menu utilitaire du site',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Décisions du Défenseur');
  t('Individual Decisions');
  t('Main menu');
  t('Main menu en');
  t('Main menu fr-dc');
  t('Menu dans sidebar');
  t('Menu du footer listant les principale Décisions individuelles');
  t('Menu du footer listant les principale Décisions individuelles (EN)');
  t('Menu secondaire');
  t('Menu secondaire en');
  t('Menu utilitaire');
  t('Menu utilitaire du site');
  t('Questions / réponses');
  t('Questions and Answers');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');

  return $menus;
}
