<?php
/**
 * @file
 * ddd_ct_office.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ddd_ct_office_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__ct_office';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
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
        'custom_settings' => TRUE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'vignette_related' => array(
        'custom_settings' => TRUE,
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
          'weight' => '30',
        ),
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__ct_office'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_ct_office';
  $strongarm->value = '0';
  $export['language_content_type_ct_office'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_ct_office';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_ct_office'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_ct_office';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_ct_office'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ct_office';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_ct_office'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_ct_office';
  $strongarm->value = '1';
  $export['node_preview_ct_office'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_ct_office';
  $strongarm->value = 1;
  $export['node_submitted_ct_office'] = $strongarm;

  return $export;
}
