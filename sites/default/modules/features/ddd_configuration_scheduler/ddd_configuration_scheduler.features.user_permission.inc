<?php
/**
 * @file
 * ddd_configuration_scheduler.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ddd_configuration_scheduler_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer scheduler'.
  $permissions['administer scheduler'] = array(
    'name' => 'administer scheduler',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
    ),
    'module' => 'scheduler',
  );

  // Exported permission: 'schedule (un)publishing of nodes'.
  $permissions['schedule (un)publishing of nodes'] = array(
    'name' => 'schedule (un)publishing of nodes',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'developer' => 'developer',
    ),
    'module' => 'scheduler',
  );

  // Exported permission: 'view scheduled content'.
  $permissions['view scheduled content'] = array(
    'name' => 'view scheduled content',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
    ),
    'module' => 'scheduler',
  );

  return $permissions;
}
