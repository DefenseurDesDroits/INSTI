<?php 
$view = new view();
$view->name = 'nous_rejoindre';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Nous rejoindre';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Nous rejoindre';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['use_more_text'] = 'plus';
$handler->display->display_options['access']['type'] = 'perm';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
$handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
$handler->display->display_options['exposed_form']['options']['bef'] = array(
  'general' => array(
    'allow_secondary' => 0,
    'secondary_label' => 'Options avancées',
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
  ),
  'term_node_tid_depth' => array(
    'bef_format' => 'bef_links',
    'more_options' => array(
      'bef_select_all_none' => FALSE,
      'bef_select_all_none_nested' => FALSE,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'any_label' => '',
      'bef_filter_description' => '',
      'tokens' => array(
        'available' => array(
          0 => 'global_types',
          1 => 'vocabulary',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'rewrite' => array(
        'filter_rewrite_values' => '',
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
  ),
  'secondary_label' => NULL,
  'collapsible_label' => NULL,
  'combine_rewrite' => NULL,
  'reset_label' => NULL,
);
$handler->display->display_options['exposed_form']['options']['input_required'] = 0;
$handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
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
$handler->display->display_options['row_plugin'] = 'fields';
/* Champ: Contenu : Titre */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'node';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
$handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
/* Champ: Champ : Descriptif court */
$handler->display->display_options['fields']['field_article_descriptif']['id'] = 'field_article_descriptif';
$handler->display->display_options['fields']['field_article_descriptif']['table'] = 'field_data_field_article_descriptif';
$handler->display->display_options['fields']['field_article_descriptif']['field'] = 'field_article_descriptif';
$handler->display->display_options['fields']['field_article_descriptif']['label'] = '';
$handler->display->display_options['fields']['field_article_descriptif']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_article_descriptif']['type'] = 'text_plain';
/* Champ: Contenu : Date de publication */
$handler->display->display_options['fields']['created']['id'] = 'created';
$handler->display->display_options['fields']['created']['table'] = 'node';
$handler->display->display_options['fields']['created']['field'] = 'created';
$handler->display->display_options['fields']['created']['label'] = '';
$handler->display->display_options['fields']['created']['exclude'] = TRUE;
$handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['created']['date_format'] = 'socle_long_h';
$handler->display->display_options['fields']['created']['second_date_format'] = 'long';
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
<div>[created]<span style="color:blue"> /</span></div>
<div>[view_node]<span style="color:blue"> /</span></div>
</div>';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
/* Critère de tri: Contenu : Date de publication */
$handler->display->display_options['sorts']['created']['id'] = 'created';
$handler->display->display_options['sorts']['created']['table'] = 'node';
$handler->display->display_options['sorts']['created']['field'] = 'created';
$handler->display->display_options['sorts']['created']['order'] = 'DESC';
/* Filtre contextuel: Contenu : Possède un identifiant (ID) de terme de taxonomie */
$handler->display->display_options['arguments']['tid']['id'] = 'tid';
$handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
$handler->display->display_options['arguments']['tid']['field'] = 'tid';
$handler->display->display_options['arguments']['tid']['exception']['title'] = 'Tout';
$handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
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

/* Display: Page nous rejoindre */
$handler = $view->new_display('block', 'Page nous rejoindre', 'block_1');
