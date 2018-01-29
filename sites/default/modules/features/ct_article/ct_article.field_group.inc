<?php
/**
 * @file
 * ct_article.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ct_article_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_article_taxo|node|article|form';
  $field_group->group_name = 'group_article_taxo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'article';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Gestion des taxonomies',
    'weight' => '4',
    'children' => array(
      0 => 'field_article_theme',
      1 => 'field_article_keyword',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-article-taxo field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_article_taxo|node|article|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Gestion des taxonomies');

  return $field_groups;
}
