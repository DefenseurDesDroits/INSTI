<?php
/**
 * @file
 * feature_partenaires.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_partenaires_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'partenaires';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Partenaires';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Partenaires';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'infinite_scroll';
  $handler->display->display_options['pager']['options']['items_per_page'] = '16';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'col-xs-12 col-sm-6 col-md-6 ';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div style="text-align:center">
<h4>Le Défenseur des droits s\'engage avec différents partenaires.</h4>
<p style="text-align:center">Il peut signer des conventions avec différents acteurs (<a href="">associatifs</a> ou <a href="">professionnels</a>) qui interviennent dans ses champs de compétences.</p>
<p style="text-align:center">Dans le cadre de sa mission de promotion de l\'accès aux droits, les conventions conclues par le Défenseur lui permettent :</p>
<ul>
<li>de faciliter le traitement des réclamations dont il est saisi;</li>
<li>d\'aider les organismes qui veulent développer des actions de sensibilisations et/ou de formation.</li>
</ul>
<h4>Conventions et protocoles signés par le Défenseur des droits avec les organismes partenaires.</h4>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Field: Content: Logo partenaire */
  $handler->display->display_options['fields']['field_logo_partenaire']['id'] = 'field_logo_partenaire';
  $handler->display->display_options['fields']['field_logo_partenaire']['table'] = 'field_data_field_logo_partenaire';
  $handler->display->display_options['fields']['field_logo_partenaire']['field'] = 'field_logo_partenaire';
  $handler->display->display_options['fields']['field_logo_partenaire']['label'] = '';
  $handler->display->display_options['fields']['field_logo_partenaire']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_logo_partenaire']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_logo_partenaire']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo_partenaire']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Site */
  $handler->display->display_options['fields']['field_site']['id'] = 'field_site';
  $handler->display->display_options['fields']['field_site']['table'] = 'field_data_field_site';
  $handler->display->display_options['fields']['field_site']['field'] = 'field_site';
  $handler->display->display_options['fields']['field_site']['label'] = '';
  $handler->display->display_options['fields']['field_site']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_site']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_site']['click_sort_column'] = 'url';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'En savoir plus';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="row">
<div class="col-xs-6 col-sm-4 col-md-3">
<div class="img-partenaire">[field_logo_partenaire]</div>
</div>
<div class="col-xs-6 col-sm-8 col-md-9">
<div class="titre-presse">[title]</div>
<div class="site-partenaire">[field_site]</div>
<p class="esp">[view_node]<p class="lls slash-blue"></p>
</div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'partenaires' => 'partenaires',
  );

  /* Display: Partenaires du DDD */
  $handler = $view->new_display('block', 'Partenaires du DDD', 'block');

  /* Display: Page partenaires du DDD */
  $handler = $view->new_display('page', 'Page partenaires du DDD', 'page_1');
  $handler->display->display_options['path'] = 'partenaires';
  $export['partenaires'] = $view;

  return $export;
}
