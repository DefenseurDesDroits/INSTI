<?php
/**
 * @file
 * sl_ct_article.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function sl_ct_article_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_article_baspage|node|article|form';
  $field_group->group_name = 'group_article_baspage';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Bas de page',
    'weight' => '7',
    'children' => array(
      0 => 'field_article_document',
      1 => 'field_article_video',
      2 => 'field_article_galerie',
      3 => 'field_article_ctasso',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-article-baspage field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_article_baspage|node|article|form'] = $field_group;

  return $export;
}
