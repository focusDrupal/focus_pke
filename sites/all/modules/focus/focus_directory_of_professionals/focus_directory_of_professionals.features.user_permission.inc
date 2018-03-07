<?php
/**
 * @file
 * focus_directory_of_professionals.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function focus_directory_of_professionals_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create any focus_accept_professionals bean'.
  $permissions['create any focus_accept_professionals bean'] = array(
    'name' => 'create any focus_accept_professionals bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any why_join_us bean'.
  $permissions['create any why_join_us bean'] = array(
    'name' => 'create any why_join_us bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any focus_accept_professionals bean'.
  $permissions['delete any focus_accept_professionals bean'] = array(
    'name' => 'delete any focus_accept_professionals bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any why_join_us bean'.
  $permissions['delete any why_join_us bean'] = array(
    'name' => 'delete any why_join_us bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any focus_accept_professionals bean'.
  $permissions['edit any focus_accept_professionals bean'] = array(
    'name' => 'edit any focus_accept_professionals bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any why_join_us bean'.
  $permissions['edit any why_join_us bean'] = array(
    'name' => 'edit any why_join_us bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any focus_accept_professionals bean'.
  $permissions['view any focus_accept_professionals bean'] = array(
    'name' => 'view any focus_accept_professionals bean',
    'roles' => array(
      'administrator' => 'administrator',
      'repository manager' => 'repository manager',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any why_join_us bean'.
  $permissions['view any why_join_us bean'] = array(
    'name' => 'view any why_join_us bean',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'contributor' => 'contributor',
      'editor' => 'editor',
      'editorial team member' => 'editorial team member',
      'elder people' => 'elder people',
      'focus partner' => 'focus partner',
      'healthcare professional' => 'healthcare professional',
      'organization' => 'organization',
      'policy makers' => 'policy makers',
      'repository evaluator' => 'repository evaluator',
      'repository manager' => 'repository manager',
    ),
    'module' => 'bean',
  );

  return $permissions;
}
