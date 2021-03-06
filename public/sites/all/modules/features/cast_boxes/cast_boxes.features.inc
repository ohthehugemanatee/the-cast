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
  if ($module == "ctools_custom_content" && $api == "ctools_content") {
    return array("version" => "1");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
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
  $items['link_block'] = entity_import('entity_boxes_type', '{
    "type" : "link_block",
    "label" : "Link block",
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
