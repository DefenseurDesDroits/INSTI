<?php
/**
 * @file
 * ddd_vu_backoffice.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ddd_vu_backoffice_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: views_view
  $overrides["views_view.vue_backoffice.display|page_admin_content|display_options|access|role|4"] = 4;
  $overrides["views_view.vue_backoffice.display|page_admin_content|display_options|access|role|6"] = 6;
  $overrides["views_view.vue_backoffice.display|page_admin_content|display_options|filters|type|expose|remember_roles|4"] = 0;
  $overrides["views_view.vue_backoffice.display|page_admin_content|display_options|filters|type|expose|remember_roles|5"] = 0;
  $overrides["views_view.vue_backoffice.display|page_admin_content|display_options|filters|type|expose|remember_roles|6"] = 0;
  $overrides["views_view.vue_backoffice.display|page_admin_content|display_options|filters|type|value|all"] = 'all';
  $overrides["views_view.vue_backoffice.display|page_admin_content|display_options|filters|type|value|ct_decision"] = 'ct_decision';
  $overrides["views_view.vue_backoffice.display|page_admin_content|display_options|filters|type|value|ct_delegate"] = 'ct_delegate';
  $overrides["views_view.vue_backoffice.display|page_admin_content|display_options|filters|type|value|ct_marche"] = 'ct_marche';
  $overrides["views_view.vue_backoffice.display|page_admin_content|display_options|filters|type|value|ct_office"] = 'ct_office';
  $overrides["views_view.vue_backoffice.display|page_admin_content|display_options|filters|type|value|ct_offre"] = 'ct_offre';
  $overrides["views_view.vue_backoffice.display|page_admin_content|display_options|filters|type|value|ct_structure"] = 'ct_structure';
  $overrides["views_view.vue_backoffice.display|page_admin_content|display_options|filters|type|value|marche_public"] = 'marche_public';
  $overrides["views_view.vue_backoffice.display|page_admin_content|display_options|filters|type|value|offre_emploi"] = 'offre_emploi';

 return $overrides;
}
