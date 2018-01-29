<?php

/**
 * @file
 * Contains Batch API callbacks used during installation.
 */

/**
 * BatchAPI callback.
 *
 * @see soclelab_install_additional_modules()
 */
function _soclelab_enable_module($module, $module_name, &$context) {
  module_enable(array($module), FALSE);
  $context['message'] = st('Installed %module module.', array('%module' => $module_name));
}

/**
 * BatchAPI callback.
 *
 * @see soclelab_demo_content()
 */
function _soclelab_create_demo_users() {

  // Create an array of usernames.
  $demo_usernames = array('Admin Capgemini', 'Contrib Capgemini', 'Dev Capgemini', 'Contrib Client', 'Admin Client');
  $demo_passwords = array(0 => 'pass_admin_cap', 1 => 'pass_contrib_cap', 2 => 'pass_dev_cap', 3 => 'contrib', 4 => 'admin');
  $demo_roles = array(0 => 'administrator', 1 => 'contributor validator', 2 => 'developer administrator', 3 => 'contributor validator', 4 => 'administrator');

  // Create a user for each username.
  $i = 0;
  foreach ($demo_usernames as $username) {
    list($first_name, $last_name)  = explode(" ", $username);
    $normalized_username = soclelab_normalize_name($username);

    $fields = array(
      'name' => $username,
      'mail' => "{$normalized_username}@example.com",
      'pass' => $demo_passwords[$i],
      'status' => 1,
      'init' => "{$normalized_username}@example.com",
      'roles' => array(
        DRUPAL_AUTHENTICATED_RID => $demo_roles[$i],
      ),
    );

    $fields['field_name_first'][LANGUAGE_NONE][0]['value'] = $first_name;
    $fields['field_name_last'][LANGUAGE_NONE][0]['value'] = $last_name;

    $user = user_save(NULL, $fields);

    $i++;
  }
}

/**
 * BatchAPI callback.
 *
 * @see soclelab_demo_content()
 */
function _soclelab_create_demo_taxonomy_terms() {
/*
 * $new_term = (object) array(
        'vid' => $vid_taxonomy,
        'name' => $name,
        'description' => '',
        'format' => '',
        'weight' => 0,
        'vocabulary_machine_name' => $taxonomy_machine_name,
    );
 * */
  // Gestion des types de contenus
  $v_type = taxonomy_vocabulary_machine_name_load('v_type');
  if(!$v_type){
    $vocab_typecontent = (object) array(
      'name' => 'Type de contenu',
      'description' => 'Vocabulaire utilisé pour les types de contenus',
      'machine_name' => 'v_type',
    );
    taxonomy_vocabulary_save($vocab_typecontent);
  }
  $v_type = taxonomy_vocabulary_machine_name_load('v_type');
  
  $term_to_add = (object) array( 'name' => 'Publications', 'description' => '', 'vid' => $v_type->vid, );
  taxonomy_term_save($term_to_add);
  $tid_publi = $term_to_add->tid;
  
    $term_to_add = (object) array( 'name' => 'Études', 'description' => '', 'vid' => $v_type->vid, 'parent' => $tid_publi, );
    taxonomy_term_save($term_to_add);
  
    $term_to_add = (object) array( 'name' => 'Rapport', 'description' => '', 'vid' => $v_type->vid, 'parent' => $tid_publi, );
    taxonomy_term_save($term_to_add);
    $tid_rapport = $term_to_add->tid;
    
      $term_to_add = (object) array( 'name' => 'Rapport annuel', 'description' => '', 'vid' => $v_type->vid, 'parent' => $tid_rapport, );
      taxonomy_term_save($term_to_add);
    
      $term_to_add = (object) array( 'name' => 'Rapport public', 'description' => '', 'vid' => $v_type->vid, 'parent' => $tid_rapport, );
      taxonomy_term_save($term_to_add);
  
    $term_to_add = (object) array( 'name' => 'Statistiques', 'description' => '', 'vid' => $v_type->vid, 'parent' => $tid_publi, );
    taxonomy_term_save($term_to_add);
  
  $term_to_add = (object) array( 'name' => 'Actualité', 'description' => '', 'vid' => $v_type->vid, );
  taxonomy_term_save($term_to_add);
  $tid_actu = $term_to_add->tid;
  
    $term_to_add = (object) array( 'name' => 'Communiqué de presse', 'description' => '', 'vid' => $v_type->vid, 'parent' => $tid_actu, );
    taxonomy_term_save($term_to_add);
  
    $term_to_add = (object) array( 'name' => 'Dossier de presse', 'description' => '', 'vid' => $v_type->vid, 'parent' => $tid_actu, );
    taxonomy_term_save($term_to_add);
  
  
  // Gestion des thèmes
  $v_theme = taxonomy_vocabulary_machine_name_load('v_theme');
  if(!$v_theme){
    $vocab_themes = (object) array(
      'name' => 'Thèmes',
      'description' => 'Vocabulaire utilisé pour les thèmes',
      'machine_name' => 'v_theme',
    );
    taxonomy_vocabulary_save($vocab_themes);
  }
  $v_theme = taxonomy_vocabulary_machine_name_load('v_theme');
  
  $term_to_add = (object) array( 'name' => 'Innovation', 'description' => '', 'vid' => $v_theme->vid, );
  taxonomy_term_save($term_to_add);
  $tid_innov = $term_to_add->tid;
  
    $term_to_add = (object) array( 'name' => 'High-Tech', 'description' => '', 'vid' => $v_theme->vid, 'parent' => $tid_innov, );
    taxonomy_term_save($term_to_add);
  
    $term_to_add = (object) array( 'name' => 'Internet', 'description' => '', 'vid' => $v_theme->vid, 'parent' => $tid_innov, );
    taxonomy_term_save($term_to_add);
  
  $term_to_add = (object) array( 'name' => 'International', 'description' => '', 'vid' => $v_theme->vid, );
  taxonomy_term_save($term_to_add);
  $tid_international = $term_to_add->tid;
  
    $term_to_add = (object) array( 'name' => 'France', 'description' => '', 'vid' => $v_theme->vid, 'parent' => $tid_international, );
    taxonomy_term_save($term_to_add);
  
    $term_to_add = (object) array( 'name' => 'Espagne', 'description' => '', 'vid' => $v_theme->vid, 'parent' => $tid_international, );
    taxonomy_term_save($term_to_add);
}

/**
 * BatchAPI callback.
 *
 * @see soclelab_demo_content()
 */
function _soclelab_create_demo_content() {

  // Article : Nullam tincidunt massa (generated)
  $article = new stdClass();
  $article->type = 'article';
  node_object_prepare($article);
  $article->title = "Nullam tincidunt massa (generated)";
  $article->uid = 1;
  $article->language = LANGUAGE_NONE;
  $article->status = 1;
  $article->comment = 0;
  $article->field_article_logo[LANGUAGE_NONE][0]['sid'] = _create_atom_from_imgname("stockvault-city_sunset.jpg");
  $article->field_article_descriptif[LANGUAGE_NONE][0]['value'] = "<p>Duis a ligula facilisis, ornare dolor nec, vulputate erat. Quisque suscipit finibus tellus id placerat. Phasellus iaculis maximus ultrices.</p>";
  $article->field_article_descriptif[LANGUAGE_NONE][0]['format'] = "filtered_html";
  $article->field_article_descriptif[LANGUAGE_NONE][0]['safe_value'] = "<p>Duis a ligula facilisis, ornare dolor nec, vulputate erat. Quisque suscipit finibus tellus id placerat. Phasellus iaculis maximus ultrices.</p>";
  $article->field_article_body[LANGUAGE_NONE][0]['value'] = "<p>Morbi pretium purus lorem, ac efficitur urna suscipit eget. Proin sed lacinia quam, nec posuere mauris. Cras non nulla mi. Nulla facilisi.</p>
                                                    <p>Aliquam vitae ornare lorem. Praesent massa tellus, gravida vel odio non, lobortis pharetra libero. In commodo mauris eu velit pretium ullamcorper. Cras pretium blandit mauris, lobortis ultricies arcu finibus et. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Duis eu viverra eros. Suspendisse potenti.</p>
                                                    <p>Nam nec arcu augue. Nam eu faucibus nibh, eget placerat nisl. Praesent et turpis non ante condimentum rutrum eu non diam. Ut lobortis, felis pharetra sodales congue, neque ex auctor lacus, quis hendrerit turpis felis nec felis. Integer vehicula nisl ac vestibulum iaculis. Sed sit amet magna et sem consectetur consectetur. Duis ac metus eu turpis commodo cursus nec non mi. Cras eget lectus quis sapien maximus pharetra. Morbi a laoreet odio, sit amet ultrices leo. Maecenas dictum ac lectus et iaculis. Curabitur rutrum elementum ante. Integer dictum iaculis metus, id gravida mauris facilisis vitae. Proin orci sem, rhoncus at metus sed, mollis posuere eros. Proin velit diam, lacinia non turpis vel, ultricies pretium urna. Morbi vel elit quis felis sagittis accumsan. Integer non quam nulla.</p>";
  $article->field_article_body[LANGUAGE_NONE][0]['format'] = "full_html";
  $article->field_article_date[LANGUAGE_NONE][0]['value'] = "2014-07-02 00:00:00";
  $article->field_article_date[LANGUAGE_NONE][0]['timezone'] = "Europe/Paris";
  $article->field_article_date[LANGUAGE_NONE][0]['timezone_db'] = "Europe/Paris";
  $article->field_article_date[LANGUAGE_NONE][0]['date_type'] = "datetime";
  $article->field_article_type[LANGUAGE_NONE][0]['tid'] = taxonomy_get_term_by_name('Rapport annuel')->tid;
  node_save($article);
  $article_nid2 = $article->nid;
  
  
  // Article : Article de test complet (generated)
  $article = new stdClass();
  $article->type = 'article';
  node_object_prepare($article);
  $article->title = "Article de test complet (generated)";
  $article->uid = 1;
  $article->language = LANGUAGE_NONE;
  $article->status = 1;
  $article->comment = 0;
  $article->field_article_logo[LANGUAGE_NONE][0]['sid'] = _create_atom_from_imgname("stockvault-building.jpg");
  $article->field_article_descriptif[LANGUAGE_NONE][0]['value'] = "<p>Morbi commodo vel diam ut viverra. Suspendisse pellentesque eget tortor elementum congue. In tincidunt est sem, et finibus massa rhoncus non. Ut eget turpis neque.</p>";
  $article->field_article_descriptif[LANGUAGE_NONE][0]['format'] = "filtered_html";
  $article->field_article_descriptif[LANGUAGE_NONE][0]['safe_value'] = "<p>Morbi commodo vel diam ut viverra. Suspendisse pellentesque eget tortor elementum congue. In tincidunt est sem, et finibus massa rhoncus non. Ut eget turpis neque.</p>";
  $article->field_article_document[LANGUAGE_NONE][0]['sid'] = _create_atom_from_docname("pdf-test_lorem.pdf");
  $article->field_article_document[LANGUAGE_NONE][1]['sid'] = _create_atom_from_docname("doc-test_lorem.doc");
  //$article->field_article_video[LANGUAGE_NONE][0]['sid'] = 4; // TODO
  $article->field_article_galerie[LANGUAGE_NONE][0]['sid'] = _create_atom_from_imgname("stockvault-florida.jpg");
  $article->field_article_galerie[LANGUAGE_NONE][1]['sid'] = _create_atom_from_imgname("stockvault-kangamagus_highway.jpg");
  $article->field_article_galerie[LANGUAGE_NONE][2]['sid'] = _create_atom_from_imgname("stockvault-leaves.jpg");
  $article->field_article_galerie[LANGUAGE_NONE][2]['sid'] = _create_atom_from_imgname("stockvault-old_factory.jpg");
  $article->field_article_body[LANGUAGE_NONE][0]['value'] = "<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Fusce diam leo, ultricies at fermentum non, porttitor eu nulla. Praesent iaculis, leo et ultricies tristique, elit ipsum fermentum tellus, nec tristique ante justo in odio. Fusce dolor justo, lobortis nec ipsum id, accumsan efficitur tortor. Duis laoreet malesuada porta. Donec sollicitudin metus eu felis porttitor, quis lobortis arcu sagittis. Lorem ipsum dolor sit amet, consectetur adipiscing elit. In ultricies lorem ut tincidunt rutrum. Nam aliquam eros ex, in fringilla ante mollis id. Fusce sagittis laoreet rutrum. Pellentesque gravida mi vel est sagittis euismod. Mauris consequat sapien quis luctus hendrerit. Duis ultrices est felis, vel tincidunt massa dignissim nec.</p>
                                                    <p>Curabitur vestibulum, magna vel elementum congue, odio diam eleifend metus, id dignissim metus felis a felis. Pellentesque volutpat dolor at nisi tempor, nec molestie urna pellentesque. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Etiam sit amet tincidunt sem, et accumsan lorem. Donec eleifend ligula id rhoncus porttitor. Curabitur at odio nec arcu ornare sodales a nec libero. Nulla in leo quis augue sollicitudin viverra. Phasellus ipsum nisl, tincidunt in finibus sed, commodo eget massa. Nulla sapien arcu, rutrum vitae mollis id, interdum a enim. Cras in quam vitae magna malesuada pulvinar in at lorem. Pellentesque efficitur tortor at tristique pulvinar. Mauris a vehicula orci. Phasellus sollicitudin diam vitae ligula fringilla blandit.</p>
                                                    <div class=\"dnd-atom-wrapper type-image context-sdl_editor_representation\">
                                                    <div class=\"dnd-drop-wrapper\">[scald=" . 1 . ":sdl_editor_representation]</div>
                                                    <div class=\"dnd-legend-wrapper\"><div class=\"overlay-legend\"><div class=\"legende-image\">stockvault-empty-room109101.jpg
                                                    <div class=\"copyright-image\">© test, test2</div></div><div class=\"bg-legende-image\">&nbsp;</div></div></div></div>
                                                    <p><strong>Vestibulum vel mi in lorem porta porta id </strong>quis elit. Sed non aliquam libero. Nulla facilisis ante lacus, vitae interdum mi iaculis sit amet. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Proin eget ligula quis risus dapibus sagittis. Suspendisse sollicitudin, nibh vel dictum cursus, leo libero lobortis risus, at mollis leo est id lectus. Nam eu sollicitudin orci, a bibendum ipsum. Nullam efficitur velit dolor, eget maximus enim suscipit vitae. Nullam commodo suscipit metus, ac mollis ex tempus sed. Mauris egestas sem id venenatis venenatis. Phasellus non lectus iaculis tortor elementum dignissim.</p>
                                                    <p>Curabitur ornare eros magna, eget eleifend dolor porttitor eget. In hac habitasse <em>platea dictumst.</em> Duis euismod dolor sem, at rhoncus enim varius a. Mauris ut iaculis metus, vel bibendum mi. Phasellus fermentum ullamcorper condimentum. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia Curae; Sed ultrices semper dolor vel vehicula. Nulla pretium eros at ullamcorper auctor. Quisque consectetur ultricies diam congue tincidunt. Etiam tempus tortor at sapien porta, sit amet convallis ex rhoncus. Nam sed lacus tristique, euismod nibh non, imperdiet nibh. In fermentum mauris lorem, in rhoncus quam facilisis quis. Mauris at ornare tellus. Morbi consequat molestie imperdiet. Sed volutpat justo rhoncus ligula hendrerit consequat.</p>
                                                    <blockquote><p>Morbi commodo vel diam ut viverra. Suspendisse pellentesque eget tortor elementum congue. In tincidunt est sem, et finibus massa rhoncus non. Ut eget turpis neque. Integer convallis enim at eros maximus sodales. Interdum et malesuada fames ac ante ipsum primis in faucibus. Praesent sit amet condimentum ipsum.</p></blockquote>";
  $article->field_article_body[LANGUAGE_NONE][0]['format'] = "full_html";
  $article->field_article_date[LANGUAGE_NONE][0]['value'] = "2014-01-03 00:00:00";
  $article->field_article_date[LANGUAGE_NONE][0]['timezone'] = "Europe/Paris";
  $article->field_article_date[LANGUAGE_NONE][0]['timezone_db'] = "Europe/Paris";
  $article->field_article_date[LANGUAGE_NONE][0]['date_type'] = "datetime";
  $article->field_article_type[LANGUAGE_NONE][0]['tid'] = taxonomy_get_term_by_name('Études')->tid;
  $article->field_article_ctasso[LANGUAGE_NONE][0]['target_id'] = $article_nid2;
  $article->field_article_theme[LANGUAGE_NONE][0]['tid'] = taxonomy_get_term_by_name('Innovation')->tid;
  node_save($article);
  $article_nid1 = $article->nid;
    
  // Article : Pellentesque at dui felis (generated)
  $article = new stdClass();
  $article->type = 'article';
  node_object_prepare($article);
  $article->title = "Pellentesque at dui felis (generated)";
  $article->uid = 1;
  $article->language = LANGUAGE_NONE;
  $article->status = 1;
  $article->comment = 0;
  $article->field_article_logo[LANGUAGE_NONE][0]['sid'] = _create_atom_from_imgname("stockvault-path.jpg");
  $article->field_article_descriptif[LANGUAGE_NONE][0]['value'] = "<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit. Suspendisse et mi dictum ante condimentum varius sed nec tortor. Interdum et malesuada fames.</p>";
  $article->field_article_descriptif[LANGUAGE_NONE][0]['format'] = "filtered_html";
  $article->field_article_descriptif[LANGUAGE_NONE][0]['safe_value'] = "<p>Duis a ligula facilisis, ornare dolor nec, vulputate erat. Quisque suscipit finibus tellus id placerat. Phasellus iaculis maximus ultrices.</p>";
  $article->field_article_body[LANGUAGE_NONE][0]['value'] = "<p>Pellentesque maximus metus vel tempus porttitor. Cras vitae erat eleifend, pellentesque lorem at, finibus orci. Nam efficitur odio sit amet orci eleifend, id venenatis nunc consectetur. Morbi a mauris elementum, maximus nulla sit amet, ultricies nisi. Morbi tincidunt nisi ut augue lobortis consectetur. Nullam cursus placerat est et fringilla. Curabitur fringilla ultricies orci, vitae auctor lectus lacinia eu.</p>
                                                    <p>Maecenas convallis metus eu nisl congue, eu sagittis metus eleifend. Nulla facilisi. In dictum feugiat dictum. Praesent fringilla velit ut lorem volutpat aliquet sed sed tellus. In a odio orci. Etiam sit amet pulvinar orci, id rhoncus nisi. Maecenas porta ut sem a commodo. Integer sit amet purus ac purus rutrum porta at in est. Nam gravida sollicitudin quam. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Ut id laoreet lacus, at molestie nulla. Duis nibh mauris, elementum et porttitor vitae, imperdiet nec justo. Sed varius rutrum risus, dignissim egestas ligula porttitor ac.</p>";
  $article->field_article_body[LANGUAGE_NONE][0]['format'] = "full_html";
  $article->field_article_date[LANGUAGE_NONE][0]['value'] = "2014-06-18 00:00:00";
  $article->field_article_date[LANGUAGE_NONE][0]['timezone'] = "Europe/Paris";
  $article->field_article_date[LANGUAGE_NONE][0]['timezone_db'] = "Europe/Paris";
  $article->field_article_date[LANGUAGE_NONE][0]['date_type'] = "datetime";
  $article->field_article_type[LANGUAGE_NONE][0]['tid'] =  taxonomy_get_term_by_name('Rapport')->tid;
  node_save($article);
  $article_nid3 = $article->nid;
  
  // Article : Communiqué de presse n°7, l'organisation du territoire. (generated)
  $article = new stdClass();
  $article->type = 'article';
  node_object_prepare($article);
  $article->title = "Communiqué de presse n°7, l'organisation du territoire. (generated)";
  $article->uid = 1;
  $article->language = LANGUAGE_NONE;
  $article->status = 1;
  $article->comment = 0;
  $article->field_article_logo[LANGUAGE_NONE][0]['sid'] = _create_atom_from_imgname("stockvault-heart.jpg");
  $article->field_article_date[LANGUAGE_NONE][0]['value'] = "2014-10-21 00:00:00";
  $article->field_article_date[LANGUAGE_NONE][0]['timezone'] = "Europe/Paris";
  $article->field_article_date[LANGUAGE_NONE][0]['timezone_db'] = "Europe/Paris";
  $article->field_article_date[LANGUAGE_NONE][0]['date_type'] = "datetime";
  $article->field_article_type[LANGUAGE_NONE][0]['tid'] = taxonomy_get_term_by_name('Communiqué de presse')->tid;
  node_save($article);
  $article_nid4 = $article->nid;
  
  // Article : Travaux sur la route départementale (generated)
  $article = new stdClass();
  $article->type = 'article';
  node_object_prepare($article);
  $article->title = "Travaux sur la route départementale (generated)";
  $article->uid = 1;
  $article->language = LANGUAGE_NONE;
  $article->status = 1;
  $article->comment = 0;
  $article->field_article_logo[LANGUAGE_NONE][0]['sid'] = _create_atom_from_imgname("stockvault-excavator.jpg");
  $article->field_article_date[LANGUAGE_NONE][0]['value'] = "2014-10-21 00:00:00";
  $article->field_article_date[LANGUAGE_NONE][0]['timezone'] = "Europe/Paris";
  $article->field_article_date[LANGUAGE_NONE][0]['timezone_db'] = "Europe/Paris";
  $article->field_article_date[LANGUAGE_NONE][0]['date_type'] = "datetime";
  $article->field_article_type[LANGUAGE_NONE][0]['tid'] = taxonomy_get_term_by_name('Dossier de presse')->tid;
  node_save($article);
  $article_nid5 = $article->nid;
  
  
  
  // Event : Évènement de test complet (generated)
  $event = new stdClass();
  $event->type = 'evenement';
  node_object_prepare($event);
  $event->title = "Évènement de test complet (generated)";
  $event->uid = 1;
  $event->language = LANGUAGE_NONE;
  $event->status = 1;
  $event->comment = 0;
  $event->field_event_date[LANGUAGE_NONE][0]['value'] = "2015-04-13 09:45:00";
  $event->field_event_date[LANGUAGE_NONE][0]['value2'] = "2015-04-13 14:45:00";
  $event->field_event_date[LANGUAGE_NONE][0]['timezone'] = "Europe/Paris";
  $event->field_event_date[LANGUAGE_NONE][0]['timezone_db'] = "UTC";
  $event->field_event_date[LANGUAGE_NONE][0]['date_type'] = "datetime";
  $event->field_event_lieu[LANGUAGE_NONE][0]['value'] = "<p>Mauris cursus ligula vitae augue porttitor auctor. Quisque eleifend sapien eros. Donec tincidunt elit at condimentum facilisis. Curabitur scelerisque ut nibh non maximus.</p>";
  $event->field_event_lieu[LANGUAGE_NONE][0]['format'] = "filtered_html";
  $event->field_event_lieu[LANGUAGE_NONE][0]['safe_value'] = "<p>Mauris cursus ligula vitae augue porttitor auctor. Quisque eleifend sapien eros. Donec tincidunt elit at condimentum facilisis. Curabitur scelerisque ut nibh non maximus.</p>";
  $event->field_event_logo[LANGUAGE_NONE][0]['sid'] =  _create_atom_from_imgname("ffcu-christmas_blur.jpg");
  $event->field_event_body[LANGUAGE_NONE][0]['value'] = "<p>Ut sit amet sem sed turpis aliquam commodo a nec ante. Etiam tempor, mi id vulputate cursus, mauris leo ullamcorper eros, at vulputate libero massa eu enim. Donec quam nisl, porttitor non orci id, finibus pulvinar felis. Aenean fringilla cursus eros eu ultricies. Nulla iaculis massa eget tempor blandit. Etiam risus ligula, pulvinar at placerat eget, hendrerit sed leo. Cras sollicitudin metus id enim sollicitudin dapibus. Maecenas augue nunc, hendrerit sit amet consectetur quis, placerat in purus. Sed quis est odio. Fusce ut sapien sit amet justo imperdiet vulputate. Integer sodales velit ac ipsum tincidunt ultrices. Maecenas fringilla ante euismod diam ornare, malesuada vestibulum dui maximus.</p>
                                                <blockquote>
                                                <p>Sed laoreet, ex sed dictum finibus, lacus leo consequat mauris, sed euismod massa erat eu turpis. Phasellus faucibus purus eu nunc congue lacinia nec at nulla</p>
                                                </blockquote>
                                                <p>Proin hendrerit erat nec lacus faucibus, ut scelerisque ante faucibus. Suspendisse quis mi elementum, rutrum lectus consequat, finibus orci. Pellentesque at metus a turpis hendrerit feugiat vel et leo. Praesent purus massa, varius vitae neque vitae, sagittis ornare nisl. Nulla tristique eget dolor nec consectetur. Etiam gravida diam neque, id hendrerit sapien varius non. Curabitur mi tellus, rhoncus ac lacus in, malesuada accumsan tortor. Aliquam eget tempor ante. Nulla eleifend hendrerit orci, sed gravida velit dapibus non. Donec iaculis metus et consectetur tristique. In tellus ex, egestas eu nibh in, mollis gravida enim. Nunc sem nisi, luctus eget consequat sit amet, fermentum non orci. Morbi at ante fermentum, sollicitudin eros vitae, posuere dolor. Integer vel mi quam. Aenean dapibus turpis vitae metus sagittis, eget tincidunt risus vehicula.</p>";
  $event->field_event_descriptif[LANGUAGE_NONE][0]['value'] = "<p>\"Ede semper est, vitae luctus metus liberto ou augue. Morb sipo ipiscing, commodo quis, gravida. Curabitur tempus sed lectus sed aliquam.\" Suspendisse potenti. Integer justo nunc, lacinia faucibus facilisis sed, aliquet et libero. Vestibulum ut eros iaculis elit accumsan euismod.</p>";
  $event->field_event_descriptif[LANGUAGE_NONE][0]['format'] = "filtered_html";
  node_save($event);
  $event_nid1 = $event->nid;
  
  // Event : Sed consectetur imperdiet sagittis (generated)
  $event = new stdClass();
  $event->type = 'evenement';
  node_object_prepare($event);
  $event->title = "Sed consectetur imperdiet sagittis (generated)";
  $event->uid = 1;
  $event->language = LANGUAGE_NONE;
  $event->status = 1;
  $event->comment = 0;
  $event->field_event_date[LANGUAGE_NONE][0]['value'] = "2014-09-15 10:00:00";
  $event->field_event_date[LANGUAGE_NONE][0]['value2'] = "2014-09-16 13:00:00";
  $event->field_event_date[LANGUAGE_NONE][0]['timezone'] = "Europe/Paris";
  $event->field_event_date[LANGUAGE_NONE][0]['timezone_db'] = "UTC";
  $event->field_event_date[LANGUAGE_NONE][0]['date_type'] = "datetime";
  $event->field_event_logo[LANGUAGE_NONE][0]['sid'] = _create_atom_from_imgname("stockvault-snowboarder.jpg");
  $event->field_event_body[LANGUAGE_NONE][0]['value'] = "<p>Quisque varius faucibus ante. Praesent sit amet sagittis felis. Vivamus aliquet, enim et pharetra eleifend, sapien nulla varius nunc, volutpat imperdiet turpis ipsum sit amet dui. Maecenas et vestibulum urna. Pellentesque vel tincidunt nunc. Nam placerat eget ex vitae convallis. Aenean mattis diam quis volutpat tincidunt. Aliquam cursus mauris eu metus iaculis, eu suscipit lorem auctor. Phasellus sit amet neque eu magna lobortis accumsan. Sed feugiat vulputate lacus semper tempor.</p>
                                                        <p>Cras pulvinar ipsum malesuada nisi facilisis semper. In accumsan est in lorem placerat, ac luctus diam auctor. Morbi semper dapibus nisl vel commodo. Maecenas commodo commodo sem sed pharetra. Nam consequat odio eu lorem varius posuere. Integer laoreet tortor nec odio pretium ullamcorper. Vestibulum tempor convallis lectus sit amet faucibus. Nulla consectetur ex quis blandit consequat. Nulla eget nisl ut lorem commodo auctor. Curabitur accumsan, est in luctus dignissim, dui eros finibus elit, at porttitor nunc erat iaculis metus. Integer mollis placerat molestie. Morbi laoreet egestas turpis, vitae tempus justo pellentesque vel. Aenean porta ex tempus turpis auctor rutrum.</p>";
  node_save($event);
  $event_nid2 = $event->nid;
  
  // Event : Vivamus egestas eleifend libero (generated)
  $event = new stdClass();
  $event->type = 'evenement';
  node_object_prepare($event);
  $event->title = "Vivamus egestas eleifend libero (generated)";
  $event->uid = 1;
  $event->language = LANGUAGE_NONE;
  $event->status = 1;
  $event->comment = 0;
  $event->field_event_date[LANGUAGE_NONE][0]['value'] = "2014-02-05 13:00:00";
  $event->field_event_date[LANGUAGE_NONE][0]['value2'] = "2014-02-05 15:30:00";
  $event->field_event_date[LANGUAGE_NONE][0]['timezone'] = "Europe/Paris";
  $event->field_event_date[LANGUAGE_NONE][0]['timezone_db'] = "UTC";
  $event->field_event_date[LANGUAGE_NONE][0]['date_type'] = "datetime";
  node_save($event);
  $event_nid3 = $event->nid;
  
  
  
  
  // Faq : Vivamus egestas eleifend libero (generated)
  $faq = new stdClass();
  $faq->type = 'faq';
  node_object_prepare($faq);
  $faq->title = "FAQ";
  $faq->uid = 1;
  $faq->language = LANGUAGE_NONE;
  $faq->status = 1;
  $faq->comment = 0;
  
    $fc_faq = entity_create('field_collection_item', array('field_name' => 'field_faq_questions'));
    $fc_faq->setHostEntity('node', $faq);
    $fc_faq->field_faq_fc_question[LANGUAGE_NONE][0]['value'] = "Nunc dignissim turpis ipsum ?";
    $fc_faq->field_faq_fc_reponse[LANGUAGE_NONE][0]['value'] = "<p>Praesent convallis massa vel condimentum suscipit. Suspendisse rhoncus, lacus id suscipit dictum, neque dolor sodales lectus, id sollicitudin ligula mi quis odio. Pellentesque id velit in mauris hendrerit scelerisque eu sit amet urna. Nulla quis pharetra tellus, vel malesuada arcu. Pellentesque volutpat lacus vel justo bibendum ultrices. Phasellus posuere ultricies sodales. Donec porta et neque a porttitor.</p>";
    $fc_faq->save();
  $faq->field_faq_questions[LANGUAGE_NONE][0]['value'] = $fc_faq->item_id;
  
    $fc_faq = entity_create('field_collection_item', array('field_name' => 'field_faq_questions'));
    $fc_faq->setHostEntity('node', $faq);
    $fc_faq->field_faq_fc_question[LANGUAGE_NONE][0]['value'] = "Donec elementum, ligula ac tincidunt egestas, magna est ullamcorper sapien, at condimentum eros sem in dui ?";
    $fc_faq->field_faq_fc_reponse[LANGUAGE_NONE][0]['value'] = "<div>Nam pellentesque dolor id mauris euismod convallis. Donec lacinia arcu eu velit dignissim, ut condimentum nisl euismod. Sed leo lacus, posuere id mauris id, condimentum egestas risus. Donec tempor finibus justo, non tristique sem dictum eu. Vivamus ac sem id sapien vehicula pretium in vestibulum diam. Donec lacinia tempus egestas. Donec elementum, ligula ac tincidunt egestas, magna est ullamcorper sapien, at condimentum eros sem in dui. Mauris odio risus, condimentum vitae metus eu, sagittis condimentum turpis. Phasellus non orci eget dui porttitor laoreet. Nulla sit amet erat venenatis, mollis sapien eu, auctor sapien. Donec elit justo, consequat eu ligula ut, iaculis laoreet felis.</div>";
    $fc_faq->save();
  $faq->field_faq_questions[LANGUAGE_NONE][1]['value'] = $fc_faq->item_id;
 
    $fc_faq = entity_create('field_collection_item', array('field_name' => 'field_faq_questions'));
    $fc_faq->setHostEntity('node', $faq);
    $fc_faq->field_faq_fc_question[LANGUAGE_NONE][0]['value'] = "Duis vestibulum, quam sed hendrerit consequat ?";
    $fc_faq->field_faq_fc_reponse[LANGUAGE_NONE][0]['value'] = "<p>Suspendisse laoreet malesuada purus non congue. Nullam mollis augue ut quam finibus, eget pharetra dui posuere. Aliquam erat volutpat. Duis vestibulum, quam sed hendrerit consequat, orci urna commodo felis, in ultricies nisi dolor ac mi.</p>";
    $fc_faq->save();
  $faq->field_faq_questions[LANGUAGE_NONE][2]['value'] = $fc_faq->item_id;
  node_save($faq);
  $faq_nid1 = $faq->nid;
  
  
  
  
  
  // Page : Contact
  $page = new stdClass();
  $page->type = 'page';
  node_object_prepare($page);
  $page->title = "Contact";
  $page->uid = 1;
  $page->language = LANGUAGE_NONE;
  $page->status = 1;
  $page->comment = 0;
  $page->field_page_body['und'][0]['value'] = "<p>Aenean nec tellus eget massa finibus facilisis. Aenean dignissim hendrerit lorem vitae laoreet. In hac habitasse platea dictumst. Proin a dignissim orci. Quisque ligula odio, scelerisque sed porttitor quis, convallis quis nisl. Nulla a neque tempor, auctor lacus vitae, rhoncus nunc. Suspendisse ac molestie odio. Maecenas bibendum<strong> maximus nibh non dapibus</strong>. Nulla facilisi. Mauris sagittis purus lectus, a fringilla dolor mollis quis.</p>";
  $page->field_page_logo['und'][0]['sid'] = _create_atom_from_imgname("stockvault-book_glasses.jpg");
  $page->field_page_contact_adresse['und'][0]['value'] = "16 mail Pablo Picasso 44000 Nantes";
  $page->field_page_contact_adresse['und'][0]['safe_value'] = "16 mail Pablo Picasso 44000 Nantes";
  node_save($page);
  $page_contact = $page->nid;
  
  // Page : Politique d'accessibilité
  $page = new stdClass();
  $page->type = 'page';
  node_object_prepare($page);
  $page->title = "Politique d'accessibilité";
  $page->uid = 1;
  $page->language = LANGUAGE_NONE;
  $page->status = 1;
  $page->comment = 0;
  node_save($page);
  $page_access = $page->nid;
  
  // Page : Mentions légales
  $page = new stdClass();
  $page->type = 'page';
  node_object_prepare($page);
  $page->title = "Mentions légales";
  $page->uid = 1;
  $page->language = LANGUAGE_NONE;
  $page->status = 1;
  $page->comment = 0;
  node_save($page);
  $page_legacy = $page->nid;
  
  // Page : Thèmes
  $page = new stdClass();
  $page->type = 'page';
  node_object_prepare($page);
  $page->title = "Thèmes";
  $page->uid = 1;
  $page->language = LANGUAGE_NONE;
  $page->status = 1;
  $page->comment = 0;
  $page->field_page_vocabulary['und'][0]['target_id'] = taxonomy_vocabulary_machine_name_load('v_theme')->vid;
  node_save($page);
  $page_themes = $page->nid;
  
  
  
  // Page d'accueil : Accueil
  $page_home = new stdClass();
  $page_home->type = 'page';
  node_object_prepare($page_home);
  $page_home->title = "Accueil";
  $page_home->uid = 1;
  $page_home->language = LANGUAGE_NONE;
  $page_home->status = 1;
  $page_home->comment = 0;
  $page_home->field_home_carousel_liste[LANGUAGE_NONE][0]['target_id'] = $article_nid1;
  $page_home->field_home_carousel_liste[LANGUAGE_NONE][1]['target_id'] = $article_nid2;
  
  $page_home->field_home_vignette_liste[LANGUAGE_NONE][0]['target_id'] = $article_nid3;
  $page_home->field_home_vignette_liste[LANGUAGE_NONE][1]['target_id'] = $article_nid4;
  $page_home->field_home_vignette_liste[LANGUAGE_NONE][2]['target_id'] = $article_nid5;
  $page_home->field_home_vignette_liste[LANGUAGE_NONE][3]['target_id'] = $event_nid1;
  $page_home->field_home_liste_taxo[LANGUAGE_NONE][0]['target_id'] = taxonomy_get_term_by_name('Actualité')->tid;
  
    $fc_home = entity_create('field_collection_item', array('field_name' => 'field_home_highlight'));
    $fc_home->setHostEntity('node', $page_home);
    $fc_home->field_home_fc_highlight_logo[LANGUAGE_NONE][0]['sid'] = _create_atom_from_imgname("picto-point1.png");
    $fc_home->field_home_fc_highlight_titre[LANGUAGE_NONE][0]['value'] = "Point 1";
    $fc_home->field_home_fc_highlight_texte[LANGUAGE_NONE][0]['value'] = "In tincidunt est sem, et finibus massa rhoncus non. Ut eget turpis neque.";
    $fc_home->field_home_fc_highlight_link[LANGUAGE_NONE][0]['url'] = "/";
    $fc_home->save();
  $page_home->field_home_highlight[LANGUAGE_NONE][0]['value'] = $fc_home->item_id;
  
    $fc_home = entity_create('field_collection_item', array('field_name' => 'field_home_highlight'));
    $fc_home->setHostEntity('node', $page_home);
    $fc_home->field_home_fc_highlight_logo[LANGUAGE_NONE][0]['sid'] = _create_atom_from_imgname("picto-point2.png");
    $fc_home->field_home_fc_highlight_titre[LANGUAGE_NONE][0]['value'] = "Point 2";
    $fc_home->field_home_fc_highlight_texte[LANGUAGE_NONE][0]['value'] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. ";
    $fc_home->field_home_fc_highlight_link[LANGUAGE_NONE][0]['url'] = "/";
    $fc_home->save();
  $page_home->field_home_highlight[LANGUAGE_NONE][1]['value'] = $fc_home->item_id;
 
    $fc_home = entity_create('field_collection_item', array('field_name' => 'field_home_highlight'));
    $fc_home->setHostEntity('node', $page_home);
    $fc_home->field_home_fc_highlight_logo[LANGUAGE_NONE][0]['sid'] = _create_atom_from_imgname("picto-point3.png");
    $fc_home->field_home_fc_highlight_titre[LANGUAGE_NONE][0]['value'] = "Point 3";
    $fc_home->field_home_fc_highlight_texte[LANGUAGE_NONE][0]['value'] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Ut eget turpis neque.";
    $fc_home->field_home_fc_highlight_link[LANGUAGE_NONE][0]['url'] = "/";
    $fc_home->save();
  $page_home->field_home_highlight[LANGUAGE_NONE][2]['value'] = $fc_home->item_id;
  node_save($page_home);
  $page_home = $page_home->nid;
  
}

function _create_atom_from_imgname($img_name){
  $atom_title = str_replace("_", " ", $img_name);
  $atom_title = str_replace("-", " - ", $atom_title);
  $atom_title = str_replace(".jpg", "", $atom_title);
  $atom_title = str_replace(".png", "", $atom_title);
  
  $atom_data = array( 'title' => $atom_title, 'creator' => "admin" );
  return _create_atom($img_name, $atom_data, 'image');
}

function _create_atom_from_docname($doc_name){
  $atom_title = str_replace("_", " ", $doc_name);
  $atom_title = str_replace("-", " - ", $atom_title);
  $atom_title = str_replace(".pdf", "", $atom_title);
  $atom_title = str_replace(".doc", "", $atom_title);
  
  $atom_data = array( 'title' => $atom_title, 'creator' => "admin" );
  return _create_atom($doc_name, $atom_data, 'file');
}

function _get_file ($file_path, $file_name)
{
  $file = $file_path . $file_name;

  if (@fopen($file, 'r'))
  {
    $content = file_get_contents($file);
    if (strcmp(substr($content, 0, 15), 'File not found:') != 0)
    {
      return $content;
    }
  }

  return FALSE;
}
  
/**
* Créé un nouvel atome Scald et renvoie son identifiant SID
* @param $file_name - String[] : le nom du fichier
* @param $atom_data - String[] : les informations nécessaires à la création de l'atome
* @param $file_type - String : le type de l'atome à créer (@see FILE_TYPE_FILE ou @see FILE_TYPE_IMAGE)
* @return int : le SID de l'atome créé ; -1 si un problème est survenu
**/
function _create_atom($file_name, $atom_data, $file_type)
{
  $sid = NULL;
  $scald_type = NULL;

  // Récupération du fichier physique
  $file = _get_file(drupal_get_path('profile', 'soclelab'), $file_name);
  if (!$file) {
    return null; //throw new AtomCreationException(AtomCreationException::FILE_NOT_FOUND_ERROR);
  }

  $file_pointer = NULL;
  if (strcmp($file_type, 'image') == 0) {
    if (!($file_pointer = file_save_data($file, "public://thumbnails/image/" . $file_name, FILE_EXISTS_REPLACE))) // Copie dans le système de fichiers Drupal
    {
      return null; //throw new AtomCreationException(AtomCreationException::FILE_COPY_ERROR);
    }
  } else {
    if (!($file_pointer = file_save_data($file, "public://atoms/files/" . $file_name, FILE_EXISTS_REPLACE)))  // Copie dans le système de fichiers Drupal
    {
      return null; //throw new AtomCreationException(AtomCreationException::FILE_COPY_ERROR);
    }
  }

  $file_pointer->display = 1; // Remplit le champs "scald_file_display"

  return _create_scald_atom($file_type, $atom_data, $file_pointer);
}

function _create_scald_atom($scald_type, $atom_data, $file)
{
  $atom = new scaldAtom($scald_type, 'scald_' . $scald_type);
  $atom->title = $atom_data['title'];         // @see scald_file.module
  $atom->base_id = $file->fid;                                // @see scald_file.module
  $atom->description = NULL;
  $atom->format = NULL;
  $atom->publisher = $atom_data['creator'];
  if (strcmp($scald_type, 'image') == 0)
  {
    $atom->scald_thumbnail[LANGUAGE_NONE][0] = (array) $file;
    scald_image_scald_fetch($atom, 'atom');
  }
  else
  {
    $atom->scald_file[LANGUAGE_NONE][0] = (array) $file;             // @see scald_file.module        Affiche l'atome dans le provider Scald
    scald_file_scald_fetch($atom, 'atom');
  }

  $sid = scald_atom_save($atom);

  return $sid;
}



