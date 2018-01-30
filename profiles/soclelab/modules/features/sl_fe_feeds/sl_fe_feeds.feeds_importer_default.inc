<?php
/**
 * @file
 * sl_fe_feeds.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function sl_fe_feeds_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'sl_feed_ct_article';
  $feeds_importer->config = array(
    'name' => 'SL feed ct Article',
    'description' => 'Import dédié aux contenus de type article',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'csv',
        'direct' => 0,
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
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Titre',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Alias',
            'target' => 'path_alias',
            'pathauto_override' => 1,
          ),
          2 => array(
            'source' => 'Date',
            'target' => 'field_article_date:start',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Type',
            'target' => 'field_article_type',
            'term_search' => '0',
            'autocreate' => 0,
          ),
          4 => array(
            'source' => 'Themes',
            'target' => 'field_article_theme',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Chapo',
            'target' => 'field_article_descriptif',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Body',
            'target' => 'field_article_body',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Ctasso',
            'target' => 'field_article_ctasso:label',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Langue',
            'target' => 'language',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Published',
            'target' => 'status',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'article',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['sl_feed_ct_article'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'sl_feed_ct_event';
  $feeds_importer->config = array(
    'name' => 'SL feed ct Event',
    'description' => 'Import dédié aux contenus de type event',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'csv',
        'direct' => 0,
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
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Titre',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'DateStart',
            'target' => 'field_event_date:start',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'DateEnd',
            'target' => 'field_event_date:end',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Lieu',
            'target' => 'field_event_lieu',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Chapo',
            'target' => 'field_event_descriptif',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Body',
            'target' => 'field_event_body',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Alias',
            'target' => 'path_alias',
            'pathauto_override' => 1,
          ),
          7 => array(
            'source' => 'Langue',
            'target' => 'language',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'evenement',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['sl_feed_ct_event'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'sl_feed_ct_faq';
  $feeds_importer->config = array(
    'name' => 'SL feed ct faq',
    'description' => 'Import dédié aux contenus de type faq',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'csv',
        'direct' => 0,
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
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Titre',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Body',
            'target' => 'body',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Alias',
            'target' => 'path_alias',
            'pathauto_override' => 1,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'faq',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['sl_feed_ct_faq'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'sl_feed_ct_home';
  $feeds_importer->config = array(
    'name' => 'SL feed ct Page d\'Accueil',
    'description' => 'Import dédié aux contenus de type page d\'accueil',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'csv',
        'direct' => 0,
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
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Titre',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Alias',
            'target' => 'path_alias',
            'pathauto_override' => 1,
          ),
          2 => array(
            'source' => 'Slider',
            'target' => 'field_home_carousel_liste:label',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Vignette',
            'target' => 'field_home_vignette_liste:label',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Taxonomie',
            'target' => 'field_home_liste_taxo:label',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'accueil',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['sl_feed_ct_home'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'sl_feed_ct_page';
  $feeds_importer->config = array(
    'name' => 'SL feed ct Page',
    'description' => 'Import dédié aux contenus de type pages',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'csv',
        'direct' => 0,
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
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Titre',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Body',
            'target' => 'field_page_body',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Adresse',
            'target' => 'field_page_contact_adresse',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Vocabulaire',
            'target' => 'field_page_vocabulary:label',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Alias',
            'target' => 'path_alias',
            'pathauto_override' => 1,
          ),
          5 => array(
            'source' => 'Langue',
            'target' => 'language',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'page',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['sl_feed_ct_page'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'sl_feed_tx_type';
  $feeds_importer->config = array(
    'name' => 'SL feed tx Type de contenu',
    'description' => 'Import dédié aux taxonomies types de contenus',
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
            'source' => 'Titre',
            'target' => 'name',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Description',
            'target' => 'description',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Poids',
            'target' => 'weight',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'NomParent',
            'target' => 'parent',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'v_type',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['sl_feed_tx_type'] = $feeds_importer;

  return $export;
}
