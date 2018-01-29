<?php
/**
 * @file
 * ddd_fe_actions.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ddd_fe_actions_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: views_view
  $overrides["views_view.vue_taxonomy.display|default|display_options|access|perm"] = 'administer taxonomy';
  $overrides["views_view.vue_taxonomy.display|views_export_actions"] = unserialize('O:13:"views_display":7:{s:15:"display_options";a:9:{s:5:"query";a:2:{s:4:"type";s:11:"views_query";s:7:"options";a:2:{s:8:"distinct";b:1;s:13:"pure_distinct";b:1;}}s:8:"defaults";a:5:{s:5:"query";b:0;s:13:"relationships";b:0;s:6:"fields";b:0;s:13:"filter_groups";b:0;s:7:"filters";b:0;}s:5:"pager";a:2:{s:4:"type";s:4:"none";s:7:"options";a:1:{s:6:"offset";s:1:"0";}}s:12:"style_plugin";s:21:"views_data_export_csv";s:13:"style_options";a:7:{s:12:"provide_file";i:0;s:11:"parent_sort";i:0;s:5:"quote";i:1;s:4:"trim";i:0;s:16:"replace_newlines";i:0;s:6:"header";i:1;s:9:"keep_html";i:0;}s:13:"relationships";a:1:{s:6:"parent";a:3:{s:2:"id";s:6:"parent";s:5:"table";s:23:"taxonomy_term_hierarchy";s:5:"field";s:6:"parent";}}s:6:"fields";a:7:{s:4:"name";a:5:{s:2:"id";s:4:"name";s:5:"table";s:18:"taxonomy_term_data";s:5:"field";s:4:"name";s:5:"alter";a:2:{s:13:"word_boundary";b:0;s:8:"ellipsis";b:0;}s:19:"element_label_colon";b:0;}s:11:"description";a:7:{s:2:"id";s:11:"description";s:5:"table";s:18:"taxonomy_term_data";s:5:"field";s:11:"description";s:5:"label";s:11:"Description";s:5:"alter";a:1:{s:5:"nl2br";b:1;}s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;}s:18:"field_url_redirect";a:9:{s:2:"id";s:18:"field_url_redirect";s:5:"table";s:29:"field_data_field_url_redirect";s:5:"field";s:18:"field_url_redirect";s:5:"label";s:8:"Redirect";s:5:"alter";a:2:{s:15:"trim_whitespace";b:1;s:10:"strip_tags";b:1;}s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;s:17:"click_sort_column";s:3:"url";s:4:"type";s:10:"link_plain";}s:20:"field_taxo_affichage";a:8:{s:2:"id";s:20:"field_taxo_affichage";s:5:"table";s:31:"field_data_field_taxo_affichage";s:5:"field";s:20:"field_taxo_affichage";s:5:"label";s:9:"Affichage";s:5:"alter";a:2:{s:15:"trim_whitespace";b:1;s:10:"strip_tags";b:1;}s:19:"element_label_colon";b:0;s:23:"element_default_classes";b:0;s:4:"type";s:8:"list_key";}s:6:"name_1";a:7:{s:2:"id";s:6:"name_1";s:5:"table";s:18:"taxonomy_term_data";s:5:"field";s:4:"name";s:12:"relationship";s:6:"parent";s:5:"label";s:9:"NomParent";s:5:"alter";a:1:{s:10:"strip_tags";b:1;}s:19:"element_label_colon";b:0;}s:6:"weight";a:6:{s:2:"id";s:6:"weight";s:5:"table";s:18:"taxonomy_term_data";s:5:"field";s:6:"weight";s:5:"alter";a:2:{s:15:"trim_whitespace";b:1;s:10:"strip_tags";b:1;}s:19:"element_label_colon";b:0;s:9:"separator";s:0:"";}s:7:"nothing";a:5:{s:2:"id";s:7:"nothing";s:5:"table";s:5:"views";s:5:"field";s:7:"nothing";s:5:"label";s:5:"Alias";s:19:"element_label_colon";b:0;}}s:7:"filters";a:1:{s:12:"machine_name";a:4:{s:2:"id";s:12:"machine_name";s:5:"table";s:19:"taxonomy_vocabulary";s:5:"field";s:12:"machine_name";s:5:"value";a:1:{s:9:"v_actions";s:9:"v_actions";}}}s:4:"path";s:33:"admin/export/ddd_feed_actions.csv";}s:8:"db_table";s:13:"views_display";s:3:"vid";i:0;s:2:"id";s:20:"views_export_actions";s:13:"display_title";s:20:"EXP - Export Actions";s:14:"display_plugin";s:17:"views_data_export";s:8:"position";i:0;}');

 return $overrides;
}
