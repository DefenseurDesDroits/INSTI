<?php
/**
 * @file
 * ddd_cf_sitemap.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ddd_cf_sitemap_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: variable
  $overrides["variable.site_map_message.value|value"] = '';
  $overrides["variable.site_map_show_count.value"] = 0;
  $overrides["variable.site_map_show_description.value"] = 0;
  $overrides["variable.site_map_show_menus.value|menu-footer-en"] = 0;
  $overrides["variable.site_map_show_menus.value|menu-footer-menu-decision-en"] = 0;
  $overrides["variable.site_map_show_menus.value|menu-footer-menu-decisions"] = 'menu-footer-menu-decisions';
  $overrides["variable.site_map_show_menus.value|menu-footer-qr"] = 'menu-footer-qr';
  $overrides["variable.site_map_show_menus.value|menu-footer-qr-en"] = 0;
  $overrides["variable.site_map_show_menus.value|menu-main-menu-en"] = 0;
  $overrides["variable.site_map_show_menus.value|menu-main-menu-fr-dc"] = 0;
  $overrides["variable.site_map_show_vocabularies.value|autoriter"] = 0;
  $overrides["variable.site_map_show_vocabularies.value|v_actions"] = 0;
  $overrides["variable.site_map_show_vocabularies.value|v_keyword"] = 0;

 return $overrides;
}
