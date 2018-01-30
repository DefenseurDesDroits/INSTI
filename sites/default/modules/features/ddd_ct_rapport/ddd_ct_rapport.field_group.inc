<?php
/**
 * @file
 * ddd_ct_rapport.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ddd_ct_rapport_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ct_rapport_contenu_princ|node|rapports|form';
  $field_group->group_name = 'group_ct_rapport_contenu_princ';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ct_rapport';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contenu du rapport',
    'weight' => '4',
    'children' => array(
      0 => 'field_article_document',
      1 => 'field_rapport_first_label',
      2 => 'field_article_body',
      3 => 'field_article_descriptif',
      4 => 'field_article_logo',
      5 => 'field_article_libelle_section',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ct-rapport-contenu-princ field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ct_rapport_contenu_princ|node|rapports|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ct_rapport_theme_motccles|node|rapports|form';
  $field_group->group_name = 'group_ct_rapport_theme_motccles';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ct_rapport';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Thématique et mot-clés',
    'weight' => '3',
    'children' => array(
      0 => 'field_article_type',
      1 => 'field_article_keyword',
      2 => 'field_article_theme',
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
  $export['group_ct_rapport_theme_motccles|node|rapports|form'] = $field_group;

  return $export;
}
