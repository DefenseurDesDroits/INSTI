<?php
/**
 * @file
 * ddd_taxo_autorite.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function ddd_taxo_autorite_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_annee'
  $field_bases['field_annee'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_annee',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
