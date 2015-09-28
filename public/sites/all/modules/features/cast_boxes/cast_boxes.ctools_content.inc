<?php
/**
 * @file
 * cast_boxes.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function cast_boxes_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'soundcloud_brindisi_encore';
  $content->admin_title = 'soundcloud_brindisi_encore';
  $content->admin_description = 'Soundcloud player for Brindisi encore';
  $content->category = 'Soundcloud';
  $content->settings = array(
    'admin_title' => '',
    'title' => 'Live from Paris',
    'body' => '<p><iframe frameborder="no" height="166" scrolling="no" src="https://w.soundcloud.com/player/?url=https%3A//api.soundcloud.com/tracks/217576642&amp;color=dc5c14&amp;auto_play=false&amp;hide_related=false&amp;show_comments=true&amp;show_user=true&amp;show_reposts=false" width="100%"></iframe></p>
',
    'format' => 'full_html',
    'substitute' => 0,
  );
  $export['soundcloud_brindisi_encore'] = $content;

  return $export;
}
