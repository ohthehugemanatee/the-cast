<?php
/**
 * Implements hook_panels_layouts().
 */
function f1ux_three_column_two_row_panels_layouts() {
  $items['three_column_two_row'] = array(
    'title' => t('Preface and three column, two row'),
    'category' => t('F1ux'),
    'icon' => 'three_column_two_row.png',
    'theme' => 'three_column_two_row',
    'admin css' => '../../../css/panels-admin/three-column-two-row.css',
    'regions' => array(
      'preface' => t('Preface'),
      'first' => t('First'),
      'second' => t('Second'),
      'third' => t('Third'),
      'fourth' => t('Fourth'),
      'fifth' => t('Fifth'),
    ),
  );

  return $items;
}
