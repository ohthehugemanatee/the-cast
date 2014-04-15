<?php
/**
 * @file
 * cast_core_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function cast_core_types_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bottomright|node|audio|default';
  $field_group->group_name = 'group_bottomright';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'audio';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'bottomright',
    'weight' => '5',
    'children' => array(
      0 => 'field_audio',
      1 => 'field_body_text',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'bottomright',
      'instance_settings' => array(
        'classes' => 'group-bottomright field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_bottomright|node|audio|default'] = $field_group;

  return $export;
}
