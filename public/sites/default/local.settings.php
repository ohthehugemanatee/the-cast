<?php

/**
 * @file
 * Drupal site-specific configuration file.
 */

$conf['stage_file_proxy_origin'] = 'http://thecastmusic.com/';

$conf['file_private_path'] = '../private';

### AMAZEE.IO Database connection
if(getenv('AMAZEEIO_SITENAME')){
  $databases['default']['default'] = array(
    'driver' => 'mysql',
    'database' => getenv('AMAZEEIO_SITENAME'),
    'username' => getenv('AMAZEEIO_DB_USERNAME'),
    'password' => getenv('AMAZEEIO_DB_PASSWORD'),
    'host' => getenv('AMAZEEIO_DB_HOST'),
    'port' => getenv('AMAZEEIO_DB_PORT'),
    'prefix' => '',
  );
}

### Base URL
if (getenv('AMAZEEIO_BASE_URL')) {
  $base_url = getenv('AMAZEEIO_BASE_URL');
}

$conf['cache'] = '0';
$conf['file_private_path'] = '../private';
$conf['file_temporary_path'] = '/tmp';
$conf['securepages_enable'] = FALSE;
$conf['https'] = FALSE;
$conf['stage_file_proxy_origin'] = 'http://thecastmusic.com';

/**
 *Memcached support is disabled until Amazee resolves https://github.com/amazeeio/docker/issues/2
 */
/*
$conf['cache_backends'][] = 'sites/all/modules/contrib/memcache/memcache.inc';
$conf['cache_default_class'] = 'MemCacheDrupal';
$conf['cache_class_cache_form'] = 'DrupalDatabaseCache';
$conf['memcache_key_prefix'] = 'thecast';
*/
