<?php
/**
 * @file
 * cast_ux.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cast_ux_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
