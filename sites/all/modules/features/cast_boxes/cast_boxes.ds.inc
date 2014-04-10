<?php
/**
 * @file
 * cast_boxes.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function cast_boxes_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'entity_boxes|social_block|default';
  $ds_layout->entity_type = 'entity_boxes';
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
        2 => 'field_button_text',
      ),
    ),
    'fields' => array(
      'field_body_text' => 'left',
      'field_image' => 'right',
      'field_button_text' => 'right',
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
  );
  $export['entity_boxes|social_block|default'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function cast_boxes_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'social_block';
  $ds_view_mode->label = 'social block';
  $ds_view_mode->entities = array(
    'entity_boxes' => 'entity_boxes',
  );
  $export['social_block'] = $ds_view_mode;

  return $export;
}
