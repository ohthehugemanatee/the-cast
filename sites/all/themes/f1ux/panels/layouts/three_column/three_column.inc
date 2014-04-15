<?php
/**
 * Implements hook_panels_layouts().
 */
function f1ux_three_column_panels_layouts() {
  $items['three_column'] = array(
    'title' => t('Three column'),
    'category' => t('F1ux'),
    'icon' => 'three_column.png',
    'theme' => 'three_column',
    'admin css' => '../../../css/panels-admin/three-column.css',
    'regions' => array(
      'preface' => t('Preface'),
      'first' => t('First'),
      'second' => t('Second'),
      'third' => t('Third'),
    ),
  );

  return $items;
}
