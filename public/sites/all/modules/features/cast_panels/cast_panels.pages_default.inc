<?php
/**
 * @file
 * cast_panels.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function cast_panels_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'contact_site_panel_context';
  $handler->task = 'contact_site';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Contact',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'three_column_25_50_25';
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
      14 => NULL,
      24 => NULL,
      34 => NULL,
      'preface' => NULL,
      'first' => NULL,
      'second' => NULL,
      'third' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Contact';
  $display->uuid = '9d436024-e4b2-4252-a33d-5f47788c3127';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8f25ae6e-4ec4-46bf-978c-7d2a506ac5db';
    $pane->panel = 'first';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'yellow',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8f25ae6e-4ec4-46bf-978c-7d2a506ac5db';
    $display->content['new-8f25ae6e-4ec4-46bf-978c-7d2a506ac5db'] = $pane;
    $display->panels['first'][0] = 'new-8f25ae6e-4ec4-46bf-978c-7d2a506ac5db';
    $pane = new stdClass();
    $pane->pid = 'new-026cd75a-a4f8-42b2-ace7-43858d21299d';
    $pane->panel = 'first';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ltgray',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '026cd75a-a4f8-42b2-ace7-43858d21299d';
    $display->content['new-026cd75a-a4f8-42b2-ace7-43858d21299d'] = $pane;
    $display->panels['first'][1] = 'new-026cd75a-a4f8-42b2-ace7-43858d21299d';
    $pane = new stdClass();
    $pane->pid = 'new-53da8d90-3842-4714-a997-0abd9c45936a';
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
    $pane->uuid = '53da8d90-3842-4714-a997-0abd9c45936a';
    $display->content['new-53da8d90-3842-4714-a997-0abd9c45936a'] = $pane;
    $display->panels['preface'][0] = 'new-53da8d90-3842-4714-a997-0abd9c45936a';
    $pane = new stdClass();
    $pane->pid = 'new-2d71334b-2316-4647-bb37-32176a4456d2';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '2d71334b-2316-4647-bb37-32176a4456d2';
    $display->content['new-2d71334b-2316-4647-bb37-32176a4456d2'] = $pane;
    $display->panels['preface'][1] = 'new-2d71334b-2316-4647-bb37-32176a4456d2';
    $pane = new stdClass();
    $pane->pid = 'new-3880bf86-238b-4dc4-b1bc-60f53cdeca2e';
    $pane->panel = 'preface';
    $pane->type = 'page_messages';
    $pane->subtype = 'page_messages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '3880bf86-238b-4dc4-b1bc-60f53cdeca2e';
    $display->content['new-3880bf86-238b-4dc4-b1bc-60f53cdeca2e'] = $pane;
    $display->panels['preface'][2] = 'new-3880bf86-238b-4dc4-b1bc-60f53cdeca2e';
    $pane = new stdClass();
    $pane->pid = 'new-0146fdaa-c287-44fa-bf41-2ec715f5f2bf';
    $pane->panel = 'second';
    $pane->type = 'contact';
    $pane->subtype = 'contact';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Contact us',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'orange',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0146fdaa-c287-44fa-bf41-2ec715f5f2bf';
    $display->content['new-0146fdaa-c287-44fa-bf41-2ec715f5f2bf'] = $pane;
    $display->panels['second'][0] = 'new-0146fdaa-c287-44fa-bf41-2ec715f5f2bf';
    $pane = new stdClass();
    $pane->pid = 'new-28eca9d9-5c3f-4a2d-b5e4-c20e28b419fb';
    $pane->panel = 'third';
    $pane->type = 'block';
    $pane->subtype = 'mailchimp_signup-signup_block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'THE CAST NEWSLETTER',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'yellow',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '28eca9d9-5c3f-4a2d-b5e4-c20e28b419fb';
    $display->content['new-28eca9d9-5c3f-4a2d-b5e4-c20e28b419fb'] = $pane;
    $display->panels['third'][0] = 'new-28eca9d9-5c3f-4a2d-b5e4-c20e28b419fb';
    $pane = new stdClass();
    $pane->pid = 'new-e93f3e33-c243-4a7e-a94e-5fa69a0b16f7';
    $pane->panel = 'third';
    $pane->type = 'block';
    $pane->subtype = 'bean-contact--urs-art-booking-';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'yellow',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e93f3e33-c243-4a7e-a94e-5fa69a0b16f7';
    $display->content['new-e93f3e33-c243-4a7e-a94e-5fa69a0b16f7'] = $pane;
    $display->panels['third'][1] = 'new-e93f3e33-c243-4a7e-a94e-5fa69a0b16f7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['contact_site_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -99;
  $handler->conf = array(
    'title' => 'Gallery',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'photo_gallery' => 'photo_gallery',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'two_column';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'preface' => NULL,
      'first' => NULL,
      'second' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Gallery: %node:title';
  $display->uuid = '7c5bf228-8197-49ac-b35f-f8158b5a5618';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-30aac09e-50c7-42b2-b33a-c890bde66aab';
    $pane->panel = 'first';
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
    $pane->uuid = '30aac09e-50c7-42b2-b33a-c890bde66aab';
    $display->content['new-30aac09e-50c7-42b2-b33a-c890bde66aab'] = $pane;
    $display->panels['first'][0] = 'new-30aac09e-50c7-42b2-b33a-c890bde66aab';
    $pane = new stdClass();
    $pane->pid = 'new-0c9c9959-2790-4e1a-b22e-1ace3cd5531a';
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
    $pane->uuid = '0c9c9959-2790-4e1a-b22e-1ace3cd5531a';
    $display->content['new-0c9c9959-2790-4e1a-b22e-1ace3cd5531a'] = $pane;
    $display->panels['preface'][0] = 'new-0c9c9959-2790-4e1a-b22e-1ace3cd5531a';
    $pane = new stdClass();
    $pane->pid = 'new-8499f2a5-d217-4016-b2d7-9d0c308a0ee2';
    $pane->panel = 'preface';
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
      'context' => array(
        0 => 'argument_entity_id:node_1.nid',
      ),
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
    $pane->uuid = '8499f2a5-d217-4016-b2d7-9d0c308a0ee2';
    $display->content['new-8499f2a5-d217-4016-b2d7-9d0c308a0ee2'] = $pane;
    $display->panels['preface'][1] = 'new-8499f2a5-d217-4016-b2d7-9d0c308a0ee2';
    $pane = new stdClass();
    $pane->pid = 'new-b926bb5b-b66e-4e7b-af1a-f430bd1c77dc';
    $pane->panel = 'second';
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
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '%node:title',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b926bb5b-b66e-4e7b-af1a-f430bd1c77dc';
    $display->content['new-b926bb5b-b66e-4e7b-af1a-f430bd1c77dc'] = $pane;
    $display->panels['second'][0] = 'new-b926bb5b-b66e-4e7b-af1a-f430bd1c77dc';
    $pane = new stdClass();
    $pane->pid = 'new-ce9c5f79-4ef5-4dd9-be45-2dddb2305903';
    $pane->panel = 'second';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'build_mode' => 'full',
      'identifier' => '',
      'link' => 0,
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ce9c5f79-4ef5-4dd9-be45-2dddb2305903';
    $display->content['new-ce9c5f79-4ef5-4dd9-be45-2dddb2305903'] = $pane;
    $display->panels['second'][1] = 'new-ce9c5f79-4ef5-4dd9-be45-2dddb2305903';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-8499f2a5-d217-4016-b2d7-9d0c308a0ee2';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -98;
  $handler->conf = array(
    'title' => 'Blog post',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'blog_post' => 'blog_post',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
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
  $display->uuid = 'ae109378-4145-42ee-a32b-12ec07c8bf26';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c08d9844-57a7-4b94-a31d-9afb2483cfa0';
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
    $pane->uuid = 'c08d9844-57a7-4b94-a31d-9afb2483cfa0';
    $display->content['new-c08d9844-57a7-4b94-a31d-9afb2483cfa0'] = $pane;
    $display->panels['fifth'][0] = 'new-c08d9844-57a7-4b94-a31d-9afb2483cfa0';
    $pane = new stdClass();
    $pane->pid = 'new-933f172c-a2d3-4fc9-8616-7985e056117b';
    $pane->panel = 'fifth';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '933f172c-a2d3-4fc9-8616-7985e056117b';
    $display->content['new-933f172c-a2d3-4fc9-8616-7985e056117b'] = $pane;
    $display->panels['fifth'][1] = 'new-933f172c-a2d3-4fc9-8616-7985e056117b';
    $pane = new stdClass();
    $pane->pid = 'new-70554093-57ab-4d1a-825e-cc74bd0e38f8';
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
    $pane->uuid = '70554093-57ab-4d1a-825e-cc74bd0e38f8';
    $display->content['new-70554093-57ab-4d1a-825e-cc74bd0e38f8'] = $pane;
    $display->panels['first'][0] = 'new-70554093-57ab-4d1a-825e-cc74bd0e38f8';
    $pane = new stdClass();
    $pane->pid = 'new-1d6b12cd-b854-4748-8340-adbf4e0bcb8e';
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
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1d6b12cd-b854-4748-8340-adbf4e0bcb8e';
    $display->content['new-1d6b12cd-b854-4748-8340-adbf4e0bcb8e'] = $pane;
    $display->panels['fourth'][0] = 'new-1d6b12cd-b854-4748-8340-adbf4e0bcb8e';
    $pane = new stdClass();
    $pane->pid = 'new-6fce3bd2-8133-454e-9e67-50c6603cd9f8';
    $pane->panel = 'fourth';
    $pane->type = 'block';
    $pane->subtype = 'disqus-disqus_comments';
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
    $pane->uuid = '6fce3bd2-8133-454e-9e67-50c6603cd9f8';
    $display->content['new-6fce3bd2-8133-454e-9e67-50c6603cd9f8'] = $pane;
    $display->panels['fourth'][1] = 'new-6fce3bd2-8133-454e-9e67-50c6603cd9f8';
    $pane = new stdClass();
    $pane->pid = 'new-c996d53d-b885-4711-94a8-40d7fba55362';
    $pane->panel = 'preface';
    $pane->type = 'panels_mini';
    $pane->subtype = 'admin_info';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
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
    $pane->uuid = 'c996d53d-b885-4711-94a8-40d7fba55362';
    $display->content['new-c996d53d-b885-4711-94a8-40d7fba55362'] = $pane;
    $display->panels['preface'][0] = 'new-c996d53d-b885-4711-94a8-40d7fba55362';
    $pane = new stdClass();
    $pane->pid = 'new-4e52214d-4129-4ff3-a5b3-8aeaabf62888';
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
    $pane->uuid = '4e52214d-4129-4ff3-a5b3-8aeaabf62888';
    $display->content['new-4e52214d-4129-4ff3-a5b3-8aeaabf62888'] = $pane;
    $display->panels['second'][0] = 'new-4e52214d-4129-4ff3-a5b3-8aeaabf62888';
    $pane = new stdClass();
    $pane->pid = 'new-32c5c37c-1124-4e3d-8fcc-e6edae51cecf';
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
    $pane->uuid = '32c5c37c-1124-4e3d-8fcc-e6edae51cecf';
    $display->content['new-32c5c37c-1124-4e3d-8fcc-e6edae51cecf'] = $pane;
    $display->panels['third'][0] = 'new-32c5c37c-1124-4e3d-8fcc-e6edae51cecf';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-c08d9844-57a7-4b94-a31d-9afb2483cfa0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_3';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -97;
  $handler->conf = array(
    'title' => 'Video',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'video' => 'video',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'two_column';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'preface' => NULL,
      'first' => NULL,
      'second' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Gallery: %node:title';
  $display->uuid = '7c5bf228-8197-49ac-b35f-f8158b5a5618';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e0835429-9cc7-49e0-8b40-cf98baf77d45';
    $pane->panel = 'first';
    $pane->type = 'block';
    $pane->subtype = 'quicktabs-media_video';
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
    $pane->uuid = 'e0835429-9cc7-49e0-8b40-cf98baf77d45';
    $display->content['new-e0835429-9cc7-49e0-8b40-cf98baf77d45'] = $pane;
    $display->panels['first'][0] = 'new-e0835429-9cc7-49e0-8b40-cf98baf77d45';
    $pane = new stdClass();
    $pane->pid = 'new-0c9c9959-2790-4e1a-b22e-1ace3cd5531a';
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
    $pane->uuid = '0c9c9959-2790-4e1a-b22e-1ace3cd5531a';
    $display->content['new-0c9c9959-2790-4e1a-b22e-1ace3cd5531a'] = $pane;
    $display->panels['preface'][0] = 'new-0c9c9959-2790-4e1a-b22e-1ace3cd5531a';
    $pane = new stdClass();
    $pane->pid = 'new-901ff71b-3273-4721-8029-a3f52d388e44';
    $pane->panel = 'preface';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_video';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'file_rendered',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'file_view_mode' => 'default',
      ),
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '901ff71b-3273-4721-8029-a3f52d388e44';
    $display->content['new-901ff71b-3273-4721-8029-a3f52d388e44'] = $pane;
    $display->panels['preface'][1] = 'new-901ff71b-3273-4721-8029-a3f52d388e44';
    $pane = new stdClass();
    $pane->pid = 'new-b926bb5b-b66e-4e7b-af1a-f430bd1c77dc';
    $pane->panel = 'second';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '%node:title',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b926bb5b-b66e-4e7b-af1a-f430bd1c77dc';
    $display->content['new-b926bb5b-b66e-4e7b-af1a-f430bd1c77dc'] = $pane;
    $display->panels['second'][0] = 'new-b926bb5b-b66e-4e7b-af1a-f430bd1c77dc';
    $pane = new stdClass();
    $pane->pid = 'new-ce9c5f79-4ef5-4dd9-be45-2dddb2305903';
    $pane->panel = 'second';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'build_mode' => 'full',
      'identifier' => '',
      'link' => 0,
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'ce9c5f79-4ef5-4dd9-be45-2dddb2305903';
    $display->content['new-ce9c5f79-4ef5-4dd9-be45-2dddb2305903'] = $pane;
    $display->panels['second'][1] = 'new-ce9c5f79-4ef5-4dd9-be45-2dddb2305903';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_3'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view_panel_context';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -99;
  $handler->conf = array(
    'title' => 'User Profile page',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'three_four_adaptive';
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
    ),
  );
  $display->cache = array();
  $display->title = '%user:name';
  $display->uuid = '30a817b4-68b4-415b-ad1c-328ffc65cca8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d2185545-3d7b-4534-85ee-81830983a0dd';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd2185545-3d7b-4534-85ee-81830983a0dd';
    $display->content['new-d2185545-3d7b-4534-85ee-81830983a0dd'] = $pane;
    $display->panels['21'][0] = 'new-d2185545-3d7b-4534-85ee-81830983a0dd';
    $pane = new stdClass();
    $pane->pid = 'new-ddd49894-4098-41cf-bb75-ba4d145ee824';
    $pane->panel = '22';
    $pane->type = 'page_messages';
    $pane->subtype = 'page_messages';
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
    $pane->uuid = 'ddd49894-4098-41cf-bb75-ba4d145ee824';
    $display->content['new-ddd49894-4098-41cf-bb75-ba4d145ee824'] = $pane;
    $display->panels['22'][0] = 'new-ddd49894-4098-41cf-bb75-ba4d145ee824';
    $pane = new stdClass();
    $pane->pid = 'new-d2e76d0c-cd68-429c-9db7-21bccc2e3517';
    $pane->panel = '31';
    $pane->type = 'token';
    $pane->subtype = 'user:picture';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'sanitize' => 1,
      'context' => 'argument_entity_id:user_1',
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
    $pane->uuid = 'd2e76d0c-cd68-429c-9db7-21bccc2e3517';
    $display->content['new-d2e76d0c-cd68-429c-9db7-21bccc2e3517'] = $pane;
    $display->panels['31'][0] = 'new-d2e76d0c-cd68-429c-9db7-21bccc2e3517';
    $pane = new stdClass();
    $pane->pid = 'new-23a268fe-33d7-4dd7-bbdd-247b46351c70';
    $pane->panel = '32';
    $pane->type = 'user_profile';
    $pane->subtype = 'user_profile';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:user_1',
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
    $pane->uuid = '23a268fe-33d7-4dd7-bbdd-247b46351c70';
    $display->content['new-23a268fe-33d7-4dd7-bbdd-247b46351c70'] = $pane;
    $display->panels['32'][0] = 'new-23a268fe-33d7-4dd7-bbdd-247b46351c70';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['user_view_panel_context'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function cast_panels_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'frontpage';
  $page->task = 'page';
  $page->admin_title = 'Frontpage';
  $page->admin_description = '';
  $page->path = 'front';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_frontpage_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'frontpage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'two_column';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'left' => NULL,
      'right' => NULL,
      'top' => NULL,
      'bottom' => NULL,
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
    ),
  );
  $display->cache = array();
  $display->title = 'The Cast';
  $display->uuid = 'cee9c583-1723-4c8f-8ab0-7dd5cfca53dd';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-81f80e6a-8d9d-4dfe-b419-40109f427f24';
    $pane->panel = 'first';
    $pane->type = 'block';
    $pane->subtype = 'boxes-operatic_film_special_edition';
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
    $pane->uuid = '81f80e6a-8d9d-4dfe-b419-40109f427f24';
    $display->content['new-81f80e6a-8d9d-4dfe-b419-40109f427f24'] = $pane;
    $display->panels['first'][0] = 'new-81f80e6a-8d9d-4dfe-b419-40109f427f24';
    $pane = new stdClass();
    $pane->pid = 'new-117979cc-713d-4622-986c-8e0017422149';
    $pane->panel = 'first';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'filtered_html',
      'substitute' => TRUE,
      'name' => 'soundcloud_brindisi_encore',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'short',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '117979cc-713d-4622-986c-8e0017422149';
    $display->content['new-117979cc-713d-4622-986c-8e0017422149'] = $pane;
    $display->panels['first'][1] = 'new-117979cc-713d-4622-986c-8e0017422149';
    $pane = new stdClass();
    $pane->pid = 'new-0d71851b-fca1-4f9a-85ac-0e4a09802114';
    $pane->panel = 'first';
    $pane->type = 'block';
    $pane->subtype = 'boxes-live_from_paris_album';
    $pane->shown = FALSE;
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '0d71851b-fca1-4f9a-85ac-0e4a09802114';
    $display->content['new-0d71851b-fca1-4f9a-85ac-0e4a09802114'] = $pane;
    $display->panels['first'][2] = 'new-0d71851b-fca1-4f9a-85ac-0e4a09802114';
    $pane = new stdClass();
    $pane->pid = 'new-2a96aa7c-f015-4142-a96e-3088a45a32db';
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
    $pane->uuid = '2a96aa7c-f015-4142-a96e-3088a45a32db';
    $display->content['new-2a96aa7c-f015-4142-a96e-3088a45a32db'] = $pane;
    $display->panels['preface'][0] = 'new-2a96aa7c-f015-4142-a96e-3088a45a32db';
    $pane = new stdClass();
    $pane->pid = 'new-b4b8fec2-731a-4285-bd27-0951b5c155dd';
    $pane->panel = 'preface';
    $pane->type = 'views';
    $pane->subtype = 'frontpage_slideshow_blocks';
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
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b4b8fec2-731a-4285-bd27-0951b5c155dd';
    $display->content['new-b4b8fec2-731a-4285-bd27-0951b5c155dd'] = $pane;
    $display->panels['preface'][1] = 'new-b4b8fec2-731a-4285-bd27-0951b5c155dd';
    $pane = new stdClass();
    $pane->pid = 'new-edfb02d5-a0fa-4387-b3e9-49963bd4db5b';
    $pane->panel = 'second';
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
    $pane->uuid = 'edfb02d5-a0fa-4387-b3e9-49963bd4db5b';
    $display->content['new-edfb02d5-a0fa-4387-b3e9-49963bd4db5b'] = $pane;
    $display->panels['second'][0] = 'new-edfb02d5-a0fa-4387-b3e9-49963bd4db5b';
    $pane = new stdClass();
    $pane->pid = 'new-565ad1dd-d284-48c6-afb7-ed32b0e8e9e1';
    $pane->panel = 'second';
    $pane->type = 'block';
    $pane->subtype = 'mailchimp_lists-the_cast_newsletter';
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
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'yellow short',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '565ad1dd-d284-48c6-afb7-ed32b0e8e9e1';
    $display->content['new-565ad1dd-d284-48c6-afb7-ed32b0e8e9e1'] = $pane;
    $display->panels['second'][1] = 'new-565ad1dd-d284-48c6-afb7-ed32b0e8e9e1';
    $pane = new stdClass();
    $pane->pid = 'new-212fd229-2bae-4178-ae3d-eeaf50514d7d';
    $pane->panel = 'second';
    $pane->type = 'block';
    $pane->subtype = 'boxes-link_about';
    $pane->shown = FALSE;
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '212fd229-2bae-4178-ae3d-eeaf50514d7d';
    $display->content['new-212fd229-2bae-4178-ae3d-eeaf50514d7d'] = $pane;
    $display->panels['second'][2] = 'new-212fd229-2bae-4178-ae3d-eeaf50514d7d';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages[''] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'upcoming';
  $page->task = 'page';
  $page->admin_title = 'Upcoming';
  $page->admin_description = 'members as a panel';
  $page->path = 'upcoming';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_upcoming_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'upcoming';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Upcoming',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'one_column';
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
      'main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Upcoming';
  $display->uuid = '93c88ff2-b40c-498e-9e68-7152274e7152';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-676cff68-4159-4fe9-a1a9-0eee8b22f6f3';
    $pane->panel = 'main';
    $pane->type = 'block';
    $pane->subtype = 'boxes-backdrop_2015upcoming';
    $pane->shown = FALSE;
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
    $pane->uuid = '676cff68-4159-4fe9-a1a9-0eee8b22f6f3';
    $display->content['new-676cff68-4159-4fe9-a1a9-0eee8b22f6f3'] = $pane;
    $display->panels['main'][0] = 'new-676cff68-4159-4fe9-a1a9-0eee8b22f6f3';
    $pane = new stdClass();
    $pane->pid = 'new-b7b48c14-0cb6-4514-a496-c0096df24b49';
    $pane->panel = 'main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Upcoming teaser',
      'title' => '',
      'body' => '<p>2014 was a great year for The Cast, with two German tours, an EP, and a special tour to Paris! 2015 will see the release of a feature-length documentary about The Cast. Stay tuned here and on our Facebook page for premiere and screening dates.</p>

<p>&nbsp;</p>
',
      'format' => 'filtered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane--nodebody',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b7b48c14-0cb6-4514-a496-c0096df24b49';
    $display->content['new-b7b48c14-0cb6-4514-a496-c0096df24b49'] = $pane;
    $display->panels['main'][1] = 'new-b7b48c14-0cb6-4514-a496-c0096df24b49';
    $pane = new stdClass();
    $pane->pid = 'new-a9fd6d6f-bd11-4e79-8f11-e8112aac19df';
    $pane->panel = 'main';
    $pane->type = 'views';
    $pane->subtype = 'upcoming';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'a9fd6d6f-bd11-4e79-8f11-e8112aac19df';
    $display->content['new-a9fd6d6f-bd11-4e79-8f11-e8112aac19df'] = $pane;
    $display->panels['main'][2] = 'new-a9fd6d6f-bd11-4e79-8f11-e8112aac19df';
    $pane = new stdClass();
    $pane->pid = 'new-4e84b212-6349-4926-bb43-86c4d09b4f92';
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
    $pane->uuid = '4e84b212-6349-4926-bb43-86c4d09b4f92';
    $display->content['new-4e84b212-6349-4926-bb43-86c4d09b4f92'] = $pane;
    $display->panels['preface'][0] = 'new-4e84b212-6349-4926-bb43-86c4d09b4f92';
    $pane = new stdClass();
    $pane->pid = 'new-5e83f0a6-7eff-4cd6-800c-7398e7e84776';
    $pane->panel = 'preface';
    $pane->type = 'block';
    $pane->subtype = 'boxes-demo_banner';
    $pane->shown = FALSE;
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
    $pane->uuid = '5e83f0a6-7eff-4cd6-800c-7398e7e84776';
    $display->content['new-5e83f0a6-7eff-4cd6-800c-7398e7e84776'] = $pane;
    $display->panels['preface'][1] = 'new-5e83f0a6-7eff-4cd6-800c-7398e7e84776';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages[''] = $page;

  return $pages;

}
