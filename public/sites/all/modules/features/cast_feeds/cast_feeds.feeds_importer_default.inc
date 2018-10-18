<?php
/**
 * @file
 * cast_feeds.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function cast_feeds_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'ursart_events';
  $feeds_importer->config = array(
    'name' => 'ursart events',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'delete_uploaded_file' => FALSE,
        'direct' => FALSE,
        'directory' => 'private://feeds',
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'encoding' => 'UTF-8',
        'no_headers' => 1,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => '1',
            'target' => 'field_date:start',
            'timezone' => 'Europe/Berlin',
            'language' => 'und',
          ),
          1 => array(
            'source' => '2',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => '3',
            'target' => 'field_location:name_line',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => '4',
            'target' => 'field_location:country',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => '5',
            'target' => 'field_location:postal_code',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => '6',
            'target' => 'field_location:locality',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => '7',
            'target' => 'field_location:thoroughfare',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => '11',
            'target' => 'field_tickets_link:url',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => '12',
            'target' => 'field_tickets_link:title',
            'unique' => FALSE,
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '2',
        'update_non_existent' => 'unpublish',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'event',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['ursart_events'] = $feeds_importer;

  return $export;
}
