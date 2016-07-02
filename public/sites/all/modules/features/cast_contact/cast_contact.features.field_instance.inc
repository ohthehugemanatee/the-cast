<?php
/**
 * @file
 * cast_contact.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function cast_contact_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'redhen_contact-contact-field_mailchimp_subscription'.
  $field_instances['redhen_contact-contact-field_mailchimp_subscription'] = array(
    'bundle' => 'contact',
    'default_value' => array(
      0 => array(
        'subscribe' => 1,
        'interest_groups' => array(
          '50405c5d7d' => '33301ce60b',
        ),
        'is_default' => TRUE,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'mailchimp_lists',
        'settings' => array(
          'interest_groups' => array(),
          'linked_field' => array(
            'advanced' => array(
              'class' => '',
              'rel' => '',
              'target' => '',
              'text' => '',
              'title' => '',
            ),
            'destination' => '',
            'linked' => 0,
          ),
          'show_interest_groups' => FALSE,
        ),
        'type' => 'mailchimp_lists_subscribe_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'redhen_contact',
    'field_name' => 'field_mailchimp_subscription',
    'label' => 'Mailchimp subscription',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'interest_groups_title' => 'Groups',
      'mergefields' => array(
        'EMAIL' => '[redhen_contact:email]',
        'FNAME' => '[redhen_contact:first-name]',
        'LNAME' => '[redhen_contact:last-name]',
        'advanced' => 1,
      ),
      'options' => array(
        'interest_groups' => array(),
        'subscribe' => FALSE,
      ),
      'show_interest_groups' => 1,
      'unsubscribe_on_delete' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'mailchimp_lists',
      'settings' => array(),
      'type' => 'mailchimp_lists_select',
      'weight' => 7,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Mailchimp subscription');

  return $field_instances;
}
