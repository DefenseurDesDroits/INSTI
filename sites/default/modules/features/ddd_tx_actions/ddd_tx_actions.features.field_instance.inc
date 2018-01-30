<?php
/**
 * @file
 * ddd_tx_actions.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ddd_tx_actions_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-v_actions-field_action_filter_decision'
  $field_instances['taxonomy_term-v_actions-field_action_filter_decision'] = array(
    'bundle' => 'v_actions',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_action_filter_decision',
    'label' => 'Filtre décisions/réglements',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'taxonomy_term-v_actions-field_taxo_affichage'
  $field_instances['taxonomy_term-v_actions-field_taxo_affichage'] = array(
    'bundle' => 'v_actions',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_taxo_affichage',
    'label' => 'Mode d\'affichage',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'taxonomy_term-v_actions-field_url_redirect'
  $field_instances['taxonomy_term-v_actions-field_url_redirect'] = array(
    'bundle' => 'v_actions',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_url_redirect',
    'label' => 'Url de redirection',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_label_use_field_label' => FALSE,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 31,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Filtre décisions/réglements');
  t('Mode d\'affichage');
  t('Url de redirection');

  return $field_instances;
}
