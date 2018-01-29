<?php
/**
 * @file
 * ddd_feature_search.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ddd_feature_search_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'search_all';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_search_node';
  $view->human_name = 'Search all';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Search ddd';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Champ: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_search_node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Champ: Indexed Node: Type de contenu */
  $handler->display->display_options['fields']['field_article_type']['id'] = 'field_article_type';
  $handler->display->display_options['fields']['field_article_type']['table'] = 'search_api_index_search_node';
  $handler->display->display_options['fields']['field_article_type']['field'] = 'field_article_type';
  $handler->display->display_options['fields']['field_article_type']['label'] = 'Type';
  $handler->display->display_options['fields']['field_article_type']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_article_type']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_article_type']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_article_type']['bypass_access'] = 0;
  /* Champ: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Lire la suite';
  /* Champ: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Lien';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[view_node]<span class="blue">/</span>';
  /* Champ: Indexed Node: Image principale */
  $handler->display->display_options['fields']['field_article_logo']['id'] = 'field_article_logo';
  $handler->display->display_options['fields']['field_article_logo']['table'] = 'search_api_index_search_node';
  $handler->display->display_options['fields']['field_article_logo']['field'] = 'field_article_logo';
  $handler->display->display_options['fields']['field_article_logo']['label'] = 'Image';
  $handler->display->display_options['fields']['field_article_logo']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_article_logo']['view_mode'] = 'title';
  $handler->display->display_options['fields']['field_article_logo']['bypass_access'] = 0;
  /* Filtre contextuel: Indexed Node: Title */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'search_api_index_search_node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['title']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['title']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['title']['not'] = 0;
  /* Filtre contextuel: Indexed Node: Node ID */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'search_api_index_search_node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Critère de filtrage: Indexed Node: Item language */
  $handler->display->display_options['filters']['search_api_language']['id'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['table'] = 'search_api_index_search_node';
  $handler->display->display_options['filters']['search_api_language']['field'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['value'] = array(
    'current' => 'current',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'search-all';
  $export['search_all'] = $view;

  $view = new view();
  $view->name = 'search_articles';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_search_node';
  $view->human_name = 'Search Articles';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Search ddd';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Champ: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_search_node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Champ: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_search_node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Champ: Indexed Node: Type de contenu */
  $handler->display->display_options['fields']['field_article_type']['id'] = 'field_article_type';
  $handler->display->display_options['fields']['field_article_type']['table'] = 'search_api_index_search_node';
  $handler->display->display_options['fields']['field_article_type']['field'] = 'field_article_type';
  $handler->display->display_options['fields']['field_article_type']['label'] = 'Type';
  $handler->display->display_options['fields']['field_article_type']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_article_type']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_article_type']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_article_type']['bypass_access'] = 0;
  /* Champ: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Lire la suite';
  /* Champ: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Lien';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[view_node]<span class="blue">/</span>';
  /* Champ: Indexed Node: Image principale */
  $handler->display->display_options['fields']['field_article_logo']['id'] = 'field_article_logo';
  $handler->display->display_options['fields']['field_article_logo']['table'] = 'search_api_index_search_node';
  $handler->display->display_options['fields']['field_article_logo']['field'] = 'field_article_logo';
  $handler->display->display_options['fields']['field_article_logo']['label'] = 'Image';
  $handler->display->display_options['fields']['field_article_logo']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_article_logo']['view_mode'] = 'title';
  $handler->display->display_options['fields']['field_article_logo']['bypass_access'] = 0;
  /* Filtre contextuel: Indexed Node: Title */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'search_api_index_search_node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['title']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['title']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['title']['not'] = 0;
  /* Filtre contextuel: Indexed Node: Node ID */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'search_api_index_search_node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Critère de filtrage: Indexed Node: Item language */
  $handler->display->display_options['filters']['search_api_language']['id'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['table'] = 'search_api_index_search_node';
  $handler->display->display_options['filters']['search_api_language']['field'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['value'] = array(
    'current' => 'current',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'search-articles';
  $export['search_articles'] = $view;

  $view = new view();
  $view->name = 'search_ddd';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_search_node';
  $view->human_name = 'Search ddd';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Search ddd';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '20';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = '';
  $handler->display->display_options['style_options']['top_child_object'] = '';
  $handler->display->display_options['style_options']['plaintext_output'] = 0;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 0;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  /* Champ: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_search_node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'ID';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Champ: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_search_node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Champ: Indexed Node: Type de contenu */
  $handler->display->display_options['fields']['field_article_type']['id'] = 'field_article_type';
  $handler->display->display_options['fields']['field_article_type']['table'] = 'search_api_index_search_node';
  $handler->display->display_options['fields']['field_article_type']['field'] = 'field_article_type';
  $handler->display->display_options['fields']['field_article_type']['label'] = 'Type';
  $handler->display->display_options['fields']['field_article_type']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_article_type']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_article_type']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_article_type']['bypass_access'] = 0;
  /* Champ: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Lire la suite';
  /* Champ: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Lien';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[view_node]<span class="blue">/</span>';
  /* Champ: Indexed Node: Image principale */
  $handler->display->display_options['fields']['field_article_logo']['id'] = 'field_article_logo';
  $handler->display->display_options['fields']['field_article_logo']['table'] = 'search_api_index_search_node';
  $handler->display->display_options['fields']['field_article_logo']['field'] = 'field_article_logo';
  $handler->display->display_options['fields']['field_article_logo']['label'] = 'Image';
  $handler->display->display_options['fields']['field_article_logo']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_article_logo']['view_mode'] = 'title';
  $handler->display->display_options['fields']['field_article_logo']['bypass_access'] = 0;
  /* Filtre contextuel: Indexed Node: Title */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'search_api_index_search_node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['title']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['title']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['title']['not'] = 0;
  /* Filtre contextuel: Indexed Node: Node ID */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'search_api_index_search_node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Critère de filtrage: Indexed Node: Item language */
  $handler->display->display_options['filters']['search_api_language']['id'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['table'] = 'search_api_index_search_node';
  $handler->display->display_options['filters']['search_api_language']['field'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['value'] = array(
    'current' => 'current',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'search-ddd';
  $export['search_ddd'] = $view;

  $view = new view();
  $view->name = 'search_publication';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_search_node';
  $view->human_name = 'Search Faq';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Search ddd';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Champ: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_search_node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'ID';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Champ: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_search_node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Champ: Indexed Node: Type de contenu */
  $handler->display->display_options['fields']['field_article_type']['id'] = 'field_article_type';
  $handler->display->display_options['fields']['field_article_type']['table'] = 'search_api_index_search_node';
  $handler->display->display_options['fields']['field_article_type']['field'] = 'field_article_type';
  $handler->display->display_options['fields']['field_article_type']['label'] = 'Type';
  $handler->display->display_options['fields']['field_article_type']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_article_type']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_article_type']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_article_type']['bypass_access'] = 0;
  /* Champ: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Lire la suite';
  /* Champ: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Lien';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[view_node]<span class="blue">/</span>';
  /* Champ: Indexed Node: Image principale */
  $handler->display->display_options['fields']['field_article_logo']['id'] = 'field_article_logo';
  $handler->display->display_options['fields']['field_article_logo']['table'] = 'search_api_index_search_node';
  $handler->display->display_options['fields']['field_article_logo']['field'] = 'field_article_logo';
  $handler->display->display_options['fields']['field_article_logo']['label'] = 'Image';
  $handler->display->display_options['fields']['field_article_logo']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_article_logo']['view_mode'] = 'title';
  $handler->display->display_options['fields']['field_article_logo']['bypass_access'] = 0;
  /* Champ: Indexed Node: Type de contenu */
  $handler->display->display_options['fields']['field_article_type_1']['id'] = 'field_article_type_1';
  $handler->display->display_options['fields']['field_article_type_1']['table'] = 'search_api_index_search_node';
  $handler->display->display_options['fields']['field_article_type_1']['field'] = 'field_article_type';
  $handler->display->display_options['fields']['field_article_type_1']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_article_type_1']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_article_type_1']['bypass_access'] = 0;
  /* Filtre contextuel: Indexed Node: Title */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'search_api_index_search_node';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['title']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['title']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['title']['not'] = 0;
  /* Filtre contextuel: Indexed Node: Node ID */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'search_api_index_search_node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Critère de filtrage: Indexed Node: Item language */
  $handler->display->display_options['filters']['search_api_language']['id'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['table'] = 'search_api_index_search_node';
  $handler->display->display_options['filters']['search_api_language']['field'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['value'] = array(
    'current' => 'current',
  );
  /* Critère de filtrage: Indexed Node: Type de contenu */
  $handler->display->display_options['filters']['field_article_type']['id'] = 'field_article_type';
  $handler->display->display_options['filters']['field_article_type']['table'] = 'search_api_index_search_node';
  $handler->display->display_options['filters']['field_article_type']['field'] = 'field_article_type';
  $handler->display->display_options['filters']['field_article_type']['value'] = array(
    23 => '23',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'search-faq';
  $export['search_publication'] = $view;

  $view = new view();
  $view->name = 'view_search_publication';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_search_publication';
  $view->human_name = 'Search Publication';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Search Publication';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Champ: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_search_publication';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Champ: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_search_publication';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Champ: Indexed Node: Type de contenu */
  $handler->display->display_options['fields']['field_article_type']['id'] = 'field_article_type';
  $handler->display->display_options['fields']['field_article_type']['table'] = 'search_api_index_search_publication';
  $handler->display->display_options['fields']['field_article_type']['field'] = 'field_article_type';
  $handler->display->display_options['fields']['field_article_type']['label'] = '';
  $handler->display->display_options['fields']['field_article_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_article_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_type']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_article_type']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_article_type']['bypass_access'] = 0;
  /* Champ: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = 'Lien';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'search-publication';
  $export['view_search_publication'] = $view;

  return $export;
}
