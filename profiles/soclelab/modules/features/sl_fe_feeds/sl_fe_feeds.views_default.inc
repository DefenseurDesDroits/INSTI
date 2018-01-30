<?php
/**
 * @file
 * sl_fe_feeds.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function sl_fe_feeds_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'vue_feeds';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'SL Feeds';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Champ: Contenu : Chemin */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'Alias';
  $handler->display->display_options['fields']['path']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Critère de tri: Contenu : Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'all' => 'all',
    'article' => 'article',
    'evenement' => 'evenement',
    'faq' => 'faq',
    'accueil' => 'accueil',
    'page' => 'page',
  );

  /* Display: EXP - Articles */
  $handler = $view->new_display('views_data_export', 'EXP - Articles', 'view_export_article');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Champ: Contenu : Chemin */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'Alias';
  $handler->display->display_options['fields']['path']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Body */
  $handler->display->display_options['fields']['field_article_body']['id'] = 'field_article_body';
  $handler->display->display_options['fields']['field_article_body']['table'] = 'field_data_field_article_body';
  $handler->display->display_options['fields']['field_article_body']['field'] = 'field_article_body';
  $handler->display->display_options['fields']['field_article_body']['label'] = 'Corps';
  $handler->display->display_options['fields']['field_article_body']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['field_article_body']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Date de publication */
  $handler->display->display_options['fields']['field_article_date']['id'] = 'field_article_date';
  $handler->display->display_options['fields']['field_article_date']['table'] = 'field_data_field_article_date';
  $handler->display->display_options['fields']['field_article_date']['field'] = 'field_article_date';
  $handler->display->display_options['fields']['field_article_date']['label'] = 'Date';
  $handler->display->display_options['fields']['field_article_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_article_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_date']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_article_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Champ: Contenu : Type de contenu */
  $handler->display->display_options['fields']['field_article_type']['id'] = 'field_article_type';
  $handler->display->display_options['fields']['field_article_type']['table'] = 'field_data_field_article_type';
  $handler->display->display_options['fields']['field_article_type']['field'] = 'field_article_type';
  $handler->display->display_options['fields']['field_article_type']['label'] = 'Type';
  $handler->display->display_options['fields']['field_article_type']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_article_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_article_type']['type'] = 'taxonomy_term_reference_plain';
  /* Champ: Contenu : Themes */
  $handler->display->display_options['fields']['field_article_theme']['id'] = 'field_article_theme';
  $handler->display->display_options['fields']['field_article_theme']['table'] = 'field_data_field_article_theme';
  $handler->display->display_options['fields']['field_article_theme']['field'] = 'field_article_theme';
  $handler->display->display_options['fields']['field_article_theme']['label'] = 'Thèmes';
  $handler->display->display_options['fields']['field_article_theme']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_article_theme']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_theme']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_article_theme']['delta_offset'] = '0';
  /* Champ: Contenu : Descriptif de l'article */
  $handler->display->display_options['fields']['field_article_descriptif']['id'] = 'field_article_descriptif';
  $handler->display->display_options['fields']['field_article_descriptif']['table'] = 'field_data_field_article_descriptif';
  $handler->display->display_options['fields']['field_article_descriptif']['field'] = 'field_article_descriptif';
  $handler->display->display_options['fields']['field_article_descriptif']['label'] = 'Chapo';
  $handler->display->display_options['fields']['field_article_descriptif']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['field_article_descriptif']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_descriptif']['element_default_classes'] = FALSE;
  /* Champ: Contenu : Contenus associés */
  $handler->display->display_options['fields']['field_article_ctasso']['id'] = 'field_article_ctasso';
  $handler->display->display_options['fields']['field_article_ctasso']['table'] = 'field_data_field_article_ctasso';
  $handler->display->display_options['fields']['field_article_ctasso']['field'] = 'field_article_ctasso';
  $handler->display->display_options['fields']['field_article_ctasso']['label'] = 'Publié';
  $handler->display->display_options['fields']['field_article_ctasso']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_article_ctasso']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_article_ctasso']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_ctasso']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_article_ctasso']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_article_ctasso']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_article_ctasso']['separator'] = ';';
  /* Champ: Contenu : Langue */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['language']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['language']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Publié */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article' => 'article',
  );
  $handler->display->display_options['path'] = 'admin/export/sl_feed_ct_article.csv';

  /* Display: EXP - Events */
  $handler = $view->new_display('views_data_export', 'EXP - Events', 'view_export_event');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Champ: Contenu : Chemin */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'Alias';
  $handler->display->display_options['fields']['path']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Body */
  $handler->display->display_options['fields']['field_event_body']['id'] = 'field_event_body';
  $handler->display->display_options['fields']['field_event_body']['table'] = 'field_data_field_event_body';
  $handler->display->display_options['fields']['field_event_body']['field'] = 'field_event_body';
  $handler->display->display_options['fields']['field_event_body']['label'] = 'Corps';
  $handler->display->display_options['fields']['field_event_body']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['field_event_body']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Descriptif */
  $handler->display->display_options['fields']['field_event_descriptif']['id'] = 'field_event_descriptif';
  $handler->display->display_options['fields']['field_event_descriptif']['table'] = 'field_data_field_event_descriptif';
  $handler->display->display_options['fields']['field_event_descriptif']['field'] = 'field_event_descriptif';
  $handler->display->display_options['fields']['field_event_descriptif']['label'] = 'Chapo';
  $handler->display->display_options['fields']['field_event_descriptif']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['field_event_descriptif']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Langue */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['language']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['language']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Date de l'évènement */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = 'DateStart';
  $handler->display->display_options['fields']['field_event_date']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Champ: Contenu : Date de l'évènement */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = 'DateEnd';
  $handler->display->display_options['fields']['field_event_date_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date_1']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Champ: Contenu : Localisation de l'évènement */
  $handler->display->display_options['fields']['field_event_lieu']['id'] = 'field_event_lieu';
  $handler->display->display_options['fields']['field_event_lieu']['table'] = 'field_data_field_event_lieu';
  $handler->display->display_options['fields']['field_event_lieu']['field'] = 'field_event_lieu';
  $handler->display->display_options['fields']['field_event_lieu']['label'] = 'Lieu';
  $handler->display->display_options['fields']['field_event_lieu']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['field_event_lieu']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'evenement' => 'evenement',
  );
  $handler->display->display_options['path'] = 'admin/export/sl_feed_ct_event.csv';

  /* Display: EXP - Pages */
  $handler = $view->new_display('views_data_export', 'EXP - Pages', 'view_export_pages');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Champ: Contenu : Chemin */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'Alias';
  $handler->display->display_options['fields']['path']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Adresse de contact */
  $handler->display->display_options['fields']['field_page_contact_adresse']['id'] = 'field_page_contact_adresse';
  $handler->display->display_options['fields']['field_page_contact_adresse']['table'] = 'field_data_field_page_contact_adresse';
  $handler->display->display_options['fields']['field_page_contact_adresse']['field'] = 'field_page_contact_adresse';
  $handler->display->display_options['fields']['field_page_contact_adresse']['label'] = 'Adresse';
  $handler->display->display_options['fields']['field_page_contact_adresse']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['field_page_contact_adresse']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Body */
  $handler->display->display_options['fields']['field_page_body']['id'] = 'field_page_body';
  $handler->display->display_options['fields']['field_page_body']['table'] = 'field_data_field_page_body';
  $handler->display->display_options['fields']['field_page_body']['field'] = 'field_page_body';
  $handler->display->display_options['fields']['field_page_body']['label'] = 'Publié';
  $handler->display->display_options['fields']['field_page_body']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Langue */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['language']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['language']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Publié */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  /* Champ: Contenu : Vocabulaire à remonter */
  $handler->display->display_options['fields']['field_page_vocabulary']['id'] = 'field_page_vocabulary';
  $handler->display->display_options['fields']['field_page_vocabulary']['table'] = 'field_data_field_page_vocabulary';
  $handler->display->display_options['fields']['field_page_vocabulary']['field'] = 'field_page_vocabulary';
  $handler->display->display_options['fields']['field_page_vocabulary']['label'] = 'Vocabulaire';
  $handler->display->display_options['fields']['field_page_vocabulary']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_page_vocabulary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_page_vocabulary']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_page_vocabulary']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'page' => 'page',
  );
  $handler->display->display_options['path'] = 'admin/export/sl_feed_ct_page.csv';

  /* Display: EXP - Faq */
  $handler = $view->new_display('views_data_export', 'EXP - Faq', 'view_export_faq');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Champ: Contenu : Chemin */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'Alias';
  $handler->display->display_options['fields']['path']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Corps';
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'faq' => 'faq',
  );
  $handler->display->display_options['path'] = 'admin/export/sl_feed_ct_faq.csv';

  /* Display: EXP - Accueil */
  $handler = $view->new_display('views_data_export', 'EXP - Accueil', 'view_export_home');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Champ: Contenu : Chemin */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'Alias';
  $handler->display->display_options['fields']['path']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Liste des articles affichés dans le carrousel */
  $handler->display->display_options['fields']['field_home_carousel_liste']['id'] = 'field_home_carousel_liste';
  $handler->display->display_options['fields']['field_home_carousel_liste']['table'] = 'field_data_field_home_carousel_liste';
  $handler->display->display_options['fields']['field_home_carousel_liste']['field'] = 'field_home_carousel_liste';
  $handler->display->display_options['fields']['field_home_carousel_liste']['label'] = 'Slider';
  $handler->display->display_options['fields']['field_home_carousel_liste']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_home_carousel_liste']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_home_carousel_liste']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_home_carousel_liste']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_home_carousel_liste']['separator'] = ';';
  /* Champ: Contenu : Liste des vignettes de l'accueil */
  $handler->display->display_options['fields']['field_home_vignette_liste']['id'] = 'field_home_vignette_liste';
  $handler->display->display_options['fields']['field_home_vignette_liste']['table'] = 'field_data_field_home_vignette_liste';
  $handler->display->display_options['fields']['field_home_vignette_liste']['field'] = 'field_home_vignette_liste';
  $handler->display->display_options['fields']['field_home_vignette_liste']['label'] = 'Vignette';
  $handler->display->display_options['fields']['field_home_vignette_liste']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_home_vignette_liste']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_home_vignette_liste']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_home_vignette_liste']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_home_vignette_liste']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_home_vignette_liste']['separator'] = ';';
  /* Champ: Contenu : Taxonomie à remonter */
  $handler->display->display_options['fields']['field_home_liste_taxo']['id'] = 'field_home_liste_taxo';
  $handler->display->display_options['fields']['field_home_liste_taxo']['table'] = 'field_data_field_home_liste_taxo';
  $handler->display->display_options['fields']['field_home_liste_taxo']['field'] = 'field_home_liste_taxo';
  $handler->display->display_options['fields']['field_home_liste_taxo']['label'] = 'Taxonomie';
  $handler->display->display_options['fields']['field_home_liste_taxo']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['field_home_liste_taxo']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_home_liste_taxo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_home_liste_taxo']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'accueil' => 'accueil',
  );
  $handler->display->display_options['path'] = 'admin/export/sl_feed_ct_home.csv';
  $translatables['vue_feeds'] = array(
    t('Master'),
    t('plus'),
    t('Appliquer'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Éléments par page'),
    t('- Tout -'),
    t('Décalage'),
    t('« premier'),
    t('‹ précédent'),
    t('suivant ›'),
    t('dernier »'),
    t('Titre'),
    t('Alias'),
    t('EXP - Articles'),
    t('Corps'),
    t('Date'),
    t('Type'),
    t('Thèmes'),
    t('Chapo'),
    t('Publié'),
    t('Langue'),
    t('EXP - Events'),
    t('DateStart'),
    t('DateEnd'),
    t('Lieu'),
    t('EXP - Pages'),
    t('Adresse'),
    t('Vocabulaire'),
    t('EXP - Faq'),
    t('EXP - Accueil'),
    t('Slider'),
    t('Vignette'),
    t('Taxonomie'),
  );
  $export['vue_feeds'] = $view;

  return $export;
}
