<?php
/**
 * @file
 * ddd_vu_agenda.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ddd_vu_agenda_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'agenda';
  $view->description = 'Consulter la liste des contenus de type evenements semaines par semaines ';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Agenda';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Agenda';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'search_result';
  /* Comportement en l'absence de résultats: Global : Messages */
  $handler->display->display_options['empty']['messages']['id'] = 'messages';
  $handler->display->display_options['empty']['messages']['table'] = 'views';
  $handler->display->display_options['empty']['messages']['field'] = 'messages';
  $handler->display->display_options['empty']['messages']['label'] = 'Aucun résultat trouvé.';
  /* Comportement en l'absence de résultats: Global : Zone de texte */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Aucun résultat trouvé.';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Champ: Contenu : Date de l'évènement */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_date']['alter']['text'] = '[field_event_date-value]/[field_event_date-value2]';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class=\'title-event\'>[title]</div>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Localisation de l'évènement */
  $handler->display->display_options['fields']['field_event_lieu']['id'] = 'field_event_lieu';
  $handler->display->display_options['fields']['field_event_lieu']['table'] = 'field_data_field_event_lieu';
  $handler->display->display_options['fields']['field_event_lieu']['field'] = 'field_event_lieu';
  $handler->display->display_options['fields']['field_event_lieu']['label'] = '';
  $handler->display->display_options['fields']['field_event_lieu']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_lieu']['alter']['text'] = '<div class=\'local-event\'>[field_event_lieu]</div>';
  $handler->display->display_options['fields']['field_event_lieu']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Descriptif court */
  $handler->display->display_options['fields']['field_event_descriptif']['id'] = 'field_event_descriptif';
  $handler->display->display_options['fields']['field_event_descriptif']['table'] = 'field_data_field_event_descriptif';
  $handler->display->display_options['fields']['field_event_descriptif']['field'] = 'field_event_descriptif';
  $handler->display->display_options['fields']['field_event_descriptif']['label'] = '';
  $handler->display->display_options['fields']['field_event_descriptif']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_descriptif']['alter']['text'] = '<div class=\'decsrip-event\'>[field_event_descriptif]</div>';
  $handler->display->display_options['fields']['field_event_descriptif']['element_label_colon'] = FALSE;
  /* Critère de tri: Contenu : Date de l&#039;évènement - date de début (field_event_date) */
  $handler->display->display_options['sorts']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['sorts']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date_value']['field'] = 'field_event_date_value';
  /* Filtre contextuel: Contenu : Date de l&#039;évènement - date de début (field_event_date) */
  $handler->display->display_options['arguments']['field_event_date_value']['id'] = 'field_event_date_value';
  $handler->display->display_options['arguments']['field_event_date_value']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['arguments']['field_event_date_value']['field'] = 'field_event_date_value';
  $handler->display->display_options['arguments']['field_event_date_value']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['field_event_date_value']['default_argument_type'] = 'date';
  $handler->display->display_options['arguments']['field_event_date_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_event_date_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_event_date_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_event_date_value']['granularity'] = 'week';
  $handler->display->display_options['arguments']['field_event_date_value']['granularity_reset'] = 0;
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

  /* Display: AGD - Page agenda */
  $handler = $view->new_display('page', 'AGD - Page agenda', 'page');
  $handler->display->display_options['display_description'] = 'Page agenda';
  $handler->display->display_options['path'] = 'agenda';
  $export['agenda'] = $view;

  return $export;
}
