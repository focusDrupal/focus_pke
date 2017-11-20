<?php
/**
 * @file
 * focus_repository_validation_process.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function focus_repository_validation_process_user_default_roles() {
  $roles = array();

  // Exported role: repository evaluator.
  $roles['repository evaluator'] = (object) array(
    'name' => 'repository evaluator',
    'weight' => 5,
  );

  // Exported role: repository manager.
  $roles['repository manager'] = (object) array(
    'name' => 'repository manager',
    'weight' => 6,
  );

  return $roles;
}
