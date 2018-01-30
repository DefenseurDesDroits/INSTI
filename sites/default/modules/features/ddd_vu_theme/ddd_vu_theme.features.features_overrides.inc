<?php
/**
 * @file
 * ddd_vu_theme.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ddd_vu_theme_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: views_view
  $overrides["views_view.ddd_vu_theme.display|block_autorite_selected"]["DELETED"] = TRUE;
  $overrides["views_view.ddd_vu_theme.display|block_vu_theme_selected"]["DELETED"] = TRUE;

 return $overrides;
}
