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

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:photo_gallery:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'photo_gallery';
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
  $display->layout = 'four_three_adaptive';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      11 => NULL,
      12 => NULL,
      13 => NULL,
      14 => NULL,
      21 => NULL,
      22 => NULL,
      23 => NULL,
      24 => NULL,
      31 => NULL,
      32 => NULL,
      33 => NULL,
      34 => NULL,
      41 => NULL,
      42 => NULL,
      43 => NULL,
      44 => NULL,
      51 => NULL,
      52 => NULL,
      53 => NULL,
      61 => NULL,
      62 => NULL,
      63 => NULL,
      71 => NULL,
      72 => NULL,
      73 => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '4be9cbb8-618a-4759-a937-fd799bf737ce';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-03c441a6-25f9-42a9-be21-3c9cf2a92d7b';
    $pane->panel = '21';
    $pane->type = 'views';
    $pane->subtype = 'photo_gallery';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
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
    $pane->uuid = '03c441a6-25f9-42a9-be21-3c9cf2a92d7b';
    $display->content['new-03c441a6-25f9-42a9-be21-3c9cf2a92d7b'] = $pane;
    $display->panels['21'][0] = 'new-03c441a6-25f9-42a9-be21-3c9cf2a92d7b';
    $pane = new stdClass();
    $pane->pid = 'new-08e68764-d66a-479e-87c9-dd6454d8e170';
    $pane->panel = '21';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '08e68764-d66a-479e-87c9-dd6454d8e170';
    $display->content['new-08e68764-d66a-479e-87c9-dd6454d8e170'] = $pane;
    $display->panels['21'][1] = 'new-08e68764-d66a-479e-87c9-dd6454d8e170';
    $pane = new stdClass();
    $pane->pid = 'new-45a650bc-56c1-428c-b2a5-e5bafb6e4902';
    $pane->panel = '31';
    $pane->type = 'block';
    $pane->subtype = 'quicktabs-media';
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
    $pane->uuid = '45a650bc-56c1-428c-b2a5-e5bafb6e4902';
    $display->content['new-45a650bc-56c1-428c-b2a5-e5bafb6e4902'] = $pane;
    $display->panels['31'][0] = 'new-45a650bc-56c1-428c-b2a5-e5bafb6e4902';
    $pane = new stdClass();
    $pane->pid = 'new-c040068a-e11b-4953-be7c-cc54a88b48a5';
    $pane->panel = '33';
    $pane->type = 'views';
    $pane->subtype = 'photo_gallery';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 1,
      'override_title_text' => '%node:title',
      'context' => array(
        0 => '',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c040068a-e11b-4953-be7c-cc54a88b48a5';
    $display->content['new-c040068a-e11b-4953-be7c-cc54a88b48a5'] = $pane;
    $display->panels['33'][0] = 'new-c040068a-e11b-4953-be7c-cc54a88b48a5';
    $pane = new stdClass();
    $pane->pid = 'new-35467c62-640f-4864-814a-ad35b740f192';
    $pane->panel = '33';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '35467c62-640f-4864-814a-ad35b740f192';
    $display->content['new-35467c62-640f-4864-814a-ad35b740f192'] = $pane;
    $display->panels['33'][1] = 'new-35467c62-640f-4864-814a-ad35b740f192';
    $pane = new stdClass();
    $pane->pid = 'new-1569ce4c-369c-4720-b102-413da9962382';
    $pane->panel = '33';
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
    $pane->uuid = '1569ce4c-369c-4720-b102-413da9962382';
    $display->content['new-1569ce4c-369c-4720-b102-413da9962382'] = $pane;
    $display->panels['33'][2] = 'new-1569ce4c-369c-4720-b102-413da9962382';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-35467c62-640f-4864-814a-ad35b740f192';
  $panelizer->display = $display;
  $export['node:photo_gallery:default'] = $panelizer;

  return $export;
}
