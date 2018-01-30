<?php
/**
 * @file
 * ddd_feature_refonte.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ddd_feature_refonte_taxonomy_default_vocabularies() {
  return array(
    'actualites' => array(
      'name' => 'Actualités',
      'machine_name' => 'actualites',
      'description' => 'Vocabulaire des actualités',
      'hierarchy' => 0,
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
