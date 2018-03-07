<?php
/**
 * @file
 * focus_event.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function focus_event_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create focus_event content'.
  $permissions['create focus_event content'] = array(
    'name' => 'create focus_event content',
    'roles' => array(
      'administrator' => 'administrator',
      'focus partner' => 'focus partner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any focus_event content'.
  $permissions['delete any focus_event content'] = array(
    'name' => 'delete any focus_event content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own focus_event content'.
  $permissions['delete own focus_event content'] = array(
    'name' => 'delete own focus_event content',
    'roles' => array(
      'administrator' => 'administrator',
      'focus partner' => 'focus partner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any focus_event content'.
  $permissions['edit any focus_event content'] = array(
    'name' => 'edit any focus_event content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own focus_event content'.
  $permissions['edit own focus_event content'] = array(
    'name' => 'edit own focus_event content',
    'roles' => array(
      'administrator' => 'administrator',
      'focus partner' => 'focus partner',
    ),
    'module' => 'node',
  );

  return $permissions;
}
