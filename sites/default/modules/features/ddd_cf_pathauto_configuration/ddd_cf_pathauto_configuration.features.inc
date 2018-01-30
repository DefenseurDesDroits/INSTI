<?php
/**
 * @file
 * ddd_cf_pathauto_configuration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ddd_cf_pathauto_configuration_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
