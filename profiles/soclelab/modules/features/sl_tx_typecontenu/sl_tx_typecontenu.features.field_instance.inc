<?php
/**
 * @file
 * sl_tx_typecontenu.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function sl_tx_typecontenu_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-v_type-field_taxo_logo'
  $field_instances['taxonomy_term-v_type-field_taxo_logo'] = array(
    'bundle' => 'v_type',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'atom_reference',
        'settings' => array(
          'link' => 0,
          'override' => 0,
        ),
        'type' => 'title',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'atom_reference',
        'settings' => array(
          'link' => 0,
          'override' => 0,
        ),
        'type' => 'title',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_taxo_logo',
    'label' => 'Logo de la taxonomie',
    'required' => 0,
    'settings' => array(
      'referencable_types' => array(
        'file' => 0,
        'image' => 'image',
        'video' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'atom_reference',
      'settings' => array(
        'context' => 'sdl_editor_representation',
      ),
      'type' => 'atom_reference_textfield',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'taxonomy_term-v_type-field_taxo_typeasso'
  $field_instances['taxonomy_term-v_type-field_taxo_typeasso'] = array(
    'bundle' => 'v_type',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_taxo_typeasso',
    'label' => 'Type de contenu associé',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 36,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Logo de la taxonomie');
  t('Type de contenu associé');

  return $field_instances;
}
