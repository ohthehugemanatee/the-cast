<?php
/**
 * @file
 * cast_commerce.features.inc
 */

/**
 * Implements hook_commerce_flat_rate_default_services().
 */
function cast_commerce_commerce_flat_rate_default_services() {
  $items = array(
    'international' => array(
      'name' => 'international',
      'base' => 'international',
      'display_title' => 'Shipping fee - international',
      'description' => '',
      'shipping_method' => 'flat_rate',
      'rules_component' => TRUE,
      'price_component' => 'flat_rate_international',
      'weight' => 0,
      'callbacks' => array(
        'rate' => 'commerce_flat_rate_service_rate_order',
        'details_form' => 'international_details_form',
        'details_form_validate' => 'international_details_form_validate',
        'details_form_submit' => 'international_details_form_submit',
      ),
      'module' => 'commerce_flat_rate',
      'title' => 'international',
      'base_rate' => array(
        'amount' => 1000,
        'currency_code' => 'EUR',
        'data' => array(),
      ),
      'data' => array(),
      'admin_list' => TRUE,
      'is_features' => TRUE,
    ),
    'within_germany' => array(
      'name' => 'within_germany',
      'base' => 'within_germany',
      'display_title' => 'Versandkosten - innerhalb Deutschland',
      'description' => '',
      'shipping_method' => 'flat_rate',
      'rules_component' => TRUE,
      'price_component' => 'flat_rate_within_germany',
      'weight' => 1,
      'callbacks' => array(
        'rate' => 'commerce_flat_rate_service_rate_order',
        'details_form' => 'within_germany_details_form',
        'details_form_validate' => 'within_germany_details_form_validate',
        'details_form_submit' => 'within_germany_details_form_submit',
      ),
      'module' => 'commerce_flat_rate',
      'title' => 'within germany',
      'base_rate' => array(
        'amount' => 600,
        'currency_code' => 'EUR',
        'data' => array(),
      ),
      'data' => array(),
      'admin_list' => TRUE,
      'is_features' => TRUE,
    ),
  );
  return $items;
}

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
