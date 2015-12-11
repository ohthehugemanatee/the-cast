<?php
/**
 * @file
 * cast_commerce.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cast_commerce_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function cast_commerce_node_info() {
  $items = array(
    'product_display' => array(
      'name' => t('Product Display'),
      'base' => 'node_content',
      'description' => t('A node that shows one or more products for sale.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
