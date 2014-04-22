<?php
/**
 * @file
 * cast_contact.features.contact_categories.inc
 */

/**
 * Implements hook_contact_categories_defaults().
 */
function cast_contact_contact_categories_defaults() {
  return array(
    'category_1' => array(
      'cid' => 1,
      'category' => 'Booking / Press',
      'recipients' => 'booking@the-cast.de',
      'reply' => '',
      'weight' => 0,
      'selected' => 1,
      'page_title' => 'Contact',
      'page_info' => 'For booking requests or more information, please email us at booking@the-cast.de , or enter your information here.',
    ),
    'category_2' => array(
      'cid' => 2,
      'category' => 'Fan mail',
      'recipients' => 'info@the-cast.de',
      'reply' => '',
      'weight' => 0,
      'selected' => 0,
      'page_title' => NULL,
      'page_info' => NULL,
    ),
  );
}
