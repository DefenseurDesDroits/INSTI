<?php

$view = new view();
$view->name = 'agenda';
$view->description = '';
$view->tag = 'views_import';
$view->base_table = 'node';
$view->human_name = 'Agenda';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Agenda';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['use_more_text'] = 'plus';
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
$handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
$handler->display->display_options['pager']['type'] = 'infinite_scroll';
$handler->display->display_options['pager']['options']['manual_load'] = 1;
$handler->display->display_options['pager']['options']['text'] = 'Voir plus de résultats';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Entête: Global : Zone de texte */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
/* Champ: Contenu : Date de l'évènement */
$handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
$handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
$handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
$handler->display->display_options['fields']['field_event_date']['label'] = '';
$handler->display->display_options['fields']['field_event_date']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_event_date']['settings'] = array(
  'format_type' => 'date_agenda',
  'fromto' => 'value',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_remaining_days' => 0,
);
/* Champ: Contenu : Date de l'évènement */
$handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
$handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
$handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
$handler->display->display_options['fields']['field_event_date_1']['label'] = '';
$handler->display->display_options['fields']['field_event_date_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_event_date_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
  'format_type' => 'base_day',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_remaining_days' => 0,
);
/* Champ: Contenu : Themes */
$handler->display->display_options['fields']['field_article_theme']['id'] = 'field_article_theme';
$handler->display->display_options['fields']['field_article_theme']['table'] = 'field_data_field_article_theme';
$handler->display->display_options['fields']['field_article_theme']['field'] = 'field_article_theme';
$handler->display->display_options['fields']['field_article_theme']['label'] = '';
$handler->display->display_options['fields']['field_article_theme']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_article_theme']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_article_theme']['delta_offset'] = '0';
/* Champ: Contenu : Titre */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Champ: Contenu : Descriptif long */
$handler->display->display_options['fields']['field_event_body']['id'] = 'field_event_body';
$handler->display->display_options['fields']['field_event_body']['table'] = 'field_data_field_event_body';
$handler->display->display_options['fields']['field_event_body']['field'] = 'field_event_body';
$handler->display->display_options['fields']['field_event_body']['label'] = '';
$handler->display->display_options['fields']['field_event_body']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_event_body']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_event_body']['type'] = 'text_plain';
/* Champ: Contenu : Date de publication */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = '';
$handler->display->display_options['fields']['created']['exclude'] = TRUE;
$handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['created']['date_format'] = 'socle_long_h';
$handler->display->display_options['fields']['created']['second_date_format'] = 'long';
/* Champ: Contenu : Localisation de l'évènement */
$handler->display->display_options['fields']['field_event_lieu']['id'] = 'field_event_lieu';
$handler->display->display_options['fields']['field_event_lieu']['table'] = 'field_data_field_event_lieu';
$handler->display->display_options['fields']['field_event_lieu']['field'] = 'field_event_lieu';
$handler->display->display_options['fields']['field_event_lieu']['label'] = '';
$handler->display->display_options['fields']['field_event_lieu']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_event_lieu']['element_type'] = '0';
$handler->display->display_options['fields']['field_event_lieu']['element_label_type'] = '0';
$handler->display->display_options['fields']['field_event_lieu']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_event_lieu']['element_wrapper_type'] = '0';
$handler->display->display_options['fields']['field_event_lieu']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_event_lieu']['type'] = 'text_plain';
/* Champ: Global : Texte personnalisé */
$handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
$handler->display->display_options['fields']['nothing_1']['table'] = 'views';
$handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing_1']['label'] = '';
$handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="row">
<div class="col-sm-4 col-md-2">
<div class="date-evenement">
<span class="jour">[field_event_date_1]</span> <span class="mois-annee">[field_event_date]</span>
</div>
</div>
<div class="col-sm-8 col-md-10">
<div class="themes-events">[field_article_theme]</div>
<div class="titre-events">[title]</div>
<div class="desc-long-events">[field_event_body]</div>
<div class=\'agenda-created\'>
<div class="date">[created]<span class="color:blue">  /  </span>[field_event_lieu]<span class="color:blue">  /</span></div>
</div>
</div>';
$handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
/* Champ: Date et localisation */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['ui_name'] = 'Date et localisation';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class=\'agenda-created\'>
<div class="date">[created]<span class="color:blue"> /</span></div>
<div class="localisation">[field_event_lieu]<span class="color:blue"> /</span></div>
</div>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
/* Critère de tri: Contenu : Date de publication */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Filtre contextuel: Contenu : Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
$handler->display->display_options['arguments']['nid']['default_action'] = 'empty';
$handler->display->display_options['arguments']['nid']['exception']['title'] = 'Tout';
$handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
$handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;
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
  'evenement' => 'evenement',
);

/* Display: Agenda Liste */
$handler = $view->new_display('block', 'Agenda Liste', 'block_agenda');
