<?php
/**
 * @file
 * ddd_cf_permission.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ddd_cf_permission_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: user_permission
  $overrides["user_permission.access all views.roles|administrator"]["DELETED"] = TRUE;
  $overrides["user_permission.access all views.roles|contributor"]["DELETED"] = TRUE;
  $overrides["user_permission.access all views.roles|validator"]["DELETED"] = TRUE;
  $overrides["user_permission.administer features.roles|administrator"]["DELETED"] = TRUE;
  $overrides["user_permission.administer languages.roles|administrator"]["DELETED"] = TRUE;
  $overrides["user_permission.administer menu.roles|administrator"]["DELETED"] = TRUE;
  $overrides["user_permission.administer nodes.roles|administrator"] = 'administrator';
  $overrides["user_permission.administer nodes.roles|contributor"] = 'contributor';
  $overrides["user_permission.administer permissions.roles|administrator"]["DELETED"] = TRUE;
  $overrides["user_permission.administer scald atoms.roles|administrator"]["DELETED"] = TRUE;
  $overrides["user_permission.administer search.roles|administrator"] = 'administrator';
  $overrides["user_permission.administer site configuration.roles|administrator"]["DELETED"] = TRUE;
  $overrides["user_permission.administer software updates.roles|administrator"]["DELETED"] = TRUE;
  $overrides["user_permission.administer themes.roles|administrator"]["DELETED"] = TRUE;
  $overrides["user_permission.administer url aliases.roles|administrator"] = 'administrator';
  $overrides["user_permission.bypass atom access restrictions.roles|administrator"]["DELETED"] = TRUE;
  $overrides["user_permission.create accueil content.roles|administrator"] = 'administrator';
  $overrides["user_permission.delete own accueil content.roles|administrator"] = 'administrator';
  $overrides["user_permission.delete own article content.roles|contributor"] = 'contributor';
  $overrides["user_permission.delete own atom.roles|contributor"]["DELETED"] = TRUE;
  $overrides["user_permission.delete own atom.roles|taxonomy contributor"] = 'taxonomy contributor';
  $overrides["user_permission.delete own page content.roles|contributor"] = 'contributor';
  $overrides["user_permission.delete terms in v_theme.roles|administrator"]["DELETED"] = TRUE;
  $overrides["user_permission.delete terms in v_theme.roles|taxonomy contributor"] = 'taxonomy contributor';
  $overrides["user_permission.delete terms in v_type.roles|administrator"]["DELETED"] = TRUE;
  $overrides["user_permission.edit any article content.roles|contributor"] = 'contributor';
  $overrides["user_permission.edit any page content.roles|contributor"] = 'contributor';
  $overrides["user_permission.edit terms in v_theme.roles|administrator"]["DELETED"] = TRUE;
  $overrides["user_permission.edit terms in v_theme.roles|taxonomy contributor"] = 'taxonomy contributor';
  $overrides["user_permission.edit terms in v_type.roles|administrator"]["DELETED"] = TRUE;
  $overrides["user_permission.restrict atom access.roles|administrator"]["DELETED"] = TRUE;
  $overrides["user_permission.revert revisions.roles|contributor"] = 'contributor';
  $overrides["user_permission.skip CAPTCHA.roles|administrator"] = 'administrator';
  $overrides["user_permission.skip CAPTCHA.roles|developer"] = 'developer';
  $overrides["user_permission.translate interface.roles|contributor"] = 'contributor';
  $overrides["user_permission.view revisions.roles|contributor"] = 'contributor';

 return $overrides;
}
