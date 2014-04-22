<?php
/**
 * @file
 * cast_contact.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cast_contact_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_mailchimp_list().
 */
function cast_contact_default_mailchimp_list() {
  $items = array();
  $items['the_cast_newsletter'] = entity_import('mailchimp_list', '{
    "name" : "the_cast_newsletter",
    "mc_list_id" : "9ddb2bde98",
    "label" : "The Cast newsletter",
    "description" : "Subscribe to our newsletter and we\\u0027ll keep you updated on upcoming events and special offers!",
    "settings" : {
      "roles" : { "1" : 1 },
      "mergefields" : { "EMAIL" : "mail", "FNAME" : "", "LNAME" : "" },
      "mergefields_display" : { "EMAIL" : true, "FNAME" : 0, "LNAME" : 0 },
      "doublein" : 0,
      "show_register_form" : 0,
      "default_register_form_optin" : 0,
      "show_account_form" : 0,
      "form_label" : "The Cast Newsletter",
      "submit_label" : "Subscribe",
      "include_interest_groups" : 0,
      "opt_in_interest_groups" : 0,
      "interest_groups_label" : "Interest Groups",
      "cron" : 0,
      "webhooks" : 0,
      "allow_anonymous" : 1,
      "required" : 0
    },
    "rdf_mapping" : []
  }');
  return $items;
}
