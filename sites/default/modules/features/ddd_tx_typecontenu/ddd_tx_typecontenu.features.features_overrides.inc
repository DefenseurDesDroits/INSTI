<?php
/**
 * @file
 * ddd_tx_typecontenu.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ddd_tx_typecontenu_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: taxonomy
  $overrides["taxonomy.v_type.hierarchy"] = 1;

 return $overrides;
}
