<?php
/**
 * @file
 * ddd_ct_search.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ddd_ct_search_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: apachesolr_environment
  $overrides["apachesolr_environment.solr.conf|apachesolr_direct_commit"] = 0;
  $overrides["apachesolr_environment.solr.conf|apachesolr_read_only"] = 0;
  $overrides["apachesolr_environment.solr.conf|apachesolr_search_changed_boost"] = '0:0';
  $overrides["apachesolr_environment.solr.conf|apachesolr_search_comment_boost"] = '0:0';
  $overrides["apachesolr_environment.solr.conf|apachesolr_search_date_boost"] = '10:2000.0';
  $overrides["apachesolr_environment.solr.conf|apachesolr_search_promote_boost"] = '8.0';
  $overrides["apachesolr_environment.solr.conf|apachesolr_search_sticky_boost"] = '13.0';
  $overrides["apachesolr_environment.solr.conf|apachesolr_search_type_boosts"] = array(
    'article' => '13.0',
    'ct_delegate' => 0,
    'ct_decision' => '13.0',
    'evenement' => '13.0',
    'faq' => 0,
    'file' => 0.3,
    'ct_marche' => '2.0',
    'ct_office' => 0,
    'ct_offre' => '2.0',
    'accueil' => 0,
    'page' => '5.0',
    'ct_structure' => 0,
  );
  $overrides["apachesolr_environment.solr.conf|apachesolr_soft_commit"] = 0;
  $overrides["apachesolr_environment.solr.conf|field_bias"] = array(
    'bm_field_visible_international' => 0,
    'bm_field_vue_dans_la_presse' => 0,
    'bs_field_visible_international' => 0,
    'bs_field_vue_dans_la_presse' => 0,
    'bs_promote' => 0,
    'bs_status' => 0,
    'bs_sticky' => 0,
    'bs_translate' => 0,
    'bundle' => 0,
    'bundle_name' => 0,
    'content' => '1.0',
    'dm_field_article_date' => 0,
    'dm_field_date_de_publication' => 0,
    'dm_field_date_du_document' => 0,
    'dm_field_date_evenement' => 0,
    'dm_field_date_evenement_end' => 0,
    'dm_field_event_date' => 0,
    'dm_field_event_date_end' => 0,
    'ds_changed' => 0,
    'ds_created' => 0,
    'ds_date_document' => 0,
    'ds_last_comment_or_change' => 0,
    'entity_id' => 0,
    'entity_type' => 0,
    'hash' => 0,
    'id' => 0,
    'im_field_article_keyword' => 0,
    'im_field_article_theme' => 0,
    'im_field_article_type' => 0,
    'im_field_decision_author' => 0,
    'im_field_evenement_type_de_debat' => 0,
    'im_field_theme' => 0,
    'im_field_themes_associes' => 0,
    'im_field_type_d_article' => 0,
    'im_field_type_de_document' => 0,
    'im_vid_2' => 0,
    'im_vid_4' => 0,
    'im_vid_5' => 0,
    'im_vid_6' => 0,
    'im_vid_7' => 0,
    'is_tnid' => 0,
    'is_uid' => 0,
    'label' => '13.0',
    'path' => 0,
    'path_alias' => 0,
    'site' => 0,
    'sm_field_article_ctasso' => 0,
    'sm_field_contenugen_soustitre' => 0,
    'sm_field_decision_nature_qualifi' => 0,
    'sm_field_evenement_acces' => 0,
    'sm_field_evenement_lieu' => 0,
    'sm_field_page_contact_adresse' => 0,
    'sm_field_page_vocabulary' => 0,
    'sm_vid_Autorité' => 0,
    'sm_vid_La_Recherche' => 0,
    'sm_vid_Mots_clés' => 0,
    'sm_vid_Theme' => 0,
    'sm_vid_Thème' => 0,
    'sm_vid_Type_de_contenu' => 0,
    'sm_vid_Type_de_document' => 0,
    'sm_vid_Type_de_débats' => 0,
    'sort_label' => 0,
    'sort_language' => 0,
    'sort_name' => 0,
    'sort_name_formatted' => 0,
    'spell' => 0,
    'ss_language' => 0,
    'ss_name' => 0,
    'ss_name_formatted' => 0,
    'tags_a' => 0,
    'tags_h1' => '5.0',
    'tags_h2_h3' => '3.0',
    'tags_h4_h5_h6' => '2.0',
    'tags_inline' => '1.0',
    'taxonomy_names' => 0,
    'tid' => 0,
    'timestamp' => 0,
    'tm_vid_2_names' => 0,
    'tm_vid_4_names' => '8.0',
    'tm_vid_5_names' => '13.0',
    'tm_vid_6_names' => '8.0',
    'tm_vid_7_names' => 0,
    'tos_content_extra' => 0.1,
    'tos_name' => '3.0',
    'tos_name_formatted' => 0,
    'ts_comments' => 0.5,
    'url' => 0,
  );
  $overrides["apachesolr_environment.solr.conf|group_field"] = 'tos_name';
  $overrides["apachesolr_environment.solr.conf|group_limit"] = 2;
  $overrides["apachesolr_environment.solr.index_bundles|file"]["DELETED"] = TRUE;
  $overrides["apachesolr_environment.solr.index_bundles|node|1"] = 'ct_decision';
  $overrides["apachesolr_environment.solr.index_bundles|node|2"] = 'ct_marche';
  $overrides["apachesolr_environment.solr.index_bundles|node|3"] = 'ct_offre';
  $overrides["apachesolr_environment.solr.index_bundles|node|4"] = 'evenement';
  $overrides["apachesolr_environment.solr.index_bundles|scald_atom"] = array(
    0 => 'file',
  );
  $overrides["apachesolr_environment.solr.url"] = 'http://localhost:8989/solr/ddd';

  // Exported overrides for: apachesolr_search_page
  $overrides["apachesolr_search_page.core_search.env_id"] = '';
  $overrides["apachesolr_search_page.core_search.settings|apachesolr_search_per_page"] = 20;

  // Exported overrides for: fe_block_settings
  $overrides["fe_block_settings.apachesolr_search-mlt-001.apachesolr_search-mlt-001"]["DELETED"] = TRUE;
  $overrides["fe_block_settings.apachesolr_search-sort.themes|soclelab_ddd"] = array(
    'region' => '',
    'status' => 0,
    'theme' => 'soclelab_ddd',
    'weight' => -32,
  );
  $overrides["fe_block_settings.apachesolr_sort-sort.themes|soclelab_ddd"] = array(
    'region' => '',
    'status' => 0,
    'theme' => 'soclelab_ddd',
    'weight' => -31,
  );
  $overrides["fe_block_settings.search-form.themes|soclelab_ddd"] = array(
    'region' => '',
    'status' => 0,
    'theme' => 'soclelab_ddd',
    'weight' => -9,
  );
  $overrides["fe_block_settings.sl_search-block_header_search.themes|soclelab_ddd"] = array(
    'region' => 'header',
    'status' => 1,
    'theme' => 'soclelab_ddd',
    'weight' => -33,
  );

  // Exported overrides for: variable
  $overrides["variable.apachesolr_search_mlt_blocks.value|mlt-001"]["DELETED"] = TRUE;
  $overrides["variable.apachesolr_sort_sort_ds_created.value"] = 1;
  $overrides["variable.apachesolr_sort_sort_weight_bundle.value"] = 1;
  $overrides["variable.apachesolr_sort_sort_weight_ds_created.value"] = 10;
  $overrides["variable.apachesolr_sort_sort_weight_sort_label.value"] = 5;
  $overrides["variable.ds_search_group_by_type_settings.value|ct_decision"] = array(
    'status' => 1,
    'label' => 'Résultats pour décision',
    'wrapper' => 'fieldset',
    'weight' => 0,
  );
  $overrides["variable.ds_search_group_by_type_settings.value|ct_delegate"] = array(
    'status' => 1,
    'label' => 'Résultats pour delegate',
    'wrapper' => 'fieldset',
    'weight' => 0,
  );
  $overrides["variable.ds_search_group_by_type_settings.value|ct_marche"] = array(
    'status' => 1,
    'label' => 'Résultats pour marché public',
    'wrapper' => 'fieldset',
    'weight' => 0,
  );
  $overrides["variable.ds_search_group_by_type_settings.value|ct_office"] = array(
    'status' => 1,
    'label' => 'Résultats pour office',
    'wrapper' => 'fieldset',
    'weight' => 0,
  );
  $overrides["variable.ds_search_group_by_type_settings.value|ct_offre"] = array(
    'status' => 1,
    'label' => 'Résultats pour offre',
    'wrapper' => 'fieldset',
    'weight' => 0,
  );
  $overrides["variable.ds_search_group_by_type_settings.value|ct_structure"] = array(
    'status' => 1,
    'label' => 'Résultats pour structure',
    'wrapper' => 'fieldset',
    'weight' => 0,
  );
  $overrides["variable.ds_search_language.value"] = 0;
  $overrides["variable.ds_search_show_title.value"] = 0;
  $overrides["variable.search_active_modules.value|0"]["DELETED"] = TRUE;
  $overrides["variable.search_active_modules.value|1"]["DELETED"] = TRUE;
  $overrides["variable.search_active_modules.value|2"]["DELETED"] = TRUE;
  $overrides["variable.search_active_modules.value|apachesolr_search"] = 'apachesolr_search';
  $overrides["variable.search_active_modules.value|ds_search"] = 0;
  $overrides["variable.search_active_modules.value|node"] = 0;
  $overrides["variable.search_active_modules.value|user"] = 0;

 return $overrides;
}
