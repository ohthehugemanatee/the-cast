<?php
/**
 * @file
 * cast_panels.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function cast_panels_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Exported menu: menu-footer-social-links.
  $menus['menu-footer-social-links'] = array(
    'menu_name' => 'menu-footer-social-links',
    'title' => 'Footer social links',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer social links');
  t('Main menu');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');

  return $menus;
}
