<?php
/**
 * @file
 * cast_contact.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function cast_contact_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'contact_default_status';
  $strongarm->value = 0;
  $export['contact_default_status'] = $strongarm;

  return $export;
}
