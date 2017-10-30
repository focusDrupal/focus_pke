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

  // Exported permission: 'create any header_image_and_description bean'.
  $permissions['create any header_image_and_description bean'] = array(
    'name' => 'create any header_image_and_description bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'delete any header_image_and_description bean'.
  $permissions['delete any header_image_and_description bean'] = array(
    'name' => 'delete any header_image_and_description bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'edit any header_image_and_description bean'.
  $permissions['edit any header_image_and_description bean'] = array(
    'name' => 'edit any header_image_and_description bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'view any header_image_and_description bean'.
  $permissions['view any header_image_and_description bean'] = array(
    'name' => 'view any header_image_and_description bean',
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
