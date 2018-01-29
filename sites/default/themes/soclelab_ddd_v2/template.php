<?php

/**
 * @file
 * template.php
 */

function soclelab_ddd_v2_preprocess_html(&$variables) {
   if(arg(0) == 'agenda-list'){
    if(isset($_GET['month'])){
      $monthName = date('F', mktime(0, 0, 0, $_GET['month'], 10));
      $variables['head_title'] = 'Agenda ' . ucfirst(t($monthName)) . ' ' . date('Y') . ' | Défenseur des Droits';
    } else {
      $variables['head_title'] = 'Agenda ' . ucfirst(t(date('M'))) . ' ' . date('Y') . ' | Défenseur des Droits';
    }
  }
  if(arg(0) == 'outils-list'){
    if(isset($_GET['month']) && isset($_GET['year'])){
      $monthName = date('F', mktime(0, 0, 0, $_GET['month'], 10));
      $variables['head_title'] = 'Outils - ' . ucfirst(t($monthName)) . ' ' . $_GET['year'] . ' | Défenseur des Droits';
    } else if(isset($_GET['tid'])){
      $term = taxonomy_term_load($_GET['tid']);
      $variables['head_title'] = 'Outils - ' . $term->name . ' | Défenseur des Droits';
    }
  }
}

/**
 * Override or insert variables into the node templates.
 *
 * @param $variables
 *   An array of variables to pass to the theme template.
 * @param $hook
 *   The name of the template being rendered ("node" in this case.)
 */
function soclelab_ddd_v2_preprocess_node(&$variables, $hook) {
  if($variables['type'] == 'article' || $variables['type'] == 'page' || $variables['type'] == 'publications'){
    $node = $variables['node'];
    $variables['theme_hook_suggestions'][] = 'node__' . $node->type . '__' . $variables['view_mode'];
  }
}

/**
 * Replacement theme callback for theme('breadcrumb').
 *
 * @param $variables
 * @return string|null
 *   Rendered breadcrumb HTML
 */
function soclelab_ddd_v2_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];

  $path = current_path();

  if (empty($breadcrumb)) {
    return NULL;
  }

  /**
   * Modification des fils d'ariane des filtres décisions et reglements par date
   */
  if($path == "actions/protection-des-droits-libertes/decision/date" ||
     $path == "actions/protection-des-droits-libertes/reglement-amiable/date") {
    unset($breadcrumb[2]);
    $breadcrumb = array_values($breadcrumb);
  }
  else if(drupal_match_path($path, 'office/*')) {
    unset($breadcrumb[0]);
    $breadcrumb = array_values($breadcrumb);
  }
  else if(drupal_match_path($path, 'search/site/*')) {
    unset($breadcrumb[1]);
    $breadcrumb = array_values($breadcrumb);
  }

  // These settings may be missing, if theme('breadcrumb') is called from
  // somewhere outside of Crumbs, or if another module is messing with the theme
  // registry.
  $variables += array(
    'crumbs_trailing_separator' => FALSE,
    'crumbs_separator' => ' &raquo; ',
    'crumbs_separator_span' => FALSE,
  );

  $separator = $variables['crumbs_separator'];
  if ($variables['crumbs_separator_span']) {
    $separator = '<span class="crumbs-separator">' . $separator . '</span>';
  }

  /* Début Ajout CAPGEMINI */
  $output = "";
  foreach ($breadcrumb as $key => $cur_bread) { // Parcour des élément du fil d'ariane
    if(!is_array($cur_bread)){  // Récupè uniquement les string
      if($key == 0){  // Ajout du lien Accueil
        global $language;
        if(isset($language->provider) && $language->provider != "locale-url"){ $cur_lang = ""; } else { $cur_lang = $language->language;}

        $output .= '<a href="' . ($cur_lang !== "" ? "/" . $cur_lang : "") . "/" . '" >' . t("Home") . '</a>' . $separator;
      }
      $output .= $cur_bread;
      if($key != count($breadcrumb) -2){ $output .= $separator; }
    }
  }
  /* Fin Ajout CAPGEMINI - Remplace les instruction suivante */
  // $output = implode($separator, $breadcrumb);
  /* Fin des instruction remplacées*/

  if ($variables['crumbs_trailing_separator']) {
    $output .= $separator;
  }

  $output = '<div class="breadcrumb">' . $output . '</div>';

  // Provide a navigational heading to give context for breadcrumb links to
  // screen-reader users. Make the heading invisible with .element-invisible.
  return $output;
}

function check_taxonomy_actualites($list, $tid){
  foreach($list as $l){
    if($l->tid == $tid){
      return TRUE;
      break;
    }
  }
  return FALSE;
}

function get_views_actualite($name, $display, $arg = ''){
  $view = views_get_view($name);
  $view->set_display($display);
  if(!empty($arg))
    $view->set_arguments(array($arg));
  $view->pre_execute();
  $view->execute();
  return $view;
}

function soclelab_ddd_v2_preprocess_taxonomy_term(&$variables) {
  global $language;
  $lang_name = $language->language;  
  
  $actus = taxonomy_get_children('1584');
  $parent = taxonomy_get_parents($variables['tid']);
  $parent = array_values($parent);
  $type_histoire = FALSE;
  if($variables['tid'] == '28' || $parent[0]->tid == '28'){
     $type_histoire = TRUE;
  }
  if(check_taxonomy_actualites($actus, $variables['tid'])){
    $children = taxonomy_get_children($variables['tid']);
    $menu[0]['path'] = url('taxonomy/term/' . $variables['tid']);
    $menu[0]['name'] = t('ALL');
    $menu[0]['active'] = TRUE;
    $i=1;
    foreach($children as $a){
      $menu[$i]['path'] = url('taxonomy/term/' . $a->tid);
      $menu[$i]['name'] = $a->name;
      $menu[$i]['active'] = FALSE;
      $i++;
    }
    $variables['menu'] = $menu;
    $variables['count'] = get_views_actualite('vue_actualites', 'block_actu_v2', $variables['tid'])->total_rows;

    if($type_histoire == TRUE){
      $variables['count'] = get_views_actualite('nodequeue_2', 'histoires_vecues', $variables['tid'])->total_rows;
      $variables['view_actualites'] = get_views_actualite('nodequeue_2', 'histoires_vecues', $variables['tid']);  
    } else {
      $variables['view_actualites'] = get_views_actualite('vue_actualites', 'block_actu_v2', $variables['tid']);
    }
  }
  if(check_taxonomy_actualites($actus, $parent[0]->tid)){
    $children = taxonomy_get_children($parent[0]->tid);
    $menu[0]['path'] = url('taxonomy/term/' . $parent[0]->tid);
    $menu[0]['name'] = t('All');
    $menu[0]['active'] = FALSE;
    $i=1;
    foreach($children as $a){
      $menu[$i]['path'] = url('taxonomy/term/' . $a->tid);
      $translate = i18n_taxonomy_localize_terms($a,$lang_name);
      $menu[$i]['name'] = $translate->name;
      if($variables['tid'] == $a->tid){
        $menu[$i]['active'] = TRUE;
      } else {
        $menu[$i]['active'] = FALSE;
      }
      $i++;
    }
    $variables['menu'] = $menu;
    $variables['count'] = get_views_actualite('vue_actualites', 'block_actu_v2', $variables['tid'])->total_rows;
    if($type_histoire == TRUE){
      $variables['count'] = get_views_actualite('nodequeue_2', 'histoires_vecues', $variables['tid'])->total_rows;
      $variables['view_actualites'] = get_views_actualite('nodequeue_2', 'histoires_vecues', $variables['tid']);
    } else {
      $variables['view_actualites'] = get_views_actualite('vue_actualites', 'block_actu_v2', $variables['tid']);
    }
  }
  if($variables['tid'] == '1584'){
    $filter = array('A la une', 'Agenda', 'Presse', 'Déclarations', 'Etudes et recherches');
    $menu = array();
    $menu[0]['path'] = url('taxonomy/term/1584');
    $menu[0]['name'] = t('All');
    $menu[0]['active'] = TRUE;
    $i=1;
    foreach($actus as $a){
      if(in_array($a->name, $filter)){
        $menu[$i]['path'] = url('taxonomy/term/' . $a->tid);
        $translate = i18n_taxonomy_localize_terms($a,$lang_name);
        $menu[$i]['name'] = $translate->name;
        $menu[$i]['active'] = FALSE;
        $i++;
      }
    }
    $variables['menu'] = $menu;
    $variables['count'] = get_views_actualite('vue_actualites', 'block_actu_full')->total_rows;
    $variables['view_actualites'] = get_views_actualite('vue_actualites', 'block_actu_full');
  }
}


  

function soclelab_ddd_v2_preprocess_page(&$variables){
  //dpm($variables);
  $node = menu_get_object();

  if(isset($node->type) && $node->type == 'accueil_v2'){
    $wrapper_node = entity_metadata_wrapper('node',$node);
    $image_bandeau = $wrapper_node->field_accueil_v2_bandeau->value();
    if(isset($image_bandeau)&&!empty($image_bandeau)){
      $url_image_bandeau = file_create_url($image_bandeau['uri']);
      $variables['url_image_bandeau'] = $url_image_bandeau;
    }
  }
  //dpm($node);
  if (isset($node->nid)){
    if($node->nid == '23426'){
      if(isset($_GET['title']) && isset($_GET['city']) && isset($_GET['name'])){
        $variables['title'] =  $_GET['title'] . ' - <span class="ville-delegue">' . $_GET['city'] . '</span><br />';
        $variables['title'] .= 'Contacter ' . $_GET['name'];
      }
    }
  }
  global $base_url;
  $language_list = language_list();
  $i=0;
  foreach($language_list as $list){
    $path[$i]['name'] = $list->language;
    $path[$i]['url'] = $base_url . $variables['base_path'] . $list->prefix . '/';
    $i++;
  }
  if(isset($variables['page']['content']['system_main']['no_content'])) {
    unset($variables['page']['content']['system_main']['no_content']);
  }
  $variables['menu_language'] = $path;
}

function soclelab_ddd_v2_site_map_menu_tree($variables) {
   return '<ul class="site-map-menu">' . $variables['tree'] . '</ul>';
}

function soclelab_ddd_v2_site_map_menu_link__menu_menu_utilitaire($variables) {

  $element = $variables['element'];
  $sub_menu = '';

  if (isset($element['#localized_options']['attributes']['id'])) {
    if (strpos($element['#localized_options']['attributes']['id'],"menu-lang-") !== false) {
      $lang_code = str_replace("menu-lang-", "", $element['#localized_options']['attributes']['id']);

      $element['#href'] = "/" . $lang_code;

      if (getCurLang() == $lang_code) {
        return "";
      }

      if (isset($element['#localized_options']['attributes']['title'])) {
        $output = "<a href=\"" . $element['#href'] . "\" id=\"" . $element['#localized_options']['attributes']['id'] . "\" title=\"" . $element['#localized_options']['attributes']['title'] . "\">" . $element['#title'] . "</a>";
      }
      else {
        $output = "<a href=\"" . $element['#href'] . "\" id=\"" . $element['#localized_options']['attributes']['id'] . "\">" . $element['#title'] . "</a>";
      }
      return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . "</li>\n";
    }
    else if (strpos($element['#localized_options']['attributes']['id'],"zoom-") !== false) {
      return "";
    }
  }


  if ($element['#below']) {
    // Prevent dropdown functions from being added to management menu so it
    // does not affect the navbar module.
    if (($element['#original_link']['menu_name'] == 'management') && (module_exists('navbar'))) {
      $sub_menu = drupal_render($element['#below']);
    }
    elseif (!empty($element['#original_link']['depth'])) {
      // Add our own wrapper.
      unset($element['#below']['#theme_wrappers']);
      $sub_menu = '<ul class="dropdown-menu">' . drupal_render($element['#below']) . '</ul>';
      // Generate as standard dropdown.
      $element['#title'] .= ' <span class="caret"></span>';
      $element['#attributes']['class'][] = 'dropdown';
      $element['#localized_options']['html'] = TRUE;

      // Set dropdown trigger element to # to prevent inadvertant page loading
      // when a submenu link is clicked.
      $element['#localized_options']['attributes']['data-target'] = '#';
      $element['#localized_options']['attributes']['class'][] = 'dropdown-toggle';
      $element['#localized_options']['attributes']['data-toggle'] = 'dropdown';
    }
  }

  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}


// Permet de gérer les langue dans le menu utilitaire
function soclelab_ddd_v2_menu_link__menu_menu_utilitaire($variables) {
  $element = $variables['element'];
  $sub_menu = '';

  if (isset($element['#localized_options']['attributes']['id'])) {
    if (strpos($element['#localized_options']['attributes']['id'],"menu-lang-") !== false) {
      $lang_code = str_replace("menu-lang-", "", $element['#localized_options']['attributes']['id']);

      $element['#href'] = "/" . $lang_code;

      if (getCurLang() == $lang_code) {
        return "";
      }

      if (isset($element['#localized_options']['attributes']['title'])) {
        $output = "<a href=\"" . $element['#href'] . "\" id=\"" . $element['#localized_options']['attributes']['id'] . "\" title=\"" . $element['#localized_options']['attributes']['title'] . "\">" . $element['#title'] . "</a>";
      }
      else {
        $output = "<a href=\"" . $element['#href'] . "\" id=\"" . $element['#localized_options']['attributes']['id'] . "\">" . $element['#title'] . "</a>";
      }
      return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . "</li>\n";
    }
  }


  if ($element['#below']) {
    // Prevent dropdown functions from being added to management menu so it
    // does not affect the navbar module.
    if (($element['#original_link']['menu_name'] == 'management') && (module_exists('navbar'))) {
      $sub_menu = drupal_render($element['#below']);
    }
    elseif (!empty($element['#original_link']['depth'])) {
      // Add our own wrapper.
      unset($element['#below']['#theme_wrappers']);
      $sub_menu = '<ul class="dropdown-menu">' . drupal_render($element['#below']) . '</ul>';
      // Generate as standard dropdown.
      $element['#title'] .= ' <span class="caret"></span>';
      $element['#attributes']['class'][] = 'dropdown';
      $element['#localized_options']['html'] = TRUE;

      // Set dropdown trigger element to # to prevent inadvertant page loading
      // when a submenu link is clicked.
      $element['#localized_options']['attributes']['data-target'] = '#';
      $element['#localized_options']['attributes']['class'][] = 'dropdown-toggle';
      $element['#localized_options']['attributes']['data-toggle'] = 'dropdown';
    }
  }
  // On primary navigation menu, class 'active' is not set on active menu item.
  // @see https://drupal.org/node/1896674
  if (($element['#href'] == $_GET['q'] || ($element['#href'] == '<front>' && drupal_is_front_page())) && (empty($element['#localized_options']['language']))) {
    $element['#attributes']['class'][] = 'active';
  }
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}

// Permet de faire les rendu des menus de niveau 2+
/*function soclelab_ddd_v2_menu_link__main_menu($variables) {
  $element = $variables['element'];
  $sub_menu = '';

  if ($element['#below']) {
    // Prevent dropdown functions from being added to management menu so it
    // does not affect the navbar module.
    if (($element['#original_link']['menu_name'] == 'management') && (module_exists('navbar'))) {
      $sub_menu = drupal_render($element['#below']);
    }
    elseif (!empty($element['#original_link']['depth'])) {
      // Add our own wrapper.
      unset($element['#below']['#theme_wrappers']);
      $sub_menu = '<ul class="dropdown-menu">' . drupal_render($element['#below']) . '</ul>';
      // Generate as standard dropdown.
      $element['#title'] .= ' <span class="caret"></span>';
      $element['#attributes']['class'][] = 'dropdown';
      $element['#localized_options']['html'] = TRUE;

      // Set dropdown trigger element to # to prevent inadvertant page loading
      // when a submenu link is clicked.
      $element['#localized_options']['attributes']['data-target'] = '#';
      $element['#localized_options']['attributes']['class'][] = 'dropdown-toggle';
      $element['#localized_options']['attributes']['data-toggle'] = 'dropdown';
    }
  }
  // On primary navigation menu, class 'active' is not set on active menu item.
  // @see https://drupal.org/node/1896674
  if (($element['#href'] == $_GET['q'] || ($element['#href'] == '<front>' && drupal_is_front_page())) && (empty($element['#localized_options']['language']))) {
    $element['#attributes']['class'][] = 'active';
  }
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}*/

// Permet de faire les rendu des menus de niveau 2+
/*function soclelab_ddd_v2_menu_link__main_menu_v2($variables) {
  $element = $variables['element'];
  $sub_menu = '';

  if ($element['#below']) {
    // Prevent dropdown functions from being added to management menu so it
    // does not affect the navbar module.
    if (($element['#original_link']['menu_name'] == 'management') && (module_exists('navbar'))) {
      $sub_menu = drupal_render($element['#below']);
    }
    elseif (!empty($element['#original_link']['depth'])) {
      // Add our own wrapper.
      unset($element['#below']['#theme_wrappers']);
      $sub_menu = '<ul class="dropdown-menu">' . drupal_render($element['#below']) . '</ul>';
      // Generate as standard dropdown.
      $element['#title'] .= ' <span class="caret"></span>';
      $element['#attributes']['class'][] = 'dropdown';
      $element['#localized_options']['html'] = TRUE;

      // Set dropdown trigger element to # to prevent inadvertant page loading
      // when a submenu link is clicked.
      $element['#localized_options']['attributes']['data-target'] = '#';
      $element['#localized_options']['attributes']['class'][] = 'dropdown-toggle';
      $element['#localized_options']['attributes']['data-toggle'] = 'dropdown';
    }
  }
  // On primary navigation menu, class 'active' is not set on active menu item.
  // @see https://drupal.org/node/1896674
  if (($element['#href'] == $_GET['q'] || ($element['#href'] == '<front>' && drupal_is_front_page())) && (empty($element['#localized_options']['language']))) {
    $element['#attributes']['class'][] = 'active';
  }
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}*/

// Permet de modifier la pagination native de drupal
// @see module ddd_pager
function soclelab_ddd_v2_preprocess_pager(&$vars, $hook) {
  /*if(!strcmp("taxonomy/term/65", current_path()))
    drupal_add_js(drupal_get_path('module', 'ddd_pager') . '/js/custom_pager.js');*/
}

/**
 * Implements hook_block_view_alter().
 */
function soclelab_ddd_v2_block_view_alter(&$data, $block) {
  if ($block->module == 'menu_block' && $block->delta == '1') {
    foreach($data['content']['#content'] as $key => &$val) {
      if(!empty($val['#below'])) {
        $val['#below']['#theme_wrappers'][0][4] = 'menu_tree__menu_block__1__level2';
        foreach($val['#below'] as $skey => &$sval) {
          if(!empty($sval['#below'])) {
            $sval['#below']['#theme_wrappers'][0][4] = 'menu_tree__menu_block__1__level2';
          }
        }
      }
    }
  }
}

function soclelab_ddd_v2_menu_tree__menu_block__1__level2($variables) {
  return '<ul class="sub-menu">' . $variables['tree'] . '</ul>';
}

/**
 * @see https://api.drupal.org/api/drupal/includes!menu.inc/function/theme_menu_link/7
 * @see special_menu_items_link(array $variables)
 */
function soclelab_ddd_v2_menu_link(array $variables) {
  $element = $variables['element'];
  $sub_menu = '';

  if ($element['#below']) {
    $sub_menu = drupal_render($element['#below']);
  }
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}

function soclelab_ddd_v2_status_messages($variables) {
   
  /*$display = $variables['display'];
  $output = '';

  $status_heading = array(
    'status' => t('Status message'),
    'error' => t('Error message'),
    'warning' => t('Warning message'),
    'info' => t('Informative message'),
  );

  // Map Drupal message types to their corresponding Bootstrap classes.
  // @see http://twitter.github.com/bootstrap/components.html#alerts
  $status_class = array(
    'status' => 'success',
    'error' => 'danger',
    'warning' => 'warning',
    // Not supported, but in theory a module could send any type of message.
    // @see drupal_set_message()
    // @see theme_status_messages()
    'info' => 'info',
  );

  // Retrieve messages.
  $message_list = drupal_get_messages($display);

  // Allow the disabled_messages module to filter the messages, if enabled.
  if (module_exists('disable_messages') && variable_get('disable_messages_enable', '1')) {
    $message_list = disable_messages_apply_filters($message_list);
  }

  foreach ($message_list as $type => $messages) {
    $class = (isset($status_class[$type])) ? ' alert-' . $status_class[$type] : '';
    $output .= "<div class=\"alert alert-block$class messages $type\">\n";
    $output .= "  <a class=\"close\" data-dismiss=\"alert\" href=\"#\" role=\"button\">&times;<span class=\"element-invisible\">Masquer le message d'erreur</span></a>\n";
    
    if (!empty($status_heading[$type])) {
      if($type == 'error'){
        $output .= '<h1 class="element-invisible">' . _bootstrap_filter_xss($status_heading[$type]) . "</h1>\n"; 
        drupal_set_title(t('Error on the form'));
      }else{
        $output .= '<h4 class="element-invisible">' . _bootstrap_filter_xss($status_heading[$type]) . "</h4>\n";        
      }

    }

    if (count($messages) > 1) {
      $output .= " <ul>\n";
      foreach ($messages as $message) {
        $output .= '  <li>' . _bootstrap_filter_xss($message) . "</li>\n";
      }
      $output .= " </ul>\n";
    }
    else {
      $output .= $messages[0];
    }

    $output .= "</div>\n";
  }
  return $output;*/
    $display = $variables['display'];
  $output = '';

  $status_heading = array(
    'status' => t('Status message'),
    'error' => t('Error message'),
    'warning' => t('Warning message'),
  );
  foreach (drupal_get_messages($display) as $type => $messages) {
    $output .= "<div class=\"messages $type\">\n";
    if (!empty($status_heading[$type])) {
      $output .= '<h2 class="element-invisible">' . $status_heading[$type] . "</h2>\n";
    }
    if (count($messages) > 1) {
      $output .= " <ul>\n";
      foreach ($messages as $message) {
        $output .= '  <li>' . $message . "</li>\n";
      }
      $output .= " </ul>\n";
    }
    else {
      $output .= reset($messages);
    }
    $output .= "</div>\n";
  }
  return $output;
}

function soclelab_ddd_v2_form_alter(&$form, &$form_state, $form_id){
  if($form_id == 'simplenews_block_form_1704'){
    $form['mail']['#title'] = t('Email (example: name@domain.com)');
  }
}
