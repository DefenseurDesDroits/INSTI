<?php
/**
 * @file
 * sl_cf_users.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function sl_cf_users_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 4,
  );

  // Exported role: contributor.
  $roles['contributor'] = array(
    'name' => 'contributor',
    'weight' => 2,
  );

  // Exported role: developer.
  $roles['developer'] = array(
    'name' => 'developer',
    'weight' => 5,
  );

  // Exported role: validator.
  $roles['validator'] = array(
    'name' => 'validator',
    'weight' => 3,
  );

  return $roles;
}
