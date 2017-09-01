<?php

/**
 * @file
 * Drupal site configuration for local development.
 */


// DB connection.
$databases['default']['default'] = array(
  'driver' => getenv('DB_DRIVER'),
  'database' => getenv('DB_NAME'),
  'username' => getenv('DB_USER'),
  'password' => getenv('DB_PASSWORD'),
  'host' => getenv('DB_HOST'),
);

### Base URL
if (getenv('AMAZEEIO_BASE_URL')) {
  $base_url = 'http://localhost';
}

// File paths.
$conf['file_private_path'] = 'sites/default/files/private';
$conf['file_temporary_path'] = '/tmp';
// Stage file proxy source.
$conf['stage_file_proxy_origin'] = 'https://thecastmusic.com/';
// Disable cache.
$conf['cache'] = '0';
// Disable HTTPS.
$conf['securepages_enable'] = FALSE;
$conf['https'] = FALSE;

