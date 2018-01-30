<?php
/**
 * @file
 * ddd_ct_delegate.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ddd_ct_delegate_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_private_informations|node|delegate|form';
  $field_group->group_name = 'group_private_informations';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ct_delegate';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Private informations',
    'weight' => '40',
    'children' => array(
      0 => 'field_delegate_departement_code',
      1 => 'field_delegate_job_id',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-private-informations field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_private_informations|node|delegate|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_public_informations|node|delegate|form';
  $field_group->group_name = 'group_public_informations';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ct_delegate';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Public informations',
    'weight' => '40',
    'children' => array(
      0 => 'field_delegate_name',
      1 => 'field_delegate_last_name',
      2 => 'field_delegate_email',
      3 => 'field_delegate_civilite',
      4 => 'field_delegate_picture',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-public-informations field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_public_informations|node|delegate|form'] = $field_group;

  return $export;
}
