<?php
// @file Example development settings.
$databases = array (
  'default' =>
  array (
    'default' =>
    array (
      'database' => 'example',
      'username' => 'example',
      'password' => 'example',
      'host' => '127.0.0.1',
      'port' => '',
      'driver' => 'mysql',
      'prefix' => '',
    ),
  ),
);

$conf['cache'] = '0';
$conf['file_private_path'] = '../private';
$conf['file_temporary_path'] = '/tmp';
$conf['securepages_enable'] = FALSE;
$conf['https'] = FALSE;
$conf['stage_file_proxy_origin'] = 'https://example.com';

$conf['cache_backends'][] = 'sites/all/modules/memcache/memcache.inc';
$conf['cache_default_class'] = 'MemCacheDrupal';
$conf['cache_class_cache_form'] = 'DrupalDatabaseCache';
$conf['memcache_key_prefix'] = 'example';
