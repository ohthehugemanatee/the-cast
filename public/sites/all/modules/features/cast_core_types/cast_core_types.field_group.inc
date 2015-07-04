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
  $field_group->identifier = 'group_body_wrapper|node|event|members_page';
  $field_group->group_name = 'group_body_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'members_page';
  $field_group->parent_name = 'group_right';
  $field_group->data = array(
    'label' => 'body wrapper',
    'weight' => '16',
    'children' => array(
      0 => 'field_additional_info',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'body wrapper',
      'instance_settings' => array(
        'classes' => 'group-body-wrapper field-group-div field--body',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
        'element' => 'div',
        'attributes' => '',
        'required_fields' => 1,
        'id' => 'node_event_members_page_group_body_wrapper',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_body_wrapper|node|event|members_page'] = $field_group;

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
        'id' => 'node_audio_full_group_bottomright',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_bottomright|node|audio|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bottomright|node|event|members_page';
  $field_group->group_name = 'group_bottomright';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'members_page';
  $field_group->parent_name = 'group_right';
  $field_group->data = array(
    'label' => 'Bottom Right',
    'weight' => '17',
    'children' => array(
      0 => 'field_tickets_link',
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
        'id' => 'node_event_members_page_group_bottomright',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_bottomright|node|event|members_page'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_left|node|bio|members_page';
  $field_group->group_name = 'group_left';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'bio';
  $field_group->mode = 'members_page';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Left',
    'weight' => '3',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Left',
      'instance_settings' => array(
        'classes' => 'group-left field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
        'id' => 'node_bio_members_page_group_left',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_left|node|bio|members_page'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_left|node|event|members_page';
  $field_group->group_name = 'group_left';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'members_page';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'left',
    'weight' => '2',
    'children' => array(
      0 => 'body',
      1 => 'field_date',
      2 => 'links',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'left',
      'instance_settings' => array(
        'classes' => 'group-left field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
        'id' => 'node_event_members_page_group_left',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_left|node|event|members_page'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_right|node|bio|members_page';
  $field_group->group_name = 'group_right';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'bio';
  $field_group->mode = 'members_page';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'right',
    'weight' => '5',
    'children' => array(
      0 => 'field_body_right',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'right',
      'instance_settings' => array(
        'classes' => 'group-right field-group-div field--body',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
        'id' => 'node_bio_members_page_group_right',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_right|node|bio|members_page'] = $field_group;

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
  $export['group_right|node|event|members_page'] = $field_group;

  return $export;
}
