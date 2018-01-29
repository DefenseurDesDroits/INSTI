<?php
/**
 * @file
 * sl_cf_menus.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function sl_cf_menus_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_evenement';
  $strongarm->value = '12';
  $export['i18n_node_extended_evenement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_evenement';
  $strongarm->value = array();
  $export['i18n_node_options_evenement'] = $strongarm;

  return $export;
}
