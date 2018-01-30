<?php
/**
 * @file
 * ct_article.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ct_article_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-article-field_article_keyword'.
  $field_instances['node-article-field_article_keyword'] = array(
    'bundle' => 'article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Mots clés en lien avec le contenu',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'i18n_taxonomy',
        'settings' => array(),
        'type' => 'i18n_taxonomy_term_reference_link',
        'weight' => 11,
      ),
      'included_section' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'liste_accueil_small' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'vignette_related' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_article_keyword',
    'label' => 'Mots clés',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 5,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Mots clés');
  t('Mots clés en lien avec le contenu');

  return $field_instances;
}
