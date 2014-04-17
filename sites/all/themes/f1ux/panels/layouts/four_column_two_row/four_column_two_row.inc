<?php
/**
 * Implements hook_panels_layouts().
 */
function f1ux_four_column_two_row_panels_layouts() {
  $items['four_column_two_row'] = array(
    'title' => t('Preface and four column, two row'),
    'category' => t('F1ux'),
    'icon' => 'four_column_two_row.png',
    'theme' => 'four_column_two_row',
    'admin css' => '../../../css/panels-admin/four-column-two-row.css',
    'regions' => array(
      'preface' => t('Preface'),
      'first' => t('First'),
      'second' => t('Second'),
      'third' => t('Third'),
      'fourth' => t('Fourth'),
      'fifth' => t('Fifth'),
      'sixth' => t('Sixth'),
    ),
  );

  return $items;
}
