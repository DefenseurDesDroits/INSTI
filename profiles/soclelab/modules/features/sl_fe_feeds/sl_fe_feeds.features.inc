<?php
/**
 * @file
 * sl_fe_feeds.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sl_fe_feeds_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function sl_fe_feeds_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
