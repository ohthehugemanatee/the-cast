<?php
/**
 * @file
 * cast_panels.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function cast_panels_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'media';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Media';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_photo_galleries_grid-block',
      'hide_title' => 1,
      'title' => 'Photos',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_photo_galleries_grid-block_1',
      'hide_title' => 1,
      'title' => 'Videos',
      'weight' => '-99',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Media');
  t('Photos');
  t('Videos');

  $export['media'] = $quicktabs;

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'media_video';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = TRUE;
  $quicktabs->default_tab = 1;
  $quicktabs->title = 'Media';
  $quicktabs->tabs = array(
    0 => array(
      'bid' => 'views_delta_photo_galleries_grid-block',
      'hide_title' => 1,
      'title' => 'Photos',
      'weight' => '-100',
      'type' => 'block',
    ),
    1 => array(
      'bid' => 'views_delta_photo_galleries_grid-block_1',
      'hide_title' => 1,
      'title' => 'Videos',
      'weight' => '-99',
      'type' => 'block',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Media');
  t('Photos');
  t('Videos');

  $export['media_video'] = $quicktabs;

  return $export;
}
