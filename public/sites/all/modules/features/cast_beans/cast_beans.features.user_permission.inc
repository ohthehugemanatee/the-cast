<?php
/**
 * @file
 * cast_beans.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function cast_beans_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'view any banner_block bean'.
  $permissions['view any banner_block bean'] = array(
    'name' => 'view any banner_block bean',
    'roles' => array(
      'admin' => 'admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any link_block bean'.
  $permissions['view any link_block bean'] = array(
    'name' => 'view any link_block bean',
    'roles' => array(
      'admin' => 'admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any social_block bean'.
  $permissions['view any social_block bean'] = array(
    'name' => 'view any social_block bean',
    'roles' => array(
      'admin' => 'admin',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any text bean'.
  $permissions['view any text bean'] = array(
    'name' => 'view any text bean',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'bean',
  );

  return $permissions;
}
