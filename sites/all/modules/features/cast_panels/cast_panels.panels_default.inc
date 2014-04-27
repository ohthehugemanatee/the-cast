<?php
/**
 * @file
 * cast_panels.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function cast_panels_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'admin_info';
  $mini->category = '';
  $mini->admin_title = 'Admin info';
  $mini->admin_description = 'Tabs, messages, general admin area';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '5b6a0771-a661-4542-9c38-397204df89b4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-645d538f-cc54-4b41-b002-608cc3dca329';
    $pane->panel = 'middle';
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
    $pane->uuid = '645d538f-cc54-4b41-b002-608cc3dca329';
    $display->content['new-645d538f-cc54-4b41-b002-608cc3dca329'] = $pane;
    $display->panels['middle'][0] = 'new-645d538f-cc54-4b41-b002-608cc3dca329';
    $pane = new stdClass();
    $pane->pid = 'new-d64f5cc9-1e36-4f5d-b385-775993f3a399';
    $pane->panel = 'middle';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'both',
      'id' => 'tabs',
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
    $pane->uuid = 'd64f5cc9-1e36-4f5d-b385-775993f3a399';
    $display->content['new-d64f5cc9-1e36-4f5d-b385-775993f3a399'] = $pane;
    $display->panels['middle'][1] = 'new-d64f5cc9-1e36-4f5d-b385-775993f3a399';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-645d538f-cc54-4b41-b002-608cc3dca329';
  $mini->display = $display;
  $export['admin_info'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'site_footer';
  $mini->category = '';
  $mini->admin_title = 'Site Footer';
  $mini->admin_description = 'Global site footer';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b1eccd85-83b6-43f8-97b0-e3f1a23afd5c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-26d66678-6e69-40c9-99c4-d66cb8243870';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-footer-social-links';
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
    $pane->uuid = '26d66678-6e69-40c9-99c4-d66cb8243870';
    $display->content['new-26d66678-6e69-40c9-99c4-d66cb8243870'] = $pane;
    $display->panels['middle'][0] = 'new-26d66678-6e69-40c9-99c4-d66cb8243870';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['site_footer'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'site_header';
  $mini->category = '';
  $mini->admin_title = 'Site header';
  $mini->admin_description = 'Global title and main menu';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'No Title';
  $display->uuid = '705e9d94-e257-4d25-81bf-a3a05f9aa870';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4eafa787-579c-414a-ae60-16562f32b83d';
    $pane->panel = 'middle';
    $pane->type = 'page_site_name';
    $pane->subtype = 'page_site_name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'linked' => 1,
    );
    $pane->cache = array(
      'method' => 0,
    );
    $pane->style = array(
      'settings' => NULL,
      'style' => 'block',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4eafa787-579c-414a-ae60-16562f32b83d';
    $display->content['new-4eafa787-579c-414a-ae60-16562f32b83d'] = $pane;
    $display->panels['middle'][0] = 'new-4eafa787-579c-414a-ae60-16562f32b83d';
    $pane = new stdClass();
    $pane->pid = 'new-3b885ae7-b56a-4c69-92d5-b74760331914';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'system-main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '  ',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'block',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3b885ae7-b56a-4c69-92d5-b74760331914';
    $display->content['new-3b885ae7-b56a-4c69-92d5-b74760331914'] = $pane;
    $display->panels['middle'][1] = 'new-3b885ae7-b56a-4c69-92d5-b74760331914';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-4eafa787-579c-414a-ae60-16562f32b83d';
  $mini->display = $display;
  $export['site_header'] = $mini;

  return $export;
}
