<?php

$aliases['dev'] = array(
  'uri' => 'the-cast.dev.nodesymphony.com',
  'root' => '/var/www/vhosts/dev.nodesymphony.com/the-cast/public',
  'remote-host' => 'dev.nodesymphony.com',
  'remote-user' => 'deploy',
  'command-specific' => array(
    'rsync' => array (
      'mode' => 'rzv'
    ),
  ),
);

$aliases['live'] = array(
  'uri' => 'thecastmusic.com',
  'root' => '/var/www/thecastmusic.com/public',
  'remote-host' => '174.129.37.59',
  'remote-user' => 'cvertesi',
  'command-specific' => array(
    'rsync' => array (
      'mode' => 'rzv'
    ),
  ),
);
