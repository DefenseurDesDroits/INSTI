<?php
function ddd_refonte_reponse_page(){

// drupal_add_js(drupal_get_path('module', 'ddd_refonte') . '/js/dossier.js');

return theme("_theme_dd_reponse_page",  array('vars' => $vars));
}
