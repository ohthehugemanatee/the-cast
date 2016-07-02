<?php
/**
 * @file
 * cast_crm.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function cast_crm_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'redhen_admin_path';
  $strongarm->value = 1;
  $export['redhen_admin_path'] = $strongarm;

  return $export;
}
