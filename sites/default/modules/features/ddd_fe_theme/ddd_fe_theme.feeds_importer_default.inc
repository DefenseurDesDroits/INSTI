<?php
/**
 * @file
 * ddd_fe_theme.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function ddd_fe_theme_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'ddd_import_tax_theme';
  $feeds_importer->config = array(
    'name' => 'DdD Import - TAX Thème',
    'description' => 'Import du vocabulaire thème',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
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
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Description',
            'target' => 'description',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Redirect',
            'target' => 'url',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Affichage',
            'target' => 'guid',
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
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'v_theme',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 1,
  );
  $export['ddd_import_tax_theme'] = $feeds_importer;

  return $export;
}
