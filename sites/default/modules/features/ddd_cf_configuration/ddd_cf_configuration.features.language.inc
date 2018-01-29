<?php
/**
 * @file
 * ddd_cf_configuration.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function ddd_cf_configuration_locale_default_languages() {
  $languages = array();

  // Exported language: fr-DC.
  $languages['fr-DC'] = array(
    'language' => 'fr-DC',
    'name' => 'French - Cognitive deficient',
    'native' => 'Français - Déficient cognitif',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n>1)',
    'domain' => '',
    'prefix' => 'fr-dc',
    'weight' => 0,
  );
  return $languages;
}
