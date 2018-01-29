<?php
/**
 * @file
 * ddd_vu_actualite.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ddd_vu_actualite_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: views_view
  $overrides["views_view.vue_actualites.display|page_actualites|display_options|filters|language"] = array(
    'id' => 'language',
    'table' => 'node',
    'field' => 'language',
    'value' => array(
      '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
      'und' => 'und',
    ),
  );

 return $overrides;
}
