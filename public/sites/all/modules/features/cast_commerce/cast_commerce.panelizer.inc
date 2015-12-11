<?php
/**
 * @file
 * cast_commerce.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function cast_commerce_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:product_display:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'product_display';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'three_column_two_row';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'preface' => NULL,
      'first' => NULL,
      'second' => NULL,
      'third' => NULL,
      'fourth' => NULL,
      'fifth' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '377d2f06-8fc1-4de5-9620-301b0ff1d307';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a532fb7a-2a38-43ab-84f0-e582b36741b3';
    $pane->panel = 'fifth';
    $pane->type = 'block';
    $pane->subtype = 'commerce_cart-cart';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a532fb7a-2a38-43ab-84f0-e582b36741b3';
    $display->content['new-a532fb7a-2a38-43ab-84f0-e582b36741b3'] = $pane;
    $display->panels['fifth'][0] = 'new-a532fb7a-2a38-43ab-84f0-e582b36741b3';
    $pane = new stdClass();
    $pane->pid = 'new-1dac6c11-3c27-483c-9405-8267576576d9';
    $pane->panel = 'first';
    $pane->type = 'custom';
    $pane->subtype = 'soundcloud_brindisi_encore';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1dac6c11-3c27-483c-9405-8267576576d9';
    $display->content['new-1dac6c11-3c27-483c-9405-8267576576d9'] = $pane;
    $display->panels['first'][0] = 'new-1dac6c11-3c27-483c-9405-8267576576d9';
    $pane = new stdClass();
    $pane->pid = 'new-7c06670c-fc31-4844-a561-f54788d00597';
    $pane->panel = 'fourth';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'linked_field' => array(
          'linked' => 0,
          'destination' => '',
          'advanced' => array(
            'title' => '',
            'target' => '',
            'class' => '',
            'rel' => '',
            'text' => '',
          ),
        ),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7c06670c-fc31-4844-a561-f54788d00597';
    $display->content['new-7c06670c-fc31-4844-a561-f54788d00597'] = $pane;
    $display->panels['fourth'][0] = 'new-7c06670c-fc31-4844-a561-f54788d00597';
    $pane = new stdClass();
    $pane->pid = 'new-305c9ff2-cd80-416e-84b6-435d9a89f982';
    $pane->panel = 'fourth';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_product';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'commerce_cart_add_to_cart_form',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'show_quantity' => 1,
        'default_quantity' => '1',
        'combine' => 1,
        'show_single_product_attributes' => 0,
        'line_item_type' => 'product',
        'linked_field' => array(
          'linked' => 0,
          'destination' => '',
          'advanced' => array(
            'title' => '',
            'target' => '',
            'class' => '',
            'rel' => '',
            'text' => '',
          ),
        ),
      ),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '305c9ff2-cd80-416e-84b6-435d9a89f982';
    $display->content['new-305c9ff2-cd80-416e-84b6-435d9a89f982'] = $pane;
    $display->panels['fourth'][1] = 'new-305c9ff2-cd80-416e-84b6-435d9a89f982';
    $pane = new stdClass();
    $pane->pid = 'new-937aa738-1783-47d6-b6a2-6f82120276ec';
    $pane->panel = 'fourth';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '937aa738-1783-47d6-b6a2-6f82120276ec';
    $display->content['new-937aa738-1783-47d6-b6a2-6f82120276ec'] = $pane;
    $display->panels['fourth'][2] = 'new-937aa738-1783-47d6-b6a2-6f82120276ec';
    $pane = new stdClass();
    $pane->pid = 'new-8754c3a8-5784-45e9-8479-7569a6f17fa5';
    $pane->panel = 'preface';
    $pane->type = 'block';
    $pane->subtype = 'boxes-operatic_banner_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8754c3a8-5784-45e9-8479-7569a6f17fa5';
    $display->content['new-8754c3a8-5784-45e9-8479-7569a6f17fa5'] = $pane;
    $display->panels['preface'][0] = 'new-8754c3a8-5784-45e9-8479-7569a6f17fa5';
    $pane = new stdClass();
    $pane->pid = 'new-3dc77a48-84e0-41c9-9a7d-21e8c98ba1fb';
    $pane->panel = 'second';
    $pane->type = 'block';
    $pane->subtype = 'boxes-members';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3dc77a48-84e0-41c9-9a7d-21e8c98ba1fb';
    $display->content['new-3dc77a48-84e0-41c9-9a7d-21e8c98ba1fb'] = $pane;
    $display->panels['second'][0] = 'new-3dc77a48-84e0-41c9-9a7d-21e8c98ba1fb';
    $pane = new stdClass();
    $pane->pid = 'new-fb51e93b-0373-4358-88aa-6027a6f60d9e';
    $pane->panel = 'third';
    $pane->type = 'block';
    $pane->subtype = 'boxes-operatic_film';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fb51e93b-0373-4358-88aa-6027a6f60d9e';
    $display->content['new-fb51e93b-0373-4358-88aa-6027a6f60d9e'] = $pane;
    $display->panels['third'][0] = 'new-fb51e93b-0373-4358-88aa-6027a6f60d9e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-7c06670c-fc31-4844-a561-f54788d00597';
  $panelizer->display = $display;
  $export['node:product_display:default'] = $panelizer;

  return $export;
}
