<?php
/**
 * @file
 * ddd_vu_agenda.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function ddd_vu_agenda_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['ddd_agenda-block_agenda'] = array(
    'cache' => 1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'block_agenda',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'ddd_agenda',
    'node_types' => array(),
    'pages' => 'agenda',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'socle_lab' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'socle_lab',
        'weight' => 0,
      ),
      'soclelab_ddd' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'soclelab_ddd',
        'weight' => -31,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
