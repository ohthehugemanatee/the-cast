<?php
/**
 * Implements hook_panels_layouts().
 */
function f1ux_one_column_panels_layouts() {
  $items['one_column'] = array(
    'title' => t('One column'),
    'category' => t('F1ux'),
    'icon' => 'one_column.png',
    'theme' => 'one_column',
    'admin css' => '../../../../css/panels-admin/one-column.css',
    'regions' => array(
      'preface' => t('Preface'),
      'main' => t('Main'),
    ),
  );

  return $items;
}
