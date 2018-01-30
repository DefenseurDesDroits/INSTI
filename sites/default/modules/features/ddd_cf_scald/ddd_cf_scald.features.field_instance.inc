<?php
/**
 * @file
 * ddd_cf_scald.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ddd_cf_scald_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'scald_atom-file-field_scald_motscles'
  $field_instances['scald_atom-file-field_scald_motscles'] = array(
    'bundle' => 'file',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'scald_atom',
    'field_name' => 'field_scald_motscles',
    'label' => 'Mots clés',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'scald_atom-file-field_scald_typepdf'
  $field_instances['scald_atom-file-field_scald_typepdf'] = array(
    'bundle' => 'file',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'scald_atom',
    'field_name' => 'field_scald_typepdf',
    'label' => 'Type de PDF',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => -1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Mots clés');
  t('Type de PDF');

  return $field_instances;
}
