<?php 
$view = new view();
$view->name = 'block_outils';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Block Outils';
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
$handler->display->display_options['pager']['type'] = 'infinite_scroll';
$handler->display->display_options['pager']['options']['manual_load'] = 1;
$handler->display->display_options['pager']['options']['text'] = 'Plus de résultat';
$handler->display->display_options['pager']['options']['items_per_page'] = '6';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Champ: Contenu : Titre */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
/* Champ: Champ : Descriptif court */
$handler->display->display_options['fields']['field_article_descriptif']['id'] = 'field_article_descriptif';
$handler->display->display_options['fields']['field_article_descriptif']['table'] = 'field_data_field_article_descriptif';
$handler->display->display_options['fields']['field_article_descriptif']['field'] = 'field_article_descriptif';
$handler->display->display_options['fields']['field_article_descriptif']['label'] = '';
$handler->display->display_options['fields']['field_article_descriptif']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_article_descriptif']['type'] = 'text_trimmed';
$handler->display->display_options['fields']['field_article_descriptif']['settings'] = array(
  'trim_length' => '600',
);
/* Champ: Champ : Date de publication */
$handler->display->display_options['fields']['field_article_date']['id'] = 'field_article_date';
$handler->display->display_options['fields']['field_article_date']['table'] = 'field_data_field_article_date';
$handler->display->display_options['fields']['field_article_date']['field'] = 'field_article_date';
$handler->display->display_options['fields']['field_article_date']['label'] = '';
$handler->display->display_options['fields']['field_article_date']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_article_date']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_article_date']['settings'] = array(
  'format_type' => 'socle_long_h',
  'fromto' => 'both',
  'multiple_number' => '',
  'multiple_from' => '',
  'multiple_to' => '',
  'show_remaining_days' => 0,
);
/* Champ: Contenu : Lien */
$handler->display->display_options['fields']['view_node']['id'] = 'view_node';
$handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['view_node']['field'] = 'view_node';
$handler->display->display_options['fields']['view_node']['label'] = '';
$handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
$handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['view_node']['text'] = 'Lire la suite';
/* Champ: Global : Texte personnalisé */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = '<div>
<div>[field_article_date]<span style="color:blue"> /</span></div>
<div>[view_node]<span style="color:blue"> /</span></div>
</div>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
/* Critère de tri: Contenu : Date de publication */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Critère de tri: Champ : Date de publication (field_article_date) */
$handler->display->display_options['sorts']['field_article_date_value']['id'] = 'field_article_date_value';
$handler->display->display_options['sorts']['field_article_date_value']['table'] = 'field_data_field_article_date';
$handler->display->display_options['sorts']['field_article_date_value']['field'] = 'field_article_date_value';
/* Filtre contextuel: Contenu : Nid */
$handler->display->display_options['arguments']['nid']['id'] = 'nid';
$handler->display->display_options['arguments']['nid']['table'] = 'node';
$handler->display->display_options['arguments']['nid']['field'] = 'nid';
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
  'ct_offre' => 'ct_offre',
);

/* Display: Bloc Outils */
$handler = $view->new_display('block', 'Bloc Outils', 'block_outils');

/* Display: Intégré */
$handler = $view->new_display('embed', 'Intégré', 'embed_1');
