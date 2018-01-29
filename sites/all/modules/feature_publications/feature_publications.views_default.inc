<?php
/**
 * @file
 * feature_publications.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_publications_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'publications';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Publications';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Publications';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'infinite_scroll';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Champ: Content: Image Accroche */
  $handler->display->display_options['fields']['field_page_image_accroche']['id'] = 'field_page_image_accroche';
  $handler->display->display_options['fields']['field_page_image_accroche']['table'] = 'field_data_field_page_image_accroche';
  $handler->display->display_options['fields']['field_page_image_accroche']['field'] = 'field_page_image_accroche';
  $handler->display->display_options['fields']['field_page_image_accroche']['label'] = '';
  $handler->display->display_options['fields']['field_page_image_accroche']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_page_image_accroche']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_page_image_accroche']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_page_image_accroche']['settings'] = array(
    'image_style' => 'presse',
    'image_link' => 'content',
  );
  /* Champ: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Champ: Content: Type de contenu */
  $handler->display->display_options['fields']['field_article_type']['id'] = 'field_article_type';
  $handler->display->display_options['fields']['field_article_type']['table'] = 'field_data_field_article_type';
  $handler->display->display_options['fields']['field_article_type']['field'] = 'field_article_type';
  $handler->display->display_options['fields']['field_article_type']['exclude'] = TRUE;
  /* Champ: Field: Descriptif court */
  $handler->display->display_options['fields']['field_article_descriptif']['id'] = 'field_article_descriptif';
  $handler->display->display_options['fields']['field_article_descriptif']['table'] = 'field_data_field_article_descriptif';
  $handler->display->display_options['fields']['field_article_descriptif']['field'] = 'field_article_descriptif';
  $handler->display->display_options['fields']['field_article_descriptif']['label'] = '';
  $handler->display->display_options['fields']['field_article_descriptif']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_article_descriptif']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_descriptif']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_article_descriptif']['settings'] = array(
    'trim_length' => '700',
  );
  /* Champ: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_type'] = '0';
  $handler->display->display_options['fields']['created']['element_label_type'] = '0';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'socle_long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Champ: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_type'] = '0';
  $handler->display->display_options['fields']['view_node']['element_label_type'] = '0';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Lire la suite';
  /* Champ: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="row">
<div class="col-xs-6 col-sm-4 col-md-3">
<div class="img-presse">[field_page_image_accroche]</div>
</div>
<div class="col-xs-6 col-sm-8 col-md-9">
<div class="theme-presse">[field_article_type]</div>
<div class="titre-presse">[title]</div>
<div class="desc-presse">[field_article_descriptif]</div>
<p class="date slash-blue">[created]<p class="lls slash-blue">[view_node]</p>
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Critère de tri: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filtre contextuel: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = TRUE;
  /* Critère de filtrage: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'publications' => 'publications',
  );
  /* Critère de filtrage: Content: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
  );

  /* Display: Block Publications */
  $handler = $view->new_display('block', 'Block Publications', 'block_publications');
  $export['publications'] = $view;

  return $export;
}
