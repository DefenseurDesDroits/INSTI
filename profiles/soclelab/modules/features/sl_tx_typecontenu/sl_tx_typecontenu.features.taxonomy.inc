<?php
/**
 * @file
 * sl_tx_typecontenu.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function sl_tx_typecontenu_taxonomy_default_vocabularies() {
  return array(
    'v_type' => array(
      'name' => 'Type de contenu',
      'machine_name' => 'v_type',
      'description' => 'Taxonomie utilisée pour les types de contenus',
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
