<?php
/**
 * Implements hook_panels_layouts().
 */
function f1ux_two_column_panels_layouts() {
  $items['two_column'] = array(
    'title' => t('Preface and two columns'),
    'category' => t('F1ux'),
    'icon' => 'two_column.png',
    'theme' => 'two_column',
    'admin css' => '../../../css/panels-admin/two-column.css',
    'regions' => array(
      'preface' => t('Preface'),
      'first' => t('First'),
      'second' => t('Second'),
    ),
  );

  return $items;
}
