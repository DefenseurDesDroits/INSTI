<?php
/**
 * @file
 * ddd_vu_office.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ddd_vu_office_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'vu_office';
  $view->description = 'Lien entre les structures et les délégués';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Office';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Contactez vos délégués';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = '&nbsp;';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'gmap';
  $handler->display->display_options['style_options']['macro'] = '[gmap zoom=7 |center=49.22539962011783,1.83596670627594]';
  $handler->display->display_options['style_options']['markers'] = 'nodetype';
  $handler->display->display_options['style_options']['markertype'] = 'MACHINE_NAME';
  $handler->display->display_options['style_options']['latfield'] = 'field_structure_label';
  $handler->display->display_options['style_options']['lonfield'] = 'field_structure_label';
  $handler->display->display_options['style_options']['markerfield'] = 'field_structure_label';
  $handler->display->display_options['style_options']['geofield'] = 'field_structure_label';
  $handler->display->display_options['style_options']['enablermt'] = 0;
  $handler->display->display_options['style_options']['rmtfield'] = 'field_structure_label';
  $handler->display->display_options['style_options']['rmtfieldraw'] = 1;
  $handler->display->display_options['style_options']['center_on_nodearg_arg'] = 'field_delegate_departement_code_value';
  $handler->display->display_options['style_options']['animation'] = '0';
  $handler->display->display_options['style_options']['highlight_nodearg_arg'] = 'field_delegate_departement_code_value';
  $handler->display->display_options['style_options']['autoclick_on_nodearg_arg'] = 'field_delegate_departement_code_value';
  $handler->display->display_options['style_options']['tooltipfield'] = 'field_structure_label';
  $handler->display->display_options['style_options']['bubbletextfield'] = 'field_structure_label';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_structure_phone' => 'field_structure_phone',
    'field_structure_fax' => 'field_structure_fax',
    'postal_code' => 'postal_code',
    'city' => 'city',
    'field_office_day' => 'field_office_day',
    'field_office_hourly' => 'field_office_hourly',
  );
  /* Comportement en l'absence de résultats: Global : Messages */
  $handler->display->display_options['empty']['messages']['id'] = 'messages';
  $handler->display->display_options['empty']['messages']['table'] = 'views';
  $handler->display->display_options['empty']['messages']['field'] = 'messages';
  /* Comportement en l'absence de résultats: Global : Zone de texte */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p> Aucun résultat </p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Champ: Contenu : Civilite */
  $handler->display->display_options['fields']['field_delegate_civilite']['id'] = 'field_delegate_civilite';
  $handler->display->display_options['fields']['field_delegate_civilite']['table'] = 'field_data_field_delegate_civilite';
  $handler->display->display_options['fields']['field_delegate_civilite']['field'] = 'field_delegate_civilite';
  $handler->display->display_options['fields']['field_delegate_civilite']['relationship'] = 'field_office_delegate_target_id';
  $handler->display->display_options['fields']['field_delegate_civilite']['label'] = '';
  $handler->display->display_options['fields']['field_delegate_civilite']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Name */
  $handler->display->display_options['fields']['field_delegate_name']['id'] = 'field_delegate_name';
  $handler->display->display_options['fields']['field_delegate_name']['table'] = 'field_data_field_delegate_name';
  $handler->display->display_options['fields']['field_delegate_name']['field'] = 'field_delegate_name';
  $handler->display->display_options['fields']['field_delegate_name']['relationship'] = 'field_office_delegate_target_id';
  $handler->display->display_options['fields']['field_delegate_name']['label'] = '';
  $handler->display->display_options['fields']['field_delegate_name']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Last name */
  $handler->display->display_options['fields']['field_delegate_last_name']['id'] = 'field_delegate_last_name';
  $handler->display->display_options['fields']['field_delegate_last_name']['table'] = 'field_data_field_delegate_last_name';
  $handler->display->display_options['fields']['field_delegate_last_name']['field'] = 'field_delegate_last_name';
  $handler->display->display_options['fields']['field_delegate_last_name']['relationship'] = 'field_office_delegate_target_id';
  $handler->display->display_options['fields']['field_delegate_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_delegate_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_delegate_last_name']['alter']['text'] = '[field_delegate_last_name]
';
  $handler->display->display_options['fields']['field_delegate_last_name']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['field_delegate_last_name']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Phone */
  $handler->display->display_options['fields']['field_structure_phone']['id'] = 'field_structure_phone';
  $handler->display->display_options['fields']['field_structure_phone']['table'] = 'field_data_field_structure_phone';
  $handler->display->display_options['fields']['field_structure_phone']['field'] = 'field_structure_phone';
  $handler->display->display_options['fields']['field_structure_phone']['relationship'] = 'field_office_structure_target_id';
  $handler->display->display_options['fields']['field_structure_phone']['label'] = 'Tel';
  $handler->display->display_options['fields']['field_structure_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_structure_phone']['alter']['text'] = '[field_structure_phone]
<br />';
  /* Champ: Contenu : Fax */
  $handler->display->display_options['fields']['field_structure_fax']['id'] = 'field_structure_fax';
  $handler->display->display_options['fields']['field_structure_fax']['table'] = 'field_data_field_structure_fax';
  $handler->display->display_options['fields']['field_structure_fax']['field'] = 'field_structure_fax';
  $handler->display->display_options['fields']['field_structure_fax']['relationship'] = 'field_office_structure_target_id';
  /* Champ: Contenu : Email */
  $handler->display->display_options['fields']['field_delegate_email']['id'] = 'field_delegate_email';
  $handler->display->display_options['fields']['field_delegate_email']['table'] = 'field_data_field_delegate_email';
  $handler->display->display_options['fields']['field_delegate_email']['field'] = 'field_delegate_email';
  $handler->display->display_options['fields']['field_delegate_email']['relationship'] = 'field_office_delegate_target_id';
  $handler->display->display_options['fields']['field_delegate_email']['label'] = '';
  $handler->display->display_options['fields']['field_delegate_email']['element_label_colon'] = FALSE;
  /* Champ: Location : Ville */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'location';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  $handler->display->display_options['fields']['city']['relationship'] = 'field_office_structure_target_id';
  $handler->display->display_options['fields']['city']['label'] = '';
  $handler->display->display_options['fields']['city']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Label */
  $handler->display->display_options['fields']['field_structure_label']['id'] = 'field_structure_label';
  $handler->display->display_options['fields']['field_structure_label']['table'] = 'field_data_field_structure_label';
  $handler->display->display_options['fields']['field_structure_label']['field'] = 'field_structure_label';
  $handler->display->display_options['fields']['field_structure_label']['relationship'] = 'field_office_structure_target_id';
  $handler->display->display_options['fields']['field_structure_label']['label'] = '';
  $handler->display->display_options['fields']['field_structure_label']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Second label */
  $handler->display->display_options['fields']['field_structure_second_label']['id'] = 'field_structure_second_label';
  $handler->display->display_options['fields']['field_structure_second_label']['table'] = 'field_data_field_structure_second_label';
  $handler->display->display_options['fields']['field_structure_second_label']['field'] = 'field_structure_second_label';
  $handler->display->display_options['fields']['field_structure_second_label']['relationship'] = 'field_office_structure_target_id';
  $handler->display->display_options['fields']['field_structure_second_label']['label'] = '';
  $handler->display->display_options['fields']['field_structure_second_label']['element_label_colon'] = FALSE;
  /* Champ: Location : Rue */
  $handler->display->display_options['fields']['street']['id'] = 'street';
  $handler->display->display_options['fields']['street']['table'] = 'location';
  $handler->display->display_options['fields']['street']['field'] = 'street';
  $handler->display->display_options['fields']['street']['relationship'] = 'field_office_structure_target_id';
  $handler->display->display_options['fields']['street']['label'] = '';
  $handler->display->display_options['fields']['street']['element_label_colon'] = FALSE;
  /* Champ: Location : Code postal */
  $handler->display->display_options['fields']['postal_code']['id'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['table'] = 'location';
  $handler->display->display_options['fields']['postal_code']['field'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['relationship'] = 'field_office_structure_target_id';
  $handler->display->display_options['fields']['postal_code']['label'] = '';
  $handler->display->display_options['fields']['postal_code']['element_label_colon'] = FALSE;
  /* Champ: city_2 */
  $handler->display->display_options['fields']['city_1']['id'] = 'city_1';
  $handler->display->display_options['fields']['city_1']['table'] = 'location';
  $handler->display->display_options['fields']['city_1']['field'] = 'city';
  $handler->display->display_options['fields']['city_1']['relationship'] = 'field_office_structure_target_id';
  $handler->display->display_options['fields']['city_1']['ui_name'] = 'city_2';
  $handler->display->display_options['fields']['city_1']['label'] = '';
  $handler->display->display_options['fields']['city_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['city_1']['alter']['text'] = '[city_1]
<br />';
  $handler->display->display_options['fields']['city_1']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Day */
  $handler->display->display_options['fields']['field_office_day']['id'] = 'field_office_day';
  $handler->display->display_options['fields']['field_office_day']['table'] = 'field_data_field_office_day';
  $handler->display->display_options['fields']['field_office_day']['field'] = 'field_office_day';
  $handler->display->display_options['fields']['field_office_day']['label'] = 'Permanence';
  /* Champ: Contenu : Hourly */
  $handler->display->display_options['fields']['field_office_hourly']['id'] = 'field_office_hourly';
  $handler->display->display_options['fields']['field_office_hourly']['table'] = 'field_data_field_office_hourly';
  $handler->display->display_options['fields']['field_office_hourly']['field'] = 'field_office_hourly';
  $handler->display->display_options['fields']['field_office_hourly']['label'] = '';
  $handler->display->display_options['fields']['field_office_hourly']['element_label_colon'] = FALSE;
  /* Critère de tri: Contenu : Date de publication */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filtre contextuel: Contenu : Departement code (field_delegate_departement_code) */
  $handler->display->display_options['arguments']['field_delegate_departement_code_value']['id'] = 'field_delegate_departement_code_value';
  $handler->display->display_options['arguments']['field_delegate_departement_code_value']['table'] = 'field_data_field_delegate_departement_code';
  $handler->display->display_options['arguments']['field_delegate_departement_code_value']['field'] = 'field_delegate_departement_code_value';
  $handler->display->display_options['arguments']['field_delegate_departement_code_value']['relationship'] = 'field_office_structure_target_id';
  $handler->display->display_options['arguments']['field_delegate_departement_code_value']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['field_delegate_departement_code_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_delegate_departement_code_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_delegate_departement_code_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_delegate_departement_code_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_delegate_departement_code_value']['limit'] = '0';
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ct_office' => 'ct_office',
  );
  /* Critère de filtrage: Location : Distance / Proximité */
  $handler->display->display_options['filters']['distance']['id'] = 'distance';
  $handler->display->display_options['filters']['distance']['table'] = 'location';
  $handler->display->display_options['filters']['distance']['field'] = 'distance';
  $handler->display->display_options['filters']['distance']['relationship'] = 'reverse_field_office_structure_node';
  $handler->display->display_options['filters']['distance']['value'] = array(
    'latitude' => '',
    'longitude' => '',
    'postal_code' => '',
    'country' => '',
    'php_code' => '',
    'nid_arg' => '',
    'nid_loc_field' => 'node',
    'uid_arg' => '',
    'search_distance' => '100',
    'search_units' => 'km',
  );
  $handler->display->display_options['filters']['distance']['exposed'] = TRUE;
  $handler->display->display_options['filters']['distance']['expose']['operator_id'] = 'distance_op';
  $handler->display->display_options['filters']['distance']['expose']['operator'] = 'distance_op';
  $handler->display->display_options['filters']['distance']['expose']['identifier'] = 'distance';
  $handler->display->display_options['filters']['distance']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['distance']['expose']['gmap_macro'] = array(
    'default' => '[gmap ]',
  );
  $handler->display->display_options['filters']['distance']['expose']['user_location_choose'] = array(
    'default' => FALSE,
  );
  $handler->display->display_options['filters']['distance']['origin'] = 'postal_default';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_permanence');
  $handler->display->display_options['field_language'] = 'fr';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_structure_label',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_delegate_civilite' => 'field_delegate_civilite',
    'field_delegate_name' => 'field_delegate_name',
    'field_delegate_last_name' => 'field_delegate_last_name',
    'field_structure_phone' => 'field_structure_phone',
    'field_structure_fax' => 'field_structure_fax',
    'field_delegate_email' => 'field_delegate_email',
    'city' => 'city',
    'field_structure_label' => 'field_structure_label',
    'field_structure_second_label' => 'field_structure_second_label',
    'street' => 'street',
    'postal_code' => 'postal_code',
    'city_1' => 'city_1',
    'field_office_day' => 'field_office_day',
    'field_office_hourly' => 'field_office_hourly',
  );
  $handler->display->display_options['style_options']['default'] = 'city';
  $handler->display->display_options['style_options']['info'] = array(
    'field_delegate_civilite' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_delegate_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_delegate_last_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_structure_phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_structure_fax' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_delegate_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'city' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_structure_label' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_structure_second_label' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'street' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'postal_code' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'city_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_office_day' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_office_hourly' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Pied de page: Global : Résumé des résultats */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['content'] = 'Resultat @start - @end sur @total';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relation: Entity Reference : Entité référencée */
  $handler->display->display_options['relationships']['field_office_structure_target_id']['id'] = 'field_office_structure_target_id';
  $handler->display->display_options['relationships']['field_office_structure_target_id']['table'] = 'field_data_field_office_structure';
  $handler->display->display_options['relationships']['field_office_structure_target_id']['field'] = 'field_office_structure_target_id';
  /* Relation: Entity Reference : Entité référencée */
  $handler->display->display_options['relationships']['field_office_delegate_target_id']['id'] = 'field_office_delegate_target_id';
  $handler->display->display_options['relationships']['field_office_delegate_target_id']['table'] = 'field_data_field_office_delegate';
  $handler->display->display_options['relationships']['field_office_delegate_target_id']['field'] = 'field_office_delegate_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Civilite */
  $handler->display->display_options['fields']['field_delegate_civilite']['id'] = 'field_delegate_civilite';
  $handler->display->display_options['fields']['field_delegate_civilite']['table'] = 'field_data_field_delegate_civilite';
  $handler->display->display_options['fields']['field_delegate_civilite']['field'] = 'field_delegate_civilite';
  $handler->display->display_options['fields']['field_delegate_civilite']['relationship'] = 'field_office_delegate_target_id';
  $handler->display->display_options['fields']['field_delegate_civilite']['label'] = '';
  $handler->display->display_options['fields']['field_delegate_civilite']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Name */
  $handler->display->display_options['fields']['field_delegate_name']['id'] = 'field_delegate_name';
  $handler->display->display_options['fields']['field_delegate_name']['table'] = 'field_data_field_delegate_name';
  $handler->display->display_options['fields']['field_delegate_name']['field'] = 'field_delegate_name';
  $handler->display->display_options['fields']['field_delegate_name']['relationship'] = 'field_office_delegate_target_id';
  $handler->display->display_options['fields']['field_delegate_name']['label'] = '';
  $handler->display->display_options['fields']['field_delegate_name']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Last name */
  $handler->display->display_options['fields']['field_delegate_last_name']['id'] = 'field_delegate_last_name';
  $handler->display->display_options['fields']['field_delegate_last_name']['table'] = 'field_data_field_delegate_last_name';
  $handler->display->display_options['fields']['field_delegate_last_name']['field'] = 'field_delegate_last_name';
  $handler->display->display_options['fields']['field_delegate_last_name']['relationship'] = 'field_office_delegate_target_id';
  $handler->display->display_options['fields']['field_delegate_last_name']['label'] = '';
  $handler->display->display_options['fields']['field_delegate_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_delegate_last_name']['alter']['text'] = '[field_delegate_last_name]
';
  $handler->display->display_options['fields']['field_delegate_last_name']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['field_delegate_last_name']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Phone */
  $handler->display->display_options['fields']['field_structure_phone']['id'] = 'field_structure_phone';
  $handler->display->display_options['fields']['field_structure_phone']['table'] = 'field_data_field_structure_phone';
  $handler->display->display_options['fields']['field_structure_phone']['field'] = 'field_structure_phone';
  $handler->display->display_options['fields']['field_structure_phone']['relationship'] = 'field_office_structure_target_id';
  $handler->display->display_options['fields']['field_structure_phone']['label'] = 'Tel';
  $handler->display->display_options['fields']['field_structure_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_structure_phone']['alter']['text'] = '[field_structure_phone]
<br />';
  /* Champ: Contenu : Fax */
  $handler->display->display_options['fields']['field_structure_fax']['id'] = 'field_structure_fax';
  $handler->display->display_options['fields']['field_structure_fax']['table'] = 'field_data_field_structure_fax';
  $handler->display->display_options['fields']['field_structure_fax']['field'] = 'field_structure_fax';
  $handler->display->display_options['fields']['field_structure_fax']['relationship'] = 'field_office_structure_target_id';
  /* Champ: Contenu : Email */
  $handler->display->display_options['fields']['field_delegate_email']['id'] = 'field_delegate_email';
  $handler->display->display_options['fields']['field_delegate_email']['table'] = 'field_data_field_delegate_email';
  $handler->display->display_options['fields']['field_delegate_email']['field'] = 'field_delegate_email';
  $handler->display->display_options['fields']['field_delegate_email']['relationship'] = 'field_office_delegate_target_id';
  $handler->display->display_options['fields']['field_delegate_email']['label'] = '';
  $handler->display->display_options['fields']['field_delegate_email']['element_label_colon'] = FALSE;
  /* Champ: Location : Ville */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'location';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  $handler->display->display_options['fields']['city']['relationship'] = 'field_office_structure_target_id';
  $handler->display->display_options['fields']['city']['label'] = '';
  $handler->display->display_options['fields']['city']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Label */
  $handler->display->display_options['fields']['field_structure_label']['id'] = 'field_structure_label';
  $handler->display->display_options['fields']['field_structure_label']['table'] = 'field_data_field_structure_label';
  $handler->display->display_options['fields']['field_structure_label']['field'] = 'field_structure_label';
  $handler->display->display_options['fields']['field_structure_label']['relationship'] = 'field_office_structure_target_id';
  $handler->display->display_options['fields']['field_structure_label']['label'] = '';
  $handler->display->display_options['fields']['field_structure_label']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Second label */
  $handler->display->display_options['fields']['field_structure_second_label']['id'] = 'field_structure_second_label';
  $handler->display->display_options['fields']['field_structure_second_label']['table'] = 'field_data_field_structure_second_label';
  $handler->display->display_options['fields']['field_structure_second_label']['field'] = 'field_structure_second_label';
  $handler->display->display_options['fields']['field_structure_second_label']['relationship'] = 'field_office_structure_target_id';
  $handler->display->display_options['fields']['field_structure_second_label']['label'] = '';
  $handler->display->display_options['fields']['field_structure_second_label']['element_label_colon'] = FALSE;
  /* Champ: Location : Rue */
  $handler->display->display_options['fields']['street']['id'] = 'street';
  $handler->display->display_options['fields']['street']['table'] = 'location';
  $handler->display->display_options['fields']['street']['field'] = 'street';
  $handler->display->display_options['fields']['street']['relationship'] = 'field_office_structure_target_id';
  $handler->display->display_options['fields']['street']['label'] = '';
  $handler->display->display_options['fields']['street']['element_label_colon'] = FALSE;
  /* Champ: Location : Code postal */
  $handler->display->display_options['fields']['postal_code']['id'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['table'] = 'location';
  $handler->display->display_options['fields']['postal_code']['field'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['relationship'] = 'field_office_structure_target_id';
  $handler->display->display_options['fields']['postal_code']['label'] = '';
  $handler->display->display_options['fields']['postal_code']['element_label_colon'] = FALSE;
  /* Champ: city_2 */
  $handler->display->display_options['fields']['city_1']['id'] = 'city_1';
  $handler->display->display_options['fields']['city_1']['table'] = 'location';
  $handler->display->display_options['fields']['city_1']['field'] = 'city';
  $handler->display->display_options['fields']['city_1']['relationship'] = 'field_office_structure_target_id';
  $handler->display->display_options['fields']['city_1']['ui_name'] = 'city_2';
  $handler->display->display_options['fields']['city_1']['label'] = '';
  $handler->display->display_options['fields']['city_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['city_1']['alter']['text'] = '[city_1]
<br />';
  $handler->display->display_options['fields']['city_1']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Day */
  $handler->display->display_options['fields']['field_office_day']['id'] = 'field_office_day';
  $handler->display->display_options['fields']['field_office_day']['table'] = 'field_data_field_office_day';
  $handler->display->display_options['fields']['field_office_day']['field'] = 'field_office_day';
  $handler->display->display_options['fields']['field_office_day']['label'] = '';
  $handler->display->display_options['fields']['field_office_day']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Hourly */
  $handler->display->display_options['fields']['field_office_hourly']['id'] = 'field_office_hourly';
  $handler->display->display_options['fields']['field_office_hourly']['table'] = 'field_data_field_office_hourly';
  $handler->display->display_options['fields']['field_office_hourly']['field'] = 'field_office_hourly';
  $handler->display->display_options['fields']['field_office_hourly']['label'] = '';
  $handler->display->display_options['fields']['field_office_hourly']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Picture */
  $handler->display->display_options['fields']['field_delegate_picture']['id'] = 'field_delegate_picture';
  $handler->display->display_options['fields']['field_delegate_picture']['table'] = 'field_data_field_delegate_picture';
  $handler->display->display_options['fields']['field_delegate_picture']['field'] = 'field_delegate_picture';
  $handler->display->display_options['fields']['field_delegate_picture']['relationship'] = 'field_office_delegate_target_id';
  $handler->display->display_options['fields']['field_delegate_picture']['label'] = '';
  /* Champ: Contenu : Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_office_delegate_target_id';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Champ: Location : Coordonnées */
  $handler->display->display_options['fields']['coordinates']['id'] = 'coordinates';
  $handler->display->display_options['fields']['coordinates']['table'] = 'location';
  $handler->display->display_options['fields']['coordinates']['field'] = 'coordinates';
  $handler->display->display_options['fields']['coordinates']['relationship'] = 'field_office_structure_target_id';
  $handler->display->display_options['fields']['coordinates']['style'] = 'dd';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Critère de tri: Contenu : Date de publication */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Critère de tri: Contenu : Name (field_delegate_name) */
  $handler->display->display_options['sorts']['field_delegate_name_value']['id'] = 'field_delegate_name_value';
  $handler->display->display_options['sorts']['field_delegate_name_value']['table'] = 'field_data_field_delegate_name';
  $handler->display->display_options['sorts']['field_delegate_name_value']['field'] = 'field_delegate_name_value';
  $handler->display->display_options['sorts']['field_delegate_name_value']['relationship'] = 'field_office_delegate_target_id';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ct_office' => 'ct_office',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['path'] = 'office';

  /* Display: Fichier attaché */
  $handler = $view->new_display('attachment', 'Fichier attaché', 'attachment_structure');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'gmap';
  $handler->display->display_options['style_options']['macro'] = '[gmap zoom=7 |center=49.22539962011783,1.83596670627594]';
  $handler->display->display_options['style_options']['markers'] = 'nodetype';
  $handler->display->display_options['style_options']['markertype'] = 'MACHINE_NAME';
  $handler->display->display_options['style_options']['latfield'] = 'field_structure_label';
  $handler->display->display_options['style_options']['lonfield'] = 'field_structure_label';
  $handler->display->display_options['style_options']['markerfield'] = 'field_structure_label';
  $handler->display->display_options['style_options']['geofield'] = 'field_structure_label';
  $handler->display->display_options['style_options']['enablermt'] = 0;
  $handler->display->display_options['style_options']['rmtfield'] = 'field_structure_label';
  $handler->display->display_options['style_options']['rmtfieldraw'] = 1;
  $handler->display->display_options['style_options']['center_on_nodearg_arg'] = 'field_delegate_departement_code_value';
  $handler->display->display_options['style_options']['animation'] = '0';
  $handler->display->display_options['style_options']['highlight_nodearg_arg'] = 'field_delegate_departement_code_value';
  $handler->display->display_options['style_options']['autoclick_on_nodearg_arg'] = 'field_delegate_departement_code_value';
  $handler->display->display_options['style_options']['tooltipfield'] = 'field_structure_label';
  $handler->display->display_options['style_options']['bubbletextfield'] = 'field_structure_label';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'postal_code' => 'postal_code',
    'city' => 'city',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Pied de page: Global : Zone de texte */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = 'Les délégués peuvent traiter, par la voie du règlement amiable, les réclamations relevant de la compétence de Défenseurs des droits dans les domaines des relations avec les services publics, de la défense des droits de l\'enfant et de la lutte contre les discriminations.';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Label */
  $handler->display->display_options['fields']['field_structure_label']['id'] = 'field_structure_label';
  $handler->display->display_options['fields']['field_structure_label']['table'] = 'field_data_field_structure_label';
  $handler->display->display_options['fields']['field_structure_label']['field'] = 'field_structure_label';
  $handler->display->display_options['fields']['field_structure_label']['label'] = '';
  $handler->display->display_options['fields']['field_structure_label']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Second label */
  $handler->display->display_options['fields']['field_structure_second_label']['id'] = 'field_structure_second_label';
  $handler->display->display_options['fields']['field_structure_second_label']['table'] = 'field_data_field_structure_second_label';
  $handler->display->display_options['fields']['field_structure_second_label']['field'] = 'field_structure_second_label';
  $handler->display->display_options['fields']['field_structure_second_label']['label'] = '';
  $handler->display->display_options['fields']['field_structure_second_label']['element_label_colon'] = FALSE;
  /* Champ: Location : Rue */
  $handler->display->display_options['fields']['street']['id'] = 'street';
  $handler->display->display_options['fields']['street']['table'] = 'location';
  $handler->display->display_options['fields']['street']['field'] = 'street';
  $handler->display->display_options['fields']['street']['label'] = '';
  $handler->display->display_options['fields']['street']['element_label_colon'] = FALSE;
  /* Champ: Location : Latitude */
  $handler->display->display_options['fields']['latitude']['id'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['table'] = 'location';
  $handler->display->display_options['fields']['latitude']['field'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['label'] = '';
  $handler->display->display_options['fields']['latitude']['exclude'] = TRUE;
  $handler->display->display_options['fields']['latitude']['element_label_colon'] = FALSE;
  /* Champ: Location : Longitude */
  $handler->display->display_options['fields']['longitude']['id'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['table'] = 'location';
  $handler->display->display_options['fields']['longitude']['field'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['label'] = '';
  $handler->display->display_options['fields']['longitude']['exclude'] = TRUE;
  $handler->display->display_options['fields']['longitude']['element_label_colon'] = FALSE;
  /* Champ: Location : Code postal */
  $handler->display->display_options['fields']['postal_code']['id'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['table'] = 'location';
  $handler->display->display_options['fields']['postal_code']['field'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['label'] = '';
  $handler->display->display_options['fields']['postal_code']['element_label_colon'] = FALSE;
  /* Champ: Location : Ville */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'location';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  $handler->display->display_options['fields']['city']['label'] = '';
  $handler->display->display_options['fields']['city']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Departement code */
  $handler->display->display_options['fields']['field_delegate_departement_code']['id'] = 'field_delegate_departement_code';
  $handler->display->display_options['fields']['field_delegate_departement_code']['table'] = 'field_data_field_delegate_departement_code';
  $handler->display->display_options['fields']['field_delegate_departement_code']['field'] = 'field_delegate_departement_code';
  $handler->display->display_options['fields']['field_delegate_departement_code']['label'] = '';
  $handler->display->display_options['fields']['field_delegate_departement_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_delegate_departement_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_delegate_departement_code']['type'] = 'text_plain';
  /* Champ: Contenu : Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Phone */
  $handler->display->display_options['fields']['field_structure_phone']['id'] = 'field_structure_phone';
  $handler->display->display_options['fields']['field_structure_phone']['table'] = 'field_data_field_structure_phone';
  $handler->display->display_options['fields']['field_structure_phone']['field'] = 'field_structure_phone';
  $handler->display->display_options['fields']['field_structure_phone']['label'] = '';
  $handler->display->display_options['fields']['field_structure_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtre contextuel: Contenu : Departement code (field_delegate_departement_code) */
  $handler->display->display_options['arguments']['field_delegate_departement_code_value']['id'] = 'field_delegate_departement_code_value';
  $handler->display->display_options['arguments']['field_delegate_departement_code_value']['table'] = 'field_data_field_delegate_departement_code';
  $handler->display->display_options['arguments']['field_delegate_departement_code_value']['field'] = 'field_delegate_departement_code_value';
  $handler->display->display_options['arguments']['field_delegate_departement_code_value']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['field_delegate_departement_code_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_delegate_departement_code_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_delegate_departement_code_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_delegate_departement_code_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_delegate_departement_code_value']['limit'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ct_structure' => 'ct_structure',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['displays'] = array(
    'page_permanence' => 'page_permanence',
    'default' => 0,
    'block_1' => 0,
  );

  /* Display: Bloc */
  $handler = $view->new_display('block', 'Bloc', 'block_structure_map');
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Label */
  $handler->display->display_options['fields']['field_structure_label']['id'] = 'field_structure_label';
  $handler->display->display_options['fields']['field_structure_label']['table'] = 'field_data_field_structure_label';
  $handler->display->display_options['fields']['field_structure_label']['field'] = 'field_structure_label';
  $handler->display->display_options['fields']['field_structure_label']['label'] = '';
  $handler->display->display_options['fields']['field_structure_label']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Second label */
  $handler->display->display_options['fields']['field_structure_second_label']['id'] = 'field_structure_second_label';
  $handler->display->display_options['fields']['field_structure_second_label']['table'] = 'field_data_field_structure_second_label';
  $handler->display->display_options['fields']['field_structure_second_label']['field'] = 'field_structure_second_label';
  $handler->display->display_options['fields']['field_structure_second_label']['label'] = '';
  $handler->display->display_options['fields']['field_structure_second_label']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Phone */
  $handler->display->display_options['fields']['field_structure_phone']['id'] = 'field_structure_phone';
  $handler->display->display_options['fields']['field_structure_phone']['table'] = 'field_data_field_structure_phone';
  $handler->display->display_options['fields']['field_structure_phone']['field'] = 'field_structure_phone';
  $handler->display->display_options['fields']['field_structure_phone']['label'] = 'Tel';
  $handler->display->display_options['fields']['field_structure_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_structure_phone']['alter']['text'] = '[field_structure_phone]
<br />';
  /* Champ: Contenu : Fax */
  $handler->display->display_options['fields']['field_structure_fax']['id'] = 'field_structure_fax';
  $handler->display->display_options['fields']['field_structure_fax']['table'] = 'field_data_field_structure_fax';
  $handler->display->display_options['fields']['field_structure_fax']['field'] = 'field_structure_fax';
  /* Champ: Location : Rue */
  $handler->display->display_options['fields']['street']['id'] = 'street';
  $handler->display->display_options['fields']['street']['table'] = 'location';
  $handler->display->display_options['fields']['street']['field'] = 'street';
  $handler->display->display_options['fields']['street']['label'] = '';
  $handler->display->display_options['fields']['street']['element_label_colon'] = FALSE;
  /* Champ: Location : Code postal */
  $handler->display->display_options['fields']['postal_code']['id'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['table'] = 'location';
  $handler->display->display_options['fields']['postal_code']['field'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['label'] = '';
  $handler->display->display_options['fields']['postal_code']['element_label_colon'] = FALSE;
  /* Champ: Location : Ville */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'location';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  $handler->display->display_options['fields']['city']['label'] = '';
  $handler->display->display_options['fields']['city']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Departement code */
  $handler->display->display_options['fields']['field_delegate_departement_code']['id'] = 'field_delegate_departement_code';
  $handler->display->display_options['fields']['field_delegate_departement_code']['table'] = 'field_data_field_delegate_departement_code';
  $handler->display->display_options['fields']['field_delegate_departement_code']['field'] = 'field_delegate_departement_code';
  $handler->display->display_options['fields']['field_delegate_departement_code']['label'] = '';
  $handler->display->display_options['fields']['field_delegate_departement_code']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_delegate_departement_code']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ct_structure' => 'ct_structure',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $export['vu_office'] = $view;

  return $export;
}
