<?php
/**
 * @file
 * ddd_cf_sitemap.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ddd_cf_sitemap_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'crumbs_node_parent_patterns';
  $strongarm->value = array(
    'article' => '',
    'ct_avis_parlement' => '',
    'blog' => '',
    'ct_delegate' => '',
    'ct_decision' => '',
    'evenement' => '',
    'faq' => '',
    'ct_marche' => '',
    'ct_office' => '',
    'ct_outils' => '',
    'accueil' => '',
    'page' => '',
    'ct_propositions_reforme' => '',
    'ct_rapport' => '',
    'ct_rapport_annuel' => '',
    'ct_section_rapport_annuel' => '[node:field-section-reference-rapport:url:path]',
    'ct_structure' => '',
    'ct_offre' => '',
  );
  $export['crumbs_node_parent_patterns'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_403';
  $strongarm->value = 'node/22';
  $export['site_403'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_404';
  $strongarm->value = 'node/12';
  $export['site_404'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_default_country';
  $strongarm->value = 'FR';
  $export['site_default_country'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'node/2';
  $export['site_frontpage'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'Le Défenseur des Droits';
  $export['site_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_slogan';
  $strongarm->value = '';
  $export['site_slogan'] = $strongarm;

  return $export;
}
