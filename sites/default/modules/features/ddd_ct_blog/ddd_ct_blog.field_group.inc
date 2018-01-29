<?php
/**
 * @file
 * ddd_ct_blog.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ddd_ct_blog_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_blog_baspage|node|blog|form';
  $field_group->group_name = 'group_blog_baspage';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Bas de page',
    'weight' => '5',
    'children' => array(
      0 => 'field_article_ctasso',
      1 => 'field_article_galerie',
      2 => 'field_article_video',
      3 => 'field_article_document',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-blog-baspage field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_blog_baspage|node|blog|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_blog_taxo|node|blog|form';
  $field_group->group_name = 'group_blog_taxo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Gestion des Taxonomies',
    'weight' => '5',
    'children' => array(
      0 => 'field_article_keyword',
      1 => 'field_article_theme',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-blog-taxo field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_blog_taxo|node|blog|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ct_contenu_blog|node|blog|form';
  $field_group->group_name = 'group_ct_contenu_blog';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contenu du blog',
    'weight' => '4',
    'children' => array(
      0 => 'body',
      1 => 'field_article_descriptif',
      2 => 'field_article_logo',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ct-contenu-blog field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ct_contenu_blog|node|blog|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ct_rapport_theme_motccles|node|blog|form';
  $field_group->group_name = 'group_ct_rapport_theme_motccles';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Thématique et mot-clés',
    'weight' => '3',
    'children' => array(
      0 => 'field_article_keyword',
      1 => 'field_article_theme',
      2 => 'field_article_type',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ct-rapport-theme-motccles field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ct_rapport_theme_motccles|node|blog|form'] = $field_group;

  return $export;
}
