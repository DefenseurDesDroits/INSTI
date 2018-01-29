<?php
function ddd_refonte_dossier_page(){

drupal_add_js(drupal_get_path('module', 'ddd_refonte') . '/js/dossier.js');

return theme("_theme_ddd_refonte_page_dossier",  array('vars' => $vars));
}
