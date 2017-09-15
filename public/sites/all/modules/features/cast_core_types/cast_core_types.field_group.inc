<?php
/**
 * @file
 * cast_core_types.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function cast_core_types_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right|node|event|members_page';
  $field_group->group_name = 'group_right';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'members_page';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'right',
    'weight' => '3',
    'children' => array(
      0 => 'field_location',
      1 => 'group_bold',
      2 => 'group_body_wrapper',
      3 => 'group_bottomright',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'right',
      'instance_settings' => array(
        'classes' => 'group-right field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
        'id' => 'node_event_members_page_group_right',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups[''] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('right');

  return $field_groups;
}
