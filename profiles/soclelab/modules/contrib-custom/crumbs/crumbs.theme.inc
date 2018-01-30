<?php

/**
 * Replacement theme callback for theme('breadcrumb').
 *
 * @param $variables
 * @return string|null
 *   Rendered breadcrumb HTML
 */
function crumbs_theme_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];

  if (empty($breadcrumb)) {
    return NULL;
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
  return '<h2 class="element-invisible">' . t('You are here') . '</h2>' . $output;
}

/**
 * Default theme implementation for theme('crumbs_breadcrumb_link').
 *
 * @param array $item
 *
 * @return string
 */
function theme_crumbs_breadcrumb_link(array $item) {
  if ('<nolink>' === $item['href']) {
    return check_plain($item['title']);
  }
  else {
    $options = isset($item['localized_options']) ? $item['localized_options'] : array();
    return l($item['title'], $item['href'], $options);
  }
}

/**
 * Default theme implementation for theme('crumbs_breadcrumb_current_page').
 *
 * @param array $variables
 *
 * @return string
 */
function theme_crumbs_breadcrumb_current_page(array $variables) {
  $item = $variables['item'];
  switch ($variables['show_current_page']) {
    case CRUMBS_SHOW_CURRENT_PAGE_SPAN:
      return '<span class="crumbs-current-page">' . check_plain($item['title']) . '</span>';
    case CRUMBS_SHOW_CURRENT_PAGE_LINK:
      $options = isset($item['localized_options']) ? $item['localized_options'] : array();
      return l($item['title'], $item['href'], $options);
    default:
      return check_plain($item['title']);
  }
}
