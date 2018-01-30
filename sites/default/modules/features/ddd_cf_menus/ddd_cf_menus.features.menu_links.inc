<?php
/**
 * @file
 * ddd_cf_menus.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ddd_cf_menus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_accueil:<front>.
  $menu_links['main-menu_accueil:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Accueil',
    'options' => array(
      'identifier' => 'main-menu_accueil:<front>',
      'alter' => TRUE,
      'attributes' => array(
        'title' => 'Afficher la page Accueil',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_des-dlgus-dans-toute-la-france:node/2185.
  $menu_links['main-menu_des-dlgus-dans-toute-la-france:node/2185'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2185',
    'router_path' => 'node/%',
    'link_title' => 'Des délégués dans toute la France',
    'options' => array(
      'identifier' => 'main-menu_des-dlgus-dans-toute-la-france:node/2185',
      'alter' => TRUE,
      'attributes' => array(
        'title' => 'Aller à la page Des délégués dans toute la France',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_qui-sommes-nous-:<front>',
  );
  // Exported menu link: main-menu_faire-connatre-vos-droits:node/5400.
  $menu_links['main-menu_faire-connatre-vos-droits:node/5400'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/5400',
    'router_path' => 'node/%',
    'link_title' => 'Faire connaître vos droits',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => 'Se rendre à la page Promotion de l\'égalité et de l\'accès aux droits',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_faire-connatre-vos-droits:node/5400',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_nos-actions:<front>',
  );
  // Exported menu link: main-menu_le-dfenseur-fait-connatre-les-droits-de-chacun-il-dfend-:<nolink>.
  $menu_links['main-menu_le-dfenseur-fait-connatre-les-droits-de-chacun-il-dfend-:<nolink>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Le Défenseur fait connaître les droits de chacun. Il défend :',
    'options' => array(
      'identifier' => 'main-menu_le-dfenseur-fait-connatre-les-droits-de-chacun-il-dfend-:<nolink>',
      'alter' => TRUE,
      'attributes' => array(
        'style' => 'width: 500px;',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_nos-missions:<front>',
  );
  // Exported menu link: main-menu_les-enfants-dont-les-droits-ne-sont-pas-respects:node/2141.
  $menu_links['main-menu_les-enfants-dont-les-droits-ne-sont-pas-respects:node/2141'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2141',
    'router_path' => 'node/%',
    'link_title' => 'Les enfants dont les droits ne sont pas respectés',
    'options' => array(
      'identifier' => 'main-menu_les-enfants-dont-les-droits-ne-sont-pas-respects:node/2141',
      'alter' => TRUE,
      'attributes' => array(
        'title' => 'Aller à la page Défense des droits de l\'enfant',
        'style' => 'width: 500px;',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_le-dfenseur-fait-connatre-les-droits-de-chacun-il-dfend-:<nolink>',
  );
  // Exported menu link: main-menu_les-personnes-discrimines:node/2142.
  $menu_links['main-menu_les-personnes-discrimines:node/2142'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2142',
    'router_path' => 'node/%',
    'link_title' => 'Les personnes discriminées',
    'options' => array(
      'identifier' => 'main-menu_les-personnes-discrimines:node/2142',
      'alter' => TRUE,
      'attributes' => array(
        'title' => 'Aller à la page Les personnes discriminées',
        'style' => 'width: 500px;',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_le-dfenseur-fait-connatre-les-droits-de-chacun-il-dfend-:<nolink>',
  );
  // Exported menu link: main-menu_les-personnes-qui-ont-des-difficults-dans-leurs-relations-avec-les-services-publics:node/2140.
  $menu_links['main-menu_les-personnes-qui-ont-des-difficults-dans-leurs-relations-avec-les-services-publics:node/2140'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2140',
    'router_path' => 'node/%',
    'link_title' => 'Les personnes qui ont des difficultés dans leurs relations avec les services publics',
    'options' => array(
      'identifier' => 'main-menu_les-personnes-qui-ont-des-difficults-dans-leurs-relations-avec-les-services-publics:node/2140',
      'alter' => TRUE,
      'attributes' => array(
        'title' => 'Aller à la page Droits des usagers des services publics',
        'style' => 'width: 500px;',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_le-dfenseur-fait-connatre-les-droits-de-chacun-il-dfend-:<nolink>',
  );
  // Exported menu link: main-menu_les-personnes-qui-ont-un-problme-avec-les-forces-de-scurit-publique-ou-prive:node/2143.
  $menu_links['main-menu_les-personnes-qui-ont-un-problme-avec-les-forces-de-scurit-publique-ou-prive:node/2143'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2143',
    'router_path' => 'node/%',
    'link_title' => 'Les personnes qui ont un problème avec les forces de sécurité publique ou privée',
    'options' => array(
      'identifier' => 'main-menu_les-personnes-qui-ont-un-problme-avec-les-forces-de-scurit-publique-ou-prive:node/2143',
      'alter' => TRUE,
      'attributes' => array(
        'title' => 'Aller à la page Les personnes qui ont un problème avec les forces de sécurité publique ou privée',
        'style' => 'width: 500px;',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_le-dfenseur-fait-connatre-les-droits-de-chacun-il-dfend-:<nolink>',
  );
  // Exported menu link: main-menu_modules-de-learning:node/5603.
  $menu_links['main-menu_modules-de-learning:node/5603'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/5603',
    'router_path' => 'node/%',
    'link_title' => 'Modules d\'e-learning',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_modules-de-learning:node/5603',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_nos-outils:<nolink>',
  );
  // Exported menu link: main-menu_nos-actions:<front>.
  $menu_links['main-menu_nos-actions:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Nos actions',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_nos-actions:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_nos-missions:<front>.
  $menu_links['main-menu_nos-missions:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Nos missions',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_nos-missions:<front>',
      'attributes' => array(
        'title' => 'Aller à la rubrique Vos droits',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_nos-outils:<nolink>.
  $menu_links['main-menu_nos-outils:<nolink>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Nos outils',
    'options' => array(
      'identifier' => 'main-menu_nos-outils:<nolink>',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_publications-et-outils:publications',
  );
  // Exported menu link: main-menu_nos-partenaires:node/5242.
  $menu_links['main-menu_nos-partenaires:node/5242'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/5242',
    'router_path' => 'node/%',
    'link_title' => 'Nos partenaires',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => 'Aller sur la page Nos Partenaires',
        'style' => 'padding-top: 30px;',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_nos-partenaires:node/5242',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_qui-sommes-nous-:<front>',
  );
  // Exported menu link: main-menu_publications-et-outils:publications.
  $menu_links['main-menu_publications-et-outils:publications'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'publications',
    'router_path' => 'publications',
    'link_title' => 'Publications et outils',
    'options' => array(
      'identifier' => 'main-menu_publications-et-outils:publications',
      'alter' => TRUE,
      'attributes' => array(
        'title' => 'Aller à la rubrique Publications et outils',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -45,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_qui-sommes-nous-:<front>.
  $menu_links['main-menu_qui-sommes-nous-:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Qui sommes-nous ?',
    'options' => array(
      'identifier' => 'main-menu_qui-sommes-nous-:<front>',
      'attributes' => array(
        'title' => 'Aller à la rubrique Qui sommes-nous ?',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_rapports-annuels-dactivit:taxonomy/term/4.
  $menu_links['main-menu_rapports-annuels-dactivit:taxonomy/term/4'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/4',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Rapports annuels d\'activité',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_rapports-annuels-dactivit:taxonomy/term/4',
      'attributes' => array(
        'title' => 'Aller à la page Rapports annuels d\'activité',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_rapports:<nolink>',
  );
  // Exported menu link: main-menu_rapports-annuels-droits-de-lenfant:taxonomy/term/6.
  $menu_links['main-menu_rapports-annuels-droits-de-lenfant:taxonomy/term/6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/6',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Rapports annuels droits de l\'enfant',
    'options' => array(
      'identifier' => 'main-menu_rapports-annuels-droits-de-lenfant:taxonomy/term/6',
      'alter' => TRUE,
      'attributes' => array(
        'title' => 'Aller à la page Rapports annuels droit de l\'enfant',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_rapports:<nolink>',
  );
  // Exported menu link: main-menu_rapports-jeunes-ambassadeurs-des-droits-auprs-des-enfants:publications/rapports-jeunes-ambassadeurs-des-droits-aupres-des-enfants.
  $menu_links['main-menu_rapports-jeunes-ambassadeurs-des-droits-auprs-des-enfants:publications/rapports-jeunes-ambassadeurs-des-droits-aupres-des-enfants'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'publications/rapports-jeunes-ambassadeurs-des-droits-aupres-des-enfants',
    'router_path' => 'publications',
    'link_title' => 'Rapports Jeunes Ambassadeurs des Droits auprès des Enfants',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'main-menu_rapports-jeunes-ambassadeurs-des-droits-auprs-des-enfants:publications/rapports-jeunes-ambassadeurs-des-droits-aupres-des-enfants',
      'attributes' => array(
        'title' => 'Aller à la page Rapports Jeunes Ambassadeurs des Droits auprès des Enfants',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_rapports:<nolink>',
  );
  // Exported menu link: main-menu_rapports-thmatiques:taxonomy/term/46.
  $menu_links['main-menu_rapports-thmatiques:taxonomy/term/46'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/46',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Rapports thématiques',
    'options' => array(
      'identifier' => 'main-menu_rapports-thmatiques:taxonomy/term/46',
      'attributes' => array(
        'title' => 'Aller à la page Rapports thématiques',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_rapports:<nolink>',
  );
  // Exported menu link: main-menu_rapports:<nolink>.
  $menu_links['main-menu_rapports:<nolink>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Rapports',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_rapports:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_publications-et-outils:publications',
  );
  // Exported menu link: main-menu_recherche:search/site.
  $menu_links['main-menu_recherche:search/site'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'search/site',
    'router_path' => 'search',
    'link_title' => 'Recherche',
    'options' => array(
      'identifier' => 'main-menu_recherche:search/site',
      'attributes' => array(
        'title' => 'Rechercher',
        'id' => 'search-button',
        'class' => array(
          0 => 'link-search',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_traiter-vos-demandes:node/5399.
  $menu_links['main-menu_traiter-vos-demandes:node/5399'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/5399',
    'router_path' => 'node/%',
    'link_title' => 'Traiter vos demandes',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => 'Se rendre à la page Traitement des demandes adressées au Défenseur',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_traiter-vos-demandes:node/5399',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_nos-actions:<front>',
  );
  // Exported menu link: main-menu_un-acteur-international:node/5233.
  $menu_links['main-menu_un-acteur-international:node/5233'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/5233',
    'router_path' => 'node/%',
    'link_title' => 'Un acteur international',
    'options' => array(
      'identifier' => 'main-menu_un-acteur-international:node/5233',
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_qui-sommes-nous-:<front>',
  );
  // Exported menu link: main-menu_une-institution-indpendante:node/1604.
  $menu_links['main-menu_une-institution-indpendante:node/1604'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1604',
    'router_path' => 'node/%',
    'link_title' => 'Une institution indépendante',
    'options' => array(
      'identifier' => 'main-menu_une-institution-indpendante:node/1604',
      'alter' => TRUE,
      'attributes' => array(
        'title' => 'Aller à la page Une institution indépendante',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_qui-sommes-nous-:<front>',
  );
  // Exported menu link: main-menu_une-quipe-de-spcialistes:node/1602.
  $menu_links['main-menu_une-quipe-de-spcialistes:node/1602'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1602',
    'router_path' => 'node/%',
    'link_title' => 'Une équipe de spécialistes',
    'options' => array(
      'identifier' => 'main-menu_une-quipe-de-spcialistes:node/1602',
      'alter' => TRUE,
      'attributes' => array(
        'title' => 'Aller à la page Une équipe de spécialites',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'main-menu_qui-sommes-nous-:<front>',
  );
  // Exported menu link: menu-footer-en_accessibility:node/2172.
  $menu_links['menu-footer-en_accessibility:node/2172'] = array(
    'menu_name' => 'menu-footer-en',
    'link_path' => 'node/2172',
    'router_path' => 'node/%',
    'link_title' => 'Accessibility',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-footer-en_accessibility:node/2172',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer-en_faq:node/2173.
  $menu_links['menu-footer-en_faq:node/2173'] = array(
    'menu_name' => 'menu-footer-en',
    'link_path' => 'node/2173',
    'router_path' => 'node/%',
    'link_title' => 'FAQ',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-footer-en_faq:node/2173',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer-en_legal-notices:node/2170.
  $menu_links['menu-footer-en_legal-notices:node/2170'] = array(
    'menu_name' => 'menu-footer-en',
    'link_path' => 'node/2170',
    'router_path' => 'node/%',
    'link_title' => 'Legal notices',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-footer-en_legal-notices:node/2170',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer-en_sitemap:sitemap.
  $menu_links['menu-footer-en_sitemap:sitemap'] = array(
    'menu_name' => 'menu-footer-en',
    'link_path' => 'sitemap',
    'router_path' => 'sitemap',
    'link_title' => 'Sitemap',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-footer-en_sitemap:sitemap',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer-menu-decision-en_defense-of-childrens-rights:taxonomy/term/64.
  $menu_links['menu-footer-menu-decision-en_defense-of-childrens-rights:taxonomy/term/64'] = array(
    'menu_name' => 'menu-footer-menu-decision-en',
    'link_path' => 'taxonomy/term/64',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Defense of children\'s rights',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu-decision-en_defense-of-childrens-rights:taxonomy/term/64',
      'attributes' => array(
        'title' => 'Display the page Defense of children\'s rights',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer-menu-decision-en_fight-against-discrimination:taxonomy/term/65.
  $menu_links['menu-footer-menu-decision-en_fight-against-discrimination:taxonomy/term/65'] = array(
    'menu_name' => 'menu-footer-menu-decision-en',
    'link_path' => 'taxonomy/term/65',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Fight against discrimination',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu-decision-en_fight-against-discrimination:taxonomy/term/65',
      'attributes' => array(
        'title' => 'Display the page Fight against discrimination',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer-menu-decision-en_professional-ethics-of-the-safety:taxonomy/term/66.
  $menu_links['menu-footer-menu-decision-en_professional-ethics-of-the-safety:taxonomy/term/66'] = array(
    'menu_name' => 'menu-footer-menu-decision-en',
    'link_path' => 'taxonomy/term/66',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Professional ethics of the safety',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu-decision-en_professional-ethics-of-the-safety:taxonomy/term/66',
      'attributes' => array(
        'title' => 'Display the page Professional ethics of the safety',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer-menu-decision-en_rights-of-the-users-of-public-services:taxonomy/term/63.
  $menu_links['menu-footer-menu-decision-en_rights-of-the-users-of-public-services:taxonomy/term/63'] = array(
    'menu_name' => 'menu-footer-menu-decision-en',
    'link_path' => 'taxonomy/term/63',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Rights of the users of public services',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-footer-menu-decision-en_rights-of-the-users-of-public-services:taxonomy/term/63',
      'attributes' => array(
        'title' => 'Display the page Rights of the users of public services',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer-menu-decisions_dfense-des-droits-de-lenfant:actions/protection-des-droits-libertes/decision.
  $menu_links['menu-footer-menu-decisions_dfense-des-droits-de-lenfant:actions/protection-des-droits-libertes/decision'] = array(
    'menu_name' => 'menu-footer-menu-decisions',
    'link_path' => 'actions/protection-des-droits-libertes/decision',
    'router_path' => 'actions/protection-des-droits-libertes/decision',
    'link_title' => 'Défense des droits de l\'enfant',
    'options' => array(
      'identifier' => 'menu-footer-menu-decisions_dfense-des-droits-de-lenfant:actions/protection-des-droits-libertes/decision',
      'query' => array(
        'theme_id' => 64,
      ),
      'attributes' => array(
        'title' => 'Aller à la page Décisions Défense des droits de l\'enfant',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer-menu-decisions_dontologie-de-la-scurit:actions/protection-des-droits-libertes/decision.
  $menu_links['menu-footer-menu-decisions_dontologie-de-la-scurit:actions/protection-des-droits-libertes/decision'] = array(
    'menu_name' => 'menu-footer-menu-decisions',
    'link_path' => 'actions/protection-des-droits-libertes/decision',
    'router_path' => 'actions/protection-des-droits-libertes/decision',
    'link_title' => 'Déontologie de la sécurité',
    'options' => array(
      'identifier' => 'menu-footer-menu-decisions_dontologie-de-la-scurit:actions/protection-des-droits-libertes/decision',
      'query' => array(
        'theme_id' => 66,
      ),
      'attributes' => array(
        'title' => 'Aller à la page Décisions Déontologie de la sécurité',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer-menu-decisions_droit-des-usagers-des-services-publics:actions/protection-des-droits-libertes/decision.
  $menu_links['menu-footer-menu-decisions_droit-des-usagers-des-services-publics:actions/protection-des-droits-libertes/decision'] = array(
    'menu_name' => 'menu-footer-menu-decisions',
    'link_path' => 'actions/protection-des-droits-libertes/decision',
    'router_path' => 'actions/protection-des-droits-libertes/decision',
    'link_title' => 'Droit des usagers des services publics',
    'options' => array(
      'identifier' => 'menu-footer-menu-decisions_droit-des-usagers-des-services-publics:actions/protection-des-droits-libertes/decision',
      'query' => array(
        'theme_id' => 63,
      ),
      'attributes' => array(
        'title' => 'Aller à la page Décisions Droits des usagers des services publics',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer-menu-decisions_lutte-contre-les-discriminations:actions/protection-des-droits-libertes/decision.
  $menu_links['menu-footer-menu-decisions_lutte-contre-les-discriminations:actions/protection-des-droits-libertes/decision'] = array(
    'menu_name' => 'menu-footer-menu-decisions',
    'link_path' => 'actions/protection-des-droits-libertes/decision',
    'router_path' => 'actions/protection-des-droits-libertes/decision',
    'link_title' => 'Lutte contre les discriminations',
    'options' => array(
      'identifier' => 'menu-footer-menu-decisions_lutte-contre-les-discriminations:actions/protection-des-droits-libertes/decision',
      'query' => array(
        'theme_id' => 65,
      ),
      'attributes' => array(
        'title' => 'Aller à la page Décisions Lutte contre les discriminations',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer-qr-en_can-a-teenager-go-to-jail-:node/2175.
  $menu_links['menu-footer-qr-en_can-a-teenager-go-to-jail-:node/2175'] = array(
    'menu_name' => 'menu-footer-qr-en',
    'link_path' => 'node/2175',
    'router_path' => 'node/%',
    'link_title' => 'Can a teenager go to jail ?',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-footer-qr-en_can-a-teenager-go-to-jail-:node/2175',
      'attributes' => array(
        'title' => 'Read the answer',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer-qr-en_can-i-refer-a-case-to-the-defender-of-rights-to-report-the-violation-of-the-rights-of-a-person-of-my-acquaintance-:node/2174.
  $menu_links['menu-footer-qr-en_can-i-refer-a-case-to-the-defender-of-rights-to-report-the-violation-of-the-rights-of-a-person-of-my-acquaintance-:node/2174'] = array(
    'menu_name' => 'menu-footer-qr-en',
    'link_path' => 'node/2174',
    'router_path' => 'node/%',
    'link_title' => 'Can I refer a case to the Defender of Rights to report the violation of the rights of a person of my acquaintance ?',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-footer-qr-en_can-i-refer-a-case-to-the-defender-of-rights-to-report-the-violation-of-the-rights-of-a-person-of-my-acquaintance-:node/2174',
      'attributes' => array(
        'title' => 'Read the answer',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer-qr_je-suis-dorigine-maghrbine-un-restaurant--moiti-vide-me-refuse-une-table-est-ce-une-discrimination-:node/1614.
  $menu_links['menu-footer-qr_je-suis-dorigine-maghrbine-un-restaurant--moiti-vide-me-refuse-une-table-est-ce-une-discrimination-:node/1614'] = array(
    'menu_name' => 'menu-footer-qr',
    'link_path' => 'node/1614',
    'router_path' => 'node/%',
    'link_title' => 'Je suis d’origine maghrébine, un restaurant à moitié vide me refuse une table. Est-ce une discrimination ?',
    'options' => array(
      'identifier' => 'menu-footer-qr_je-suis-dorigine-maghrbine-un-restaurant--moiti-vide-me-refuse-une-table-est-ce-une-discrimination-:node/1614',
      'attributes' => array(
        'title' => 'Lire la réponse',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer-qr_puis-je-saisir-le-dfenseur-des-droits-pour-signaler-la-violation-des-droits-dune-personne-de-ma-connaissance-:node/29.
  $menu_links['menu-footer-qr_puis-je-saisir-le-dfenseur-des-droits-pour-signaler-la-violation-des-droits-dune-personne-de-ma-connaissance-:node/29'] = array(
    'menu_name' => 'menu-footer-qr',
    'link_path' => 'node/29',
    'router_path' => 'node/%',
    'link_title' => 'Puis-je saisir le Défenseur des droits pour signaler la violation des droits d’une personne de ma connaissance ?',
    'options' => array(
      'identifier' => 'menu-footer-qr_puis-je-saisir-le-dfenseur-des-droits-pour-signaler-la-violation-des-droits-dune-personne-de-ma-connaissance-:node/29',
      'attributes' => array(
        'title' => 'Lire la réponse',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer_accessibilit:node/16.
  $menu_links['menu-footer_accessibilit:node/16'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => 'node/16',
    'router_path' => 'node/%',
    'link_title' => 'Accessibilité',
    'options' => array(
      'identifier' => 'menu-footer_accessibilit:node/16',
      'attributes' => array(
        'title' => 'Aller à la page Accessibilité',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer_aide:node/1.
  $menu_links['menu-footer_aide:node/1'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Aide',
    'options' => array(
      'identifier' => 'menu-footer_aide:node/1',
      'attributes' => array(
        'title' => 'Aller à la page Aide',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer_lettre-dinformation:actions/promotion-de-legalite-et-de-lacces-aux-droits/actions-de-communication.
  $menu_links['menu-footer_lettre-dinformation:actions/promotion-de-legalite-et-de-lacces-aux-droits/actions-de-communication'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => 'actions/promotion-de-legalite-et-de-lacces-aux-droits/actions-de-communication',
    'router_path' => 'actions',
    'link_title' => 'Lettre d\'information',
    'options' => array(
      'alter' => TRUE,
      'fragment' => 'LettresInfo',
      'attributes' => array(
        'title' => 'Aller à la page Lettre d\'information',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-footer_lettre-dinformation:actions/promotion-de-legalite-et-de-lacces-aux-droits/actions-de-communication',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer_marchs-publics:marches-publics.
  $menu_links['menu-footer_marchs-publics:marches-publics'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => 'marches-publics',
    'router_path' => 'marches-publics',
    'link_title' => 'Marchés publics',
    'options' => array(
      'identifier' => 'menu-footer_marchs-publics:marches-publics',
      'attributes' => array(
        'title' => 'Aller à la page Marchés publics',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer_mentions-lgales:node/17.
  $menu_links['menu-footer_mentions-lgales:node/17'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => 'node/17',
    'router_path' => 'node/%',
    'link_title' => 'Mentions légales',
    'options' => array(
      'identifier' => 'menu-footer_mentions-lgales:node/17',
      'attributes' => array(
        'title' => 'Aller à la page Mentions légales',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer_offres-de-stage:offres-stage.
  $menu_links['menu-footer_offres-de-stage:offres-stage'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => 'offres-stage',
    'router_path' => 'offres-stage',
    'link_title' => 'Offres de stage',
    'options' => array(
      'identifier' => 'menu-footer_offres-de-stage:offres-stage',
      'alter' => TRUE,
      'attributes' => array(
        'title' => 'Aller à la page Stages',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer_offres-demploi:offres-emploi.
  $menu_links['menu-footer_offres-demploi:offres-emploi'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => 'offres-emploi',
    'router_path' => 'offres-emploi',
    'link_title' => 'Offres d\'emploi',
    'options' => array(
      'identifier' => 'menu-footer_offres-demploi:offres-emploi',
      'attributes' => array(
        'title' => 'Aller à la page Offres d\'emploi',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-footer_plan-du-site:sitemap.
  $menu_links['menu-footer_plan-du-site:sitemap'] = array(
    'menu_name' => 'menu-footer',
    'link_path' => 'sitemap',
    'router_path' => 'sitemap',
    'link_title' => 'Plan du site',
    'options' => array(
      'identifier' => 'menu-footer_plan-du-site:sitemap',
      'attributes' => array(
        'title' => 'Aller à la page Plan du site',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-main-menu-en_home:<front>.
  $menu_links['menu-main-menu-en_home:<front>'] = array(
    'menu_name' => 'menu-main-menu-en',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-main-menu-en_home:<front>',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-main-menu-en_institution:<nolink>.
  $menu_links['menu-main-menu-en_institution:<nolink>'] = array(
    'menu_name' => 'menu-main-menu-en',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Institution',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-main-menu-en_institution:<nolink>',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-main-menu-en_publications:node/2154.
  $menu_links['menu-main-menu-en_publications:node/2154'] = array(
    'menu_name' => 'menu-main-menu-en',
    'link_path' => 'node/2154',
    'router_path' => 'node/%',
    'link_title' => 'Publications',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-main-menu-en_publications:node/2154',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-main-menu-en_search:search/site.
  $menu_links['menu-main-menu-en_search:search/site'] = array(
    'menu_name' => 'menu-main-menu-en',
    'link_path' => 'search/site',
    'router_path' => 'search',
    'link_title' => 'Search',
    'options' => array(
      'attributes' => array(
        'id' => 'search-button',
        'class' => array(
          0 => 'link-search',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-main-menu-en_search:search/site',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-main-menu-fr-dc_accueil:<front>.
  $menu_links['menu-main-menu-fr-dc_accueil:<front>'] = array(
    'menu_name' => 'menu-main-menu-fr-dc',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Accueil',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-main-menu-fr-dc_accueil:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'fr-DC',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-main-menu-fr-dc_institution:node/2155.
  $menu_links['menu-main-menu-fr-dc_institution:node/2155'] = array(
    'menu_name' => 'menu-main-menu-fr-dc',
    'link_path' => 'node/2155',
    'router_path' => 'node/%',
    'link_title' => 'Institution',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-main-menu-fr-dc_institution:node/2155',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'fr-DC',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-main-menu-fr-dc_missions:node/2156.
  $menu_links['menu-main-menu-fr-dc_missions:node/2156'] = array(
    'menu_name' => 'menu-main-menu-fr-dc',
    'link_path' => 'node/2156',
    'router_path' => 'node/%',
    'link_title' => 'Missions',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-main-menu-fr-dc_missions:node/2156',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'fr-DC',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-main-menu-fr-dc_search:search/site.
  $menu_links['menu-main-menu-fr-dc_search:search/site'] = array(
    'menu_name' => 'menu-main-menu-fr-dc',
    'link_path' => 'search/site',
    'router_path' => 'search',
    'link_title' => 'Search',
    'options' => array(
      'attributes' => array(
        'id' => 'search-button',
        'class' => array(
          0 => 'link-search',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-main-menu-fr-dc_search:search/site',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'fr-DC',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-menu-dans-sidebar_lien-de-test:<front>.
  $menu_links['menu-menu-dans-sidebar_lien-de-test:<front>'] = array(
    'menu_name' => 'menu-menu-dans-sidebar',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Lien de test',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-menu-dans-sidebar_lien-de-test:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-menu-dans-sidebar_lien-redirigeant-vers-un-site-externe:http://www.google.fr/.
  $menu_links['menu-menu-dans-sidebar_lien-redirigeant-vers-un-site-externe:http://www.google.fr/'] = array(
    'menu_name' => 'menu-menu-dans-sidebar',
    'link_path' => 'http://www.google.fr/',
    'router_path' => '',
    'link_title' => 'Lien redirigeant vers un site externe',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-menu-dans-sidebar_lien-redirigeant-vers-un-site-externe:http://www.google.fr/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-menu-dans-sidebar_publications-du-site:publications.
  $menu_links['menu-menu-dans-sidebar_publications-du-site:publications'] = array(
    'menu_name' => 'menu-menu-dans-sidebar',
    'link_path' => 'publications',
    'router_path' => 'publications',
    'link_title' => 'Publications du site',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'menu-menu-dans-sidebar_publications-du-site:publications',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-menu-utilitaire_09-69-39-00-00:<nolink>.
  $menu_links['menu-menu-utilitaire_09-69-39-00-00:<nolink>'] = array(
    'menu_name' => 'menu-menu-utilitaire',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => '09 69 39 00 00',
    'options' => array(
      'identifier' => 'menu-menu-utilitaire_09-69-39-00-00:<nolink>',
      'alter' => TRUE,
      'attributes' => array(
        'title' => 'Contactez nous au 09 69 39 00 00',
        'class' => array(
          0 => 'link-phone',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-menu-utilitaire_33-09-69-39-00-00:<nolink>.
  $menu_links['menu-menu-utilitaire_33-09-69-39-00-00:<nolink>'] = array(
    'menu_name' => 'menu-menu-utilitaire',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => '+33 (0)9 69 39 00 00',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'menu-menu-utilitaire_33-09-69-39-00-00:<nolink>',
      'attributes' => array(
        'title' => 'Contact us',
        'class' => array(
          0 => 'link-phone',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-menu-utilitaire_aa:<front>.
  $menu_links['menu-menu-utilitaire_aa:<front>'] = array(
    'menu_name' => 'menu-menu-utilitaire',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'aA',
    'options' => array(
      'identifier' => 'menu-menu-utilitaire_aa:<front>',
      'alter' => TRUE,
      'attributes' => array(
        'title' => 'Augmenter la taille du texte',
        'id' => 'zoom-magnify',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -37,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-menu-utilitaire_contacter-un-dlgu:office/.
  $menu_links['menu-menu-utilitaire_contacter-un-dlgu:office/'] = array(
    'menu_name' => 'menu-menu-utilitaire',
    'link_path' => 'office/',
    'router_path' => 'office',
    'link_title' => 'Contacter un délégué',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-utilitaire_contacter-un-dlgu:office/',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-menu-utilitaire_enfants:sitemap.
  $menu_links['menu-menu-utilitaire_enfants:sitemap'] = array(
    'menu_name' => 'menu-menu-utilitaire',
    'link_path' => 'sitemap',
    'router_path' => 'sitemap',
    'link_title' => 'Enfants',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-utilitaire_enfants:sitemap',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-menu-utilitaire_english:<front>.
  $menu_links['menu-menu-utilitaire_english:<front>'] = array(
    'menu_name' => 'menu-menu-utilitaire',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'English',
    'options' => array(
      'identifier' => 'menu-menu-utilitaire_english:<front>',
      'alter' => TRUE,
      'attributes' => array(
        'title' => 'English version',
        'id' => 'menu-lang-en',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -39,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-menu-utilitaire_espace-juridique:node/5511.
  $menu_links['menu-menu-utilitaire_espace-juridique:node/5511'] = array(
    'menu_name' => 'menu-menu-utilitaire',
    'link_path' => 'node/5511',
    'router_path' => 'node/%',
    'link_title' => 'Espace juridique',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-utilitaire_espace-juridique:node/5511',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -43,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-menu-utilitaire_facile--lire-et--comprendre:<front>.
  $menu_links['menu-menu-utilitaire_facile--lire-et--comprendre:<front>'] = array(
    'menu_name' => 'menu-menu-utilitaire',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Facile à lire et à comprendre',
    'options' => array(
      'identifier' => 'menu-menu-utilitaire_facile--lire-et--comprendre:<front>',
      'alter' => TRUE,
      'attributes' => array(
        'title' => 'Accéder à la partie facile à lire et à comprendre',
        'id' => 'menu-lang-fr-dc',
        'class' => array(
          0 => 'link-defco',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -35,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-menu-utilitaire_franais:<front>.
  $menu_links['menu-menu-utilitaire_franais:<front>'] = array(
    'menu_name' => 'menu-menu-utilitaire',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Français',
    'options' => array(
      'identifier' => 'menu-menu-utilitaire_franais:<front>',
      'alter' => TRUE,
      'attributes' => array(
        'title' => 'Version française',
        'id' => 'menu-lang-fr',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -38,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-menu-utilitaire_presse:taxonomy/term/47.
  $menu_links['menu-menu-utilitaire_presse:taxonomy/term/47'] = array(
    'menu_name' => 'menu-menu-utilitaire',
    'link_path' => 'taxonomy/term/47',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Presse',
    'options' => array(
      'identifier' => 'menu-menu-utilitaire_presse:taxonomy/term/47',
      'alter' => TRUE,
      'attributes' => array(
        'title' => 'Aller à l\'espace Presse',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-menu-utilitaire_retour-au-site-classique:<front>.
  $menu_links['menu-menu-utilitaire_retour-au-site-classique:<front>'] = array(
    'menu_name' => 'menu-menu-utilitaire',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Retour au site classique',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => 'Retour au site classique',
        'id' => 'menu-lang-fr',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-utilitaire_retour-au-site-classique:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
    'language' => 'fr-DC',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-menu-utilitaire_saisir-le-dfenseur-des-droits:node/5584.
  $menu_links['menu-menu-utilitaire_saisir-le-dfenseur-des-droits:node/5584'] = array(
    'menu_name' => 'menu-menu-utilitaire',
    'link_path' => 'node/5584',
    'router_path' => 'node/%',
    'link_title' => 'Saisir le Défenseur des droits',
    'options' => array(
      'identifier' => 'menu-menu-utilitaire_saisir-le-dfenseur-des-droits:node/5584',
      'alter' => TRUE,
      'attributes' => array(
        'class' => array(
          0 => 'link-saisir-defenseur',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'fr',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-menu-utilitaire_saisir-le-dfenseur-des-droits:node/5585.
  $menu_links['menu-menu-utilitaire_saisir-le-dfenseur-des-droits:node/5585'] = array(
    'menu_name' => 'menu-menu-utilitaire',
    'link_path' => 'node/5585',
    'router_path' => 'node/%',
    'link_title' => 'Saisir le Défenseur des droits',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'class' => array(
          0 => 'link-saisir-defenseur',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'menu-menu-utilitaire_saisir-le-dfenseur-des-droits:node/5585',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'fr-DC',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('+33 (0)9 69 39 00 00');
  t('09 69 39 00 00');
  t('Accessibility');
  t('Accessibilité');
  t('Accueil');
  t('Aide');
  t('Can I refer a case to the Defender of Rights to report the violation of the rights of a person of my acquaintance ?');
  t('Can a teenager go to jail ?');
  t('Contacter un délégué');
  t('Defense of children\'s rights');
  t('Des délégués dans toute la France');
  t('Droit des usagers des services publics');
  t('Défense des droits de l\'enfant');
  t('Déontologie de la sécurité');
  t('Enfants');
  t('English');
  t('Espace juridique');
  t('FAQ');
  t('Facile à lire et à comprendre');
  t('Faire connaître vos droits');
  t('Fight against discrimination');
  t('Français');
  t('Home');
  t('Institution');
  t('Je suis d’origine maghrébine, un restaurant à moitié vide me refuse une table. Est-ce une discrimination ?');
  t('Le Défenseur fait connaître les droits de chacun. Il défend :');
  t('Legal notices');
  t('Les enfants dont les droits ne sont pas respectés');
  t('Les personnes discriminées');
  t('Les personnes qui ont des difficultés dans leurs relations avec les services publics');
  t('Les personnes qui ont un problème avec les forces de sécurité publique ou privée');
  t('Lettre d\'information');
  t('Lien de test');
  t('Lien redirigeant vers un site externe');
  t('Lutte contre les discriminations');
  t('Marchés publics');
  t('Mentions légales');
  t('Missions');
  t('Modules d\'e-learning');
  t('Nos actions');
  t('Nos missions');
  t('Nos outils');
  t('Nos partenaires');
  t('Offres d\'emploi');
  t('Offres de stage');
  t('Plan du site');
  t('Presse');
  t('Professional ethics of the safety');
  t('Publications');
  t('Publications du site');
  t('Publications et outils');
  t('Puis-je saisir le Défenseur des droits pour signaler la violation des droits d’une personne de ma connaissance ?');
  t('Qui sommes-nous ?');
  t('Rapports');
  t('Rapports Jeunes Ambassadeurs des Droits auprès des Enfants');
  t('Rapports annuels d\'activité');
  t('Rapports annuels droits de l\'enfant');
  t('Rapports thématiques');
  t('Recherche');
  t('Retour au site classique');
  t('Rights of the users of public services');
  t('Saisir le Défenseur des droits');
  t('Search');
  t('Sitemap');
  t('Traiter vos demandes');
  t('Un acteur international');
  t('Une institution indépendante');
  t('Une équipe de spécialistes');
  t('aA');

  return $menu_links;
}
