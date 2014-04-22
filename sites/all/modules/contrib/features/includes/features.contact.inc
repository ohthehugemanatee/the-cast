<?php
/**
 * Implements hook_features_api().
 */
function contact_features_api() {
  return array(
    'contact_categories' => array(
      'name'           => t('Contact categories'),
      'feature_source' => TRUE,
      'default_hook'   => 'contact_categories_defaults',
      'default_file'   => FEATURES_DEFAULTS_INCLUDED,
    ),
  );
}

/**
 * Implements hook_features_export_options().
 */
function contact_categories_features_export_options() {
  $options = array();
  foreach (db_select('contact', 'c')->fields('c')->execute()->fetchAll() as $category) {
    $options["category_{$category->cid}"] = "category_{$category->category}";
  }
  return $options;
}

/**
 * Implements hook_features_export().
 */
function contact_categories_features_export($data, &$export, $module_name = '') {
  $export['dependencies']['features'] = 'features';
  $export['dependencies']['contact']  = 'contact';

  foreach ($data as $name) {
    $export['features']['contact_categories'][$name] = $name;
  }

  return array();
}

/**
 * Implements hook_features_export_render().
 */
function contact_categories_features_export_render($module, $data, $export = NULL) {
  $render = array();
  foreach ($data as $name) {
    $cid = explode('_', $name);
    if (isset($cid[1]) && ($category = contact_load($cid[1]))) {
      $render[$name] = $category;
    }
  }
  return array('contact_categories_defaults' => '  return '. features_var_export($render, '  ') .';');
}

/**
 * Implements hook_features_revert().
 */
function contact_categories_features_revert($module) {
  return contact_categories_features_rebuild($module);
}

/**
 * Implements hook_features_rebuild().
 */
function contact_categories_features_rebuild($module) {
  if ($defaults = features_get_default('contact_categories', $module)) {
    foreach ($defaults as $category) {
      db_merge('contact')->key(array('cid' => $category['cid']))->fields($category)->execute();
    }
  }
}
