<?php
/**
 * @file
 * cast_panels.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function cast_panels_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:blog_post:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'blog_post';
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
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '81507b49-0975-4852-b4bd-63e528928587';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d874f38a-59ee-4c81-a591-e9d838ccd6be';
    $pane->panel = 'center';
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
        'edit' => array(
          'editor' => 'plain_text',
        ),
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
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd874f38a-59ee-4c81-a591-e9d838ccd6be';
    $display->content['new-d874f38a-59ee-4c81-a591-e9d838ccd6be'] = $pane;
    $display->panels['center'][0] = 'new-d874f38a-59ee-4c81-a591-e9d838ccd6be';
    $pane = new stdClass();
    $pane->pid = 'new-82b4d3fa-eb47-49c1-a5ca-1807af4b9a9b';
    $pane->panel = 'center';
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
    $pane->style = array();
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '82b4d3fa-eb47-49c1-a5ca-1807af4b9a9b';
    $display->content['new-82b4d3fa-eb47-49c1-a5ca-1807af4b9a9b'] = $pane;
    $display->panels['center'][1] = 'new-82b4d3fa-eb47-49c1-a5ca-1807af4b9a9b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-82b4d3fa-eb47-49c1-a5ca-1807af4b9a9b';
  $panelizer->display = $display;
  $export['node:blog_post:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:event:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'event';
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
  $display->uuid = 'ed593195-ab40-4412-ad41-e3912a923337';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3d02a889-c424-440b-8f9d-1792379edbba';
    $pane->panel = 'fifth';
    $pane->type = 'block';
    $pane->subtype = 'boxes-facebook_demo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3d02a889-c424-440b-8f9d-1792379edbba';
    $display->content['new-3d02a889-c424-440b-8f9d-1792379edbba'] = $pane;
    $display->panels['fifth'][0] = 'new-3d02a889-c424-440b-8f9d-1792379edbba';
    $pane = new stdClass();
    $pane->pid = 'new-a2e1e5ee-ba12-4096-b6ce-cb009e176b87';
    $pane->panel = 'first';
    $pane->type = 'block';
    $pane->subtype = 'boxes-link_lippen_schweigen';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a2e1e5ee-ba12-4096-b6ce-cb009e176b87';
    $display->content['new-a2e1e5ee-ba12-4096-b6ce-cb009e176b87'] = $pane;
    $display->panels['first'][0] = 'new-a2e1e5ee-ba12-4096-b6ce-cb009e176b87';
    $pane = new stdClass();
    $pane->pid = 'new-5ec10c4e-de37-4a3f-b2d9-1659c4899ac8';
    $pane->panel = 'fourth';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 1,
      'no_extras' => 0,
      'override_title' => 0,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 0,
      'build_mode' => 'full',
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
    $pane->uuid = '5ec10c4e-de37-4a3f-b2d9-1659c4899ac8';
    $display->content['new-5ec10c4e-de37-4a3f-b2d9-1659c4899ac8'] = $pane;
    $display->panels['fourth'][0] = 'new-5ec10c4e-de37-4a3f-b2d9-1659c4899ac8';
    $pane = new stdClass();
    $pane->pid = 'new-aece7b5a-bf8f-4246-8c4f-485eeb6fb8f1';
    $pane->panel = 'preface';
    $pane->type = 'block';
    $pane->subtype = 'boxes-demo_banner';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'aece7b5a-bf8f-4246-8c4f-485eeb6fb8f1';
    $display->content['new-aece7b5a-bf8f-4246-8c4f-485eeb6fb8f1'] = $pane;
    $display->panels['preface'][0] = 'new-aece7b5a-bf8f-4246-8c4f-485eeb6fb8f1';
    $pane = new stdClass();
    $pane->pid = 'new-3581e0b5-067e-4a85-af29-dec6d78cda67';
    $pane->panel = 'second';
    $pane->type = 'block';
    $pane->subtype = 'boxes-link_about';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3581e0b5-067e-4a85-af29-dec6d78cda67';
    $display->content['new-3581e0b5-067e-4a85-af29-dec6d78cda67'] = $pane;
    $display->panels['second'][0] = 'new-3581e0b5-067e-4a85-af29-dec6d78cda67';
    $pane = new stdClass();
    $pane->pid = 'new-4b342e8f-a8b1-4892-a3c4-d91dac21901a';
    $pane->panel = 'third';
    $pane->type = 'block';
    $pane->subtype = 'boxes-twitter_demo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4b342e8f-a8b1-4892-a3c4-d91dac21901a';
    $display->content['new-4b342e8f-a8b1-4892-a3c4-d91dac21901a'] = $pane;
    $display->panels['third'][0] = 'new-4b342e8f-a8b1-4892-a3c4-d91dac21901a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:event:default'] = $panelizer;

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:page:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'page';
  $panelizer->no_blocks = TRUE;
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
      11 => NULL,
      12 => NULL,
      13 => NULL,
      21 => NULL,
      22 => NULL,
      23 => NULL,
      31 => NULL,
      32 => NULL,
      33 => NULL,
      41 => NULL,
      42 => NULL,
      43 => NULL,
      44 => NULL,
      51 => NULL,
      52 => NULL,
      53 => NULL,
      54 => NULL,
      61 => NULL,
      62 => NULL,
      63 => NULL,
      64 => NULL,
      71 => NULL,
      72 => NULL,
      73 => NULL,
      74 => NULL,
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
  $display->uuid = '8b703fc8-43e8-4872-a979-8680efb52f9f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-dc8545dd-b9bc-47a9-9b4c-4d59fb1417f5';
    $pane->panel = 'fifth';
    $pane->type = 'views_panes';
    $pane->subtype = 'upcoming_events-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'dc8545dd-b9bc-47a9-9b4c-4d59fb1417f5';
    $display->content['new-dc8545dd-b9bc-47a9-9b4c-4d59fb1417f5'] = $pane;
    $display->panels['fifth'][0] = 'new-dc8545dd-b9bc-47a9-9b4c-4d59fb1417f5';
    $pane = new stdClass();
    $pane->pid = 'new-e18fc7d9-4c90-4157-bc65-b9ac3dbe10f9';
    $pane->panel = 'first';
    $pane->type = 'block';
    $pane->subtype = 'boxes-link_about';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e18fc7d9-4c90-4157-bc65-b9ac3dbe10f9';
    $display->content['new-e18fc7d9-4c90-4157-bc65-b9ac3dbe10f9'] = $pane;
    $display->panels['first'][0] = 'new-e18fc7d9-4c90-4157-bc65-b9ac3dbe10f9';
    $pane = new stdClass();
    $pane->pid = 'new-f0b59fb3-6ceb-447c-897a-bdaae98a7d98';
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
        'edit' => array(
          'editor' => 'plain_text',
        ),
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
    $pane->uuid = 'f0b59fb3-6ceb-447c-897a-bdaae98a7d98';
    $display->content['new-f0b59fb3-6ceb-447c-897a-bdaae98a7d98'] = $pane;
    $display->panels['fourth'][0] = 'new-f0b59fb3-6ceb-447c-897a-bdaae98a7d98';
    $pane = new stdClass();
    $pane->pid = 'new-330a63ce-ca9a-4737-839b-d5021e4c6105';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '330a63ce-ca9a-4737-839b-d5021e4c6105';
    $display->content['new-330a63ce-ca9a-4737-839b-d5021e4c6105'] = $pane;
    $display->panels['fourth'][1] = 'new-330a63ce-ca9a-4737-839b-d5021e4c6105';
    $pane = new stdClass();
    $pane->pid = 'new-10d651f6-b720-4fe6-a872-6279ebd5e1e9';
    $pane->panel = 'preface';
    $pane->type = 'panels_mini';
    $pane->subtype = 'admin_info';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '10d651f6-b720-4fe6-a872-6279ebd5e1e9';
    $display->content['new-10d651f6-b720-4fe6-a872-6279ebd5e1e9'] = $pane;
    $display->panels['preface'][0] = 'new-10d651f6-b720-4fe6-a872-6279ebd5e1e9';
    $pane = new stdClass();
    $pane->pid = 'new-684e9096-9c13-4787-92a5-98e9dcd5e1e5';
    $pane->panel = 'second';
    $pane->type = 'block';
    $pane->subtype = 'boxes-link_lippen_schweigen';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '684e9096-9c13-4787-92a5-98e9dcd5e1e5';
    $display->content['new-684e9096-9c13-4787-92a5-98e9dcd5e1e5'] = $pane;
    $display->panels['second'][0] = 'new-684e9096-9c13-4787-92a5-98e9dcd5e1e5';
    $pane = new stdClass();
    $pane->pid = 'new-8c073ec0-d85f-48c4-b9c2-f6c2f80a85d7';
    $pane->panel = 'third';
    $pane->type = 'block';
    $pane->subtype = 'boxes-link_verdi_underground';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8c073ec0-d85f-48c4-b9c2-f6c2f80a85d7';
    $display->content['new-8c073ec0-d85f-48c4-b9c2-f6c2f80a85d7'] = $pane;
    $display->panels['third'][0] = 'new-8c073ec0-d85f-48c4-b9c2-f6c2f80a85d7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f0b59fb3-6ceb-447c-897a-bdaae98a7d98';
  $panelizer->display = $display;
  $export['node:page:default'] = $panelizer;

  return $export;
}
