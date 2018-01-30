<?php
/**
 * @file
 * sl_cf_language.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sl_cf_language_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
