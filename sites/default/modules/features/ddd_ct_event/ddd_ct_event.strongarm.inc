<?php
/**
 * @file
 * ddd_ct_event.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ddd_ct_event_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_expand_fieldset_evenement';
  $strongarm->value = '0';
  $export['scheduler_expand_fieldset_evenement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_enable_evenement';
  $strongarm->value = 1;
  $export['scheduler_publish_enable_evenement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_past_date_evenement';
  $strongarm->value = 'error';
  $export['scheduler_publish_past_date_evenement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_required_evenement';
  $strongarm->value = 0;
  $export['scheduler_publish_required_evenement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_revision_evenement';
  $strongarm->value = 0;
  $export['scheduler_publish_revision_evenement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_publish_touch_evenement';
  $strongarm->value = 0;
  $export['scheduler_publish_touch_evenement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_enable_evenement';
  $strongarm->value = 0;
  $export['scheduler_unpublish_enable_evenement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_required_evenement';
  $strongarm->value = 0;
  $export['scheduler_unpublish_required_evenement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_unpublish_revision_evenement';
  $strongarm->value = 0;
  $export['scheduler_unpublish_revision_evenement'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scheduler_use_vertical_tabs_evenement';
  $strongarm->value = '1';
  $export['scheduler_use_vertical_tabs_evenement'] = $strongarm;

  return $export;
}
