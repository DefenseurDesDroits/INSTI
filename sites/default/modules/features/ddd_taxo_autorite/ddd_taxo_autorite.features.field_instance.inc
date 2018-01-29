<?php
/**
 * @file
 * ddd_taxo_autorite.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ddd_taxo_autorite_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-autoriter-field_annee'
  $field_instances['taxonomy_term-autoriter-field_annee'] = array(
    'bundle' => 'autoriter',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_annee',
    'label' => 'Années',
    'required' => 0,
    'settings' => array(
      'context' => 'debug',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 31,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Années');

  return $field_instances;
}
