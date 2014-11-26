<?php

// include Memecache
$conf['cache_backends'][] = 'sites/all/modules/contrib/memcache/memcache.inc';
$conf['memcache_key_prefix'] = 'cast_';

// Assign form cache to non-volatile storage.
$conf['cache_class_cache_form'] = 'DrupalDatabaseCache';

$conf['cache_default_class'] = 'MemCacheDrupal';
