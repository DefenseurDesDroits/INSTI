<?php
/**
 * @file
 * sl_tx_typecontenu.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function sl_tx_typecontenu_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_taxo_logo'
  $field_bases['field_taxo_logo'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_taxo_logo',
    'foreign keys' => array(),
    'indexes' => array(
      'sid' => array(
        0 => 'sid',
      ),
    ),
    'locked' => 0,
    'module' => 'atom_reference',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'atom_reference',
  );

  // Exported field_base: 'field_taxo_typeasso'
  $field_bases['field_taxo_typeasso'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_taxo_typeasso',
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
        'article' => 'Article',
        'article_simple' => 'Article simple',
        'decision_reg' => 'Décision',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
