<?php
/**
 * @file
 * cast_core_types.features.inc
 */

/**
 * Implements hook_default_entity_boxes_type().
 */
function cast_core_types_default_entity_boxes_type() {
  $items = array();
  $items['link_block'] = entity_import('entity_boxes_type', '{
    "type" : "link_block",
    "label" : "Link block",
    "weight" : "0",
    "data" : "",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_node_info().
 */
function cast_core_types_node_info() {
  $items = array(
    'bio' => array(
      'name' => t('Bio'),
      'base' => 'node_content',
      'description' => t('Member of the Cast'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'frontpage_slide' => array(
      'name' => t('frontpage slide'),
      'base' => 'node_content',
      'description' => t('Slides for the frontpage'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'video' => array(
      'name' => t('Video'),
      'base' => 'node_content',
      'description' => t('An individual video'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
