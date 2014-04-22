<?php
/**
 * @file
 * cast_boxes.box.inc
 */

/**
 * Implements hook_default_box().
 */
function cast_boxes_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'booking';
  $box->plugin_key = 'simple';
  $box->title = 'Booking';
  $box->description = 'Booking';
  $box->options = array(
    'body' => array(
      'value' => '<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Pellentesque mi risus, cursus et velit sed, scelerisque rutrum lacus. Sed eget vehicula mi. Interdum et malesuada fames ac ante ipsum primis in faucibus. Mauris euismod lacus mi, sit amet faucibus massa rhoncus in.</p>
',
      'format' => 'filtered_html',
    ),
  );
  $export['booking'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'demo_banner';
  $box->plugin_key = 'banner_block';
  $box->title = '';
  $box->description = 'Demo > Banner block';
  $box->options = array(
    'additional_classes' => '',
  );
  $export['demo_banner'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'facebook_demo';
  $box->plugin_key = 'social_block';
  $box->title = 'Facebook';
  $box->description = 'Facebook demo social block';
  $box->options = array(
    'additional_classes' => 'orange',
  );
  $export['facebook_demo'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'members';
  $box->plugin_key = 'link_block';
  $box->title = 'Members';
  $box->description = 'Meet the Cast';
  $box->options = array(
    'entity_boxes_id' => '',
  );
  $export['members'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'press';
  $box->plugin_key = 'simple';
  $box->title = 'Press';
  $box->description = 'Press';
  $box->options = array(
    'body' => array(
      'value' => '<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Pellentesque mi risus, cursus et velit sed, scelerisque rutrum lacus. Sed eget vehicula mi. Interdum et malesuada fames ac ante ipsum primis in faucibus. Mauris euismod lacus mi, sit amet faucibus massa rhoncus in.</p>
',
      'format' => 'filtered_html',
    ),
  );
  $export['press'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'social_links';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Footer > Social Media Links';
  $box->options = array(
    'body' => array(
      'value' => '<ul>
	<li class="facebook"><a href="http://facebook.com/thecastofficial">Facebook</a></li>
	<li class="youtube"><a href="https://www.youtube.com/user/thecastde">Youtube</a></li>
	<li class="amazon"><a href="http://www.amazon.com/Schweigen-Campbell-Scherzer-Brigitte-Bleckwedel/dp/B00HOXHC3O">Amazon</a></li>
	<li class="spotify"><a href="http://open.spotify.com/local/The+Cast/Lippen+Schweigen+%28feat.+Campbell+Vertesi%2c+Bryn+Vertesi%2c+Kevin+Moreno%2c+Alison+Scherzer%2c+Brigitte+Heuser+%26+Till+Bleckwedel%29+-+Single/Lippen+Schweigen+%28feat.+Campbell+Vertesi%2c+Bryn+Vertesi%2c+Kevin+Moreno%2c+Alison+Scherzer%2c+Brigitte+Heuser+%26+Till+Bleckwedel%29/138">Spotify</a></li>
</ul>',
      'format' => 'filtered_html',
    ),
    'additional_classes' => '',
  );
  $export['social_links'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'twitter_demo';
  $box->plugin_key = 'social_block';
  $box->title = 'Block title';
  $box->description = 'Twitter demo social block';
  $box->options = array(
    'additional_classes' => 'yellow',
  );
  $export['twitter_demo'] = $box;

  return $export;
}
