<?php
/**
 * @file
 * ddd_feature_new_search.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ddd_feature_new_search_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'search_categorie';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_search_all';
  $view->human_name = 'Search Categorie';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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
  /* Field: Indexed Node: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_search_all';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'id';
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_search_all';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = 'link';
  $handler->display->display_options['fields']['view_node']['text'] = 'Read more';
  /* Field: Indexed Node: Type de contenu */
  $handler->display->display_options['fields']['field_article_type']['id'] = 'field_article_type';
  $handler->display->display_options['fields']['field_article_type']['table'] = 'search_api_index_search_all';
  $handler->display->display_options['fields']['field_article_type']['field'] = 'field_article_type';
  $handler->display->display_options['fields']['field_article_type']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_article_type']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_article_type']['bypass_access'] = 0;
  /* Contextual filter: Indexed Node: Title */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'search_api_index_search_all';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['title']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['title']['not'] = 0;
  /* Filter criterion: Indexed Node: Item language */
  $handler->display->display_options['filters']['search_api_language']['id'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['table'] = 'search_api_index_search_all';
  $handler->display->display_options['filters']['search_api_language']['field'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['value'] = array(
    'current' => 'current',
  );

  /* Display: Intégré */
  $handler = $view->new_display('embed', 'Intégré', 'embed_1');

  /* Display: Search Cat - With Title */
  $handler = $view->new_display('page', 'Search Cat - With Title', 'page_1');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Indexed Node: Title */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'search_api_index_search_all';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['title']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['title']['not'] = 0;
  /* Contextual filter: Indexed Node: Type de contenu */
  $handler->display->display_options['arguments']['field_article_type']['id'] = 'field_article_type';
  $handler->display->display_options['arguments']['field_article_type']['table'] = 'search_api_index_search_all';
  $handler->display->display_options['arguments']['field_article_type']['field'] = 'field_article_type';
  $handler->display->display_options['arguments']['field_article_type']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['field_article_type']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_article_type']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_article_type']['break_phrase'] = 1;
  $handler->display->display_options['arguments']['field_article_type']['not'] = 0;
  $handler->display->display_options['path'] = 'search-cat/%/%';

  /* Display: Search Cat - Whithout Title */
  $handler = $view->new_display('page', 'Search Cat - Whithout Title', 'page_2');
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Indexed Node: Type de contenu */
  $handler->display->display_options['arguments']['field_article_type']['id'] = 'field_article_type';
  $handler->display->display_options['arguments']['field_article_type']['table'] = 'search_api_index_search_all';
  $handler->display->display_options['arguments']['field_article_type']['field'] = 'field_article_type';
  $handler->display->display_options['arguments']['field_article_type']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['field_article_type']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_article_type']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_article_type']['break_phrase'] = 1;
  $handler->display->display_options['arguments']['field_article_type']['not'] = 0;
  $handler->display->display_options['path'] = 'search-cat/%';

  /* Display: Page de resultat de recherche */
  $handler = $view->new_display('embed', 'Page de resultat de recherche', 'embed_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'infinite_scroll';
  $handler->display->display_options['pager']['options']['manual_load'] = 1;
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Node: Image Accroche */
  $handler->display->display_options['fields']['field_page_image_accroche']['id'] = 'field_page_image_accroche';
  $handler->display->display_options['fields']['field_page_image_accroche']['table'] = 'search_api_index_search_all';
  $handler->display->display_options['fields']['field_page_image_accroche']['field'] = 'field_page_image_accroche';
  $handler->display->display_options['fields']['field_page_image_accroche']['label'] = 'img';
  $handler->display->display_options['fields']['field_page_image_accroche']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_page_image_accroche']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_page_image_accroche']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Indexed Node: Type de contenu */
  $handler->display->display_options['fields']['field_article_type']['id'] = 'field_article_type';
  $handler->display->display_options['fields']['field_article_type']['table'] = 'search_api_index_search_all';
  $handler->display->display_options['fields']['field_article_type']['field'] = 'field_article_type';
  $handler->display->display_options['fields']['field_article_type']['label'] = '';
  $handler->display->display_options['fields']['field_article_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_article_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_type']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_article_type']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_article_type']['bypass_access'] = 0;
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_search_all';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 1;
  /* Field: Indexed Node: Descriptif de l'article */
  $handler->display->display_options['fields']['field_article_descriptif']['id'] = 'field_article_descriptif';
  $handler->display->display_options['fields']['field_article_descriptif']['table'] = 'search_api_index_search_all';
  $handler->display->display_options['fields']['field_article_descriptif']['field'] = 'field_article_descriptif';
  $handler->display->display_options['fields']['field_article_descriptif']['label'] = '';
  $handler->display->display_options['fields']['field_article_descriptif']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_article_descriptif']['element_label_colon'] = FALSE;
  /* Field: Indexed Node: Date de publication */
  $handler->display->display_options['fields']['field_article_date']['id'] = 'field_article_date';
  $handler->display->display_options['fields']['field_article_date']['table'] = 'search_api_index_search_all';
  $handler->display->display_options['fields']['field_article_date']['field'] = 'field_article_date';
  $handler->display->display_options['fields']['field_article_date']['label'] = '';
  $handler->display->display_options['fields']['field_article_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_article_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_date']['settings'] = array(
    'format_type' => 'socle_long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read more';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="row">
<div class="col-xs-6 col-sm-4 col-md-3">
<div class="img-presse">[field_page_image_accroche]</div>
</div>
<div class="col-xs-6 col-sm-8 col-md-9">
<div class="tags-presse">[field_article_type]</div>
<div class="titre-presse">[title]</div>
<div class="desc-presse">[field_article_descriptif]</div>
<p class="date slash-blue">[field_article_date]</p><p class="lls slash-blue">[view_node]</p>
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Indexed Node: Type de contenu */
  $handler->display->display_options['arguments']['field_article_type']['id'] = 'field_article_type';
  $handler->display->display_options['arguments']['field_article_type']['table'] = 'search_api_index_search_all';
  $handler->display->display_options['arguments']['field_article_type']['field'] = 'field_article_type';
  $handler->display->display_options['arguments']['field_article_type']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['field_article_type']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_article_type']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_article_type']['break_phrase'] = 1;
  $handler->display->display_options['arguments']['field_article_type']['not'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Node: Item language */
  $handler->display->display_options['filters']['search_api_language']['id'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['table'] = 'search_api_index_search_all';
  $handler->display->display_options['filters']['search_api_language']['field'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['value'] = array(
    'current' => 'current',
    'und' => 'und',
  );
  /* Filter criterion: Indexed Node: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'search_api_index_search_all';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Rechercher :';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
    8 => 0,
  );

  /* Display: Search Publications */
  $handler = $view->new_display('page', 'Search Publications', 'page_3');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Indexed Node: Item language */
  $handler->display->display_options['filters']['search_api_language']['id'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['table'] = 'search_api_index_search_all';
  $handler->display->display_options['filters']['search_api_language']['field'] = 'search_api_language';
  $handler->display->display_options['filters']['search_api_language']['value'] = array(
    'current' => 'current',
  );
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_search_all';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'publications' => 'publications',
  );
  $handler->display->display_options['path'] = 'search-pub/%';
  $export['search_categorie'] = $view;

  return $export;
}
