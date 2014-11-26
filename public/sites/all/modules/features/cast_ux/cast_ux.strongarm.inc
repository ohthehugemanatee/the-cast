<?php
/**
 * @file
 * cast_ux.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function cast_ux_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'boxes_edit_location';
  $strongarm->value = '1';
  $export['boxes_edit_location'] = $strongarm;

  return $export;
}
