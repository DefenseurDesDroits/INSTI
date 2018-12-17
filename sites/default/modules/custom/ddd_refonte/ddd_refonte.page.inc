<?php

function ddd_refonte_agenda_page() {
  if(isset($_GET['month'])){
    $first_minute = mktime(0, 0, 0, $_GET['month'], 1, date('Y'));
    $last_minute = mktime(23, 59, 59, $_GET['month'], date('t', $first_minute), date('Y'));
  } else {
    $first_minute = mktime(0, 0, 0, date('m'), 1, date('Y'));
    $last_minute = mktime(23, 59, 59, date('m'), date('t', $first_minute), date('Y'));
  }
  $variable['name_month'] = format_date($first_minute, 'custom', t('F', array(), array('context' => 'php date format')));
  $start_date = date('Y-m-d h:i:s', $first_minute);
  $end_date = date('Y-m-d h:i:s', $last_minute);

  $query = db_query("SELECT entity_id FROM {field_data_field_event_date} t
  WHERE t.field_event_date_value > :start_date AND t.field_event_date_value < :end_date", array(':start_date' => $start_date, ':end_date' => $end_date));
  $result = $query->fetchAll();
  $context_filter = '';
  foreach($result as $r){
    $context_filter .= $r->entity_id . '+';
  }
  $contextual_filter = rtrim($context_filter, "+");
  $variable['empty_result'] = empty($context_filter) ? t("Il n'y a pas d'évenement pour ce mois-ci") : '';
  if(!isset($_GET['month'])){
    $variable['next_month'] = date("m", strtotime("+1 month"));
    $variable['prev_month'] = date("m", strtotime("-1 month"));
  } else {
    $variable['next_month'] = ($_GET['month'] == 12) ? '01' : $_GET['month'] + 1;
    $variable['prev_month'] = ($_GET['month'] == 01) ? '12' : $_GET['month'] - 1;
  }
  $variable['view'] = views_embed_view('agenda', 'block_agenda', $contextual_filter);
  return theme('_theme_ddd_refonte_agenda', array('vars' => $variable));
}

function ddd_refonte_rejoindre_page(){
  global $language;
  $lang_name = $language->language;  
  

  if(!isset($_GET['tid'])){
    $term = taxonomy_term_load('1583');
    $translate = i18n_taxonomy_localize_terms($term,$lang_name);
    $name = $translate->name;
    $tids = ddd_refonte_get_tids_children();
    $variable['menu'] = ddd_refonte_get_menu_taxonomy('', TRUE);
  } else {
    $term = taxonomy_term_load($_GET['tid']);
    $translate = i18n_taxonomy_localize_terms($term,$lang_name);
    $name = $translate->name;    
    $tids = $_GET['tid'];
    $variable['menu'] = ddd_refonte_get_menu_taxonomy($_GET['tid'], FALSE);
  }
  $nids = isset($_GET['title']) ? ddd_refonte_get_nids($tids, 'recrutement', $_GET['title']) : ddd_refonte_get_nids($tids, 'recrutement');
  if(isset($_GET['month']) && isset($_GET['year']) || isset($_GET['month']) && !isset($_GET['year']) || !isset($_GET['month']) && isset($_GET['year'])){
    $times = ddd_refonte_get_time($_GET['month'], $_GET['year']);
    $ids = explode('+', $nids);
    $start_date = date('Y-m-d h:i:s', $times['start']);
    $end_date = date('Y-m-d h:i:s', $times['end']);
    $query = db_query("SELECT entity_id FROM {field_data_field_article_date} t WHERE t.field_article_date_value > :start_date AND t.field_article_date_value < :end_date AND t.entity_id IN (:ids)", array(':start_date' => $start_date, ':end_date' => $end_date, ':ids' => $ids));
    $result = $query->fetchAll();
    $nids = '';
    $nb_result=0;
    foreach($result as $r){
      $nids .= $r->entity_id . '+';
      $nb_result++;
    }
    $nids = rtrim($nids, "+");
  }
  $nb_result = explode('+', $nids);
  $view = views_get_view('nous_rejoindre');
  $view->set_display('block_1');
  $view->set_arguments(array($nids));
  $view->pre_execute();
  $view->execute();
  $variable['view'] = $view->render();
  $variable['nb_result'] = $view->total_rows;  
  $variable['name'] = $name;
  $variable['filter'] = drupal_get_form('ddd_refonte_filter_form');
  return theme('_theme_ddd_refonte_page_rejoindre', array('vars' => $variable));
}

function ddd_refonte_get_tids_children($tid){
  $children = taxonomy_get_children('1579');
  foreach($children as $c){
    $values[] = $c->tid;
  }
  return $values;
}

function ddd_refonte_get_nids($tid, $type, $title = ''){
  $result = db_select('node', 'n');
  $result->condition('type', $type);
  if(!empty($title))
    $result->condition('title', '%' . db_like($title) . '%', 'LIKE');
  $result->join('field_data_field_article_type', 'tx', 'n.nid = tx.entity_id');
  $result->fields('tx', array('entity_id', 'field_article_type_tid'));
  if(is_array($tid)){
    $result->condition('tx.field_article_type_tid', $tid, 'IN');
  } else {
    $result->condition('tx.field_article_type_tid', $tid, '=');
  }
  $res = $result->execute();
  foreach($res as $r){
    $nids .= $r->entity_id . '+';
  }
  return rtrim($nids, "+");
}

function ddd_refonte_get_time($month = '', $year = ''){
  if(!empty($month) && !empty($year)){
    $times['start'] = mktime(0, 0, 0, $month, 1, $year);
    $times['end'] = mktime(23, 59, 59, $month, date('t', $times['start']), $year);
  } else if(!empty($month) && empty($year)){
    $times['start'] = mktime(0, 0, 0, $month, 1, date('Y'));
    $times['end'] = mktime(23, 59, 59, $month, date('t', $times['start']), date('Y'));
  } else if(empty($month) && !empty($year)){
    $times['start'] = mktime(0, 0, 0, 01, 1, $year);
    $times['end'] = mktime(23, 59, 59, 12, date('t', $times['start']), $year);
  }
  return $times;
}

function ddd_refonte_filter_form($form, &$form_states){
  $month = array(
    'mois' => t('Month'),//mois
    '1' => t('January'),
    '2' => t('February'),
    '3' => t('March'),
    '4' => t('April'),
    '5' => t('May'),
    '6' => t('June'),
    '7' => t('July'),
    '8' => t('August'),
    '9' => t('September'),
    '10' => t('October'),
    '11' => t('November'),
    '12' => t('December'),
  );
  $year = array(
    'annee'=> t('Year'),
    '2017' => '2017',
    '2016' => '2016',
    '2015' => '2015',
    '2014' => '2014',
    '2013' => '2013',
    '2012' => '2012',
    '2011' => '2011',
    '2010' => '2010',
    '2009' => '2009',
    '2008' => '2008',
    '2007' => '2007',
  );
  $form['title_date'] = array(
    '#markup' => "<h2 class='title-date'>" . t('By date') . " :</h2>",
  );
  $form['month'] = array(
   '#type' => 'select',
   '#options' => $month,
   '#attributes' => array('aria-label' => array('Renseigner le mois à filtrer')),
   '#default_value' => isset($_GET['month']) ? $_GET['month'] : '',
  );
  $form['year'] = array(
   '#type' => 'select',
   '#options' => $year,
   '#attributes' => array('aria-label' => array("Renseigner l'année à filtrer")),
   '#default_value' => isset($_GET['year']) ? $_GET['year'] : '',
  );
  $form['title_search'] = array(
    '#markup' => "<h2 class='title-search'>" . t('By title') . " :</h2>",
  );
  $form['title'] = array(
    '#type' => 'textfield',
    '#default_value' => isset($_GET['title']) ? $_GET['title'] : '',
    '#attributes' => array('aria-label' => array("Renseigner le titre à filtrer")),
    '#size' => 60,
    '#maxlength' => 128,
  );
  $form['#type'] = 'actions';
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Apply'),
    '#attributes' => array('class' => array('btn-info')),
  );
  return $form;
}

function ddd_refonte_filter_form_submit($form, &$form_states){
  if($form_states['values']['month'] !== 'mois'){
    $params['month'] = $form_states['values']['month'];
  }
  if($form_states['values']['year'] !== 'annee'){
    $params['year'] = $form_states['values']['year'];
  }
  if(!empty($form_states['values']['title'])){
    $params['title'] = $form_states['values']['title'];
  }
  if(isset($_GET['tid'])){
    $params['tid'] = $_GET['tid'];
  }
  drupal_goto('/outils-list', array('query' => $params));
}

function ddd_refonte_get_menu_taxonomy($tid, $is_parent,$typeid='1579',$path_type='outils-list'){
  global $language;
  $lang_name = $language->language;

  $children = taxonomy_get_children($typeid);
  $menu[0]['path'] = $language->language . '/'.$path_type.'/';
  $menu[0]['name'] = t('All');
  $menu[0]['active'] = ($is_parent == TRUE) ? TRUE : FALSE;
  $i=1;
  foreach($children as $a){
    $menu[$i]['path'] = $language->language . '/'.$path_type.'?tid=' . $a->tid;
    $translate = i18n_taxonomy_localize_terms($a,$lang_name);
    $menu[$i]['name'] = $translate->name;
    if($is_parent == FALSE){
      if($tid == $a->tid){
        $menu[$i]['active'] = TRUE;
      } else {
        $menu[$i]['active'] = FALSE;
      }
    } else {
      $menu[$i]['active'] = FALSE;
    }
    $i++;
  }
  return $menu;
}

function ddd_refonte_outils_page(){
  global $language;
  $lang_name = $language->language;  
  

  if(!isset($_GET['tid'])){
    $term = taxonomy_term_load('1579');
    $translate = i18n_taxonomy_localize_terms($term,$lang_name);
    $name = $translate->name;
    $tids = ddd_refonte_get_tids_children();
    $variable['menu'] = ddd_refonte_get_menu_taxonomy('', TRUE);
  } else {
    $term = taxonomy_term_load($_GET['tid']);
    $translate = i18n_taxonomy_localize_terms($term,$lang_name);
    $name = $translate->name;    
    $tids = $_GET['tid'];
    $variable['menu'] = ddd_refonte_get_menu_taxonomy($_GET['tid'], FALSE);
  }
  $nids = isset($_GET['title']) ? ddd_refonte_get_nids($tids, 'ct_offre', $_GET['title']) : ddd_refonte_get_nids($tids, 'ct_offre');
  if(isset($_GET['month']) && isset($_GET['year']) || isset($_GET['month']) && !isset($_GET['year']) || !isset($_GET['month']) && isset($_GET['year'])){
    $times = ddd_refonte_get_time($_GET['month'], $_GET['year']);
    $ids = explode('+', $nids);
    $start_date = date('Y-m-d h:i:s', $times['start']);
    $end_date = date('Y-m-d h:i:s', $times['end']);
    $query = db_query("SELECT entity_id FROM {field_data_field_article_date} t WHERE t.field_article_date_value > :start_date AND t.field_article_date_value < :end_date AND t.entity_id IN (:ids)", array(':start_date' => $start_date, ':end_date' => $end_date, ':ids' => $ids));
    $result = $query->fetchAll();
    $nids = '';
    $nb_result=0;
    foreach($result as $r){
      $nids .= $r->entity_id . '+';
      $nb_result++;
    }
    $nids = rtrim($nids, "+");
  }
  $nb_result = explode('+', $nids);
  $view = views_get_view('block_outils');
  $view->set_display('block_outils');
  $view->set_arguments(array($nids));
  $view->pre_execute();
  $view->execute();
  $variable['view'] = $view->render();
  $variable['nb_result'] = $view->total_rows;  
  $variable['name'] = $name;
  $variable['filter'] = drupal_get_form('ddd_refonte_filter_form');
  return theme('_theme_ddd_refonte_page_outils', array('vars' => $variable));
}

function ddd_refonte_filter_publications_form($form, &$form_states){
  $month = array(
    'mois' => t('Month'),//mois
    '1' => t('January'),
    '2' => t('February'),
    '3' => t('March'),
    '4' => t('April'),
    '5' => t('May'),
    '6' => t('June'),
    '7' => t('July'),
    '8' => t('August'),
    '9' => t('September'),
    '10' => t('October'),
    '11' => t('November'),
    '12' => t('December'),
  );
  $year = array(
    'annee'=> t('Year'),
    '2017' => '2017',
    '2016' => '2016',
    '2015' => '2015',
    '2014' => '2014',
    '2013' => '2013',
    '2012' => '2012',
    '2011' => '2011',
    '2010' => '2010',
    '2009' => '2009',
    '2008' => '2008',
    '2007' => '2007',
  );
  $form['title_date'] = array(
    '#markup' => "<h2 class='title-date'>" . t('By date') . " :</h2>",
  );
  $form['month'] = array(
   '#type' => 'select',
   '#options' => $month,
   '#attributes' => array('aria-label' => array('Renseigner le mois à filtrer')),
   '#default_value' => isset($_GET['month']) ? $_GET['month'] : '',
  );
  $form['year'] = array(
   '#type' => 'select',
   '#options' => $year,
   '#attributes' => array('aria-label' => array("Renseigner l'année à filtrer")),
   '#default_value' => isset($_GET['year']) ? $_GET['year'] : '',
  );
  $form['title_search'] = array(
    '#markup' => "<h2 class='title-search'>" . t('By title') . " :</h2>",
  );
  $form['title'] = array(
    '#type' => 'textfield',
    '#default_value' => isset($_GET['title']) ? $_GET['title'] : '',
    '#attributes' => array('aria-label' => array("Renseigner le titre à filtrer")),
    '#size' => 60,
    '#maxlength' => 128,
  );
  $form['#type'] = 'actions';
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Apply'),
    '#attributes' => array('class' => array('btn-info')),
  );
  return $form;
}

function ddd_refonte_filter_publications_form_submit($form, &$form_states){
  if($form_states['values']['month'] !== 'mois'){
    $params['month'] = $form_states['values']['month'];
  }
  if($form_states['values']['year'] !== 'annee'){
    $params['year'] = $form_states['values']['year'];
  }
  if(!empty($form_states['values']['title'])){
    $params['title'] = $form_states['values']['title'];
  }
  if(isset($_GET['tid'])){
    $params['tid'] = $_GET['tid'];
  }
  drupal_goto('publications', array('query' => $params));
}

function ddd_refonte_publications_page(){
  global $language;
  $lang_name = $language->language; 
  
  if(!isset($_GET['tid'])){
    $term = taxonomy_term_load('2');
    $translate = i18n_taxonomy_localize_terms($term,$lang_name);
    $name = $translate->name;
    $tids = ddd_refonte_get_tids_children_publications();
    $variable['menu'] = ddd_refonte_get_menu_taxonomy('', TRUE,'2','publications-list');
  } else {
    $term = taxonomy_term_load($_GET['tid']);
    $translate = i18n_taxonomy_localize_terms($term,$lang_name);
    $name = $translate->name;    
    $tids = ddd_refonte_get_tids_children_publications($_GET['tid']);
    $variable['menu'] = ddd_refonte_get_menu_taxonomy($_GET['tid'], FALSE,'2','publications-list');
  }  
  
  $nids = isset($_GET['title']) ? ddd_refonte_get_nids($tids, 'publications', $_GET['title']) : ddd_refonte_get_nids($tids, 'publications');
  if(isset($_GET['month']) && isset($_GET['year']) || isset($_GET['month']) && !isset($_GET['year']) || !isset($_GET['month']) && isset($_GET['year'])){
    $times = ddd_refonte_get_time($_GET['month'], $_GET['year']);
    $ids = explode('+', $nids);
    $start_date = date('Y-m-d h:i:s', $times['start']);
    $end_date = date('Y-m-d h:i:s', $times['end']);
    $query = db_query("SELECT entity_id FROM {field_data_field_article_date} t WHERE t.field_article_date_value > :start_date AND t.field_article_date_value < :end_date AND t.entity_id IN (:ids)", array(':start_date' => $start_date, ':end_date' => $end_date, ':ids' => $ids));
    $result = $query->fetchAll();
    $nids = '';
    $nb_result=0;
    foreach($result as $r){
      $nids .= $r->entity_id . '+';
      $nb_result++;
    }
    $nids = rtrim($nids, "+");
  }
  $nb_result = explode('+', $nids);
  $view = views_get_view('publications');
  $view->set_display('block_publications');
  $view->set_arguments(array($nids));
  $view->pre_execute();
  $view->execute();
  $variable['view'] = $view->render();
  $variable['nb_result'] = $view->total_rows;  
  $variable['name'] = $name;
  $variable['filter'] = drupal_get_form('ddd_refonte_filter_publications_form');
  return theme('_theme_ddd_refonte_page_publications', array('vars' => $variable));
}

function ddd_refonte_get_tids_children_publications($tid='2'){
  $values = array($tid);
  $children = taxonomy_get_children($tid);
  foreach($children as $c){
    $tmp_tids = ddd_refonte_get_tids_children_publications($c->tid);
    $values = array_merge($values,$tmp_tids);
  }    
  return $values;
}