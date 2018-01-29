<?php
/**
 * @file
 * ct_article.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ct_article_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_base
  $overrides["field_base.field_article_ctasso.cardinality"] = 3;
  $overrides["field_base.field_article_ctasso.settings|handler_settings|target_bundles|ct_decision"] = 'ct_decision';
  $overrides["field_base.field_article_ctasso.settings|handler_settings|target_bundles|ct_offre"] = 'ct_offre';

  // Exported overrides for: field_group
  $overrides["field_group.group_article_baspage|node|article|form.data|weight"] = 8;

  // Exported overrides for: field_instance
  $overrides["field_instance.node-article-field_article_body.display|liste_accueil_small"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-article-field_article_body.display|vignette_related"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-article-field_article_body.label"] = 'Corps de texte';
  $overrides["field_instance.node-article-field_article_body.widget|weight"] = 7;
  $overrides["field_instance.node-article-field_article_ctasso.display|default|settings|link"]["DELETED"] = TRUE;
  $overrides["field_instance.node-article-field_article_ctasso.display|default|settings|links"] = 1;
  $overrides["field_instance.node-article-field_article_ctasso.display|default|settings|view_mode"] = 'search_result';
  $overrides["field_instance.node-article-field_article_ctasso.display|default|type"] = 'entityreference_entity_view';
  $overrides["field_instance.node-article-field_article_ctasso.display|liste_accueil_small"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-article-field_article_ctasso.display|vignette_related"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-article-field_article_date.display|liste_accueil_small"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-article-field_article_date.display|vignette_related"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-article-field_article_date.widget|settings|increment"] = 30;
  $overrides["field_instance.node-article-field_article_date.widget|settings|input_format"] = 'j M Y - H:i:s';
  $overrides["field_instance.node-article-field_article_date.widget|settings|year_range"] = '-10:+0';
  $overrides["field_instance.node-article-field_article_descriptif.display|liste_accueil_small"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-article-field_article_descriptif.display|vignette_related"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-article-field_article_descriptif.label"] = 'Descriptif court';
  $overrides["field_instance.node-article-field_article_descriptif.widget|weight"] = 6;
  $overrides["field_instance.node-article-field_article_document.display|liste_accueil_small"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-article-field_article_document.display|vignette_related"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-article-field_article_galerie.display|liste_accueil_small"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-article-field_article_galerie.display|vignette_related"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-article-field_article_logo.display|liste_accueil_small"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-article-field_article_logo.display|vignette_related"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-article-field_article_theme.display|liste_accueil_small"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-article-field_article_theme.display|vignette_related"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-article-field_article_theme.widget|weight"] = 5;
  $overrides["field_instance.node-article-field_article_type.display|default|label"] = 'hidden';
  $overrides["field_instance.node-article-field_article_type.display|liste_accueil_small"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-article-field_article_type.display|vignette_related"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-article-field_article_video.display|liste_accueil_small"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-article-field_article_video.display|vignette_related"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );

  // Exported overrides for: variable
  $overrides["variable.additional_settings__active_tab_article.value"] = 'edit-display';
  $overrides["variable.field_bundle_settings_node__article.value|view_modes|liste_accueil_small"] = array(
    'custom_settings' => TRUE,
  );
  $overrides["variable.language_content_type_article.value"] = 2;

 return $overrides;
}
