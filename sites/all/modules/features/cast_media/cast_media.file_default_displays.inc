<?php
/**
 * @file
 * cast_media.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function cast_media_file_default_displays() {
  $export = array();

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_audiofield_embedded';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__default__file_field_audiofield_embedded'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_audiofield_nodownload';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__default__file_field_audiofield_nodownload'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__default__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_file_force_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__default__file_field_file_force_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_file_force_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__default__file_field_file_force_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_file_force_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__default__file_field_file_force_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_file_rendered';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'file_view_mode' => 'default',
  );
  $export['video__default__file_field_file_rendered'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__default__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__default__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__default__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_mediaelement_audio';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 0,
    'width' => '',
    'height' => '',
    'download_link' => 0,
    'download_text' => '',
  );
  $export['video__default__file_field_mediaelement_audio'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_mediaelement_video';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 0,
    'width' => '',
    'height' => '',
    'download_link' => 0,
    'download_text' => '',
  );
  $export['video__default__file_field_mediaelement_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_soundmanager2_inline_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'pause' => 'pause',
    'text' => 'filename',
  );
  $export['video__default__file_field_soundmanager2_inline_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_soundmanager2_page_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'pause' => 'pause',
    'text' => 'filename',
  );
  $export['video__default__file_field_soundmanager2_page_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_field_soundmanager2_ui360';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'pause' => 'pause',
    'inline' => 0,
    'visualization' => 1,
    'waveform' => 1,
    'eq' => 1,
    'amplifier' => 1,
    'diameter' => '256',
    'text' => 'filename',
  );
  $export['video__default__file_field_soundmanager2_ui360'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__file_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__default__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__media_vimeo_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'large',
  );
  $export['video__default__media_vimeo_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__media_vimeo_video';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '560',
    'height' => '340',
    'autoplay' => 0,
  );
  $export['video__default__media_vimeo_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__media_youtube_image';
  $file_display->weight = 2;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'large',
  );
  $export['video__default__media_youtube_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__default__media_youtube_video';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '960',
    'height' => '500',
    'theme' => 'light',
    'color' => 'white',
    'autohide' => '2',
    'autoplay' => 0,
    'loop' => 0,
    'showinfo' => 1,
    'modestbranding' => 0,
    'rel' => 1,
    'nocookie' => 0,
    'protocol_specify' => 0,
    'protocol' => 'https:',
    'enablejsapi' => 0,
    'origin' => '',
  );
  $export['video__default__media_youtube_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_large__file_field_audiofield_embedded';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_large__file_field_audiofield_embedded'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_large__file_field_audiofield_nodownload';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_large__file_field_audiofield_nodownload'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_large__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_large__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_large__file_field_file_force_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_large__file_field_file_force_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_large__file_field_file_force_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_large__file_field_file_force_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_large__file_field_file_force_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_large__file_field_file_force_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_large__file_field_file_rendered';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_large__file_field_file_rendered'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_large__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_large__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_large__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_large__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_large__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_large__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_large__file_field_mediaelement_audio';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 0,
    'width' => '',
    'height' => '',
    'download_link' => 0,
    'download_text' => '',
  );
  $export['video__media_large__file_field_mediaelement_audio'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_large__file_field_mediaelement_video';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 0,
    'width' => '',
    'height' => '',
    'download_link' => 0,
    'download_text' => '',
  );
  $export['video__media_large__file_field_mediaelement_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_large__file_field_soundmanager2_inline_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_large__file_field_soundmanager2_inline_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_large__file_field_soundmanager2_page_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_large__file_field_soundmanager2_page_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_large__file_field_soundmanager2_ui360';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_large__file_field_soundmanager2_ui360'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_large__file_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__media_large__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_large__media_youtube_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__media_large__media_youtube_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_large__media_youtube_video';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'width' => '640',
    'height' => '390',
    'theme' => 'dark',
    'color' => 'red',
    'autohide' => '2',
    'autoplay' => 0,
    'loop' => 0,
    'showinfo' => 1,
    'modestbranding' => 0,
    'rel' => 1,
    'nocookie' => 0,
    'protocol_specify' => 0,
    'protocol' => 'https:',
    'enablejsapi' => 0,
    'origin' => '',
  );
  $export['video__media_large__media_youtube_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_original__file_field_audiofield_embedded';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_original__file_field_audiofield_embedded'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_original__file_field_audiofield_nodownload';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_original__file_field_audiofield_nodownload'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_original__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_original__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_original__file_field_file_force_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_original__file_field_file_force_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_original__file_field_file_force_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_original__file_field_file_force_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_original__file_field_file_force_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_original__file_field_file_force_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_original__file_field_file_rendered';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_original__file_field_file_rendered'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_original__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_original__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_original__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_original__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_original__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_original__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_original__file_field_mediaelement_audio';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 0,
    'width' => '',
    'height' => '',
    'download_link' => 0,
    'download_text' => '',
  );
  $export['video__media_original__file_field_mediaelement_audio'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_original__file_field_mediaelement_video';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 0,
    'width' => '',
    'height' => '',
    'download_link' => 0,
    'download_text' => '',
  );
  $export['video__media_original__file_field_mediaelement_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_original__file_field_soundmanager2_inline_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_original__file_field_soundmanager2_inline_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_original__file_field_soundmanager2_page_player';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_original__file_field_soundmanager2_page_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_original__file_field_soundmanager2_ui360';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_original__file_field_soundmanager2_ui360'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_original__file_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__media_original__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_original__media_youtube_image';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__media_original__media_youtube_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_original__media_youtube_video';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'width' => '960',
    'height' => '500',
    'theme' => 'dark',
    'color' => 'white',
    'autohide' => '2',
    'autoplay' => 0,
    'loop' => 0,
    'showinfo' => 0,
    'modestbranding' => 1,
    'rel' => 1,
    'nocookie' => 0,
    'protocol_specify' => 0,
    'protocol' => 'https:',
    'enablejsapi' => 0,
    'origin' => '',
  );
  $export['video__media_original__media_youtube_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_preview__file_field_audiofield_embedded';
  $file_display->weight = -33;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_preview__file_field_audiofield_embedded'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_preview__file_field_audiofield_nodownload';
  $file_display->weight = -37;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_preview__file_field_audiofield_nodownload'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_preview__file_field_file_default';
  $file_display->weight = -38;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_preview__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_preview__file_field_file_force_file_default';
  $file_display->weight = -49;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_preview__file_field_file_force_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_preview__file_field_file_force_file_table';
  $file_display->weight = -50;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_preview__file_field_file_force_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_preview__file_field_file_force_file_url_plain';
  $file_display->weight = -47;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_preview__file_field_file_force_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_preview__file_field_file_rendered';
  $file_display->weight = -35;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_preview__file_field_file_rendered'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_preview__file_field_file_table';
  $file_display->weight = -39;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_preview__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_preview__file_field_file_url_plain';
  $file_display->weight = -36;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_preview__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_preview__file_field_media_large_icon';
  $file_display->weight = -32;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_preview__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_preview__file_field_mediaelement_audio';
  $file_display->weight = -31;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 0,
    'width' => '',
    'height' => '',
    'download_link' => 0,
    'download_text' => '',
  );
  $export['video__media_preview__file_field_mediaelement_audio'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_preview__file_field_mediaelement_video';
  $file_display->weight = -34;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'controls' => 0,
    'width' => '',
    'height' => '',
    'download_link' => 0,
    'download_text' => '',
  );
  $export['video__media_preview__file_field_mediaelement_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_preview__file_field_soundmanager2_inline_player';
  $file_display->weight = -48;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_preview__file_field_soundmanager2_inline_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_preview__file_field_soundmanager2_page_player';
  $file_display->weight = -40;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_preview__file_field_soundmanager2_page_player'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_preview__file_field_soundmanager2_ui360';
  $file_display->weight = -41;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['video__media_preview__file_field_soundmanager2_ui360'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_preview__file_image';
  $file_display->weight = -46;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['video__media_preview__file_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_preview__media_vimeo_video';
  $file_display->weight = -42;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'width' => '560',
    'height' => '340',
    'autoplay' => 0,
  );
  $export['video__media_preview__media_vimeo_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_preview__media_youtube_image';
  $file_display->weight = -44;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'gallery_grid',
  );
  $export['video__media_preview__media_youtube_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'video__media_preview__media_youtube_video';
  $file_display->weight = -43;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'width' => '640',
    'height' => '390',
    'theme' => 'dark',
    'color' => 'red',
    'autohide' => '2',
    'autoplay' => 0,
    'loop' => 0,
    'showinfo' => 1,
    'modestbranding' => 0,
    'rel' => 1,
    'nocookie' => 0,
    'protocol_specify' => 0,
    'protocol' => 'https:',
    'enablejsapi' => 0,
    'origin' => '',
  );
  $export['video__media_preview__media_youtube_video'] = $file_display;

  return $export;
}
