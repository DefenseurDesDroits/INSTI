<?php

/**
 * @file
 * template.php
 */


/**
 * Replacement theme callback for theme('breadcrumb').
 *
 * @param $variables
 * @return string|null
 *   Rendered breadcrumb HTML
 */
function soclelab_ddd_breadcrumb($variables) {
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

        $output .= '<a href="' . ($cur_lang !== "" ? "/" . $cur_lang : "") . "/" . '" title="' . t("Display the homepage") . '" >' . t("Home") . '</a>' . $separator;
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



function soclelab_ddd_site_map_menu_tree($variables) {
   return '<ul class="site-map-menu">' . $variables['tree'] . '</ul>';
}

function soclelab_ddd_site_map_menu_link__menu_menu_utilitaire($variables) {

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
function soclelab_ddd_menu_link__menu_menu_utilitaire($variables) {
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
function soclelab_ddd_menu_link__main_menu($variables) {
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
}

// Permet de modifier la pagination native de drupal
// @see module ddd_pager
function soclelab_ddd_preprocess_pager(&$vars, $hook) {
  if(!strcmp("taxonomy/term/65", current_path()))
    drupal_add_js(drupal_get_path('module', 'ddd_pager') . '/js/custom_pager.js');
}

?>
