<?php
/**
 * @file
 * ddd_vu_decision.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ddd_vu_decision_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'decisions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Décisions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'search_result';
  /* Entête: Global : Zone de vue */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['label'] = 'Thème';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'ddd_vu_theme:block_theme';
  /* Comportement en l'absence de résultats: Global : Zone de texte */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Aucun résultat trouvé';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Aucun résultat trouvé.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  /* Champ: Champ : Date de publication */
  $handler->display->display_options['fields']['field_article_date']['id'] = 'field_article_date';
  $handler->display->display_options['fields']['field_article_date']['table'] = 'field_data_field_article_date';
  $handler->display->display_options['fields']['field_article_date']['field'] = 'field_article_date';
  $handler->display->display_options['fields']['field_article_date']['label'] = '';
  $handler->display->display_options['fields']['field_article_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_article_date']['alter']['text'] = '[field_article_date-value]';
  $handler->display->display_options['fields']['field_article_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_date']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_article_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Champ: Contenu : Author */
  $handler->display->display_options['fields']['field_decision_author']['id'] = 'field_decision_author';
  $handler->display->display_options['fields']['field_decision_author']['table'] = 'field_data_field_decision_author';
  $handler->display->display_options['fields']['field_decision_author']['field'] = 'field_decision_author';
  $handler->display->display_options['fields']['field_decision_author']['label'] = '';
  $handler->display->display_options['fields']['field_decision_author']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Nature qualifiée */
  $handler->display->display_options['fields']['field_decision_nature_qualifiee']['id'] = 'field_decision_nature_qualifiee';
  $handler->display->display_options['fields']['field_decision_nature_qualifiee']['table'] = 'field_data_field_decision_nature_qualifiee';
  $handler->display->display_options['fields']['field_decision_nature_qualifiee']['field'] = 'field_decision_nature_qualifiee';
  $handler->display->display_options['fields']['field_decision_nature_qualifiee']['label'] = '';
  $handler->display->display_options['fields']['field_decision_nature_qualifiee']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Mots clés */
  $handler->display->display_options['fields']['field_article_keyword']['id'] = 'field_article_keyword';
  $handler->display->display_options['fields']['field_article_keyword']['table'] = 'field_data_field_article_keyword';
  $handler->display->display_options['fields']['field_article_keyword']['field'] = 'field_article_keyword';
  $handler->display->display_options['fields']['field_article_keyword']['label'] = '';
  $handler->display->display_options['fields']['field_article_keyword']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_keyword']['delta_offset'] = '0';
  /* Critère de tri: Champ : Date de publication (field_article_date) */
  $handler->display->display_options['sorts']['field_article_date_value']['id'] = 'field_article_date_value';
  $handler->display->display_options['sorts']['field_article_date_value']['table'] = 'field_data_field_article_date';
  $handler->display->display_options['sorts']['field_article_date_value']['field'] = 'field_article_date_value';
  $handler->display->display_options['sorts']['field_article_date_value']['order'] = 'DESC';
  /* Filtre contextuel: Contenu : Themes (field_article_theme) */
  $handler->display->display_options['arguments']['field_article_theme_tid']['id'] = 'field_article_theme_tid';
  $handler->display->display_options['arguments']['field_article_theme_tid']['table'] = 'field_data_field_article_theme';
  $handler->display->display_options['arguments']['field_article_theme_tid']['field'] = 'field_article_theme_tid';
  $handler->display->display_options['arguments']['field_article_theme_tid']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['field_article_theme_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_article_theme_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_article_theme_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_article_theme_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_article_theme_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_article_theme_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_article_theme_tid']['validate_options']['vocabularies'] = array(
    'v_theme' => 'v_theme',
  );
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ct_decision' => 'ct_decision',
  );

  /* Display: Décisions */
  $handler = $view->new_display('page', 'Décisions', 'page_decison');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Décisions';
  $handler->display->display_options['display_description'] = 'Décisions';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Entête: Global : Zone de vue */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['label'] = 'Thème';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'ddd_vu_theme:block_theme';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Champ : Date de publication */
  $handler->display->display_options['fields']['field_article_date']['id'] = 'field_article_date';
  $handler->display->display_options['fields']['field_article_date']['table'] = 'field_data_field_article_date';
  $handler->display->display_options['fields']['field_article_date']['field'] = 'field_article_date';
  $handler->display->display_options['fields']['field_article_date']['label'] = '';
  $handler->display->display_options['fields']['field_article_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_article_date']['alter']['text'] = '[field_article_date-value]';
  $handler->display->display_options['fields']['field_article_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_date']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_article_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Champ: Contenu : Nature qualifiée */
  $handler->display->display_options['fields']['field_decision_nature_qualifiee']['id'] = 'field_decision_nature_qualifiee';
  $handler->display->display_options['fields']['field_decision_nature_qualifiee']['table'] = 'field_data_field_decision_nature_qualifiee';
  $handler->display->display_options['fields']['field_decision_nature_qualifiee']['field'] = 'field_decision_nature_qualifiee';
  $handler->display->display_options['fields']['field_decision_nature_qualifiee']['label'] = '';
  $handler->display->display_options['fields']['field_decision_nature_qualifiee']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Mots clés */
  $handler->display->display_options['fields']['field_article_keyword']['id'] = 'field_article_keyword';
  $handler->display->display_options['fields']['field_article_keyword']['table'] = 'field_data_field_article_keyword';
  $handler->display->display_options['fields']['field_article_keyword']['field'] = 'field_article_keyword';
  $handler->display->display_options['fields']['field_article_keyword']['label'] = '';
  $handler->display->display_options['fields']['field_article_keyword']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_keyword']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Critère de tri: Champ : Date de publication (field_article_date) */
  $handler->display->display_options['sorts']['field_article_date_value']['id'] = 'field_article_date_value';
  $handler->display->display_options['sorts']['field_article_date_value']['table'] = 'field_data_field_article_date';
  $handler->display->display_options['sorts']['field_article_date_value']['field'] = 'field_article_date_value';
  $handler->display->display_options['sorts']['field_article_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ct_decision' => 'ct_decision',
  );
  /* Critère de filtrage: Contenu : Type de contenu (field_article_type) */
  $handler->display->display_options['filters']['field_article_type_tid']['id'] = 'field_article_type_tid';
  $handler->display->display_options['filters']['field_article_type_tid']['table'] = 'field_data_field_article_type';
  $handler->display->display_options['filters']['field_article_type_tid']['field'] = 'field_article_type_tid';
  $handler->display->display_options['filters']['field_article_type_tid']['value'] = array(
    30 => '30',
  );
  $handler->display->display_options['filters']['field_article_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_article_type_tid']['vocabulary'] = 'v_type';
  /* Critère de filtrage: Contenu : Themes (field_article_theme) */
  $handler->display->display_options['filters']['field_article_theme_tid']['id'] = 'field_article_theme_tid';
  $handler->display->display_options['filters']['field_article_theme_tid']['table'] = 'field_data_field_article_theme';
  $handler->display->display_options['filters']['field_article_theme_tid']['field'] = 'field_article_theme_tid';
  $handler->display->display_options['filters']['field_article_theme_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_article_theme_tid']['expose']['operator_id'] = 'field_article_theme_tid_op';
  $handler->display->display_options['filters']['field_article_theme_tid']['expose']['operator'] = 'field_article_theme_tid_op';
  $handler->display->display_options['filters']['field_article_theme_tid']['expose']['identifier'] = 'sub_id';
  $handler->display->display_options['filters']['field_article_theme_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_article_theme_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_article_theme_tid']['vocabulary'] = 'v_theme';
  $handler->display->display_options['filters']['field_article_theme_tid']['error_message'] = FALSE;
  /* Critère de filtrage: Contenu : Possède les termes de taxonomie (avec profondeur) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['label'] = 'Possède les termes de taxonomie (avec profondeur)';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'theme_id';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'v_theme';
  $handler->display->display_options['filters']['term_node_tid_depth']['error_message'] = FALSE;
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '5';
  $handler->display->display_options['path'] = 'actions/protection-des-droits-libertes/decision';

  /* Display: Décision-date */
  $handler = $view->new_display('page', 'Décision-date', 'date_filter');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Décisions';
  $handler->display->display_options['display_description'] = 'Filtrer par date';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Entête: Global : Zone de vue */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['label'] = 'Thème';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'ddd_vu_theme:block_theme';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ct_decision' => 'ct_decision',
  );
  /* Critère de filtrage: Contenu : Type de contenu (field_article_type) */
  $handler->display->display_options['filters']['field_article_type_tid']['id'] = 'field_article_type_tid';
  $handler->display->display_options['filters']['field_article_type_tid']['table'] = 'field_data_field_article_type';
  $handler->display->display_options['filters']['field_article_type_tid']['field'] = 'field_article_type_tid';
  $handler->display->display_options['filters']['field_article_type_tid']['value'] = array(
    30 => '30',
  );
  $handler->display->display_options['filters']['field_article_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_article_type_tid']['vocabulary'] = 'v_type';
  /* Critère de filtrage: Champ : Date de publication (field_article_date) */
  $handler->display->display_options['filters']['field_article_date_value']['id'] = 'field_article_date_value';
  $handler->display->display_options['filters']['field_article_date_value']['table'] = 'field_data_field_article_date';
  $handler->display->display_options['filters']['field_article_date_value']['field'] = 'field_article_date_value';
  $handler->display->display_options['filters']['field_article_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_article_date_value']['expose']['operator_id'] = 'field_article_date_value_op';
  $handler->display->display_options['filters']['field_article_date_value']['expose']['operator'] = 'field_article_date_value_op';
  $handler->display->display_options['filters']['field_article_date_value']['expose']['identifier'] = 'annee';
  $handler->display->display_options['filters']['field_article_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_article_date_value']['granularity'] = 'year';
  $handler->display->display_options['filters']['field_article_date_value']['year_range'] = '-10:+0';
  /* Critère de filtrage: Contenu : Author (field_decision_author) */
  $handler->display->display_options['filters']['field_decision_author_tid']['id'] = 'field_decision_author_tid';
  $handler->display->display_options['filters']['field_decision_author_tid']['table'] = 'field_data_field_decision_author';
  $handler->display->display_options['filters']['field_decision_author_tid']['field'] = 'field_decision_author_tid';
  $handler->display->display_options['filters']['field_decision_author_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_decision_author_tid']['expose']['operator_id'] = 'field_decision_author_tid_op';
  $handler->display->display_options['filters']['field_decision_author_tid']['expose']['operator'] = 'field_decision_author_tid_op';
  $handler->display->display_options['filters']['field_decision_author_tid']['expose']['identifier'] = 'authorite';
  $handler->display->display_options['filters']['field_decision_author_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_decision_author_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_decision_author_tid']['vocabulary'] = 'autoriter';
  $handler->display->display_options['filters']['field_decision_author_tid']['error_message'] = FALSE;
  $handler->display->display_options['path'] = 'actions/protection-des-droits-libertes/decision/date';

  /* Display: Règlement */
  $handler = $view->new_display('page', 'Règlement', 'page_reglement');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Règlements amiables';
  $handler->display->display_options['display_description'] = 'Règlement amiable';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Entête: Global : Zone de vue */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['label'] = 'Thème';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'ddd_vu_theme:block_theme_reg';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Champ : Date de publication */
  $handler->display->display_options['fields']['field_article_date']['id'] = 'field_article_date';
  $handler->display->display_options['fields']['field_article_date']['table'] = 'field_data_field_article_date';
  $handler->display->display_options['fields']['field_article_date']['field'] = 'field_article_date';
  $handler->display->display_options['fields']['field_article_date']['label'] = '';
  $handler->display->display_options['fields']['field_article_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_article_date']['alter']['text'] = '[field_article_date-value]';
  $handler->display->display_options['fields']['field_article_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_date']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_article_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Champ: Contenu : Nature qualifiée */
  $handler->display->display_options['fields']['field_decision_nature_qualifiee']['id'] = 'field_decision_nature_qualifiee';
  $handler->display->display_options['fields']['field_decision_nature_qualifiee']['table'] = 'field_data_field_decision_nature_qualifiee';
  $handler->display->display_options['fields']['field_decision_nature_qualifiee']['field'] = 'field_decision_nature_qualifiee';
  $handler->display->display_options['fields']['field_decision_nature_qualifiee']['label'] = '';
  $handler->display->display_options['fields']['field_decision_nature_qualifiee']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Mots clés */
  $handler->display->display_options['fields']['field_article_keyword']['id'] = 'field_article_keyword';
  $handler->display->display_options['fields']['field_article_keyword']['table'] = 'field_data_field_article_keyword';
  $handler->display->display_options['fields']['field_article_keyword']['field'] = 'field_article_keyword';
  $handler->display->display_options['fields']['field_article_keyword']['label'] = '';
  $handler->display->display_options['fields']['field_article_keyword']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_keyword']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Critère de tri: Champ : Date de publication (field_article_date) */
  $handler->display->display_options['sorts']['field_article_date_value']['id'] = 'field_article_date_value';
  $handler->display->display_options['sorts']['field_article_date_value']['table'] = 'field_data_field_article_date';
  $handler->display->display_options['sorts']['field_article_date_value']['field'] = 'field_article_date_value';
  $handler->display->display_options['sorts']['field_article_date_value']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ct_decision' => 'ct_decision',
  );
  /* Critère de filtrage: Contenu : Type de contenu (field_article_type) */
  $handler->display->display_options['filters']['field_article_type_tid']['id'] = 'field_article_type_tid';
  $handler->display->display_options['filters']['field_article_type_tid']['table'] = 'field_data_field_article_type';
  $handler->display->display_options['filters']['field_article_type_tid']['field'] = 'field_article_type_tid';
  $handler->display->display_options['filters']['field_article_type_tid']['value'] = array(
    31 => '31',
  );
  $handler->display->display_options['filters']['field_article_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_article_type_tid']['vocabulary'] = 'v_type';
  /* Critère de filtrage: Contenu : Themes (field_article_theme) */
  $handler->display->display_options['filters']['field_article_theme_tid']['id'] = 'field_article_theme_tid';
  $handler->display->display_options['filters']['field_article_theme_tid']['table'] = 'field_data_field_article_theme';
  $handler->display->display_options['filters']['field_article_theme_tid']['field'] = 'field_article_theme_tid';
  $handler->display->display_options['filters']['field_article_theme_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_article_theme_tid']['expose']['operator_id'] = 'field_article_theme_tid_op';
  $handler->display->display_options['filters']['field_article_theme_tid']['expose']['operator'] = 'field_article_theme_tid_op';
  $handler->display->display_options['filters']['field_article_theme_tid']['expose']['identifier'] = 'sub_id';
  $handler->display->display_options['filters']['field_article_theme_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_article_theme_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_article_theme_tid']['vocabulary'] = 'v_theme';
  $handler->display->display_options['filters']['field_article_theme_tid']['error_message'] = FALSE;
  /* Critère de filtrage: Contenu : Possède les termes de taxonomie (avec profondeur) */
  $handler->display->display_options['filters']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['filters']['term_node_tid_depth']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator_id'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['operator'] = 'term_node_tid_depth_op';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['identifier'] = 'theme_id';
  $handler->display->display_options['filters']['term_node_tid_depth']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['term_node_tid_depth']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth']['vocabulary'] = 'v_theme';
  $handler->display->display_options['filters']['term_node_tid_depth']['error_message'] = FALSE;
  $handler->display->display_options['filters']['term_node_tid_depth']['depth'] = '5';
  $handler->display->display_options['path'] = 'actions/protection-des-droits-libertes/reglement-amiable';

  /* Display: Règlement-date */
  $handler = $view->new_display('page', 'Règlement-date', 'filter_date_reglement');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Règlements amiables';
  $handler->display->display_options['display_description'] = 'Filtrer par date';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Entête: Global : Zone de vue */
  $handler->display->display_options['header']['view']['id'] = 'view';
  $handler->display->display_options['header']['view']['table'] = 'views';
  $handler->display->display_options['header']['view']['field'] = 'view';
  $handler->display->display_options['header']['view']['label'] = 'Thème';
  $handler->display->display_options['header']['view']['view_to_insert'] = 'ddd_vu_theme:block_theme_reg';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ct_decision' => 'ct_decision',
  );
  /* Critère de filtrage: Contenu : Type de contenu (field_article_type) */
  $handler->display->display_options['filters']['field_article_type_tid']['id'] = 'field_article_type_tid';
  $handler->display->display_options['filters']['field_article_type_tid']['table'] = 'field_data_field_article_type';
  $handler->display->display_options['filters']['field_article_type_tid']['field'] = 'field_article_type_tid';
  $handler->display->display_options['filters']['field_article_type_tid']['value'] = array(
    31 => '31',
  );
  $handler->display->display_options['filters']['field_article_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_article_type_tid']['vocabulary'] = 'v_type';
  /* Critère de filtrage: Champ : Date de publication (field_article_date) */
  $handler->display->display_options['filters']['field_article_date_value']['id'] = 'field_article_date_value';
  $handler->display->display_options['filters']['field_article_date_value']['table'] = 'field_data_field_article_date';
  $handler->display->display_options['filters']['field_article_date_value']['field'] = 'field_article_date_value';
  $handler->display->display_options['filters']['field_article_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_article_date_value']['expose']['operator_id'] = 'field_article_date_value_op';
  $handler->display->display_options['filters']['field_article_date_value']['expose']['operator'] = 'field_article_date_value_op';
  $handler->display->display_options['filters']['field_article_date_value']['expose']['identifier'] = 'annee';
  $handler->display->display_options['filters']['field_article_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_article_date_value']['granularity'] = 'year';
  $handler->display->display_options['filters']['field_article_date_value']['year_range'] = '-10:+0';
  /* Critère de filtrage: Contenu : Author (field_decision_author) */
  $handler->display->display_options['filters']['field_decision_author_tid']['id'] = 'field_decision_author_tid';
  $handler->display->display_options['filters']['field_decision_author_tid']['table'] = 'field_data_field_decision_author';
  $handler->display->display_options['filters']['field_decision_author_tid']['field'] = 'field_decision_author_tid';
  $handler->display->display_options['filters']['field_decision_author_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_decision_author_tid']['expose']['operator_id'] = 'field_decision_author_tid_op';
  $handler->display->display_options['filters']['field_decision_author_tid']['expose']['operator'] = 'field_decision_author_tid_op';
  $handler->display->display_options['filters']['field_decision_author_tid']['expose']['identifier'] = 'authorite';
  $handler->display->display_options['filters']['field_decision_author_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_decision_author_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_decision_author_tid']['vocabulary'] = 'autoriter';
  $handler->display->display_options['filters']['field_decision_author_tid']['error_message'] = FALSE;
  $handler->display->display_options['path'] = 'actions/protection-des-droits-libertes/reglement-amiable/date';
  $export['decisions'] = $view;

  return $export;
}
