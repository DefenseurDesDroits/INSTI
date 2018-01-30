<?php
/**
 * @file
 * ddd_ct_proposition_reforme.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ddd_ct_proposition_reforme_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contenu_proposition|node|ct_propositions_reforme|form';
  $field_group->group_name = 'group_contenu_proposition';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ct_propositions_reforme';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contenu de la proposition',
    'weight' => '3',
    'children' => array(
      0 => 'body',
      1 => 'field_article_ctasso',
      2 => 'field_nature_proposition',
      3 => 'field_sujet',
      4 => 'field_article_document',
      5 => 'field_mission_defenseur',
      6 => 'field_statut',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-contenu-proposition field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_contenu_proposition|node|ct_propositions_reforme|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ct_rapport_theme_motccles|node|ct_propositions_reforme|form';
  $field_group->group_name = 'group_ct_rapport_theme_motccles';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'ct_propositions_reforme';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Thématique et mot-clés',
    'weight' => '2',
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
  $export['group_ct_rapport_theme_motccles|node|ct_propositions_reforme|form'] = $field_group;

  return $export;
}
