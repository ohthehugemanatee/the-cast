<?php
/**
 * Implements hook_panels_layouts().
 */
function f1ux_sidebar_panels_layouts() {
  $items['sidebar'] = array(
    'title' => t('Preface and right sidebar'),
    'category' => t('F1ux'),
    'icon' => 'sidebar.png',
    'theme' => 'sidebar',
    'admin css' => '../../../css/panels-admin/sidebar.css',
    'regions' => array(
      'preface' => t('Preface'),
      'main' => t('Main column'),
      'sidebar' => t('Sidebar'),
    ),
  );

  return $items;
}
