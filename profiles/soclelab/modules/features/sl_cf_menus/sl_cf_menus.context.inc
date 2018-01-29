<?php
/**
 * @file
 * sl_cf_menus.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function sl_cf_menus_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ctx_actualite';
  $context->description = '';
  $context->tag = 'CTX Actualité';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'actualité' => 'actualité',
        'actualité/*' => 'actualité/*',
        'actualite' => 'actualite',
        'actualite/*' => 'actualite/*',
        'actualités' => 'actualités',
        'actualités/*' => 'actualités/*',
        'actualites' => 'actualites',
        'actualites/*' => 'actualites/*',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => array(
      0 => 'main-menu:actualites',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('CTX Actualité');
  $export['ctx_actualite'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ctx_event';
  $context->description = '';
  $context->tag = 'CTX Event';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'evenement' => 'evenement',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => array(
      0 => 'main-menu:evenements',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('CTX Event');
  $export['ctx_event'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ctx_publication';
  $context->description = '';
  $context->tag = 'CTX Publications';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'publications/*' => 'publications/*',
        'publications' => 'publications',
        'publication/*' => 'publication/*',
        'publication' => 'publication',
        'theme' => 'theme',
        'theme/*' => 'theme/*',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => array(
      0 => 'main-menu:publications',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('CTX Publications');
  $export['ctx_publication'] = $context;

  return $export;
}
