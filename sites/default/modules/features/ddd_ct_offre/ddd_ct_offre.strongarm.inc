<?php
/**
 * @file
 * ddd_ct_offre.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ddd_ct_offre_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__ct_offre';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'vignette_related' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'liste_accueil_small' => array(
        'custom_settings' => TRUE,
      ),
      'vignette_accueil' => array(
        'custom_settings' => FALSE,
      ),
      'liste_accueil' => array(
        'custom_settings' => FALSE,
      ),
      'vignette_carousel' => array(
        'custom_settings' => FALSE,
      ),
      'vignette_sidebar' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'locations' => array(
          'weight' => '11',
        ),
        'title' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '10',
        ),
        'language' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__ct_offre'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_ct_offre';
  $strongarm->value = '12';
  $export['i18n_node_extended_ct_offre'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_ct_offre';
  $strongarm->value = array();
  $export['i18n_node_options_ct_offre'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_ct_offre';
  $strongarm->value = '2';
  $export['language_content_type_ct_offre'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_ct_offre';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_ct_offre'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_ct_offre';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_ct_offre'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ct_offre';
  $strongarm->value = array();
  $export['node_options_ct_offre'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_ct_offre';
  $strongarm->value = '0';
  $export['node_preview_ct_offre'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_ct_offre';
  $strongarm->value = 0;
  $export['node_submitted_ct_offre'] = $strongarm;

  return $export;
}
