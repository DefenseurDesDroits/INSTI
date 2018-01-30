<?php
/**
 * @file
 * sl_cf_menus.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function sl_cf_menus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-footer_accs-rapide:<front>.
  $menu_links['menu-footer_accs-rapide:<front>'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Accès rapide',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer_accs-rapide:<front>',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -40,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer_contact:node/14.
  $menu_links['menu-footer_contact:node/14'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => 'node/14',
    'router_path' => 'node/%',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer_contact:node/14',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -42,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer_informations:<front>.
  $menu_links['menu-footer_informations:<front>'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Informations',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer_informations:<front>',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -41,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer_liens-externes:<front>.
  $menu_links['menu-footer_liens-externes:<front>'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Liens externes',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-footer_liens-externes:<front>',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -39,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Accès rapide');
  t('Contact');
  t('Informations');
  t('Liens externes');

  return $menu_links;
}
