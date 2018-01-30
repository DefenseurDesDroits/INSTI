<?php
/**
 * @file
 * ddd_fe_actions.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function ddd_fe_actions_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'ddd_feed_tx_actions';
  $feeds_importer->config = array(
    'name' => 'DdD Import - TAX Actions',
    'description' => 'Import dédié aux taxonomies actions',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'csv',
        'direct' => 1,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Nom',
            'target' => 'name',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Description',
            'target' => 'description',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Redirect',
            'target' => 'field_url_redirect:url',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Affichage',
            'target' => 'field_taxo_affichage',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'NomParent',
            'target' => 'parent',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Weight',
            'target' => 'weight',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Alias',
            'target' => 'path_alias',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'FiltreDecision',
            'target' => 'field_action_filter_decision',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'v_actions',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['ddd_feed_tx_actions'] = $feeds_importer;

  return $export;
}
