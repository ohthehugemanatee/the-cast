<?php
/**
 * @file
 * cast_boxes.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function cast_boxes_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bottomright|entity_boxes|banner_block|default';
  $field_group->group_name = 'group_bottomright';
  $field_group->entity_type = 'entity_boxes';
  $field_group->bundle = 'banner_block';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Bottom Right',
    'weight' => '1',
    'children' => array(
      0 => 'field_button_text',
      1 => 'field_body_text',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Bottom Right',
      'instance_settings' => array(
        'classes' => 'group-bottomright field-group-div pane--boxes-demo-banner',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_bottomright|entity_boxes|banner_block|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bottomright|entity_boxes|link_block|default';
  $field_group->group_name = 'group_bottomright';
  $field_group->entity_type = 'entity_boxes';
  $field_group->bundle = 'link_block';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Bottom Right',
    'weight' => '1',
    'children' => array(
      0 => 'field_body_text',
      1 => 'field_button_text',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Bottom Right',
      'instance_settings' => array(
        'classes' => 'group-bottomright field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_bottomright|entity_boxes|link_block|default'] = $field_group;

  return $export;
}