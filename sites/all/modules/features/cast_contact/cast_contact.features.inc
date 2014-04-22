<?php
/**
 * @file
 * cast_contact.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cast_contact_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
