<?php
/**
 * @file
 * sl_tx_themes.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function sl_tx_themes_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-v_theme-field_taxo_logo'
  $field_instances['taxonomy_term-v_theme-field_taxo_logo'] = array(
    'bundle' => 'v_theme',
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
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Logo de la taxonomie');

  return $field_instances;
}
