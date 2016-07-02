<?php
/**
 * @file
 * cast_contact.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function cast_contact_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_mailchimp_subscription'.
  $field_bases['field_mailchimp_subscription'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_mailchimp_subscription',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'mailchimp_lists',
    'settings' => array(
      'double_opt_in' => 0,
      'entity_translation_sync' => FALSE,
      'mc_list_id' => 'ae856802b1',
      'unsubscribe_action' => 'unsubscribe',
    ),
    'translatable' => 0,
    'type' => 'mailchimp_lists_subscription',
  );

  return $field_bases;
}
