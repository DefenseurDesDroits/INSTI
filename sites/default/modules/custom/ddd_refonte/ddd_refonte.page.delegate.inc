<?php

/**
 * Page callback: Generate the Delegates Google Maps.
 */
function ddd_refonte_delegate_page() {
  global $base_url, $language;
  // Try to load the JSON file from the JSON url field.
  $json_file_url = variable_get('ddd_refonte_delegates_json_url', '');

  // If it's empty, fallback to the uploaded file if present.
  if (empty($json_file_url)) {
    $json_file = variable_get('ddd_refonte_delegates_json_file', '');

    if (!empty($json_file)) {
      $json_file_url = get_file_url($json_file);
    }
  }

  // Retrieve the Google Maps API key.
  $api_key = variable_get('ddd_gmaps_api_key');

  if ($json_file_url && !empty($api_key)) {
    $default_delegates_img_path = $base_url . base_path() . drupal_get_path('theme', 'soclelab_ddd_v2') . '/img/delegates';
    $delegates_img_path = variable_get('ddd_refonte_delegates_img_path', $default_delegates_img_path);
    // Put the Google MAPS JS logic in a separate tpl.php file, ideally, we
    // would move the logic in an external JS file, but since we're setting
    // the "defer" attribute, we can't easily check if the Gmaps API is loaded.
    $clusterer_img_path = $base_url . base_path() . drupal_get_path('module', 'ddd_refonte') . '/images/m';
    $vars['gmaps_js'] = theme('ddd_refonte_gmaps_js', array(
      'json_url' => $json_file_url,
      'img_url' => $delegates_img_path,
      'clusterer_img_path' => $clusterer_img_path,
      'sort_criterion' => variable_get('ddd_refonte_delegates_sort_criterion', 'zipcode'),
    ));
    $options = array(
      'type' => 'external',
      'defer' => TRUE,
    );
    // Retrieve the Google Maps API key.
    drupal_add_js(drupal_get_path('module', 'ddd_refonte') . '/js/markerclusterer.js');
    drupal_add_js("https://maps.googleapis.com/maps/api/js?key=$api_key&callback=initMap&libraries=places,geometry", $options);
  }
  // TODO: Update this (it's not clean to put a variable inside t().
  $vars['txt'] = t(variable_get('txt'));
  // Get the text to display below the map for the current language.
  $vars['initial_text'] = variable_get("ddd_refonte_delegates_text_initial_$language->language", '');
  $vars['no_results_text'] = variable_get("ddd_refonte_delegates_text_no_results_$language->language", '');
  return theme("_theme_ddd_recherche_page_delegate",  array('vars' => $vars));
}
