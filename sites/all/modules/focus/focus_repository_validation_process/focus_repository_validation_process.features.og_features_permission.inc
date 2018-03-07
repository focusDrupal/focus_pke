<?php
/**
 * @file
 * focus_repository_validation_process.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function focus_repository_validation_process_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:editorial_team:access group broken links report'
  $permissions['node:editorial_team:access group broken links report'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'contributor' => 'contributor',
      'publisher' => 'publisher',
      'validator' => 'validator',
    ),
  );

  // Exported og permission: 'node:editorial_team:add user'
  $permissions['node:editorial_team:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:editorial_team:administer group'
  $permissions['node:editorial_team:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:editorial_team:approve and deny subscription'
  $permissions['node:editorial_team:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:editorial_team:create page content'
  $permissions['node:editorial_team:create page content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'contributor' => 'contributor',
      'publisher' => 'publisher',
      'validator' => 'validator',
    ),
  );

  // Exported og permission: 'node:editorial_team:delete any page content'
  $permissions['node:editorial_team:delete any page content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'publisher' => 'publisher',
      'validator' => 'validator',
    ),
  );

  // Exported og permission: 'node:editorial_team:delete own page content'
  $permissions['node:editorial_team:delete own page content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'contributor' => 'contributor',
      'publisher' => 'publisher',
      'validator' => 'validator',
    ),
  );

  // Exported og permission: 'node:editorial_team:manage members'
  $permissions['node:editorial_team:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:editorial_team:manage permissions'
  $permissions['node:editorial_team:manage permissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:editorial_team:manage roles'
  $permissions['node:editorial_team:manage roles'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:editorial_team:subscribe'
  $permissions['node:editorial_team:subscribe'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:editorial_team:subscribe without approval'
  $permissions['node:editorial_team:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:editorial_team:unsubscribe'
  $permissions['node:editorial_team:unsubscribe'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:editorial_team:update any page content'
  $permissions['node:editorial_team:update any page content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'publisher' => 'publisher',
      'validator' => 'validator',
    ),
  );

  // Exported og permission: 'node:editorial_team:update group'
  $permissions['node:editorial_team:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:editorial_team:update own page content'
  $permissions['node:editorial_team:update own page content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'contributor' => 'contributor',
      'publisher' => 'publisher',
      'validator' => 'validator',
    ),
  );

  return $permissions;
}
