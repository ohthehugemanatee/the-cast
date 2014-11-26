<?php
/**
 * @file
 * cast_ux.box.inc
 */

/**
 * Implements hook_default_box().
 */
function cast_ux_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'contact_text';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Contact > Text';
  $box->options = array(
    'body' => array(
      'value' => 'For booking or general enquiries, please email us at booking@the-cast.de . You may also send us a message with this form.',
      'format' => 'filtered_html',
    ),
    'additional_classes' => '',
  );
  $export['contact_text'] = $box;

  return $export;
}
