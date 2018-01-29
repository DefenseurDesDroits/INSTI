<?php

function ddd_refonte_contact_page(){
  //$vars['test'] = variable_get('mailbody');

  for ($i=1; $i < 5 ; $i++) {
        $key1 = "body".$i;
        $key2 = "file".$i;
    $vars[$key1] = variable_get($key1);
    $vars[$key2] = get_file_url(variable_get($key2));
  }

  $vars['img_url'] = $base_url ."/". drupal_get_path('theme', 'soclelab_ddd_v2') . '/img/content';

 drupal_add_js(drupal_get_path('module', 'ddd_refonte') . '/js/contact.js');
 drupal_add_js(array('img_url' => $vars['img_url']) , 'setting');

return theme("_theme_ddd_refonte_page_contact",  array('vars' => $vars));
}
