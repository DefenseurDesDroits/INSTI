<?php
/**
 * @file
 * ddd_ct_rapport.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ddd_ct_rapport_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__ct_rapport';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'search_index' => array(
        'custom_settings' => TRUE,
      ),
      'vignette_related' => array(
        'custom_settings' => TRUE,
      ),
      'liste_accueil_small' => array(
        'custom_settings' => TRUE,
      ),
      'included_section' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
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
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'language' => array(
          'weight' => '0',
        ),
        'locations' => array(
          'weight' => '11',
        ),
        'title' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '9',
        ),
        'redirect' => array(
          'weight' => '10',
        ),
      ),
      'display' => array(
        'language' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__ct_rapport'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_ct_rapport';
  $strongarm->value = '2';
  $export['language_content_type_ct_rapport'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_ct_rapport';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_ct_rapport'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_ct_rapport';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_ct_rapport'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_ct_rapport';
  $strongarm->value = array();
  $export['node_options_ct_rapport'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_ct_rapport';
  $strongarm->value = '0';
  $export['node_preview_ct_rapport'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_ct_rapport';
  $strongarm->value = 1;
  $export['node_submitted_ct_rapport'] = $strongarm;

  return $export;
}
