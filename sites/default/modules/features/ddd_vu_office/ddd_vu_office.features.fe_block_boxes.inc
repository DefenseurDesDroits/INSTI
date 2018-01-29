<?php
/**
 * @file
 * ddd_vu_office.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function ddd_vu_office_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Delegue - Role d\'un delegue';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'delegate_role';
  $fe_block_boxes->body = '<p>Tous bénévoles, les 397 délégués du Défenseur des droits vous accueillent dans les 542 points d\'accueil répartis sur l\'ensemble du territoire national, en métropole et Outre-mer. Ils tiennent principalement leurs permanences dans des structures de proximité telles que les préfectures et sous-préfectures, les maisons de justice et du droit, les locaux municipaux et les points d\'accès au droit. Ils sont également présents dans les établissements pénitentiaires et travaillent en relation avec les maisons départementales des personnes handicapées.</p>
';

  $export['delegate_role'] = $fe_block_boxes;

  return $export;
}
