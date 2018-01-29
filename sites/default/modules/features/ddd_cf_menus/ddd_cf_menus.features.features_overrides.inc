<?php
/**
 * @file
 * ddd_cf_menus.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ddd_cf_menus_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: fe_block_settings
  $overrides["fe_block_settings.menu-menu-footer.i18n_block_language|0"] = 'fr';
  $overrides["fe_block_settings.menu-menu-footer.i18n_block_language|1"] = 'fr-DC';
  $overrides["fe_block_settings.menu-menu-footer.themes|soclelab_ddd"] = array(
    'region' => 'footer_before',
    'status' => 1,
    'theme' => 'soclelab_ddd',
    'weight' => -43,
  );
  $overrides["fe_block_settings.menu-menu-footer.title"] = '<none>';
  $overrides["fe_block_settings.menu-menu-menu-dans-sidebar.themes|soclelab_ddd"] = array(
    'region' => '',
    'status' => 0,
    'theme' => 'soclelab_ddd',
    'weight' => -15,
  );

  // Exported overrides for: menu_custom
  $overrides["menu_custom.main-menu.i18n_mode"] = 2;
  $overrides["menu_custom.main-menu.language"] = 'fr';
  $overrides["menu_custom.menu-footer.i18n_mode"] = 5;
  $overrides["menu_custom.menu-footer.title"] = 'Menu Secondaire';

  // Exported overrides for: menu_links
  $overrides["menu_links.main-menu_accueil:<front>.language"] = 'fr';
  $overrides["menu_links.main-menu_accueil:<front>.options|alter"] = TRUE;
  $overrides["menu_links.main-menu_actualits:actualites.hidden"] = 1;
  $overrides["menu_links.main-menu_actualits:actualites.language"] = 'fr';
  $overrides["menu_links.main-menu_actualits:actualites.options|alter"] = TRUE;
  $overrides["menu_links.main-menu_actualits:actualites.weight"] = -44;
  $overrides["menu_links.main-menu_contact:sitemap.customized"]["DELETED"] = TRUE;
  $overrides["menu_links.main-menu_contact:sitemap.external"] = 1;
  $overrides["menu_links.main-menu_contact:sitemap.language"]["DELETED"] = TRUE;
  $overrides["menu_links.main-menu_contact:sitemap.link_path"] = '<front>';
  $overrides["menu_links.main-menu_contact:sitemap.menu_links_customized"]["DELETED"] = TRUE;
  $overrides["menu_links.main-menu_contact:sitemap.options|item_attributes"] = array(
    'class' => '',
    'id' => '',
    'style' => '',
  );
  $overrides["menu_links.main-menu_contact:sitemap.parent_identifier"]["DELETED"] = TRUE;
  $overrides["menu_links.main-menu_contact:sitemap.parent_path"] = 'node/15';
  $overrides["menu_links.main-menu_contact:sitemap.router_path"] = '';
  $overrides["menu_links.main-menu_evnements:evenements.hidden"] = 1;
  $overrides["menu_links.main-menu_evnements:evenements.language"] = 'fr';
  $overrides["menu_links.main-menu_evnements:evenements.options|alter"] = TRUE;
  $overrides["menu_links.main-menu_evnements:evenements.weight"] = -42;
  $overrides["menu_links.main-menu_publications:publications.expanded"] = 1;
  $overrides["menu_links.main-menu_publications:publications.has_children"] = 1;
  $overrides["menu_links.main-menu_publications:publications.language"] = 'fr';
  $overrides["menu_links.main-menu_publications:publications.options|alter"] = TRUE;
  $overrides["menu_links.main-menu_publications:publications.options|item_attributes"] = array(
    'class' => '',
    'id' => '',
    'style' => '',
  );
  $overrides["menu_links.main-menu_qui-sommes-nous:node/15.hidden"] = 1;
  $overrides["menu_links.main-menu_qui-sommes-nous:node/15.language"] = 'fr';
  $overrides["menu_links.main-menu_qui-sommes-nous:node/15.options|alter"] = TRUE;
  $overrides["menu_links.main-menu_qui-sommes-nous:node/15.weight"] = -43;
  $overrides["menu_links.menu-footer_accs-rapide:<front>.options|alter"] = TRUE;
  $overrides["menu_links.menu-footer_accs-rapide:<front>.weight"] = -40;
  $overrides["menu_links.menu-footer_contact:node/14.hidden"] = 1;
  $overrides["menu_links.menu-footer_contact:node/14.weight"] = -42;
  $overrides["menu_links.menu-footer_faq:node/1.link_title"] = 'Aide';
  $overrides["menu_links.menu-footer_faq:node/1.options|item_attributes"] = array(
    'class' => '',
    'id' => '',
    'style' => '',
  );
  $overrides["menu_links.menu-footer_faq:node/1.weight"] = -43;
  $overrides["menu_links.menu-footer_informations:<front>.weight"] = -41;
  $overrides["menu_links.menu-footer_liens-externes:<front>.options|alter"] = TRUE;
  $overrides["menu_links.menu-footer_liens-externes:<front>.weight"] = -39;
  $overrides["menu_links.menu-footer_mentions-lgales:node/17.weight"] = -47;
  $overrides["menu_links.menu-footer_plan-du-site:sitemap.weight"] = -46;
  $overrides["menu_links.menu-footer_politique-daccessibilit:node/16.menu-footer_politique-daccessibilit:node/16"]["DELETED"] = TRUE;

  // Exported overrides for: variable
  $overrides["variable.site_map_show_menus.value|menu-menu-utilitaire"] = 'menu-menu-utilitaire';

 return $overrides;
}
