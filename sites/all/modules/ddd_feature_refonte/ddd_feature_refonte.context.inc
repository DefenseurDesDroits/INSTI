<?php
/**
 * @file
 * ddd_feature_refonte.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ddd_feature_refonte_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'accueil';
  $context->description = 'Page d\'accueil v2';
  $context->tag = 'V2';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ddd_refonte-faq' => array(
          'module' => 'ddd_refonte',
          'delta' => 'faq',
          'region' => 'actualites',
          'weight' => '-10',
        ),
        'views-vue_actualites-block_actu_hp' => array(
          'module' => 'views',
          'delta' => 'vue_actualites-block_actu_hp',
          'region' => 'actualites',
          'weight' => '-9',
        ),
        'ddd_refonte-histoire_hp' => array(
          'module' => 'ddd_refonte',
          'delta' => 'histoire_hp',
          'region' => 'actualites',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Page d\'accueil v2');
  t('V2');
  $export['accueil'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'histoires_vecues';
  $context->description = '';
  $context->tag = 'V2';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'article' => 'article',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'node_taxonomy' => array(
      'values' => array(
        28 => 28,
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-13' => array(
          'module' => 'block',
          'delta' => '13',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'ddd_refonte-ddd_hitoire_remonte' => array(
          'module' => 'ddd_refonte',
          'delta' => 'ddd_hitoire_remonte',
          'region' => 'footer',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('V2');
  $export['histoires_vecues'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'page-simple';
  $context->description = '';
  $context->tag = 'V2';
  $context->conditions = array(
    'entity_field' => array(
      'values' => array(
        'entity_type' => 'a:10:{s:4:"node";s:4:"node";s:10:"scald_atom";i:0;s:21:"field_collection_item";i:0;s:16:"i18n_translation";i:0;s:17:"search_api_server";i:0;s:16:"search_api_index";i:0;s:4:"file";i:0;s:13:"taxonomy_term";i:0;s:19:"taxonomy_vocabulary";i:0;s:4:"user";i:0;}',
        'field_name' => 'field_page_type',
        'field_value' => 'histoire',
        'field_empty' => 0,
      ),
    ),
    'node' => array(
      'values' => array(
        'page' => 'page',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ddd_refonte-ddd_hitoire_remonte' => array(
          'module' => 'ddd_refonte',
          'delta' => 'ddd_hitoire_remonte',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('V2');
  $export['page-simple'] = $context;

  return $export;
}
