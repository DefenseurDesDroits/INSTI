<?php
/**
 * @file
 * ddd_vu_mediatheque.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function ddd_vu_mediatheque_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_scald_mediatheque'
  $field_bases['field_scald_mediatheque'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_scald_mediatheque',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'non',
        1 => 'oui',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  return $field_bases;
}
