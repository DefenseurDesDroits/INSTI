<?php
/**
 * @file
 * ddd_cf_blocks.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ddd_cf_blocks_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_blog';
  $strongarm->value = 0;
  $export['prev_next_node_type_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_blog_current';
  $strongarm->value = '1';
  $export['prev_next_node_type_blog_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_blog_indexing_criteria';
  $strongarm->value = 'created';
  $export['prev_next_node_type_blog_indexing_criteria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_blog_indexing_criteria_current';
  $strongarm->value = 'created';
  $export['prev_next_node_type_blog_indexing_criteria_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_blog_same_type';
  $strongarm->value = 1;
  $export['prev_next_node_type_blog_same_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_blog_same_type_current';
  $strongarm->value = '1';
  $export['prev_next_node_type_blog_same_type_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_ct_office';
  $strongarm->value = 0;
  $export['prev_next_node_type_ct_office'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_ct_office_current';
  $strongarm->value = '0';
  $export['prev_next_node_type_ct_office_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_ct_office_indexing_criteria';
  $strongarm->value = 'nid';
  $export['prev_next_node_type_ct_office_indexing_criteria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_ct_office_indexing_criteria_current';
  $strongarm->value = 'nid';
  $export['prev_next_node_type_ct_office_indexing_criteria_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_ct_office_same_type';
  $strongarm->value = 0;
  $export['prev_next_node_type_ct_office_same_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_ct_office_same_type_current';
  $strongarm->value = '0';
  $export['prev_next_node_type_ct_office_same_type_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_ct_outils';
  $strongarm->value = 0;
  $export['prev_next_node_type_ct_outils'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_ct_outils_current';
  $strongarm->value = '0';
  $export['prev_next_node_type_ct_outils_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_ct_outils_indexing_criteria';
  $strongarm->value = 'nid';
  $export['prev_next_node_type_ct_outils_indexing_criteria'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_ct_outils_indexing_criteria_current';
  $strongarm->value = 'nid';
  $export['prev_next_node_type_ct_outils_indexing_criteria_current'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_ct_outils_same_type';
  $strongarm->value = 0;
  $export['prev_next_node_type_ct_outils_same_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'prev_next_node_type_ct_outils_same_type_current';
  $strongarm->value = '0';
  $export['prev_next_node_type_ct_outils_same_type_current'] = $strongarm;

  return $export;
}
