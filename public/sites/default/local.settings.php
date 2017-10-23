<?php

/**
 * @file
 * Drupal site configuration for local development.
 */


// DB connection.
// @todo see https://github.com/wodby/drupal-php/issues/44.
$databases['default']['default'] = array(
  'driver' => 'mysql',
  'database' => 'drupal',
  'username' => 'drupal',
  'password' => 'drupal',
  'host' => 'mariadb',
);

### Base URL
$base_url = 'http://localhost';

// File paths.
$conf['file_private_path'] = 'sites/default/files/private';
$conf['file_temporary_path'] = '/tmp';
// Stage file proxy source.
$conf['stage_file_proxy_origin'] = 'https://thecastmusic.com/';
// Disable cache.
$conf['cache'] = '0';
$conf['preprocess_css'] = 0;
$conf['preprocess_js'] = 0;
// Disable HTTPS.
$conf['securepages_enable'] = FALSE;
$conf['https'] = FALSE;

