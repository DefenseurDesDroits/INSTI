<?php
/**
 * @file
 * sl_cf_search.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function sl_cf_search_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_attachments_excluded_extensions';
  $strongarm->value = 'aif art avi bmp gif ico jpg mov mp3 mp4 mpg oga ogv png psd ra ram rgb tif wmv';
  $export['apachesolr_attachments_excluded_extensions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_attachments_extract_using';
  $strongarm->value = 'tika';
  $export['apachesolr_attachments_extract_using'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_attachments_tika_jar';
  $strongarm->value = 'tika-app-1.4.jar';
  $export['apachesolr_attachments_tika_jar'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_attachments_tika_path';
  $strongarm->value = 'sites/all/libraries/tika';
  $export['apachesolr_attachments_tika_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_autocomplete_counts';
  $strongarm->value = 1;
  $export['apachesolr_autocomplete_counts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_autocomplete_suggest_keywords';
  $strongarm->value = 1;
  $export['apachesolr_autocomplete_suggest_keywords'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_autocomplete_suggest_spellcheck';
  $strongarm->value = 1;
  $export['apachesolr_autocomplete_suggest_spellcheck'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_autocomplete_widget';
  $strongarm->value = 'custom';
  $export['apachesolr_autocomplete_widget'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_cron_limit';
  $strongarm->value = '50';
  $export['apachesolr_cron_limit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_failure';
  $strongarm->value = 'apachesolr:show_no_results';
  $export['apachesolr_failure'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_search_default_search_page';
  $strongarm->value = 'core_search';
  $export['apachesolr_search_default_search_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_search_mlt_blocks';
  $strongarm->value = array(
    'mlt-001' => array(
      'name' => 'More like this',
      'num_results' => '5',
      'mlt_fl' => array(
        'label' => 'label',
        'taxonomy_names' => 'taxonomy_names',
      ),
      'mlt_env_id' => 'solr',
      'mlt_mintf' => '1',
      'mlt_mindf' => '1',
      'mlt_minwl' => '3',
      'mlt_maxwl' => '15',
      'mlt_maxqt' => '20',
      'mlt_type_filters' => array(),
      'mlt_custom_filters' => '',
      'delta' => 'mlt-001',
    ),
  );
  $export['apachesolr_search_mlt_blocks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_set_nodeapi_messages';
  $strongarm->value = '1';
  $export['apachesolr_set_nodeapi_messages'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_site_hash';
  $strongarm->value = 'hj9vqy';
  $export['apachesolr_site_hash'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_sort_sort_bundle';
  $strongarm->value = 1;
  $export['apachesolr_sort_sort_bundle'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_sort_sort_ds_created';
  $strongarm->value = 0;
  $export['apachesolr_sort_sort_ds_created'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_sort_sort_score';
  $strongarm->value = 1;
  $export['apachesolr_sort_sort_score'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_sort_sort_sort_label';
  $strongarm->value = 1;
  $export['apachesolr_sort_sort_sort_label'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_sort_sort_sort_name';
  $strongarm->value = 0;
  $export['apachesolr_sort_sort_sort_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_sort_sort_weight_bundle';
  $strongarm->value = '5';
  $export['apachesolr_sort_sort_weight_bundle'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_sort_sort_weight_ds_created';
  $strongarm->value = '0';
  $export['apachesolr_sort_sort_weight_ds_created'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_sort_sort_weight_score';
  $strongarm->value = '20';
  $export['apachesolr_sort_sort_weight_score'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_sort_sort_weight_sort_label';
  $strongarm->value = '10';
  $export['apachesolr_sort_sort_weight_sort_label'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_sort_sort_weight_sort_name';
  $strongarm->value = '0';
  $export['apachesolr_sort_sort_weight_sort_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'apachesolr_watchdog_successes';
  $strongarm->value = 0;
  $export['apachesolr_watchdog_successes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_apachesolr_current_filters_default';
  $strongarm->value = 0;
  $export['ds_search_apachesolr_current_filters_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_apachesolr_hide_current_filters';
  $strongarm->value = 0;
  $export['ds_search_apachesolr_hide_current_filters'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_apachesolr_multisite';
  $strongarm->value = 0;
  $export['ds_search_apachesolr_multisite'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_apachesolr_multisite_boost';
  $strongarm->value = 0;
  $export['ds_search_apachesolr_multisite_boost'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_apachesolr_multisite_group';
  $strongarm->value = 0;
  $export['ds_search_apachesolr_multisite_group'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_apachesolr_multisite_group_config';
  $strongarm->value = '';
  $export['ds_search_apachesolr_multisite_group_config'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_file_render';
  $strongarm->value = 0;
  $export['ds_search_file_render'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_group_by_type';
  $strongarm->value = 0;
  $export['ds_search_group_by_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_group_by_type_other';
  $strongarm->value = 'Other';
  $export['ds_search_group_by_type_other'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_group_by_type_other_wrapper';
  $strongarm->value = 'fieldset';
  $export['ds_search_group_by_type_other_wrapper'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_group_by_type_settings';
  $strongarm->value = array(
    'article' => array(
      'status' => 1,
      'label' => 'Résultats pour article',
      'wrapper' => 'fieldset',
      'weight' => '0',
    ),
    'evenement' => array(
      'status' => 1,
      'label' => 'Résultats pour evènement',
      'wrapper' => 'fieldset',
      'weight' => '0',
    ),
    'faq' => array(
      'status' => 1,
      'label' => 'Résultats pour faq',
      'wrapper' => 'fieldset',
      'weight' => '0',
    ),
    'accueil' => array(
      'status' => 1,
      'label' => 'Résultats pour page d&#039;accueil',
      'wrapper' => 'fieldset',
      'weight' => '0',
    ),
    'page' => array(
      'status' => 1,
      'label' => 'Résultats pour page simple',
      'wrapper' => 'fieldset',
      'weight' => '0',
    ),
  );
  $export['ds_search_group_by_type_settings'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_highlight';
  $strongarm->value = 0;
  $export['ds_search_highlight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_highlight_selector';
  $strongarm->value = '.view-mode-search_result';
  $export['ds_search_highlight_selector'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_language';
  $strongarm->value = 1;
  $export['ds_search_language'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_node_form_alter';
  $strongarm->value = 0;
  $export['ds_search_node_form_alter'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_node_limit';
  $strongarm->value = '10';
  $export['ds_search_node_limit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_path';
  $strongarm->value = 'site';
  $export['ds_search_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_show_title';
  $strongarm->value = 1;
  $export['ds_search_show_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_type';
  $strongarm->value = 'apachesolr_search';
  $export['ds_search_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_variables';
  $strongarm->value = 'search_totals';
  $export['ds_search_variables'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_search_view_mode';
  $strongarm->value = 'search_result';
  $export['ds_search_view_mode'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_active_modules';
  $strongarm->value = array(
    0 => 'node',
    1 => 'user',
    2 => 'apachesolr_search',
  );
  $export['search_active_modules'] = $strongarm;

  return $export;
}
