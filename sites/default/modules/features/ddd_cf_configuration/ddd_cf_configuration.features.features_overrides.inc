<?php
/**
 * @file
 * ddd_cf_configuration.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ddd_cf_configuration_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: fe_block_settings
  $overrides["fe_block_settings.locale-language.themes|soclelab_ddd"] = array(
    'region' => '',
    'status' => 0,
    'theme' => 'soclelab_ddd',
    'weight' => -13,
  );

  // Exported overrides for: variable
  $overrides["variable.language_count.value"] = 3;

 return $overrides;
}
