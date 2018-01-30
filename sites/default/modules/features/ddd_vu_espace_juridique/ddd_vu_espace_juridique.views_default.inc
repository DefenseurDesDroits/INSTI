<?php
/**
 * @file
 * ddd_vu_espace_juridique.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ddd_vu_espace_juridique_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'view_espace_juridique';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Espace juridique';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Avis au parlement';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Champ: Contenu : Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Chemin */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = 'search_result';
  $handler->display->display_options['fields']['path']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Critère de tri: Champ : Date de publication (field_article_date) */
  $handler->display->display_options['sorts']['field_article_date_value']['id'] = 'field_article_date_value';
  $handler->display->display_options['sorts']['field_article_date_value']['table'] = 'field_data_field_article_date';
  $handler->display->display_options['sorts']['field_article_date_value']['field'] = 'field_article_date_value';
  $handler->display->display_options['sorts']['field_article_date_value']['order'] = 'DESC';
  /* Critère de tri: Contenu : Date de publication */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'ct_propositions_reforme' => 'ct_propositions_reforme',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Critère de filtrage: Champ : Date de publication (field_article_date) */
  $handler->display->display_options['filters']['field_article_date_value']['id'] = 'field_article_date_value';
  $handler->display->display_options['filters']['field_article_date_value']['table'] = 'field_data_field_article_date';
  $handler->display->display_options['filters']['field_article_date_value']['field'] = 'field_article_date_value';
  $handler->display->display_options['filters']['field_article_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_article_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_article_date_value']['expose']['operator_id'] = 'field_article_date_value_op';
  $handler->display->display_options['filters']['field_article_date_value']['expose']['label'] = 'Année';
  $handler->display->display_options['filters']['field_article_date_value']['expose']['operator'] = 'field_article_date_value_op';
  $handler->display->display_options['filters']['field_article_date_value']['expose']['identifier'] = 'field_article_date_value';
  $handler->display->display_options['filters']['field_article_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_article_date_value']['granularity'] = 'year';
  /* Critère de filtrage: Contenu : Themes (field_article_theme) */
  $handler->display->display_options['filters']['field_article_theme_tid']['id'] = 'field_article_theme_tid';
  $handler->display->display_options['filters']['field_article_theme_tid']['table'] = 'field_data_field_article_theme';
  $handler->display->display_options['filters']['field_article_theme_tid']['field'] = 'field_article_theme_tid';
  $handler->display->display_options['filters']['field_article_theme_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_article_theme_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_article_theme_tid']['expose']['operator_id'] = 'field_article_theme_tid_op';
  $handler->display->display_options['filters']['field_article_theme_tid']['expose']['label'] = 'Themes';
  $handler->display->display_options['filters']['field_article_theme_tid']['expose']['operator'] = 'field_article_theme_tid_op';
  $handler->display->display_options['filters']['field_article_theme_tid']['expose']['identifier'] = 'field_article_theme_tid';
  $handler->display->display_options['filters']['field_article_theme_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    7 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_article_theme_tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_article_theme_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_article_theme_tid']['vocabulary'] = 'v_theme';
  $handler->display->display_options['filters']['field_article_theme_tid']['hierarchy'] = 1;
  /* Critère de filtrage: Contenu : Titre */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Titre';
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
  );

  /* Display: Liste - Avis au parlement */
  $handler = $view->new_display('page', 'Liste - Avis au parlement', 'page_avis_parlement');
  $handler->display->display_options['path'] = 'avis-parlement';

  /* Display: Liste - Proposition de réforme */
  $handler = $view->new_display('page', 'Liste - Proposition de réforme', 'page_propositions_reforme');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Propositions de réforme';
  $handler->display->display_options['path'] = 'propositions-reforme';
  $export['view_espace_juridique'] = $view;

  return $export;
}
