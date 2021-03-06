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
 * Implements hook_default_mailchimp_signup().
 */
function cast_contact_default_mailchimp_signup() {
  $items = array();
  $items['signup_block'] = entity_import('mailchimp_signup', '{
    "name" : "signup_block",
    "mc_lists" : { "ae856802b1" : "ae856802b1" },
    "mode" : "1",
    "title" : "Signup block",
    "settings" : {
      "path" : "",
      "submit_button" : "Subscribe",
      "confirmation_message" : "You have been successfully subscribed.",
      "destination" : "",
      "mergefields" : {
        "EMAIL" : {"tag":"EMAIL","name":"Email Address","type":"email","required":true,"default_value":"","public":true,"display_order":1,"options":{"size":25}},
        "CITY" : {"merge_id":4,"tag":"CITY","name":"City","type":"text","required":false,"default_value":"","public":true,"display_order":6,"options":{"size":25},"help_text":"","list_id":"ae856802b1","_links":[{"rel":"self","href":"https:\\/\\/us8.api.mailchimp.com\\/3.0\\/lists\\/ae856802b1\\/merge-fields\\/4","method":"GET","targetSchema":"https:\\/\\/us8.api.mailchimp.com\\/schema\\/3.0\\/Definitions\\/Lists\\/MergeFields\\/Response.json"},{"rel":"parent","href":"https:\\/\\/us8.api.mailchimp.com\\/3.0\\/lists\\/ae856802b1\\/merge-fields","method":"GET","targetSchema":"https:\\/\\/us8.api.mailchimp.com\\/schema\\/3.0\\/Definitions\\/Lists\\/MergeFields\\/CollectionResponse.json","schema":"https:\\/\\/us8.api.mailchimp.com\\/schema\\/3.0\\/CollectionLinks\\/Lists\\/MergeFields.json"},{"rel":"update","href":"https:\\/\\/us8.api.mailchimp.com\\/3.0\\/lists\\/ae856802b1\\/merge-fields\\/4","method":"PATCH","targetSchema":"https:\\/\\/us8.api.mailchimp.com\\/schema\\/3.0\\/Definitions\\/Lists\\/MergeFields\\/Response.json","schema":"https:\\/\\/us8.api.mailchimp.com\\/schema\\/3.0\\/Definitions\\/Lists\\/MergeFields\\/PATCH.json"},{"rel":"delete","href":"https:\\/\\/us8.api.mailchimp.com\\/3.0\\/lists\\/ae856802b1\\/merge-fields\\/4","method":"DELETE"}]},
        "FNAME" : {"merge_id":1,"tag":"FNAME","name":"First Name","type":"text","required":false,"default_value":"","public":true,"display_order":2,"options":{"size":25},"help_text":"","list_id":"ae856802b1","_links":[{"rel":"self","href":"https:\\/\\/us8.api.mailchimp.com\\/3.0\\/lists\\/ae856802b1\\/merge-fields\\/1","method":"GET","targetSchema":"https:\\/\\/us8.api.mailchimp.com\\/schema\\/3.0\\/Definitions\\/Lists\\/MergeFields\\/Response.json"},{"rel":"parent","href":"https:\\/\\/us8.api.mailchimp.com\\/3.0\\/lists\\/ae856802b1\\/merge-fields","method":"GET","targetSchema":"https:\\/\\/us8.api.mailchimp.com\\/schema\\/3.0\\/Definitions\\/Lists\\/MergeFields\\/CollectionResponse.json","schema":"https:\\/\\/us8.api.mailchimp.com\\/schema\\/3.0\\/CollectionLinks\\/Lists\\/MergeFields.json"},{"rel":"update","href":"https:\\/\\/us8.api.mailchimp.com\\/3.0\\/lists\\/ae856802b1\\/merge-fields\\/1","method":"PATCH","targetSchema":"https:\\/\\/us8.api.mailchimp.com\\/schema\\/3.0\\/Definitions\\/Lists\\/MergeFields\\/Response.json","schema":"https:\\/\\/us8.api.mailchimp.com\\/schema\\/3.0\\/Definitions\\/Lists\\/MergeFields\\/PATCH.json"},{"rel":"delete","href":"https:\\/\\/us8.api.mailchimp.com\\/3.0\\/lists\\/ae856802b1\\/merge-fields\\/1","method":"DELETE"}]},
        "GDPR" : {"merge_id":3,"tag":"GDPR","name":"I want the updates","type":"radio","required":true,"default_value":"","public":true,"display_order":7,"options":{"choices":["Please email me with updates, especially when The Cast is in my area"]},"help_text":"","list_id":"ae856802b1","_links":[{"rel":"self","href":"https:\\/\\/us8.api.mailchimp.com\\/3.0\\/lists\\/ae856802b1\\/merge-fields\\/3","method":"GET","targetSchema":"https:\\/\\/us8.api.mailchimp.com\\/schema\\/3.0\\/Definitions\\/Lists\\/MergeFields\\/Response.json"},{"rel":"parent","href":"https:\\/\\/us8.api.mailchimp.com\\/3.0\\/lists\\/ae856802b1\\/merge-fields","method":"GET","targetSchema":"https:\\/\\/us8.api.mailchimp.com\\/schema\\/3.0\\/Definitions\\/Lists\\/MergeFields\\/CollectionResponse.json","schema":"https:\\/\\/us8.api.mailchimp.com\\/schema\\/3.0\\/CollectionLinks\\/Lists\\/MergeFields.json"},{"rel":"update","href":"https:\\/\\/us8.api.mailchimp.com\\/3.0\\/lists\\/ae856802b1\\/merge-fields\\/3","method":"PATCH","targetSchema":"https:\\/\\/us8.api.mailchimp.com\\/schema\\/3.0\\/Definitions\\/Lists\\/MergeFields\\/Response.json","schema":"https:\\/\\/us8.api.mailchimp.com\\/schema\\/3.0\\/Definitions\\/Lists\\/MergeFields\\/PATCH.json"},{"rel":"delete","href":"https:\\/\\/us8.api.mailchimp.com\\/3.0\\/lists\\/ae856802b1\\/merge-fields\\/3","method":"DELETE"}]},
        "LNAME" : {"merge_id":2,"tag":"LNAME","name":"Last Name","type":"text","required":false,"default_value":"","public":true,"display_order":3,"options":{"size":25},"help_text":"","list_id":"ae856802b1","_links":[{"rel":"self","href":"https:\\/\\/us8.api.mailchimp.com\\/3.0\\/lists\\/ae856802b1\\/merge-fields\\/2","method":"GET","targetSchema":"https:\\/\\/us8.api.mailchimp.com\\/schema\\/3.0\\/Definitions\\/Lists\\/MergeFields\\/Response.json"},{"rel":"parent","href":"https:\\/\\/us8.api.mailchimp.com\\/3.0\\/lists\\/ae856802b1\\/merge-fields","method":"GET","targetSchema":"https:\\/\\/us8.api.mailchimp.com\\/schema\\/3.0\\/Definitions\\/Lists\\/MergeFields\\/CollectionResponse.json","schema":"https:\\/\\/us8.api.mailchimp.com\\/schema\\/3.0\\/CollectionLinks\\/Lists\\/MergeFields.json"},{"rel":"update","href":"https:\\/\\/us8.api.mailchimp.com\\/3.0\\/lists\\/ae856802b1\\/merge-fields\\/2","method":"PATCH","targetSchema":"https:\\/\\/us8.api.mailchimp.com\\/schema\\/3.0\\/Definitions\\/Lists\\/MergeFields\\/Response.json","schema":"https:\\/\\/us8.api.mailchimp.com\\/schema\\/3.0\\/Definitions\\/Lists\\/MergeFields\\/PATCH.json"},{"rel":"delete","href":"https:\\/\\/us8.api.mailchimp.com\\/3.0\\/lists\\/ae856802b1\\/merge-fields\\/2","method":"DELETE"}]}
      },
      "description" : "Subscribe to our newsletter and we\\u0027ll keep you updated on upcoming events and special offers!",
      "doublein" : 0,
      "include_interest_groups" : 0,
      "placeholder" : 1
    },
    "rdf_mapping" : []
  }');
  return $items;
}
