<?php
// @file development settings for thecast.
$databases = array (
  'default' =>
  array (
    'default' =>
    array (
      'database' => 'thecast',
      'username' => 'thecast',
      'password' => 'thecast',
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
$conf['stage_file_proxy_origin'] = 'http://thecastmusic.com';

$conf['cache_backends'][] = 'sites/all/modules/contrib/memcache/memcache.inc';
$conf['cache_default_class'] = 'MemCacheDrupal';
$conf['cache_class_cache_form'] = 'DrupalDatabaseCache';
$conf['memcache_key_prefix'] = 'thecast';
