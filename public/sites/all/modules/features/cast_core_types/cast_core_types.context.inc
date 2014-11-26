<?php
/**
 * @file
 * cast_core_types.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function cast_core_types_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = 'Header and footer';
  $context->tag = '';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'panels_mini-site_header' => array(
          'module' => 'panels_mini',
          'delta' => 'site_header',
          'region' => 'header',
          'weight' => '-10',
        ),
        'panels_mini-site_footer' => array(
          'module' => 'panels_mini',
          'delta' => 'site_footer',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Header and footer');
  $export['sitewide'] = $context;

  return $export;
}
