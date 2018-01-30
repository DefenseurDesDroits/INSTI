<?php
/**
 * @file
 * ct_homepage.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ct_homepage_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: fe_block_settings
  $overrides["fe_block_settings.sl_ct_accueil-block_carousel.themes|soclelab_ddd"] = array(
    'region' => 'highlighted_banner',
    'status' => 1,
    'theme' => 'soclelab_ddd',
    'weight' => 0,
  );
  $overrides["fe_block_settings.sl_ct_accueil-block_highlighted.themes|soclelab_ddd"] = array(
    'region' => 'highlighted',
    'status' => 1,
    'theme' => 'soclelab_ddd',
    'weight' => 1,
  );
  $overrides["fe_block_settings.sl_ct_accueil-block_liste_taxo.themes|soclelab_ddd"] = array(
    'region' => 'baspage',
    'status' => 1,
    'theme' => 'soclelab_ddd',
    'weight' => 5,
  );
  $overrides["fe_block_settings.sl_ct_accueil-block_vignette_acc.node_types|0"] = 'accueil';
  $overrides["fe_block_settings.sl_ct_accueil-block_vignette_acc.themes|soclelab_ddd"] = array(
    'region' => 'highlighted',
    'status' => 1,
    'theme' => 'soclelab_ddd',
    'weight' => 2,
  );
  $overrides["fe_block_settings.sl_ct_accueil-block_vignette_acc.title"] = '<none>';
  $overrides["fe_block_settings.views-vue_events-block_agenda_home.themes|soclelab_ddd"] = array(
    'region' => '',
    'status' => 0,
    'theme' => 'soclelab_ddd',
    'weight' => -31,
  );

  // Exported overrides for: field_group
  $overrides["field_group.group_home_carrousel|node|accueil|form.data|weight"] = 1;
  $overrides["field_group.group_home_highlight|node|accueil|form.data|children|0"] = 'field_home_highlight';
  $overrides["field_group.group_home_highlight|node|accueil|form.data|children|1"]["DELETED"] = TRUE;
  $overrides["field_group.group_home_highlight|node|accueil|form.data|children|2"]["DELETED"] = TRUE;
  $overrides["field_group.group_home_highlight|node|accueil|form.data|children|3"]["DELETED"] = TRUE;
  $overrides["field_group.group_home_highlight|node|accueil|form.data|weight"] = 2;
  $overrides["field_group.group_home_liste|node|accueil|form.data|weight"] = 5;

  // Exported overrides for: field_instance
  $overrides["field_instance.node-accueil-field_home_carousel_liste.display|liste_accueil_small"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-accueil-field_home_carousel_liste.display|vignette_related"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-accueil-field_home_highlight.display|liste_accueil_small"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-accueil-field_home_highlight.display|vignette_related"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-accueil-field_home_liste_taxo.display|liste_accueil_small"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-accueil-field_home_liste_taxo.display|vignette_related"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-accueil-field_home_vignette_liste.display|liste_accueil_small"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-accueil-field_home_vignette_liste.display|vignette_related"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );

  // Exported overrides for: variable
  $overrides["variable.additional_settings__active_tab_accueil.value"] = 'edit-i18n';
  $overrides["variable.field_bundle_settings_node__accueil.value|extra_fields|form|locations"] = array(
    'weight' => 8,
  );
  $overrides["variable.field_bundle_settings_node__accueil.value|extra_fields|form|path|weight"] = 7;
  $overrides["variable.language_content_type_accueil.value"] = 2;

  // Exported overrides for: views_view
  $overrides["views_view.vue_publications.display|block_liste_accueil_2"] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:4:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:2:{s:5:"pager";b:0;s:6:"fields";b:0;}s:5:"pager";a:2:{s:4:"type";s:4:"some";s:7:"options";a:2:{s:14:"items_per_page";s:1:"2";s:6:"offset";s:1:"1";}}s:6:"fields";a:2:{s:3:"nid";a:6:{s:2:"id";s:3:"nid";s:5:"table";s:4:"node";s:5:"field";s:3:"nid";s:5:"label";s:0:"";s:5:"alter";a:2:{s:15:"trim_whitespace";b:1;s:10:"strip_tags";b:1;}s:19:"element_label_colon";b:0;}s:4:"path";a:6:{s:2:"id";s:4:"path";s:5:"table";s:4:"node";s:5:"field";s:4:"path";s:5:"label";s:0:"";s:5:"alter";a:2:{s:10:"alter_text";b:1;s:4:"text";s:19:"liste_accueil_small";}s:19:"element_label_colon";b:0;}}}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:21:"block_liste_accueil_2";s:13:"display_title";s:21:"HOM - Liste accueil 2";s:14:"display_plugin";s:5:"block";s:8:"position";i:0;}');

 return $overrides;
}
