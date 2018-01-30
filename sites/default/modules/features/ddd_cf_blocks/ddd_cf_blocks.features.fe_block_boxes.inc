<?php
/**
 * @file
 * ddd_cf_blocks.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function ddd_cf_blocks_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Footer - contact';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'block_footer_contact';
  $fe_block_boxes->body = '<p>Le Défenseur des droits</p>

<p>7 rue Saint-Florentin</p>

<p>75409 Paris cedex 08</p>

<p>09 69 39 00 00</p>

<p><a href="/fr/contact" id="Nous contacter" title="Nous contacter" type="text/html">Nous contacter</a></p>
';

  $export['block_footer_contact'] = $fe_block_boxes;

  return $export;
}
