<?php
/**
 * @file
 * cast_core_types.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function cast_core_types_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|bio|members_page';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'bio';
  $ds_fieldsetting->view_mode = 'members_page';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|bio|members_page'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|blog_post|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'blog_post';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'links' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'submitted_by' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'ds_post_date_long',
    ),
  );
  $export['node|blog_post|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|blog_post|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'blog_post';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
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
    ),
    'node_link' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'submitted_by' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'ds_post_date_long',
    ),
  );
  $export['node|blog_post|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|event|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'event';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'links' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|event|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|event|members_page';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'event';
  $ds_fieldsetting->view_mode = 'members_page';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'links' => array(
      'weight' => '14',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|event|members_page'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function cast_core_types_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|audio|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'audio';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_image',
        1 => 'field_body_text',
        2 => 'field_audio',
        3 => 'group_bottomright',
      ),
    ),
    'fields' => array(
      'field_image' => 'ds_content',
      'field_body_text' => 'ds_content',
      'field_audio' => 'ds_content',
      'group_bottomright' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|audio|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|bio|members_page';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'bio';
  $ds_layout->view_mode = 'members_page';
  $ds_layout->layout = 'slat';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'title',
        1 => 'field_fach',
      ),
      'media' => array(
        2 => 'field_headshot',
      ),
      'main_content' => array(
        3 => 'body',
        4 => 'field_body_right',
      ),
    ),
    'fields' => array(
      'title' => 'header',
      'field_fach' => 'header',
      'field_headshot' => 'media',
      'body' => 'main_content',
      'field_body_right' => 'main_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'media' => 'div',
      'main_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|bio|members_page'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|blog_post|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'blog_post';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'submitted_by',
        2 => 'body',
        3 => 'links',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'submitted_by' => 'ds_content',
      'body' => 'ds_content',
      'links' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|blog_post|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|blog_post|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'blog_post';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'submitted_by',
        2 => 'body',
        3 => 'node_link',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'submitted_by' => 'ds_content',
      'body' => 'ds_content',
      'node_link' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|blog_post|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_3col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'title',
      ),
      'left' => array(
        1 => 'field_image',
        2 => 'field_date',
        3 => 'field_location',
        4 => 'field_tickets_link',
      ),
      'middle' => array(
        6 => 'body',
        7 => 'links',
      ),
    ),
    'fields' => array(
      'title' => 'header',
      'field_image' => 'left',
      'field_date' => 'left',
      'field_location' => 'left',
      'field_tickets_link' => 'left',
      'body' => 'middle',
      'links' => 'middle',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'middle' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|event|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event|members_page';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event';
  $ds_layout->view_mode = 'members_page';
  $ds_layout->layout = 'slat';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'title',
      ),
      'media' => array(
        1 => 'field_image',
      ),
      'main_content' => array(
        2 => 'group_left',
        3 => 'group_right',
        4 => 'field_tickets_link',
        6 => 'field_date',
        7 => 'links',
        8 => 'field_location',
        9 => 'body',
        10 => 'group_body_wrapper',
        11 => 'group_bottomright',
      ),
    ),
    'fields' => array(
      'title' => 'header',
      'field_image' => 'media',
      'group_left' => 'main_content',
      'group_right' => 'main_content',
      'field_tickets_link' => 'main_content',
      'field_date' => 'main_content',
      'links' => 'main_content',
      'field_location' => 'main_content',
      'body' => 'main_content',
      'group_body_wrapper' => 'main_content',
      'group_bottomright' => 'main_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'media' => 'div',
      'main_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|event|members_page'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function cast_core_types_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'members_page';
  $ds_view_mode->label = 'members page';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['members_page'] = $ds_view_mode;

  return $export;
}
