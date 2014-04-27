<?php
/**
 * @file
 * cast_panels.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function cast_panels_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-footer-social-links_amazon:http://amazon.com/
  $menu_links['menu-footer-social-links_amazon:http://amazon.com/'] = array(
    'menu_name' => 'menu-footer-social-links',
    'link_path' => 'http://amazon.com/',
    'router_path' => '',
    'link_title' => 'Amazon',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'amazon',
        ),
      ),
      'identifier' => 'menu-footer-social-links_amazon:http://amazon.com/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-social-links_facebook:http://facebook.org/thecastde
  $menu_links['menu-footer-social-links_facebook:http://facebook.org/thecastde'] = array(
    'menu_name' => 'menu-footer-social-links',
    'link_path' => 'http://facebook.org/thecastde',
    'router_path' => '',
    'link_title' => 'Facebook',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'facebook',
        ),
      ),
      'identifier' => 'menu-footer-social-links_facebook:http://facebook.org/thecastde',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-social-links_itunes:http://itunes.com
  $menu_links['menu-footer-social-links_itunes:http://itunes.com'] = array(
    'menu_name' => 'menu-footer-social-links',
    'link_path' => 'http://itunes.com',
    'router_path' => '',
    'link_title' => 'Itunes',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'itunes',
        ),
      ),
      'identifier' => 'menu-footer-social-links_itunes:http://itunes.com',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-social-links_soundcloud:http://soundcloud.com
  $menu_links['menu-footer-social-links_soundcloud:http://soundcloud.com'] = array(
    'menu_name' => 'menu-footer-social-links',
    'link_path' => 'http://soundcloud.com',
    'router_path' => '',
    'link_title' => 'Soundcloud',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'soundcloud',
        ),
      ),
      'identifier' => 'menu-footer-social-links_soundcloud:http://soundcloud.com',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-social-links_spotify:http://spotify.com
  $menu_links['menu-footer-social-links_spotify:http://spotify.com'] = array(
    'menu_name' => 'menu-footer-social-links',
    'link_path' => 'http://spotify.com',
    'router_path' => '',
    'link_title' => 'Spotify',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'spotify',
        ),
      ),
      'identifier' => 'menu-footer-social-links_spotify:http://spotify.com',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-social-links_twitter:http://twitter.com/thecastofficial
  $menu_links['menu-footer-social-links_twitter:http://twitter.com/thecastofficial'] = array(
    'menu_name' => 'menu-footer-social-links',
    'link_path' => 'http://twitter.com/thecastofficial',
    'router_path' => '',
    'link_title' => 'Twitter',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'twitter',
        ),
      ),
      'identifier' => 'menu-footer-social-links_twitter:http://twitter.com/thecastofficial',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-social-links_youtube:http://youtube.com/thecastofficial
  $menu_links['menu-footer-social-links_youtube:http://youtube.com/thecastofficial'] = array(
    'menu_name' => 'menu-footer-social-links',
    'link_path' => 'http://youtube.com/thecastofficial',
    'router_path' => '',
    'link_title' => 'Youtube',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'youtube',
        ),
      ),
      'identifier' => 'menu-footer-social-links_youtube:http://youtube.com/thecastofficial',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Amazon');
  t('Facebook');
  t('Itunes');
  t('Soundcloud');
  t('Spotify');
  t('Twitter');
  t('Youtube');


  return $menu_links;
}
