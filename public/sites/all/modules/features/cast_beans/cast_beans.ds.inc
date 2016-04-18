<?php
/**
 * @file
 * cast_beans.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function cast_beans_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'bean|banner_block|default';
  $ds_layout->entity_type = 'bean';
  $ds_layout->bundle = 'banner_block';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_headshot',
        1 => 'field_body_text',
        2 => 'field_button',
        3 => 'group_bottomright',
      ),
    ),
    'fields' => array(
      'field_headshot' => 'ds_content',
      'field_body_text' => 'ds_content',
      'field_button' => 'ds_content',
      'group_bottomright' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['bean|banner_block|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'bean|social_block|default';
  $ds_layout->entity_type = 'bean';
  $ds_layout->bundle = 'social_block';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_body_text',
      ),
      'right' => array(
        1 => 'field_image',
        2 => 'field_button',
      ),
    ),
    'fields' => array(
      'field_body_text' => 'left',
      'field_image' => 'right',
      'field_button' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['bean|social_block|default'] = $ds_layout;

  return $export;
}
