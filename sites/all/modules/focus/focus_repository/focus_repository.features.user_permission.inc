<?php
/**
 * @file
 * focus_repository.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function focus_repository_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create any repository_tutorial bean'.
  $permissions['create any repository_tutorial bean'] = array(
    'name' => 'create any repository_tutorial bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'delete any repository_tutorial bean'.
  $permissions['delete any repository_tutorial bean'] = array(
    'name' => 'delete any repository_tutorial bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'edit any repository_tutorial bean'.
  $permissions['edit any repository_tutorial bean'] = array(
    'name' => 'edit any repository_tutorial bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'view any repository_tutorial bean'.
  $permissions['view any repository_tutorial bean'] = array(
    'name' => 'view any repository_tutorial bean',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'editorial team member' => 'editorial team member',
    ),
    'module' => 'bean',
  );

  return $permissions;
}
