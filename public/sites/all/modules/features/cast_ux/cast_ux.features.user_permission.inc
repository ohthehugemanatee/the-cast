<?php
/**
 * @file
 * cast_ux.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function cast_ux_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer EU Cookie Compliance popup'.
  $permissions['administer EU Cookie Compliance popup'] = array(
    'name' => 'administer EU Cookie Compliance popup',
    'roles' => array(
      'admin' => 'admin',
    ),
    'module' => 'eu_cookie_compliance',
  );

  // Exported permission: 'display EU Cookie Compliance popup'.
  $permissions['display EU Cookie Compliance popup'] = array(
    'name' => 'display EU Cookie Compliance popup',
    'roles' => array(
      'admin' => 'admin',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'eu_cookie_compliance',
  );

  return $permissions;
}
