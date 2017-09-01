<?php
/**
 * @file
 * cast_beans.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function cast_beans_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bottomright|bean|banner_block|default';
  $field_group->group_name = 'group_bottomright';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'banner_block';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Bottom Right',
    'weight' => '2',
    'children' => array(
      0 => 'field_body_text',
      1 => 'field_button',
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
        'id' => 'bean_banner_block_full_group_bottomright',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bottomright|bean|link_block|default';
  $field_group->group_name = 'group_bottomright';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'link_block';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Bottom Right',
    'weight' => '1',
    'children' => array(
      0 => 'field_body_text',
      1 => 'field_button',
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
        'id' => 'bean_link_block_full_group_bottomright',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups[''] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Bottom Right');

  return $field_groups;
}
