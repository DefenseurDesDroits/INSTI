<?php
/**
 * @file
 * ddd_fe_actions.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ddd_fe_actions_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
}
