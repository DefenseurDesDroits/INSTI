<?php
/**
 * @file
 * sl_cf_genconf.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sl_cf_genconf_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
