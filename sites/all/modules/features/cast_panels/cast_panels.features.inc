<?php
/**
 * @file
 * cast_panels.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cast_panels_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function cast_panels_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}