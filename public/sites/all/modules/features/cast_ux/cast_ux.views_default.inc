<?php
/**
 * @file
 * cast_ux.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function cast_ux_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'events_dashboard';
  $view->description = 'View and edit events that are unpublished, manually controlled, etc';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Events dashboard';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Events dashboard';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer nodes';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'long',
    'custom_date_format' => '',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
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
  );
  /* Field: Content: Location - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_location_locality']['id'] = 'field_location_locality';
  $handler->display->display_options['fields']['field_location_locality']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location_locality']['field'] = 'field_location_locality';
  $handler->display->display_options['fields']['field_location_locality']['label'] = 'City';
  /* Field: Content: Tickets link */
  $handler->display->display_options['fields']['field_tickets_link']['id'] = 'field_tickets_link';
  $handler->display->display_options['fields']['field_tickets_link']['table'] = 'field_data_field_tickets_link';
  $handler->display->display_options['fields']['field_tickets_link']['field'] = 'field_tickets_link';
  /* Field: Content: Manual override */
  $handler->display->display_options['fields']['field_manual_override']['id'] = 'field_manual_override';
  $handler->display->display_options['fields']['field_manual_override']['table'] = 'field_data_field_manual_override';
  $handler->display->display_options['fields']['field_manual_override']['field'] = 'field_manual_override';
  $handler->display->display_options['fields']['field_manual_override']['settings'] = array(
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
  );
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  /* Field: Content revision: Log message */
  $handler->display->display_options['fields']['log']['id'] = 'log';
  $handler->display->display_options['fields']['log']['table'] = 'node_revision';
  $handler->display->display_options['fields']['log']['field'] = 'log';
  /* Sort criterion: Content: Date (field_date) */
  $handler->display->display_options['sorts']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['sorts']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['sorts']['field_date_value']['field'] = 'field_date_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '0';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Content: Manual override (field_manual_override) */
  $handler->display->display_options['filters']['field_manual_override_value']['id'] = 'field_manual_override_value';
  $handler->display->display_options['filters']['field_manual_override_value']['table'] = 'field_data_field_manual_override';
  $handler->display->display_options['filters']['field_manual_override_value']['field'] = 'field_manual_override_value';
  $handler->display->display_options['filters']['field_manual_override_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_manual_override_value']['expose']['operator_id'] = 'field_manual_override_value_op';
  $handler->display->display_options['filters']['field_manual_override_value']['expose']['label'] = 'Manual override (field_manual_override)';
  $handler->display->display_options['filters']['field_manual_override_value']['expose']['operator'] = 'field_manual_override_value_op';
  $handler->display->display_options['filters']['field_manual_override_value']['expose']['identifier'] = 'field_manual_override_value';
  $handler->display->display_options['filters']['field_manual_override_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_manual_override_value']['group_info']['label'] = 'Manual override';
  $handler->display->display_options['filters']['field_manual_override_value']['group_info']['identifier'] = 'field_manual_override_value';
  $handler->display->display_options['filters']['field_manual_override_value']['group_info']['widget'] = 'radios';
  $handler->display->display_options['filters']['field_manual_override_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'On',
      'operator' => 'or',
      'value' => array(
        1 => '1',
      ),
    ),
    2 => array(
      'title' => 'Off',
      'operator' => 'or',
      'value' => array(
        0 => '0',
      ),
    ),
  );
  /* Filter criterion: Content: Date (field_date) */
  $handler->display->display_options['filters']['field_date_value']['id'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['table'] = 'field_data_field_date';
  $handler->display->display_options['filters']['field_date_value']['field'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator_id'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['label'] = 'Date (field_date)';
  $handler->display->display_options['filters']['field_date_value']['expose']['operator'] = 'field_date_value_op';
  $handler->display->display_options['filters']['field_date_value']['expose']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_date_value']['group_info']['label'] = 'Date (field_date)';
  $handler->display->display_options['filters']['field_date_value']['group_info']['identifier'] = 'field_date_value';
  $handler->display->display_options['filters']['field_date_value']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_date_value']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_date_value']['default_date'] = 'now';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/content/events-dashboard';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Events dashboard';
  $handler->display->display_options['menu']['name'] = 'management';
  $translatables['events_dashboard'] = array(
    t('Master'),
    t('Events dashboard'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Date'),
    t('City'),
    t('Tickets link'),
    t('Manual override'),
    t('Published'),
    t('Edit link'),
    t('Log message'),
    t('Manual override (field_manual_override)'),
    t('Date (field_date)'),
    t('Page'),
  );
  $export['events_dashboard'] = $view;

  return $export;
}
