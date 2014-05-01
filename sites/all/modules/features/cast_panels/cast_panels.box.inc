<?php
/**
 * @file
 * cast_panels.box.inc
 */

/**
 * Implements hook_default_box().
 */
function cast_panels_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'impressum';
  $box->plugin_key = 'simple';
  $box->title = 'Impressum';
  $box->description = 'Contact > Impressum';
  $box->options = array(
    'body' => array(
      'value' => 'Bryn Vertesi
Campbell Vertesi
Herausgeber und Geschäftsführer
Am Kümpchenshof 21
50670 Köln

Telefon: +49 (0) 15 - 146621809
Mail: booking@the-cast.de

Online-contents

The author reserves the right not to be responsible for the topicality, correctness, completeness or quality of the information provided. Liability claims regarding damage caused by the use of any information provided, including any kind of information which is incomplete or incorrect, will therefore be rejected. All offers are not-binding and without obligation. Parts of the pages or the complete publication including all offers and information might be extended, changed or partly or completely deleted by the author without separate announcement.


Referrals and links

The Author is not responsible for any contents linked or referred to from his pages - unless he has full knowlegde of illegal contents and would be able to prevent the visitors of his site from viewing those pages. If any damage occurs by the use of information presented there, only the author of the respective pages might be liable, not the one who has linked to these pages. Furthermore the author is not liable for any postings or messages published by users of discussion boards, guestbooks or mailinglists provided on his page.


Copyright

The author intended not to use any copyrighted material for the publication or, if not possible, to indicate the copyright of the respective object. The copyright for any material created by the author is reserved. Any duplication or use of such diagrams, sounds or texts in other electronic or printed publications is not permitted without the author\'s agreement.


Legal force of this disclaimer

This disclaimer is to be regarded as part of the internet publication which you were referred from. If sections or individual formulations of this text are not legal or correct, the content or validity of the other parts remain uninfluenced by this fact.',
      'format' => 'filtered_html',
    ),
    'additional_classes' => '',
  );
  $export['impressum'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'link_about';
  $box->plugin_key = 'link_block';
  $box->title = 'About the Cast';
  $box->description = 'Front > About the Cast';
  $box->options = array(
    'additional_classes' => '',
  );
  $export['link_about'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'link_lippen_schweigen';
  $box->plugin_key = 'link_block';
  $box->title = 'Music';
  $box->description = 'Front > Lippen Schweigen';
  $box->options = array(
    'entity_boxes_id' => '',
  );
  $export['link_lippen_schweigen'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'link_verdi_underground';
  $box->plugin_key = 'link_block';
  $box->title = 'Video';
  $box->description = 'Front > Verdi Underground';
  $box->options = array(
    'entity_boxes_id' => '',
  );
  $export['link_verdi_underground'] = $box;

  return $export;
}
