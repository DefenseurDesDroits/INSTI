<?php
/**
 * @file
 * ddd_ct_proposition_reforme.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ddd_ct_proposition_reforme_taxonomy_default_vocabularies() {
  return array(
    'mission_du_d_fenseur' => array(
      'name' => 'Mission du Défenseur',
      'machine_name' => 'mission_du_d_fenseur',
      'description' => '',
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
    'proposition_de_r_forme' => array(
      'name' => 'Proposition de réforme',
      'machine_name' => 'proposition_de_r_forme',
      'description' => 'Vocabulaire de taxonomie utilisé pour les types de contenus "Propositions de réforme"',
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
