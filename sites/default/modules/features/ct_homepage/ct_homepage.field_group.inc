<?php
/**
 * @file
 * ct_homepage.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ct_homepage_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_home_pointvue|node|accueil|form';
  $field_group->group_name = 'group_home_pointvue';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'accueil';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Point de vue du défenseur des droits',
    'weight' => '7',
    'children' => array(
      0 => 'field_home_pointvue',
      1 => 'field_home_pointvue_logo',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-home-pointvue field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_home_pointvue|node|accueil|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_home_ressource_rapport|node|accueil|form';
  $field_group->group_name = 'group_home_ressource_rapport';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'accueil';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Bloc ressources et rapport',
    'weight' => '12',
    'children' => array(
      0 => 'field_rapport_annuel',
      1 => 'field_ressources_juridiques',
      2 => 'field_home_img_resss_juridiques',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-home-ressource-rapport field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_home_ressource_rapport|node|accueil|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Bloc ressources et rapport');
  t('Point de vue du défenseur des droits');

  return $field_groups;
}
