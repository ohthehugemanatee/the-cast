<?php

/**
 * @file
 * Drupal site-specific configuration file.
 */

$databases = [];
$update_free_access = FALSE;
$drupal_hash_salt = '';
// Set Drupal not to check for HTTP connectivity.
$conf['drupal_http_request_fails'] = FALSE;

// Platform.sh settings.
if (file_exists(__DIR__ . '/settings.platformsh.php')) {
  require_once(__DIR__ . '/settings.platformsh.php');
}

// Local development settings.
if (getenv('LOCAL_DEVELOPMENT')) {
  include_once('local.settings.php');
}
