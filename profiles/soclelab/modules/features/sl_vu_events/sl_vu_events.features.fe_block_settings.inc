<?php
/**
 * @file
 * sl_vu_events.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function sl_vu_events_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-vue_events-block_event_sidebar'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'vue_events-block_event_sidebar',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'contact',
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
        'region' => 'sidebar',
        'status' => 1,
        'theme' => 'socle_lab',
        'weight' => -13,
      ),
      'soclelab_ddd' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'soclelab_ddd',
        'weight' => -13,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
