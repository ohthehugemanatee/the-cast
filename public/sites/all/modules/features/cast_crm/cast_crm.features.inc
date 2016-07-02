<?php
/**
 * @file
 * cast_crm.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cast_crm_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "relation" && $api == "relation_type_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_redhen_contact_type().
 */
function cast_crm_default_redhen_contact_type() {
  $items = array();
  $items['contact'] = entity_import('redhen_contact_type', '{
    "name" : "contact",
    "label" : "Contact",
    "locked" : "0",
    "weight" : "0",
    "data" : null,
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_redhen_engagement_score().
 */
function cast_crm_default_redhen_engagement_score() {
  $items = array();
  $items['attend_a_show'] = entity_import('redhen_engagement_score', '{
    "name" : "attend_a_show",
    "label" : "Attend a show",
    "locked" : null,
    "score" : "4",
    "rdf_mapping" : []
  }');
  $items['mailing_list_signup'] = entity_import('redhen_engagement_score', '{
    "name" : "mailing_list_signup",
    "label" : "Mailing list signup",
    "locked" : null,
    "score" : "2",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_redhen_org_type().
 */
function cast_crm_default_redhen_org_type() {
  $items = array();
  $items['organization'] = entity_import('redhen_org_type', '{
    "name" : "organization",
    "label" : "Organization",
    "locked" : "0",
    "weight" : "0",
    "data" : null,
    "rdf_mapping" : []
  }');
  return $items;
}
