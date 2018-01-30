<?php
/**
 * @file
 * ddd_vu_publication.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ddd_vu_publication_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: views_view
  $overrides["views_view.vue_publications.display|page_publications|display_options|defaults|empty"] = FALSE;
  $overrides["views_view.vue_publications.display|page_publications|display_options|empty"] = array(
    'area_text_custom' => array(
      'id' => 'area_text_custom',
      'table' => 'views',
      'field' => 'area_text_custom',
      'empty' => TRUE,
      'content' => 'Aucun résultat',
    ),
  );
  $overrides["views_view.vue_publications.display|page_publications|display_options|filters|field_article_date_value"] = array(
    'id' => 'field_article_date_value',
    'table' => 'field_data_field_article_date',
    'field' => 'field_article_date_value',
    'group' => 1,
    'exposed' => TRUE,
    'expose' => array(
      'operator_id' => 'field_article_date_value_op',
      'label' => 'Année:',
      'operator' => 'field_article_date_value_op',
      'identifier' => 'field_article_date_value',
      'remember_roles' => array(
        2 => 2,
        1 => 0,
        6 => 0,
        7 => 0,
        5 => 0,
        3 => 0,
        4 => 0,
      ),
    ),
    'granularity' => 'year',
    'year_range' => '-10:+0',
  );
  $overrides["views_view.vue_publications.display|page_publications|display_options|filters|language|group"] = 1;
  $overrides["views_view.vue_publications.display|page_publications|display_options|filters|term_node_tid_depth_1|expose|label"] = 'Type de contenu:';
  $overrides["views_view.vue_publications.display|page_publications|display_options|filters|term_node_tid_depth_1|expose|remember_roles|4"] = 0;
  $overrides["views_view.vue_publications.display|page_publications|display_options|filters|term_node_tid_depth_1|expose|remember_roles|5"] = 0;
  $overrides["views_view.vue_publications.display|page_publications|display_options|filters|term_node_tid_depth_1|expose|remember_roles|6"] = 0;
  $overrides["views_view.vue_publications.display|page_publications|display_options|filters|term_node_tid_depth_1|expose|remember_roles|7"] = 0;
  $overrides["views_view.vue_publications.display|page_publications|display_options|filters|term_node_tid_depth_1|group"] = 1;
  $overrides["views_view.vue_publications.display|page_publications|display_options|filters|term_node_tid_depth_1|value|46"] = 46;
  $overrides["views_view.vue_publications.display|page_publications|display_options|filters|term_node_tid_depth_2"] = array(
    'id' => 'term_node_tid_depth_2',
    'table' => 'node',
    'field' => 'term_node_tid_depth',
    'group' => 1,
    'exposed' => TRUE,
    'expose' => array(
      'operator_id' => 'term_node_tid_depth_2_op',
      'label' => 'Thème:',
      'operator' => 'term_node_tid_depth_2_op',
      'identifier' => 'term_node_tid_depth_2',
      'remember_roles' => array(
        2 => 2,
        1 => 0,
        6 => 0,
        7 => 0,
        5 => 0,
        3 => 0,
        4 => 0,
      ),
    ),
    'type' => 'select',
    'vocabulary' => 'v_theme',
    'hierarchy' => 1,
    'depth' => 10,
  );
  $overrides["views_view.vue_publications.display|page_publications|display_options|filters|term_node_tid_depth|group"] = 1;
  $overrides["views_view.vue_publications.display|page_publications|display_options|filters|title"] = array(
    'id' => 'title',
    'table' => 'node',
    'field' => 'title',
    'operator' => 'contains',
    'group' => 1,
    'exposed' => TRUE,
    'expose' => array(
      'operator_id' => 'title_op',
      'label' => 'Titre:',
      'operator' => 'title_op',
      'identifier' => 'title',
      'remember_roles' => array(
        2 => 2,
        1 => 0,
        6 => 0,
        7 => 0,
        5 => 0,
        3 => 0,
        4 => 0,
      ),
    ),
  );
  $overrides["views_view.vue_publications.display|page_publications|display_options|filters|type|group"] = 1;
  $overrides["views_view.vue_publications.display|page_publications|display_options|filters|type|value|article"]["DELETED"] = TRUE;
  $overrides["views_view.vue_publications.display|page_publications|display_options|filters|type|value|ct_offre"] = 'ct_offre';
  $overrides["views_view.vue_publications.display|page_publications|display_options|header|result|content"] = '@total résultat(s)';

 return $overrides;
}
