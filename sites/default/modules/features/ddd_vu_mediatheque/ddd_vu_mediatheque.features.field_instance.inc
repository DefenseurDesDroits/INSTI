<?php
/**
 * @file
 * ddd_vu_mediatheque.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ddd_vu_mediatheque_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'scald_atom-image-field_scald_mediatheque'
  $field_instances['scald_atom-image-field_scald_mediatheque'] = array(
    'bundle' => 'image',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Doit apparaitre dans la médiathèque',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'scald_atom',
    'field_name' => 'field_scald_mediatheque',
    'label' => 'Mediatheque',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => -1,
    ),
  );

  // Exported field_instance: 'scald_atom-video-field_scald_mediatheque'
  $field_instances['scald_atom-video-field_scald_mediatheque'] = array(
    'bundle' => 'video',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Doit apparaitre dans la médiathèque',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'scald_atom',
    'field_name' => 'field_scald_mediatheque',
    'label' => 'Mediatheque',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Doit apparaitre dans la médiathèque');
  t('Mediatheque');

  return $field_instances;
}
