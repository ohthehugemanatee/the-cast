<?php
/**
 * @file
 * cast_boxes.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cast_boxes_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_entity_boxes_type().
 */
function cast_boxes_default_entity_boxes_type() {
  $items = array();
  $items['banner_block'] = entity_import('entity_boxes_type', '{
    "type" : "banner_block",
    "label" : "Banner block",
    "weight" : "0",
    "data" : "",
    "rdf_mapping" : []
  }');
  $items['social_block'] = entity_import('entity_boxes_type', '{
    "type" : "social_block",
    "label" : "social block",
    "weight" : "0",
    "data" : "",
    "rdf_mapping" : []
  }');
  return $items;
}
