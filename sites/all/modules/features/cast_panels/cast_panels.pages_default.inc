<?php
/**
 * @file
 * cast_panels.pages_default.inc
 */

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
  $page->access = array();
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
  $display->layout = 'twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'left' => NULL,
      'right' => NULL,
      'top' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'No Title';
  $display->uuid = 'cee9c583-1723-4c8f-8ab0-7dd5cfca53dd';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4a99cb3a-ecea-49f0-b826-21a7f6de0200';
    $pane->panel = 'left';
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
    $pane->uuid = '4a99cb3a-ecea-49f0-b826-21a7f6de0200';
    $display->content['new-4a99cb3a-ecea-49f0-b826-21a7f6de0200'] = $pane;
    $display->panels['left'][0] = 'new-4a99cb3a-ecea-49f0-b826-21a7f6de0200';
    $pane = new stdClass();
    $pane->pid = 'new-53c3e650-56f5-4d8e-aaf4-4e9ab7d4544b';
    $pane->panel = 'left';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '53c3e650-56f5-4d8e-aaf4-4e9ab7d4544b';
    $display->content['new-53c3e650-56f5-4d8e-aaf4-4e9ab7d4544b'] = $pane;
    $display->panels['left'][1] = 'new-53c3e650-56f5-4d8e-aaf4-4e9ab7d4544b';
    $pane = new stdClass();
    $pane->pid = 'new-212fd229-2bae-4178-ae3d-eeaf50514d7d';
    $pane->panel = 'right';
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
    $pane->uuid = '212fd229-2bae-4178-ae3d-eeaf50514d7d';
    $display->content['new-212fd229-2bae-4178-ae3d-eeaf50514d7d'] = $pane;
    $display->panels['right'][0] = 'new-212fd229-2bae-4178-ae3d-eeaf50514d7d';
    $pane = new stdClass();
    $pane->pid = 'new-edfb02d5-a0fa-4387-b3e9-49963bd4db5b';
    $pane->panel = 'right';
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'edfb02d5-a0fa-4387-b3e9-49963bd4db5b';
    $display->content['new-edfb02d5-a0fa-4387-b3e9-49963bd4db5b'] = $pane;
    $display->panels['right'][1] = 'new-edfb02d5-a0fa-4387-b3e9-49963bd4db5b';
    $pane = new stdClass();
    $pane->pid = 'new-6dfa0a38-ba5e-41b0-a96a-2d551634e500';
    $pane->panel = 'top';
    $pane->type = 'page_site_name';
    $pane->subtype = 'page_site_name';
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
    $pane->uuid = '6dfa0a38-ba5e-41b0-a96a-2d551634e500';
    $display->content['new-6dfa0a38-ba5e-41b0-a96a-2d551634e500'] = $pane;
    $display->panels['top'][0] = 'new-6dfa0a38-ba5e-41b0-a96a-2d551634e500';
    $pane = new stdClass();
    $pane->pid = 'new-ac29c350-96a9-4c87-bab5-b472fcbfb984';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'system-main-menu';
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
    $pane->uuid = 'ac29c350-96a9-4c87-bab5-b472fcbfb984';
    $display->content['new-ac29c350-96a9-4c87-bab5-b472fcbfb984'] = $pane;
    $display->panels['top'][1] = 'new-ac29c350-96a9-4c87-bab5-b472fcbfb984';
  $display->hide_title = PANELS_TITLE_PANE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['frontpage'] = $page;

  return $pages;

}
