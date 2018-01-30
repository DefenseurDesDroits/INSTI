<?php
/**
 * @file
 * sl_vu_taxonomy.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function sl_vu_taxonomy_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'vue_taxonomy';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Taxonomy';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'testvuetax';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer taxonomy';
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
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'nothing' => 'nothing',
    'tid' => 'tid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'tid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Champ: Terme de taxonomie : Nom */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Champ: Global : Texte personnalisé */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'vignette_accueil';
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Champ: Terme de taxonomie : Identifiant (ID) du terme */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Critère de tri: Terme de taxonomie : Poids */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';

  /* Display: TAX - Sous taxonomy */
  $handler = $view->new_display('block', 'TAX - Sous taxonomy', 'block_taxonomy_sub');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtre contextuel: Terme de taxonomie : Terme parent */
  $handler->display->display_options['arguments']['parent']['id'] = 'parent';
  $handler->display->display_options['arguments']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['arguments']['parent']['field'] = 'parent';
  $handler->display->display_options['arguments']['parent']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['parent']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['parent']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['parent']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['parent']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['parent']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['parent']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['parent']['validate']['type'] = 'taxonomy_term';

  /* Display: PAG - Vocabulaire n0 */
  $handler = $view->new_display('block', 'PAG - Vocabulaire n0', 'block_vocabulary_sub');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Critère de tri: Terme de taxonomie : Poids */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtre contextuel: Vocabulaire de taxonomie : Identifiant (ID) de vocabulaire */
  $handler->display->display_options['arguments']['vid']['id'] = 'vid';
  $handler->display->display_options['arguments']['vid']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['arguments']['vid']['field'] = 'vid';
  $handler->display->display_options['arguments']['vid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['vid']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['vid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['vid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['vid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['vid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Terme de taxonomie : Terme parent */
  $handler->display->display_options['filters']['parent']['id'] = 'parent';
  $handler->display->display_options['filters']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['filters']['parent']['field'] = 'parent';
  $handler->display->display_options['filters']['parent']['value']['value'] = '0';

  /* Display: EXP - Export Actions */
  $handler = $view->new_display('views_data_export', 'EXP - Export Actions', 'views_export_actions');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = '1';
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relation: Terme de taxonomie : Terme parent */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Terme de taxonomie : Nom */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Champ: Terme de taxonomie : Description du terme */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = 'Description';
  $handler->display->display_options['fields']['description']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['description']['element_default_classes'] = FALSE;
  /* Champ: Terme de taxonomie : Url de redirection */
  $handler->display->display_options['fields']['field_url_redirect']['id'] = 'field_url_redirect';
  $handler->display->display_options['fields']['field_url_redirect']['table'] = 'field_data_field_url_redirect';
  $handler->display->display_options['fields']['field_url_redirect']['field'] = 'field_url_redirect';
  $handler->display->display_options['fields']['field_url_redirect']['label'] = 'Redirect';
  $handler->display->display_options['fields']['field_url_redirect']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_url_redirect']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_url_redirect']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url_redirect']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_url_redirect']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_url_redirect']['type'] = 'link_plain';
  /* Champ: Terme de taxonomie : Mode d'affichage */
  $handler->display->display_options['fields']['field_taxo_affichage']['id'] = 'field_taxo_affichage';
  $handler->display->display_options['fields']['field_taxo_affichage']['table'] = 'field_data_field_taxo_affichage';
  $handler->display->display_options['fields']['field_taxo_affichage']['field'] = 'field_taxo_affichage';
  $handler->display->display_options['fields']['field_taxo_affichage']['label'] = 'Affichage';
  $handler->display->display_options['fields']['field_taxo_affichage']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_taxo_affichage']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_taxo_affichage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_taxo_affichage']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_taxo_affichage']['type'] = 'list_key';
  /* Champ: Terme de taxonomie : Nom */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name_1']['label'] = 'NomParent';
  $handler->display->display_options['fields']['name_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  /* Champ: Terme de taxonomie : Poids */
  $handler->display->display_options['fields']['weight']['id'] = 'weight';
  $handler->display->display_options['fields']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['weight']['field'] = 'weight';
  $handler->display->display_options['fields']['weight']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['weight']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['weight']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['weight']['separator'] = '';
  /* Champ: Global : Texte personnalisé */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Alias';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Vocabulaire de taxonomie : Nom système */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'v_actions' => 'v_actions',
  );
  $handler->display->display_options['path'] = 'admin/export/ddd_feed_actions.csv';

  /* Display: EXP - Export Thèmes */
  $handler = $view->new_display('views_data_export', 'EXP - Export Thèmes', 'views_data_export_theme');
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = '1';
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relation: Terme de taxonomie : Terme parent */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Terme de taxonomie : Nom */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Champ: Terme de taxonomie : Description du terme */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = 'Description';
  $handler->display->display_options['fields']['description']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['description']['element_default_classes'] = FALSE;
  /* Champ: Terme de taxonomie : Url de redirection */
  $handler->display->display_options['fields']['field_url_redirect']['id'] = 'field_url_redirect';
  $handler->display->display_options['fields']['field_url_redirect']['table'] = 'field_data_field_url_redirect';
  $handler->display->display_options['fields']['field_url_redirect']['field'] = 'field_url_redirect';
  $handler->display->display_options['fields']['field_url_redirect']['label'] = 'Redirect';
  $handler->display->display_options['fields']['field_url_redirect']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_url_redirect']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_url_redirect']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url_redirect']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_url_redirect']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_url_redirect']['type'] = 'link_plain';
  /* Champ: Terme de taxonomie : Mode d'affichage */
  $handler->display->display_options['fields']['field_taxo_affichage']['id'] = 'field_taxo_affichage';
  $handler->display->display_options['fields']['field_taxo_affichage']['table'] = 'field_data_field_taxo_affichage';
  $handler->display->display_options['fields']['field_taxo_affichage']['field'] = 'field_taxo_affichage';
  $handler->display->display_options['fields']['field_taxo_affichage']['label'] = 'Affichage';
  $handler->display->display_options['fields']['field_taxo_affichage']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_taxo_affichage']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_taxo_affichage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_taxo_affichage']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_taxo_affichage']['type'] = 'list_key';
  /* Champ: Terme de taxonomie : Nom */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['name_1']['label'] = 'NomParent';
  $handler->display->display_options['fields']['name_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['name_1']['element_label_colon'] = FALSE;
  /* Champ: Terme de taxonomie : Poids */
  $handler->display->display_options['fields']['weight']['id'] = 'weight';
  $handler->display->display_options['fields']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['weight']['field'] = 'weight';
  $handler->display->display_options['fields']['weight']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['weight']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['weight']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['weight']['separator'] = '';
  /* Champ: Global : Texte personnalisé */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Alias';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Vocabulaire de taxonomie : Nom système */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'v_theme' => 'v_theme',
  );
  $handler->display->display_options['path'] = 'admin/export/ddd_feed_theme.csv';
  $export['vue_taxonomy'] = $view;

  return $export;
}
