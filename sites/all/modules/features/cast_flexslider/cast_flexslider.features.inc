<?php
/**
 * @file
 * cast_flexslider.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cast_flexslider_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
}
