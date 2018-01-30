<?php
/**
 * @file
 * ddd_cf_images.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ddd_cf_images_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_jpeg_quality';
  $strongarm->value = '100';
  $export['image_jpeg_quality'] = $strongarm;

  return $export;
}
