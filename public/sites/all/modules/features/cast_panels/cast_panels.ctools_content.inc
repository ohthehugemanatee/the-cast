<?php
/**
 * @file
 * cast_panels.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function cast_panels_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'impressum_link';
  $content->admin_title = 'impressum';
  $content->admin_description = '';
  $content->category = '';
  $content->settings = array(
    'admin_title' => 'impressum',
    'title' => '',
    'body' => '<p><a href="/impressum" style="position: relative; top: -35px; right: 10px; color: #DDD; text-decoration: none; font-size: 0.7em;">Impressum</a></p>
',
    'format' => 'full_html',
    'substitute' => 0,
  );
  $export['impressum_link'] = $content;

  return $export;
}
