<?php 
$view = new view();
$view->name = 'nodequeue_1';
$view->description = 'Affiche une liste de tous les nœuds dans la file \'Nos domaines de competences\'';
$view->tag = 'file de nœuds';
$view->base_table = 'node';
$view->human_name = '';
$view->core = 0;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Paramètres par défaut */
$handler = $view->new_display('default', 'Paramètres par défaut', 'default');
$handler->display->display_options['title'] = 'File d\'attente \'Nos domaines de competences\'';
$handler->display->display_options['use_more'] = TRUE;
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['use_more_text'] = 'plus';
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
$handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'node';
/* Relation: Nodequeue : File */
$handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
$handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
$handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
$handler->display->display_options['relationships']['nodequeue_rel']['label'] = 'queue';
$handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
$handler->display->display_options['relationships']['nodequeue_rel']['limit'] = TRUE;
$handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
  'domain_competence' => 'domain_competence',
);
/* Champ: Contenu : Image Accroche */
$handler->display->display_options['fields']['field_page_image_accroche']['id'] = 'field_page_image_accroche';
$handler->display->display_options['fields']['field_page_image_accroche']['table'] = 'field_data_field_page_image_accroche';
$handler->display->display_options['fields']['field_page_image_accroche']['field'] = 'field_page_image_accroche';
$handler->display->display_options['fields']['field_page_image_accroche']['label'] = '';
$handler->display->display_options['fields']['field_page_image_accroche']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_page_image_accroche']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_page_image_accroche']['settings'] = array(
  'image_style' => '',
  'image_link' => 'content',
);
/* Champ: Contenu : Titre */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
/* Champ: Contenu : Lien */
$handler->display->display_options['fields']['view_node']['id'] = 'view_node';
$handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
$handler->display->display_options['fields']['view_node']['field'] = 'view_node';
$handler->display->display_options['fields']['view_node']['label'] = '';
$handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['view_node']['text'] = 'En savoir plus';
/* Champ: Contenu : Couleur */
$handler->display->display_options['fields']['field_page_color']['id'] = 'field_page_color';
$handler->display->display_options['fields']['field_page_color']['table'] = 'field_data_field_page_color';
$handler->display->display_options['fields']['field_page_color']['field'] = 'field_page_color';
$handler->display->display_options['fields']['field_page_color']['label'] = '';
$handler->display->display_options['fields']['field_page_color']['element_type'] = '0';
$handler->display->display_options['fields']['field_page_color']['element_label_type'] = '0';
$handler->display->display_options['fields']['field_page_color']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_page_color']['element_wrapper_type'] = '0';
$handler->display->display_options['fields']['field_page_color']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['field_page_color']['type'] = 'text_plain';
/* Critère de tri: Nodequeue : Position */
$handler->display->display_options['sorts']['position']['id'] = 'position';
$handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
$handler->display->display_options['sorts']['position']['field'] = 'position';
$handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
/* Critère de filtrage: Contenu : Publié ou admin */
$handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
$handler->display->display_options['filters']['status_extra']['table'] = 'node';
$handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
$handler->display->display_options['filters']['status_extra']['group'] = 0;
$handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'nodequeue/1';

/* Display: Bloc */
$handler = $view->new_display('block', 'Bloc', 'block');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['block_description'] = 'File d\'attente \'Nos domaines de competences\'';
