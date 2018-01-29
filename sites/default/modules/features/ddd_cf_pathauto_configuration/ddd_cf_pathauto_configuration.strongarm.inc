<?php
/**
 * @file
 * ddd_cf_pathauto_configuration.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ddd_cf_pathauto_configuration_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_accueil_en_pattern';
  $strongarm->value = '';
  $export['pathauto_node_accueil_en_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_accueil_fr-DC_pattern';
  $strongarm->value = '';
  $export['pathauto_node_accueil_fr-DC_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_accueil_fr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_accueil_fr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_accueil_und_pattern';
  $strongarm->value = '';
  $export['pathauto_node_accueil_und_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_article_en_pattern';
  $strongarm->value = '';
  $export['pathauto_node_article_en_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_article_fr-DC_pattern';
  $strongarm->value = '';
  $export['pathauto_node_article_fr-DC_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_article_fr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_article_fr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_article_und_pattern';
  $strongarm->value = '';
  $export['pathauto_node_article_und_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_blog_en_pattern';
  $strongarm->value = '';
  $export['pathauto_node_blog_en_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_blog_fr-DC_pattern';
  $strongarm->value = '';
  $export['pathauto_node_blog_fr-DC_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_blog_fr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_blog_fr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_blog_pattern';
  $strongarm->value = '[node:field-article-type:parent:parent:name]/[node:field-article-type:parent:name]/[node:field-article-type:name]/[node:title]';
  $export['pathauto_node_blog_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_blog_und_pattern';
  $strongarm->value = '';
  $export['pathauto_node_blog_und_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ct_avis_parlement_en_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ct_avis_parlement_en_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ct_avis_parlement_fr-DC_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ct_avis_parlement_fr-DC_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ct_avis_parlement_fr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ct_avis_parlement_fr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ct_avis_parlement_pattern';
  $strongarm->value = '[node:field-article-type:parent:parent:name]/[node:field-article-type:parent:name]/[node:field-article-type:name]/[node:title]';
  $export['pathauto_node_ct_avis_parlement_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ct_avis_parlement_und_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ct_avis_parlement_und_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ct_decision_en_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ct_decision_en_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ct_decision_fr-DC_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ct_decision_fr-DC_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ct_decision_fr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ct_decision_fr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ct_decision_und_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ct_decision_und_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ct_delegate_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ct_delegate_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ct_marche_en_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ct_marche_en_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ct_marche_fr-DC_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ct_marche_fr-DC_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ct_marche_fr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ct_marche_fr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ct_marche_und_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ct_marche_und_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ct_office_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ct_office_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ct_offre_en_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ct_offre_en_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ct_offre_fr-DC_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ct_offre_fr-DC_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ct_offre_fr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ct_offre_fr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ct_offre_pattern';
  $strongarm->value = '[node:field-article-type:parent:parent:name]/[node:field-article-type:parent:name]/[node:field-article-type:name]/[node:title]';
  $export['pathauto_node_ct_offre_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ct_offre_und_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ct_offre_und_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ct_outils_en_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ct_outils_en_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ct_outils_fr-DC_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ct_outils_fr-DC_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ct_outils_fr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ct_outils_fr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ct_outils_pattern';
  $strongarm->value = '[node:field-article-type:parent:parent:name]/[node:field-article-type:parent:name]/[node:field-article-type:name]/[node:title]';
  $export['pathauto_node_ct_outils_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ct_outils_und_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ct_outils_und_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ct_propositions_reforme_en_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ct_propositions_reforme_en_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ct_propositions_reforme_fr-DC_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ct_propositions_reforme_fr-DC_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ct_propositions_reforme_fr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ct_propositions_reforme_fr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ct_propositions_reforme_pattern';
  $strongarm->value = '[node:field-article-type:parent:parent:name]/[node:field-article-type:parent:name]/[node:field-article-type:name]/[node:title]';
  $export['pathauto_node_ct_propositions_reforme_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ct_propositions_reforme_und_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ct_propositions_reforme_und_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ct_rapport_annuel_en_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ct_rapport_annuel_en_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ct_rapport_annuel_fr-DC_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ct_rapport_annuel_fr-DC_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ct_rapport_annuel_fr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ct_rapport_annuel_fr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ct_rapport_annuel_pattern';
  $strongarm->value = '[node:field-article-type:parent:parent:name]/[node:field-article-type:parent:name]/[node:field-article-type:name]/[node:title]';
  $export['pathauto_node_ct_rapport_annuel_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ct_rapport_annuel_und_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ct_rapport_annuel_und_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ct_rapport_en_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ct_rapport_en_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ct_rapport_fr-DC_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ct_rapport_fr-DC_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ct_rapport_fr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ct_rapport_fr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ct_rapport_pattern';
  $strongarm->value = '[node:field-article-type:parent:parent:name]/[node:field-article-type:parent:name]/[node:field-article-type:name]/[node:title]';
  $export['pathauto_node_ct_rapport_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ct_rapport_und_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ct_rapport_und_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ct_section_rapport_annuel_pattern';
  $strongarm->value = '[node:field-section-reference-rapport:field-article-type:parent:parent:name]/[node:field-section-reference-rapport:field-article-type:name]/[node:field-section-reference-rapport:title]/[node:title]';
  $export['pathauto_node_ct_section_rapport_annuel_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_ct_structure_pattern';
  $strongarm->value = '';
  $export['pathauto_node_ct_structure_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_evenement_en_pattern';
  $strongarm->value = '';
  $export['pathauto_node_evenement_en_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_evenement_fr-DC_pattern';
  $strongarm->value = '';
  $export['pathauto_node_evenement_fr-DC_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_evenement_fr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_evenement_fr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_evenement_und_pattern';
  $strongarm->value = '';
  $export['pathauto_node_evenement_und_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_faq_en_pattern';
  $strongarm->value = '';
  $export['pathauto_node_faq_en_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_faq_fr-DC_pattern';
  $strongarm->value = '';
  $export['pathauto_node_faq_fr-DC_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_faq_fr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_faq_fr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_faq_und_pattern';
  $strongarm->value = '';
  $export['pathauto_node_faq_und_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_page_en_pattern';
  $strongarm->value = '';
  $export['pathauto_node_page_en_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_page_fr-DC_pattern';
  $strongarm->value = '';
  $export['pathauto_node_page_fr-DC_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_page_fr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_page_fr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_page_und_pattern';
  $strongarm->value = '';
  $export['pathauto_node_page_und_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_autoriter_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_autoriter_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_espace_juridique_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_espace_juridique_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_mission_du_d_fenseur_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_mission_du_d_fenseur_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_proposition_de_r_forme_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_proposition_de_r_forme_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_v_actions_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_v_actions_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_v_keyword_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_v_keyword_pattern'] = $strongarm;

  return $export;
}
