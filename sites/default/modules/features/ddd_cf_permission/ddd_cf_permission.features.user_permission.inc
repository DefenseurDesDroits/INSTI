<?php
/**
 * @file
 * ddd_cf_permission.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ddd_cf_permission_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer elysia_cron'.
  $permissions['administer elysia_cron'] = array(
    'name' => 'administer elysia_cron',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
    ),
    'module' => 'elysia_cron',
  );

  // Exported permission: 'administer feeds'.
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'administer menu attributes'.
  $permissions['administer menu attributes'] = array(
    'name' => 'administer menu attributes',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
    ),
    'module' => 'menu_attributes',
  );

  // Exported permission: 'administer sharethis'.
  $permissions['administer sharethis'] = array(
    'name' => 'administer sharethis',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
    ),
    'module' => 'sharethis',
  );

  // Exported permission: 'clear ddd_feed_tx_actions feeds'.
  $permissions['clear ddd_feed_tx_actions feeds'] = array(
    'name' => 'clear ddd_feed_tx_actions feeds',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear sl_feed_ct_article feeds'.
  $permissions['clear sl_feed_ct_article feeds'] = array(
    'name' => 'clear sl_feed_ct_article feeds',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear sl_feed_ct_event feeds'.
  $permissions['clear sl_feed_ct_event feeds'] = array(
    'name' => 'clear sl_feed_ct_event feeds',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear sl_feed_ct_faq feeds'.
  $permissions['clear sl_feed_ct_faq feeds'] = array(
    'name' => 'clear sl_feed_ct_faq feeds',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear sl_feed_ct_home feeds'.
  $permissions['clear sl_feed_ct_home feeds'] = array(
    'name' => 'clear sl_feed_ct_home feeds',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear sl_feed_ct_page feeds'.
  $permissions['clear sl_feed_ct_page feeds'] = array(
    'name' => 'clear sl_feed_ct_page feeds',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear sl_feed_tx_type feeds'.
  $permissions['clear sl_feed_tx_type feeds'] = array(
    'name' => 'clear sl_feed_tx_type feeds',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'create ct_decision content'.
  $permissions['create ct_decision content'] = array(
    'name' => 'create ct_decision content',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create ct_delegate content'.
  $permissions['create ct_delegate content'] = array(
    'name' => 'create ct_delegate content',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create ct_marche content'.
  $permissions['create ct_marche content'] = array(
    'name' => 'create ct_marche content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'developer' => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create ct_office content'.
  $permissions['create ct_office content'] = array(
    'name' => 'create ct_office content',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create ct_offre content'.
  $permissions['create ct_offre content'] = array(
    'name' => 'create ct_offre content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'developer' => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create ct_structure content'.
  $permissions['create ct_structure content'] = array(
    'name' => 'create ct_structure content',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'decision_import'.
  $permissions['decision_import'] = array(
    'name' => 'decision_import',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
    ),
    'module' => 'decision_import',
  );

  // Exported permission: 'delegate_import'.
  $permissions['delegate_import'] = array(
    'name' => 'delegate_import',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
    ),
    'module' => 'delegate_import',
  );

  // Exported permission: 'delete any ct_decision content'.
  $permissions['delete any ct_decision content'] = array(
    'name' => 'delete any ct_decision content',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ct_delegate content'.
  $permissions['delete any ct_delegate content'] = array(
    'name' => 'delete any ct_delegate content',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ct_marche content'.
  $permissions['delete any ct_marche content'] = array(
    'name' => 'delete any ct_marche content',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ct_office content'.
  $permissions['delete any ct_office content'] = array(
    'name' => 'delete any ct_office content',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ct_offre content'.
  $permissions['delete any ct_offre content'] = array(
    'name' => 'delete any ct_offre content',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any ct_structure content'.
  $permissions['delete any ct_structure content'] = array(
    'name' => 'delete any ct_structure content',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ct_decision content'.
  $permissions['delete own ct_decision content'] = array(
    'name' => 'delete own ct_decision content',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ct_delegate content'.
  $permissions['delete own ct_delegate content'] = array(
    'name' => 'delete own ct_delegate content',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ct_marche content'.
  $permissions['delete own ct_marche content'] = array(
    'name' => 'delete own ct_marche content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'developer' => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ct_office content'.
  $permissions['delete own ct_office content'] = array(
    'name' => 'delete own ct_office content',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ct_offre content'.
  $permissions['delete own ct_offre content'] = array(
    'name' => 'delete own ct_offre content',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own ct_structure content'.
  $permissions['delete own ct_structure content'] = array(
    'name' => 'delete own ct_structure content',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in autoriter'.
  $permissions['delete terms in autoriter'] = array(
    'name' => 'delete terms in autoriter',
    'roles' => array(
      'developer' => 'developer',
      'taxonomy contributor' => 'taxonomy contributor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in v_actions'.
  $permissions['delete terms in v_actions'] = array(
    'name' => 'delete terms in v_actions',
    'roles' => array(
      'developer' => 'developer',
      'taxonomy contributor' => 'taxonomy contributor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in v_keyword'.
  $permissions['delete terms in v_keyword'] = array(
    'name' => 'delete terms in v_keyword',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
      'taxonomy contributor' => 'taxonomy contributor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any ct_decision content'.
  $permissions['edit any ct_decision content'] = array(
    'name' => 'edit any ct_decision content',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ct_delegate content'.
  $permissions['edit any ct_delegate content'] = array(
    'name' => 'edit any ct_delegate content',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ct_marche content'.
  $permissions['edit any ct_marche content'] = array(
    'name' => 'edit any ct_marche content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'developer' => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ct_office content'.
  $permissions['edit any ct_office content'] = array(
    'name' => 'edit any ct_office content',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ct_offre content'.
  $permissions['edit any ct_offre content'] = array(
    'name' => 'edit any ct_offre content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'developer' => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any ct_structure content'.
  $permissions['edit any ct_structure content'] = array(
    'name' => 'edit any ct_structure content',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ct_decision content'.
  $permissions['edit own ct_decision content'] = array(
    'name' => 'edit own ct_decision content',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ct_delegate content'.
  $permissions['edit own ct_delegate content'] = array(
    'name' => 'edit own ct_delegate content',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ct_marche content'.
  $permissions['edit own ct_marche content'] = array(
    'name' => 'edit own ct_marche content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'developer' => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ct_office content'.
  $permissions['edit own ct_office content'] = array(
    'name' => 'edit own ct_office content',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ct_offre content'.
  $permissions['edit own ct_offre content'] = array(
    'name' => 'edit own ct_offre content',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'developer' => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own ct_structure content'.
  $permissions['edit own ct_structure content'] = array(
    'name' => 'edit own ct_structure content',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in autoriter'.
  $permissions['edit terms in autoriter'] = array(
    'name' => 'edit terms in autoriter',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
      'taxonomy contributor' => 'taxonomy contributor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in v_actions'.
  $permissions['edit terms in v_actions'] = array(
    'name' => 'edit terms in v_actions',
    'roles' => array(
      'developer' => 'developer',
      'taxonomy contributor' => 'taxonomy contributor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in v_keyword'.
  $permissions['edit terms in v_keyword'] = array(
    'name' => 'edit terms in v_keyword',
    'roles' => array(
      'administrator' => 'administrator',
      'contributor' => 'contributor',
      'developer' => 'developer',
      'taxonomy contributor' => 'taxonomy contributor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'import ddd_feed_tx_actions feeds'.
  $permissions['import ddd_feed_tx_actions feeds'] = array(
    'name' => 'import ddd_feed_tx_actions feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import sl_feed_ct_article feeds'.
  $permissions['import sl_feed_ct_article feeds'] = array(
    'name' => 'import sl_feed_ct_article feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import sl_feed_ct_event feeds'.
  $permissions['import sl_feed_ct_event feeds'] = array(
    'name' => 'import sl_feed_ct_event feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import sl_feed_ct_faq feeds'.
  $permissions['import sl_feed_ct_faq feeds'] = array(
    'name' => 'import sl_feed_ct_faq feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import sl_feed_ct_home feeds'.
  $permissions['import sl_feed_ct_home feeds'] = array(
    'name' => 'import sl_feed_ct_home feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import sl_feed_ct_page feeds'.
  $permissions['import sl_feed_ct_page feeds'] = array(
    'name' => 'import sl_feed_ct_page feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import sl_feed_tx_type feeds'.
  $permissions['import sl_feed_tx_type feeds'] = array(
    'name' => 'import sl_feed_tx_type feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'submit latitude/longitude'.
  $permissions['submit latitude/longitude'] = array(
    'name' => 'submit latitude/longitude',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'location',
  );

  // Exported permission: 'unlock ddd_feed_tx_actions feeds'.
  $permissions['unlock ddd_feed_tx_actions feeds'] = array(
    'name' => 'unlock ddd_feed_tx_actions feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock sl_feed_ct_article feeds'.
  $permissions['unlock sl_feed_ct_article feeds'] = array(
    'name' => 'unlock sl_feed_ct_article feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock sl_feed_ct_event feeds'.
  $permissions['unlock sl_feed_ct_event feeds'] = array(
    'name' => 'unlock sl_feed_ct_event feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock sl_feed_ct_faq feeds'.
  $permissions['unlock sl_feed_ct_faq feeds'] = array(
    'name' => 'unlock sl_feed_ct_faq feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock sl_feed_ct_home feeds'.
  $permissions['unlock sl_feed_ct_home feeds'] = array(
    'name' => 'unlock sl_feed_ct_home feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock sl_feed_ct_page feeds'.
  $permissions['unlock sl_feed_ct_page feeds'] = array(
    'name' => 'unlock sl_feed_ct_page feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock sl_feed_tx_type feeds'.
  $permissions['unlock sl_feed_tx_type feeds'] = array(
    'name' => 'unlock sl_feed_tx_type feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'view location directory'.
  $permissions['view location directory'] = array(
    'name' => 'view location directory',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'location',
  );

  // Exported permission: 'view node location table'.
  $permissions['view node location table'] = array(
    'name' => 'view node location table',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'location',
  );

  // Exported permission: 'view node map'.
  $permissions['view node map'] = array(
    'name' => 'view node map',
    'roles' => array(
      'administrator' => 'administrator',
      'developer' => 'developer',
    ),
    'module' => 'gmap_location',
  );

  // Exported permission: 'view user location details'.
  $permissions['view user location details'] = array(
    'name' => 'view user location details',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'gmap_location',
  );

  // Exported permission: 'view user location table'.
  $permissions['view user location table'] = array(
    'name' => 'view user location table',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'location',
  );

  // Exported permission: 'view user map'.
  $permissions['view user map'] = array(
    'name' => 'view user map',
    'roles' => array(
      'developer' => 'developer',
    ),
    'module' => 'gmap_location',
  );

  return $permissions;
}
