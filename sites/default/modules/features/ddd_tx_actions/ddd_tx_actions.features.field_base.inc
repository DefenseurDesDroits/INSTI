<?php
/**
 * @file
 * ddd_tx_actions.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function ddd_tx_actions_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_action_filter_decision'
  $field_bases['field_action_filter_decision'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_action_filter_decision',
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
        'filter_decision' => 'Filtre des décisions',
        'filter_reglement' => 'Filtre des règlements',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
