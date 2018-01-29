<?php
/**
 * @file
 * sl_ct_accueil.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function sl_ct_accueil_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_home_carrousel|node|accueil|form';
  $field_group->group_name = 'group_home_carrousel';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'accueil';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Carrousel',
    'weight' => '1',
    'children' => array(
      0 => 'field_home_carousel_liste',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-home-carrousel field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_home_carrousel|node|accueil|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_home_highlight|node|accueil|form';
  $field_group->group_name = 'group_home_highlight';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'accueil';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Bloc mis en avant',
    'weight' => '2',
    'children' => array(
      0 => 'field_home_highlight',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-home-highlight field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_home_highlight|node|accueil|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_home_liste|node|accueil|form';
  $field_group->group_name = 'group_home_liste';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'accueil';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Liste par type',
    'weight' => '5',
    'children' => array(
      0 => 'field_home_liste_taxo',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-home-liste field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_home_liste|node|accueil|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_home_vignette|node|accueil|form';
  $field_group->group_name = 'group_home_vignette';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'accueil';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Vignettes de l\'accueil',
    'weight' => '3',
    'children' => array(
      0 => 'field_home_vignette_liste',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Vignettes de l\'accueil',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-home-vignette field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_home_vignette|node|accueil|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Bloc mis en avant');
  t('Carrousel');
  t('Liste par type');
  t('Vignettes de l\'accueil');

  return $field_groups;
}
