<?php
/**
 * @file
 * ddd_cf_permission.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function ddd_cf_permission_user_default_roles() {
  $roles = array();

  // Exported role: taxonomy contributor.
  $roles['taxonomy contributor'] = array(
    'name' => 'taxonomy contributor',
    'weight' => 2,
  );

  return $roles;
}
