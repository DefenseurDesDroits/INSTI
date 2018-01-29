<?php
/**
 * @file
 * ddd_ct_structure.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ddd_ct_structure_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional_information|node|ct_structure|form';
  $field_group->group_name = 'group_additional_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ct_structure';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Additional information',
    'weight' => '4',
    'children' => array(
      0 => 'field_structure_label',
      1 => 'field_structure_second_label',
      2 => 'field_structure_postal_box',
      3 => 'field_structure_phone',
      4 => 'field_structure_fax',
      5 => 'field_delegate_departement_code',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-additional-information field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_additional_information|node|ct_structure|form'] = $field_group;

  return $export;
}
