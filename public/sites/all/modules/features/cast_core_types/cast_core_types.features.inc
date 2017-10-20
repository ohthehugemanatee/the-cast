<?php
/**
 * @file
 * cast_core_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cast_core_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function cast_core_types_image_default_styles() {
  $styles = array();

  // Exported image style: 2col_tall_block.
  $styles['2col_tall_block'] = array(
    'label' => '2col tall block',
    'effects' => array(
      6 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 837.76,
          'height' => 440,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: banner_image.
  $styles['banner_image'] = array(
    'label' => 'banner image',
    'effects' => array(
      7 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 1689.6,
          'height' => 528,
          'focal_point_advanced' => array(
            'shift_x' => '',
            'shift_y' => '',
          ),
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: gallery_grid.
  $styles['gallery_grid'] = array(
    'label' => 'gallery grid',
    'effects' => array(
      10 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 411.84,
          'height' => 264,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: members_layout_image.
  $styles['members_layout_image'] = array(
    'label' => 'members layout image',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 411.84,
          'height' => 528,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: photo_gallery_main_image.
  $styles['photo_gallery_main_image'] = array(
    'label' => 'photo gallery main image',
    'effects' => array(
      3 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => '1600',
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
      4 => array(
        'name' => 'image_crop',
        'data' => array(
          'width' => 1600,
          'height' => 1000,
          'anchor' => 'center-center',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: photo_gallery_thumbnail.
  $styles['photo_gallery_thumbnail'] = array(
    'label' => 'photo gallery thumbnail',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 195.36,
          'height' => 126.72,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: social_block.
  $styles['social_block'] = array(
    'label' => 'social block',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 84.48,
          'height' => 84.48,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function cast_core_types_node_info() {
  $items = array(
    'audio' => array(
      'name' => t('Audio'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'bio' => array(
      'name' => t('Bio'),
      'base' => 'node_content',
      'description' => t('Member of the Cast'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'blog_post' => array(
      'name' => t('Blog post'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'frontpage_slide' => array(
      'name' => t('frontpage slide'),
      'base' => 'node_content',
      'description' => t('Slides for the frontpage'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'photo_gallery' => array(
      'name' => t('photo gallery'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'video' => array(
      'name' => t('Video'),
      'base' => 'node_content',
      'description' => t('An individual video'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
