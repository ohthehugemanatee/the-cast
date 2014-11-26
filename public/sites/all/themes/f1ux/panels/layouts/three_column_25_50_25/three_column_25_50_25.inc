<?php
/**
 * Implements hook_panels_layouts().
 */
function f1ux_three_column_25_50_25_panels_layouts() {
  $items['three_column_25_50_25'] = array(
    'title' => t('Preface and three column (25/50/25)'),
    'category' => t('F1ux'),
    'icon' => 'three_column_25_50_25.png',
    'theme' => 'three_column_25_50_25',
    'admin css' => '../../../css/panels-admin/three-column-25-50-25.css',
    'regions' => array(
      'preface' => t('Preface'),
      'first' => t('First'),
      'second' => t('Second'),
      'third' => t('Third'),
    ),
  );

  return $items;
}
