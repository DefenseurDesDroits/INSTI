<?php
/**
 * @file
 * feature_partenaires.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function feature_partenaires_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__partenaires';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'vignette_related' => array(
        'custom_settings' => TRUE,
      ),
      'competence' => array(
        'custom_settings' => TRUE,
      ),
      'teaser_v2' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'email_plain' => array(
        'custom_settings' => FALSE,
      ),
      'email_html' => array(
        'custom_settings' => FALSE,
      ),
      'email_textalt' => array(
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
        'locations' => array(
          'weight' => '2',
        ),
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__partenaires'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_partenaires';
  $strongarm->value = 1;
  $export['i18n_node_extended_partenaires'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_partenaires';
  $strongarm->value = array();
  $export['i18n_node_options_partenaires'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_partenaires';
  $strongarm->value = '0';
  $export['language_content_type_partenaires'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_partenaires';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_partenaires'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_partenaires';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_partenaires'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_partenaires';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_partenaires'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_partenaires';
  $strongarm->value = '1';
  $export['node_preview_partenaires'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_partenaires';
  $strongarm->value = 0;
  $export['node_submitted_partenaires'] = $strongarm;

  return $export;
}
