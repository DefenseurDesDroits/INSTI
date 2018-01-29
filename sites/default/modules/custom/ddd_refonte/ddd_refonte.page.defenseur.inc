<?php

function ddd_refonte_defenseur_page(){
  //$vars['test'] = variable_get('mailbody');
// global $base_url;
// $vars['img_url'] = $base_url ."/". drupal_get_path('theme', 'soclelab_ddd_v2') . '/img/content/defenseur/';
// drupal_add_js(drupal_get_path('module', 'ddd_refonte') . '/js/defenseur.js');

return theme("_theme_dd_defenseur_page",  array('vars' => $vars));
}
