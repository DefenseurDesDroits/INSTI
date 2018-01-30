<?php
/**
 * @file
 * ddd_ct_event.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ddd_ct_event_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_instance
  $overrides["field_instance.node-evenement-field_event_body.display|liste_accueil_small"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-evenement-field_event_body.display|vignette_related"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-evenement-field_event_body.settings|dnd_enabled"] = 1;
  $overrides["field_instance.node-evenement-field_event_body.widget|weight"] = 7;
  $overrides["field_instance.node-evenement-field_event_date.display|liste_accueil_small"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-evenement-field_event_date.display|vignette_related"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-evenement-field_event_date.required"] = 1;
  $overrides["field_instance.node-evenement-field_event_descriptif.display|liste_accueil_small"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-evenement-field_event_descriptif.display|vignette_related"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-evenement-field_event_descriptif.widget|weight"] = 6;
  $overrides["field_instance.node-evenement-field_event_lieu.display|liste_accueil_small"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-evenement-field_event_lieu.display|vignette_related"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-evenement-field_event_lieu.required"] = 1;
  $overrides["field_instance.node-evenement-field_event_logo.display|liste_accueil_small"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );
  $overrides["field_instance.node-evenement-field_event_logo.display|vignette_related"] = array(
    'label' => 'above',
    'settings' => array(),
    'type' => 'hidden',
    'weight' => 0,
  );

 return $overrides;
}
