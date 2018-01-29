<?php
/**
 * @file
 * ddd_tx_motscles.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ddd_tx_motscles_taxonomy_default_vocabularies() {
  return array(
    'v_keyword' => array(
      'name' => 'Mots clés',
      'machine_name' => 'v_keyword',
      'description' => 'Liste des mots clés',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
      'language' => 'und',
      'i18n_mode' => 1,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
