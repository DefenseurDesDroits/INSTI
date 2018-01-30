<?php
/**
 * @file
 * ddd_vu_mediatheque.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ddd_vu_mediatheque_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: views_view
  $overrides["views_view.vue_mediatheque.display|block_media_seemore"] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:8:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:11:{s:5:"title";b:0;s:5:"pager";b:0;s:12:"style_plugin";b:0;s:13:"style_options";b:0;s:10:"row_plugin";b:0;s:11:"row_options";b:0;s:6:"fields";b:0;s:5:"sorts";b:0;s:9:"arguments";b:0;s:13:"filter_groups";b:0;s:7:"filters";b:0;}s:5:"pager";a:2:{s:4:"type";s:4:"some";s:7:"options";a:2:{s:14:"items_per_page";s:1:"3";s:6:"offset";s:1:"0";}}s:12:"style_plugin";s:5:"table";s:13:"style_options";a:3:{s:7:"columns";a:4:{s:5:"title";s:5:"title";s:14:"representation";s:14:"representation";s:13:"scald_authors";s:13:"scald_authors";s:10:"scald_tags";s:10:"scald_tags";}s:7:"default";s:2:"-1";s:4:"info";a:4:{s:5:"title";a:5:{s:8:"sortable";i:0;s:18:"default_sort_order";s:3:"asc";s:5:"align";s:0:"";s:9:"separator";s:0:"";s:12:"empty_column";i:0;}s:14:"representation";a:3:{s:5:"align";s:0:"";s:9:"separator";s:0:"";s:12:"empty_column";i:0;}s:13:"scald_authors";a:3:{s:5:"align";s:0:"";s:9:"separator";s:0:"";s:12:"empty_column";i:0;}s:10:"scald_tags";a:3:{s:5:"align";s:0:"";s:9:"separator";s:0:"";s:12:"empty_column";i:0;}}}s:6:"fields";a:2:{s:3:"sid";a:7:{s:2:"id";s:3:"sid";s:5:"table";s:11:"scald_atoms";s:5:"field";s:3:"sid";s:5:"label";s:0:"";s:5:"alter";a:2:{s:15:"trim_whitespace";b:1;s:10:"strip_tags";b:1;}s:19:"element_label_colon";b:0;s:9:"separator";s:0:"";}s:19:"field_scald_typepdf";a:6:{s:2:"id";s:19:"field_scald_typepdf";s:5:"table";s:30:"field_data_field_scald_typepdf";s:5:"field";s:19:"field_scald_typepdf";s:5:"label";s:0:"";s:5:"alter";a:1:{s:10:"strip_tags";b:1;}s:19:"element_label_colon";b:0;}}s:9:"arguments";a:1:{s:24:"field_scald_motscles_tid";a:9:{s:2:"id";s:24:"field_scald_motscles_tid";s:5:"table";s:31:"field_data_field_scald_motscles";s:5:"field";s:24:"field_scald_motscles_tid";s:14:"default_action";s:9:"not found";s:9:"exception";a:1:{s:5:"title";s:4:"Tout";}s:21:"default_argument_type";s:5:"fixed";s:7:"summary";a:2:{s:17:"number_of_records";s:1:"0";s:6:"format";s:15:"default_summary";}s:15:"summary_options";a:1:{s:14:"items_per_page";s:2:"25";}s:12:"break_phrase";b:1;}}s:7:"filters";a:1:{s:4:"type";a:6:{s:2:"id";s:4:"type";s:5:"table";s:11:"scald_atoms";s:5:"field";s:4:"type";s:5:"value";a:1:{s:4:"file";s:4:"file";}s:5:"group";i:1;s:6:"expose";a:7:{s:11:"operator_id";s:7:"type_op";s:5:"label";s:4:"Type";s:8:"operator";s:7:"type_op";s:10:"identifier";s:4:"type";s:8:"multiple";b:1;s:14:"remember_roles";a:6:{i:2;s:1:"2";i:1;i:0;i:6;i:0;i:5;i:0;i:3;i:0;i:4;i:0;}s:6:"reduce";b:1;}}}}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:19:"block_media_seemore";s:13:"display_title";s:16:"ART - Voir aussi";s:14:"display_plugin";s:5:"block";s:8:"position";i:0;}');
  $overrides["views_view.vue_mediatheque.display|default|display_options|exposed_form|options|autosubmit"] = TRUE;
  $overrides["views_view.vue_mediatheque.display|default|display_options|exposed_form|options|autosubmit_hide"] = FALSE;
  $overrides["views_view.vue_mediatheque.display|default|display_options|fields|scald_authors|exclude"] = TRUE;
  $overrides["views_view.vue_mediatheque.display|default|display_options|fields|scald_tags|exclude"] = TRUE;
  $overrides["views_view.vue_mediatheque.display|default|display_options|fields|title|exclude"] = TRUE;
  $overrides["views_view.vue_mediatheque.display|default|display_options|filters|scald_authors_tid"]["DELETED"] = TRUE;
  $overrides["views_view.vue_mediatheque.display|default|display_options|filters|scald_tags_tid|expose|multiple"] = TRUE;
  $overrides["views_view.vue_mediatheque.display|default|display_options|filters|scald_tags_tid|group"] = 1;
  $overrides["views_view.vue_mediatheque.display|default|display_options|filters|scald_tags_tid|hierarchy"] = 1;
  $overrides["views_view.vue_mediatheque.display|default|display_options|filters|scald_tags_tid|value"]["DELETED"] = TRUE;
  $overrides["views_view.vue_mediatheque.display|default|display_options|filters|title"]["DELETED"] = TRUE;
  $overrides["views_view.vue_mediatheque.display|default|display_options|filters|type|exposed"]["DELETED"] = TRUE;
  $overrides["views_view.vue_mediatheque.display|default|display_options|filters|type|expose|multiple"] = TRUE;
  $overrides["views_view.vue_mediatheque.display|default|display_options|filters|type|expose|reduce"] = TRUE;
  $overrides["views_view.vue_mediatheque.display|default|display_options|filters|type|group"] = 1;
  $overrides["views_view.vue_mediatheque.display|default|display_options|filters|type|value"] = array(
    'image' => 'image',
    'video' => 'video',
  );
  $overrides["views_view.vue_mediatheque.display|default|display_options|pager|options|expose|items_per_page"] = TRUE;
  $overrides["views_view.vue_mediatheque.display|default|display_options|pager|options|expose|items_per_page_options"] = '10, 20, 50';
  $overrides["views_view.vue_mediatheque.display|default|display_options|pager|options|items_per_page"] = 20;
  $overrides["views_view.vue_mediatheque.display|default|display_options|sorts"] = array(
    'type' => array(
      'id' => 'type',
      'table' => 'scald_atoms',
      'field' => 'type',
    ),
  );
  $overrides["views_view.vue_mediatheque.display|default|display_options|style_options|row_class"] = 'col-xs-12 col-sm-12 col-md-6 col-lg-4';
  $overrides["views_view.vue_mediatheque.display|page_actions_documents"] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:7:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:0:{}}s:8:"defaults";a:5:{s:5:"title";b:0;s:5:"empty";b:0;s:6:"fields";b:0;s:13:"filter_groups";b:0;s:7:"filters";b:0;}s:5:"title";s:22:"Dossiers documentaires";s:5:"empty";a:1:{s:4:"area";a:6:{s:2:"id";s:4:"area";s:5:"table";s:5:"views";s:5:"field";s:4:"area";s:5:"empty";b:1;s:7:"content";s:15:"Aucun résultat";s:6:"format";s:13:"filtered_html";}}s:6:"fields";a:2:{s:5:"title";a:7:{s:2:"id";s:5:"title";s:5:"table";s:11:"scald_atoms";s:5:"field";s:5:"title";s:5:"label";s:0:"";s:7:"exclude";b:1;s:5:"alter";a:1:{s:10:"strip_tags";b:1;}s:19:"element_label_colon";b:0;}s:14:"representation";a:6:{s:2:"id";s:14:"representation";s:5:"table";s:11:"scald_atoms";s:5:"field";s:14:"representation";s:5:"label";s:0:"";s:19:"element_label_colon";b:0;s:7:"context";s:25:"sdl_editor_representation";}}s:7:"filters";a:3:{s:4:"type";a:6:{s:2:"id";s:4:"type";s:5:"table";s:11:"scald_atoms";s:5:"field";s:4:"type";s:5:"value";a:1:{s:4:"file";s:4:"file";}s:5:"group";i:1;s:6:"expose";a:7:{s:11:"operator_id";s:7:"type_op";s:5:"label";s:4:"Type";s:8:"operator";s:7:"type_op";s:10:"identifier";s:4:"type";s:8:"multiple";b:1;s:14:"remember_roles";a:6:{i:2;s:1:"2";i:1;i:0;i:6;i:0;i:5;i:0;i:3;i:0;i:4;i:0;}s:6:"reduce";b:1;}}s:25:"field_scald_typepdf_value";a:5:{s:2:"id";s:25:"field_scald_typepdf_value";s:5:"table";s:30:"field_data_field_scald_typepdf";s:5:"field";s:25:"field_scald_typepdf_value";s:7:"exposed";b:1;s:6:"expose";a:5:{s:11:"operator_id";s:28:"field_scald_typepdf_value_op";s:5:"label";s:16:"Type de document";s:8:"operator";s:28:"field_scald_typepdf_value_op";s:10:"identifier";s:25:"field_scald_typepdf_value";s:14:"remember_roles";a:7:{i:2;s:1:"2";i:1;i:0;i:6;i:0;i:7;i:0;i:5;i:0;i:3;i:0;i:4;i:0;}}}s:24:"field_scald_motscles_tid";a:8:{s:2:"id";s:24:"field_scald_motscles_tid";s:5:"table";s:31:"field_data_field_scald_motscles";s:5:"field";s:24:"field_scald_motscles_tid";s:5:"value";s:0:"";s:7:"exposed";b:1;s:6:"expose";a:5:{s:11:"operator_id";s:27:"field_scald_motscles_tid_op";s:5:"label";s:10:"Mots clés";s:8:"operator";s:27:"field_scald_motscles_tid_op";s:10:"identifier";s:24:"field_scald_motscles_tid";s:14:"remember_roles";a:6:{i:2;s:1:"2";i:1;i:0;i:6;i:0;i:5;i:0;i:3;i:0;i:4;i:0;}}s:4:"type";s:6:"select";s:10:"vocabulary";s:9:"v_keyword";}}s:4:"path";s:61:"actions/protection-des-droits-libertes/dossiers-documentaires";}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:22:"page_actions_documents";s:13:"display_title";s:25:"ACT - Espace documentaire";s:14:"display_plugin";s:4:"page";s:8:"position";i:0;}');
  $overrides["views_view.vue_mediatheque.display|page_mediatheque|display_options|defaults"] = array(
    'footer' => FALSE,
    'filter_groups' => FALSE,
    'filters' => FALSE,
  );
  $overrides["views_view.vue_mediatheque.display|page_mediatheque|display_options|filters"] = array(
    'type' => array(
      'id' => 'type',
      'table' => 'scald_atoms',
      'field' => 'type',
      'value' => array(
        'image' => 'image',
        'video' => 'video',
      ),
      'group' => 1,
      'expose' => array(
        'operator_id' => 'type_op',
        'label' => 'Type',
        'operator' => 'type_op',
        'identifier' => 'type',
        'multiple' => TRUE,
        'remember_roles' => array(
          2 => 2,
          1 => 0,
          6 => 0,
          5 => 0,
          3 => 0,
          4 => 0,
        ),
        'reduce' => TRUE,
      ),
    ),
    'scald_tags_tid' => array(
      'id' => 'scald_tags_tid',
      'table' => 'field_data_scald_tags',
      'field' => 'scald_tags_tid',
      'group' => 1,
      'exposed' => TRUE,
      'expose' => array(
        'operator_id' => 'scald_tags_tid_op',
        'label' => 'Mots clés',
        'description' => 'Mots clés des documents',
        'operator' => 'scald_tags_tid_op',
        'identifier' => 'scald_tags_tid',
        'multiple' => TRUE,
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
      'vocabulary' => 'scald_tags',
      'hierarchy' => 1,
    ),
    'field_scald_mediatheque_value' => array(
      'id' => 'field_scald_mediatheque_value',
      'table' => 'field_data_field_scald_mediatheque',
      'field' => 'field_scald_mediatheque_value',
      'value' => array(
        1 => 1,
      ),
    ),
  );
  $overrides["views_view.vue_mediatheque.display|page_mediatheque|display_options|footer"] = array(
    'area' => array(
      'id' => 'area',
      'table' => 'views',
      'field' => 'area',
      'label' => 'Texte d\'information',
      'content' => '<p class="text-center bg-info"><smal>Le clic sur les images permet de demander la photo.</small></p>',
      'format' => 'full_html',
    ),
  );
  $overrides["views_view.vue_mediatheque.display|page_mediatheque|display_options|path"] = 'presse/mediatheque';

 return $overrides;
}
