<?php
/**
 * @file
 * sl_ct_page.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function sl_ct_page_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page_contact|node|page|form';
  $field_group->group_name = 'group_page_contact';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Spécifique à la page Contact',
    'weight' => '6',
    'children' => array(
      0 => 'field_page_contact_adresse',
      1 => 'field_page_contact_body',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-page-contact field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_page_contact|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page_taxonomy|node|page|form';
  $field_group->group_name = 'group_page_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Spécifique aux taxonomies',
    'weight' => '7',
    'children' => array(
      0 => 'field_page_vocabulary',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-page-taxonomy field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_page_taxonomy|node|page|form'] = $field_group;

  return $export;
}
