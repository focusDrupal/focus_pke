<?php
/**
 * @file
 * focus_repository_validation_process.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function focus_repository_validation_process_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create any focus_check_your_evaluations bean'.
  $permissions['create any focus_check_your_evaluations bean'] = array(
    'name' => 'create any focus_check_your_evaluations bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any focus_practices_uploaded bean'.
  $permissions['create any focus_practices_uploaded bean'] = array(
    'name' => 'create any focus_practices_uploaded bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'create any header_image_and_description bean'.
  $permissions['create any header_image_and_description bean'] = array(
    'name' => 'create any header_image_and_description bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'create any header_upload bean'.
  $permissions['create any header_upload bean'] = array(
    'name' => 'create any header_upload bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'delete any focus_check_your_evaluations bean'.
  $permissions['delete any focus_check_your_evaluations bean'] = array(
    'name' => 'delete any focus_check_your_evaluations bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any focus_practices_uploaded bean'.
  $permissions['delete any focus_practices_uploaded bean'] = array(
    'name' => 'delete any focus_practices_uploaded bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'delete any header_image_and_description bean'.
  $permissions['delete any header_image_and_description bean'] = array(
    'name' => 'delete any header_image_and_description bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'delete any header_upload bean'.
  $permissions['delete any header_upload bean'] = array(
    'name' => 'delete any header_upload bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'edit any focus_check_your_evaluations bean'.
  $permissions['edit any focus_check_your_evaluations bean'] = array(
    'name' => 'edit any focus_check_your_evaluations bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any focus_practices_uploaded bean'.
  $permissions['edit any focus_practices_uploaded bean'] = array(
    'name' => 'edit any focus_practices_uploaded bean',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'edit any header_image_and_description bean'.
  $permissions['edit any header_image_and_description bean'] = array(
    'name' => 'edit any header_image_and_description bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'edit any header_upload bean'.
  $permissions['edit any header_upload bean'] = array(
    'name' => 'edit any header_upload bean',
    'roles' => array(),
    'module' => 'bean',
  );

  // Exported permission: 'view any focus_check_your_evaluations bean'.
  $permissions['view any focus_check_your_evaluations bean'] = array(
    'name' => 'view any focus_check_your_evaluations bean',
    'roles' => array(
      'administrator' => 'administrator',
      'repository evaluator' => 'repository evaluator',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any focus_practices_uploaded bean'.
  $permissions['view any focus_practices_uploaded bean'] = array(
    'name' => 'view any focus_practices_uploaded bean',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
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

  // Exported permission: 'view any header_upload bean'.
  $permissions['view any header_upload bean'] = array(
    'name' => 'view any header_upload bean',
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
