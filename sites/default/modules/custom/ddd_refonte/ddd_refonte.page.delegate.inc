<?php
function ddd_refonte_delegate_page(){
  $vars['url'] = get_file_url(variable_get("urljson"));
  global $base_url;
  $vars['img_url'] = $base_url ."/". drupal_get_path('theme', 'soclelab_ddd_v2') . '/img/delegates';
  $vars['txt'] = t(variable_get('txt'));
  $argument = '';
  if(isset($_GET['cp'])){
    $argument = $_GET['cp'];
  }
  $trad = array(
    'tel' => t('Phone'),
    'permanence' => t('Permanence'),
    'contact' => t('Contact the delegate'),
  );
  drupal_add_js(drupal_get_path('module', 'ddd_refonte') . '/js/delegate.js');
  drupal_add_js(array('urljson' => $vars['url'], 'argument' => $argument, 'resultat' => array('name' => t(' Result(s) for '), 'categorie' => t('Delegate'))) , 'setting');
  drupal_add_js(array('img_url' => $vars['img_url']) , 'setting');
  drupal_add_js(array('traduction' => $trad) , 'setting');

return theme("_theme_ddd_recherche_page_delegate",  array('vars' => $vars));
}

// /var/www/html/droit/sites/default/files/delegates
