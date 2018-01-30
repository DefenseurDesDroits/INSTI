<?php
/**
 * @file
 * sl_vu_mediatheque.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function sl_vu_mediatheque_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'vue_mediatheque';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'scald_atoms';
  $view->human_name = 'Médiathèque';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Médiathèque';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = 20;
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '10, 20, 50';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-xs-12 col-sm-12 col-md-6 col-lg-4';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Champ: Atome : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'scald_atoms';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Champ: Atome : Représentation */
  $handler->display->display_options['fields']['representation']['id'] = 'representation';
  $handler->display->display_options['fields']['representation']['table'] = 'scald_atoms';
  $handler->display->display_options['fields']['representation']['field'] = 'representation';
  $handler->display->display_options['fields']['representation']['label'] = '';
  $handler->display->display_options['fields']['representation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['representation']['context'] = 'sdl_editor_representation';
  /* Champ: Atomes : Authors */
  $handler->display->display_options['fields']['scald_authors']['id'] = 'scald_authors';
  $handler->display->display_options['fields']['scald_authors']['table'] = 'field_data_scald_authors';
  $handler->display->display_options['fields']['scald_authors']['field'] = 'scald_authors';
  $handler->display->display_options['fields']['scald_authors']['label'] = 'Copyright';
  $handler->display->display_options['fields']['scald_authors']['exclude'] = TRUE;
  $handler->display->display_options['fields']['scald_authors']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['scald_authors']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['scald_authors']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['scald_authors']['delta_offset'] = '0';
  /* Champ: Atomes : Tags */
  $handler->display->display_options['fields']['scald_tags']['id'] = 'scald_tags';
  $handler->display->display_options['fields']['scald_tags']['table'] = 'field_data_scald_tags';
  $handler->display->display_options['fields']['scald_tags']['field'] = 'scald_tags';
  $handler->display->display_options['fields']['scald_tags']['label'] = 'Étiquettes';
  $handler->display->display_options['fields']['scald_tags']['exclude'] = TRUE;
  $handler->display->display_options['fields']['scald_tags']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['scald_tags']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['scald_tags']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['scald_tags']['delta_offset'] = '0';
  /* Critère de tri: Atome : Type */
  $handler->display->display_options['sorts']['type']['id'] = 'type';
  $handler->display->display_options['sorts']['type']['table'] = 'scald_atoms';
  $handler->display->display_options['sorts']['type']['field'] = 'type';
  /* Critère de filtrage: Atome : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'scald_atoms';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'image' => 'image',
    'video' => 'video',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  /* Critère de filtrage: Atomes : Tags (scald_tags) */
  $handler->display->display_options['filters']['scald_tags_tid']['id'] = 'scald_tags_tid';
  $handler->display->display_options['filters']['scald_tags_tid']['table'] = 'field_data_scald_tags';
  $handler->display->display_options['filters']['scald_tags_tid']['field'] = 'scald_tags_tid';
  $handler->display->display_options['filters']['scald_tags_tid']['group'] = 1;
  $handler->display->display_options['filters']['scald_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['scald_tags_tid']['expose']['operator_id'] = 'scald_tags_tid_op';
  $handler->display->display_options['filters']['scald_tags_tid']['expose']['label'] = 'Étiquettes';
  $handler->display->display_options['filters']['scald_tags_tid']['expose']['operator'] = 'scald_tags_tid_op';
  $handler->display->display_options['filters']['scald_tags_tid']['expose']['identifier'] = 'scald_tags_tid';
  $handler->display->display_options['filters']['scald_tags_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['scald_tags_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['scald_tags_tid']['type'] = 'select';
  $handler->display->display_options['filters']['scald_tags_tid']['vocabulary'] = 'scald_tags';
  $handler->display->display_options['filters']['scald_tags_tid']['hierarchy'] = 1;

  /* Display: MED - Mediatheque */
  $handler = $view->new_display('page', 'MED - Mediatheque', 'page_mediatheque');
  $handler->display->display_options['display_description'] = 'Page médiathèque du site listant les atomes scald';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Pied de page: Global : Zone de texte */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Texte d\'information';
  $handler->display->display_options['footer']['area']['content'] = '<p class="text-center bg-info"><smal>Le clic sur les images permet de demander la photo.</small></p>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Atome : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'scald_atoms';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'image' => 'image',
    'video' => 'video',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
  );
  /* Critère de filtrage: Atomes : Tags (scald_tags) */
  $handler->display->display_options['filters']['scald_tags_tid']['id'] = 'scald_tags_tid';
  $handler->display->display_options['filters']['scald_tags_tid']['table'] = 'field_data_scald_tags';
  $handler->display->display_options['filters']['scald_tags_tid']['field'] = 'scald_tags_tid';
  $handler->display->display_options['filters']['scald_tags_tid']['group'] = 1;
  $handler->display->display_options['filters']['scald_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['scald_tags_tid']['expose']['operator_id'] = 'scald_tags_tid_op';
  $handler->display->display_options['filters']['scald_tags_tid']['expose']['label'] = 'Mots clés';
  $handler->display->display_options['filters']['scald_tags_tid']['expose']['description'] = 'Mots clés des documents';
  $handler->display->display_options['filters']['scald_tags_tid']['expose']['operator'] = 'scald_tags_tid_op';
  $handler->display->display_options['filters']['scald_tags_tid']['expose']['identifier'] = 'scald_tags_tid';
  $handler->display->display_options['filters']['scald_tags_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['scald_tags_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['scald_tags_tid']['type'] = 'select';
  $handler->display->display_options['filters']['scald_tags_tid']['vocabulary'] = 'scald_tags';
  $handler->display->display_options['filters']['scald_tags_tid']['hierarchy'] = 1;
  /* Critère de filtrage: Atomes : Mediatheque (field_scald_mediatheque) */
  $handler->display->display_options['filters']['field_scald_mediatheque_value']['id'] = 'field_scald_mediatheque_value';
  $handler->display->display_options['filters']['field_scald_mediatheque_value']['table'] = 'field_data_field_scald_mediatheque';
  $handler->display->display_options['filters']['field_scald_mediatheque_value']['field'] = 'field_scald_mediatheque_value';
  $handler->display->display_options['filters']['field_scald_mediatheque_value']['value'] = array(
    1 => 1,
  );
  $handler->display->display_options['path'] = 'presse/mediatheque';

  /* Display: ART - Voir aussi */
  $handler = $view->new_display('block', 'ART - Voir aussi', 'block_media_seemore');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'representation' => 'representation',
    'scald_authors' => 'scald_authors',
    'scald_tags' => 'scald_tags',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'representation' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'scald_authors' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'scald_tags' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Atome : Identifiant Scald */
  $handler->display->display_options['fields']['sid']['id'] = 'sid';
  $handler->display->display_options['fields']['sid']['table'] = 'scald_atoms';
  $handler->display->display_options['fields']['sid']['field'] = 'sid';
  $handler->display->display_options['fields']['sid']['label'] = '';
  $handler->display->display_options['fields']['sid']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['sid']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['sid']['element_label_colon'] = FALSE;
  /* Champ: Atomes : Type de PDF */
  $handler->display->display_options['fields']['field_scald_typepdf']['id'] = 'field_scald_typepdf';
  $handler->display->display_options['fields']['field_scald_typepdf']['table'] = 'field_data_field_scald_typepdf';
  $handler->display->display_options['fields']['field_scald_typepdf']['field'] = 'field_scald_typepdf';
  $handler->display->display_options['fields']['field_scald_typepdf']['label'] = '';
  $handler->display->display_options['fields']['field_scald_typepdf']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_scald_typepdf']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtre contextuel: Atomes : Mots clés (field_scald_motscles) */
  $handler->display->display_options['arguments']['field_scald_motscles_tid']['id'] = 'field_scald_motscles_tid';
  $handler->display->display_options['arguments']['field_scald_motscles_tid']['table'] = 'field_data_field_scald_motscles';
  $handler->display->display_options['arguments']['field_scald_motscles_tid']['field'] = 'field_scald_motscles_tid';
  $handler->display->display_options['arguments']['field_scald_motscles_tid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_scald_motscles_tid']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['field_scald_motscles_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_scald_motscles_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_scald_motscles_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_scald_motscles_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_scald_motscles_tid']['break_phrase'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Atome : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'scald_atoms';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'file' => 'file',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;

  /* Display: ACT - Espace documentaire */
  $handler = $view->new_display('page', 'ACT - Espace documentaire', 'page_actions_documents');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Dossiers documentaires';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Comportement en l'absence de résultats: Global : Zone de texte */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Aucun résultat';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Atome : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'scald_atoms';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Champ: Atome : Représentation */
  $handler->display->display_options['fields']['representation']['id'] = 'representation';
  $handler->display->display_options['fields']['representation']['table'] = 'scald_atoms';
  $handler->display->display_options['fields']['representation']['field'] = 'representation';
  $handler->display->display_options['fields']['representation']['label'] = '';
  $handler->display->display_options['fields']['representation']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['representation']['context'] = 'sdl_editor_representation';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Atome : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'scald_atoms';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'file' => 'file',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  /* Critère de filtrage: Atomes : Type de PDF (field_scald_typepdf) */
  $handler->display->display_options['filters']['field_scald_typepdf_value_1']['id'] = 'field_scald_typepdf_value_1';
  $handler->display->display_options['filters']['field_scald_typepdf_value_1']['table'] = 'field_data_field_scald_typepdf';
  $handler->display->display_options['filters']['field_scald_typepdf_value_1']['field'] = 'field_scald_typepdf_value';
  $handler->display->display_options['filters']['field_scald_typepdf_value_1']['value'] = array(
    'depliant' => 'depliant',
    'guide' => 'guide',
    'rapport' => 'rapport',
    'theme' => 'theme',
  );
  $handler->display->display_options['filters']['field_scald_typepdf_value_1']['group'] = 1;
  /* Critère de filtrage: Atomes : Type de PDF (field_scald_typepdf) */
  $handler->display->display_options['filters']['field_scald_typepdf_value']['id'] = 'field_scald_typepdf_value';
  $handler->display->display_options['filters']['field_scald_typepdf_value']['table'] = 'field_data_field_scald_typepdf';
  $handler->display->display_options['filters']['field_scald_typepdf_value']['field'] = 'field_scald_typepdf_value';
  $handler->display->display_options['filters']['field_scald_typepdf_value']['group'] = 1;
  $handler->display->display_options['filters']['field_scald_typepdf_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_scald_typepdf_value']['expose']['operator_id'] = 'field_scald_typepdf_value_op';
  $handler->display->display_options['filters']['field_scald_typepdf_value']['expose']['label'] = 'Type de document';
  $handler->display->display_options['filters']['field_scald_typepdf_value']['expose']['operator'] = 'field_scald_typepdf_value_op';
  $handler->display->display_options['filters']['field_scald_typepdf_value']['expose']['identifier'] = 'field_scald_typepdf_value';
  $handler->display->display_options['filters']['field_scald_typepdf_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
  );
  /* Critère de filtrage: Atomes : Mots clés (field_scald_motscles) */
  $handler->display->display_options['filters']['field_scald_motscles_tid']['id'] = 'field_scald_motscles_tid';
  $handler->display->display_options['filters']['field_scald_motscles_tid']['table'] = 'field_data_field_scald_motscles';
  $handler->display->display_options['filters']['field_scald_motscles_tid']['field'] = 'field_scald_motscles_tid';
  $handler->display->display_options['filters']['field_scald_motscles_tid']['value'] = '';
  $handler->display->display_options['filters']['field_scald_motscles_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_scald_motscles_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_scald_motscles_tid']['expose']['operator_id'] = 'field_scald_motscles_tid_op';
  $handler->display->display_options['filters']['field_scald_motscles_tid']['expose']['label'] = 'Mots clés';
  $handler->display->display_options['filters']['field_scald_motscles_tid']['expose']['operator'] = 'field_scald_motscles_tid_op';
  $handler->display->display_options['filters']['field_scald_motscles_tid']['expose']['identifier'] = 'field_scald_motscles_tid';
  $handler->display->display_options['filters']['field_scald_motscles_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_scald_motscles_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_scald_motscles_tid']['vocabulary'] = 'v_keyword';
  $handler->display->display_options['path'] = 'actions/protection-des-droits-libertes/dossiers-documentaires';
  $export['vue_mediatheque'] = $view;

  return $export;
}
