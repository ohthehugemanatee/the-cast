<?php
/**
 * @file
 * cast_beans.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function cast_beans_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'banner_block';
  $bean_type->label = 'Banner Block';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['banner_block'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'call_to_action';
  $bean_type->label = 'Call to action';
  $bean_type->options = '';
  $bean_type->description = 'A big, yellow link.';
  $export['call_to_action'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'link_block';
  $bean_type->label = 'Link Block';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['link_block'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'social_block';
  $bean_type->label = 'Social Block';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['social_block'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'text';
  $bean_type->label = 'Text callout block';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['text'] = $bean_type;

  return $export;
}
