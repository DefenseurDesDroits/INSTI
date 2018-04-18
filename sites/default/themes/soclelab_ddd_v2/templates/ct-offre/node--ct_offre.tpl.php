<?php

/**
 * @file
 * Bartik's theme implementation to display a node.
 *
 * Available variables:
 * - $title: the (sanitized) title of the node.
 * - $content: An array of node items. Use render($content) to print them all,
 *   or print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $user_picture: The node author's picture from user-picture.tpl.php.
 * - $date: Formatted creation date. Preprocess functions can reformat it by
 *   calling format_date() with the desired parameters on the $created variable.
 * - $name: Themed username of node author output from theme_username().
 * - $node_url: Direct URL of the current node.
 * - $display_submitted: Whether submission information should be displayed.
 * - $submitted: Submission information created from $name and $date during
 *   template_preprocess_node().
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the
 *   following:
 *   - node: The current template type; for example, "theming hook".
 *   - node-[type]: The current node type. For example, if the node is a
 *     "Blog entry" it would result in "node-blog". Note that the machine
 *     name will often be in a short form of the human readable label.
 *   - node-teaser: Nodes in teaser form.
 *   - node-preview: Nodes in preview mode.
 *   The following are controlled through the node publishing options.
 *   - node-promoted: Nodes promoted to the front page.
 *   - node-sticky: Nodes ordered above other non-sticky nodes in teaser
 *     listings.
 *   - node-unpublished: Unpublished nodes visible only to administrators.
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * Other variables:
 * - $node: Full node object. Contains data that may not be safe.
 * - $type: Node type; for example, story, page, blog, etc.
 * - $comment_count: Number of comments attached to the node.
 * - $uid: User ID of the node author.
 * - $created: Time the node was published formatted in Unix timestamp.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the node. Increments each time it's output.
 *
 * Node status variables:
 * - $view_mode: View mode; for example, "full", "teaser".
 * - $teaser: Flag for the teaser state (shortcut for $view_mode == 'teaser').
 * - $page: Flag for the full page state.
 * - $promote: Flag for front page promotion state.
 * - $sticky: Flags for sticky post setting.
 * - $status: Flag for published status.
 * - $comment: State of comment settings for the node.
 * - $readmore: Flags true if the teaser content of the node cannot hold the
 *   main body content.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * Field variables: for each field instance attached to the node a corresponding
 * variable is defined; for example, $node->body becomes $body. When needing to
 * access a field's raw values, developers/themers are strongly encouraged to
 * use these variables. Otherwise they will have to explicitly specify the
 * desired field language; for example, $node->body['en'], thus overriding any
 * language negotiation rule that was previously applied.
 *
 * @see template_preprocess()
 * @see template_preprocess_node()
 * @see template_process()
 */
//print_r($node);
//print_r(scald_atom_load('4624'));
//print_r(file_create_url('public://thumbnails/image/istock-157725752.jpg'));
  global $language;
  $prev_url =  drupal_get_path_alias("node/" . $content['flippy_pager']['#list']['prev']['nid'], $language->language);
  $next_url =  drupal_get_path_alias("node/" . $content['flippy_pager']['#list']['next']['nid'], $language->language);
  $url = url(current_path(), array('absolute' => TRUE));
  $key_name = '';
  $domaine_institution = '';
  if(isset($node->field_article_keyword['und'][0])){
    foreach($node->field_article_keyword['und'] as $taxo_key){
      $term = taxonomy_term_load($taxo_key['tid']);
      $term_uri = taxonomy_term_uri($term); // get array with path
      $term_title = taxonomy_term_title($term);
      $term_path = $term_uri['path'];
      $key_name[] = l($term_title,$term_path, array('attributes' => array('title' => 'Articles traitant de ' . $term_title))); 
    }
  }
  $last_k = end(array_keys($key_name));
  if(isset($node->field_article_theme['und'][0])){
    foreach($node->field_article_theme['und'] as $taxo_key){
      $term = taxonomy_term_load($taxo_key['tid']);
      $term_uri = taxonomy_term_uri($term); // get array with path
      $term_title = taxonomy_term_title($term);
      $term_path = $term_uri['path'];
      $domaine[] = l($term_title,$term_path, array('attributes' => array('title' => 'Articles traitant de ' . $term_title))); 
    }
  }
  $last_d = end(array_keys($domaine));
?>
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="row">
    <div class="col-md-12">
      <div class="agenda">
        <?php if(isset($content['flippy_pager']['#list']['prev']['nid'])) : ?>
          <div class="prec-agenda col-xs-4 col-sm-4">
            <a href="/<?=$prev_url?>">
              <i class="fa fa-angle-left pict-agenda-left" aria-hidden="true"></i>
              <p class="prec"><?php print t('Prev Tools'); ?></p>
            </a>
          </div>
        <?php endif; ?>
        <div class="col-xs-4 col-sm-4">
          <div class="desc-articles">
            <?php print render($content['field_histoire']); ?>
          </div>
          <div class="date-display-single"><?php print render($content['field_article_date']); ?></div>
        </div>
        <?php if(isset($content['flippy_pager']['#list']['next']['nid'])) : ?>
          <div class="prec-agenda col-xs-4 col-sm-4">
            <a href="/<?=$next_url?>">
              <i class="fa fa-angle-right pict-agenda-right" aria-hidden="true"></i>
              <p class="prec"><?php print t('Next Tools'); ?></p>
            </a>
          </div>
        <?php endif; ?>
      </div>
      <?php if(isset($node->field_article_logo['und'])) : ?>
        <?php $atom = scald_atom_load($node->field_article_logo['und'][0]['sid']) ;
        ?> 
        <div class="tags-articles">
          <p class="domaines-articles"><?php print t("Domaine de compétence de l'institution"); ?> : 
          <?php foreach($domaine as $key => $d) : ?>
            <?php if($key == $last_d) : ?>
              <?php print $d; ?>
            <?php else : ?>
              <?php print $d; ?>, 
            <?php endif; ?>
          <?php endforeach; ?>
           I </p>
         <p class="mc-articles"><?php print t("Mots clés") ?> : 
         <?php foreach($key_name as $key => $k) : ?>
            <?php if($key == $last_k) : ?>
              <?php print $k; ?>
            <?php else : ?>
              <?php print $k; ?>, 
            <?php endif; ?>
          <?php endforeach; ?>
         </p>
      </div>
      <div class="img-articles">
        <div class="field field-name-field-article-logo field-type-atom-reference field-label-hidden"><div class="field-items"><div class="field-item even"><!-- scald=4624:full --><img typeof="foaf:Image" class="img-responsive" src="<?=$atom->rendered->file_transcoded_url; ?>" width="3000" height="1089"><div class="field field-name-field-scald-mediatheque field-type-list-boolean field-label-above"><div class="field-label">Mediatheque:&nbsp;</div><div class="field-items"><div class="field-item even">non</div></div></div><!-- END scald=4624 --></div></div></div>
      </div>
      <?php endif; ?>
      <div class="picto-link">
        <p class="social-networks"><a href="http://twitter.com/intent/tweet?status=<?=$title?>+<?=$url?>" target="_blank"><i class="fa fa-twitter" aria-hidden="true"></i><span class="element-invisible">Partager sur Twitter (nouvelle fenêtre)</span></a></p>
        <p class="social-networks"><a href="http://www.facebook.com/share.php?u=<?=$url?>&title=<?=$title?>" target="_blank"><i class="fa fa-facebook" aria-hidden="true"></i><span class="element-invisible">Partager sur Facebook (nouvelle fenêtre)</span></a></p>
        <p class="social-networks"><a href="mailto:subject=<?=$title ?>" target="_blank"><i class="fa fa-envelope-o" aria-hidden="true"></i><span class="element-invisible">Envoyer par mail (nouvelle fenêtre)</span></a></p>
        <p class="social-networks"><a href="javascript:window.print()" target="_blank"><i class="fa fa-print" aria-hidden="true"></i><span class="element-invisible">Imprimer l'article (nouvelle fenêtre)</span></a></p>
      </div>
      <div class="desc-articles">
        <?php print render($content['field_article_descriptif']); ?>
      </div>
      <div class="body-articles">
        <?php print render($content['body']); ?>
      </div>
      <div class="doc-articles">
      <div class="col-sx-12 col-sm-6 col-md-6">
      <?php if(isset($node->field_article_document['und'])) : ?>
        <?php foreach($node->field_article_document['und'] as $document) : ?>
          <?php
             $atom = scald_atom_load($document['sid']);
             $size = round($atom->base_entity->filesize / 1024);
             $title_size = $atom->rendered->title . ' (PDF - ' . $size . ' Ko)';
             $file = file_load($atom->file_source);
             $uri = $file->uri;
          ?>
          <div class="field field-name-field-article-document field-type-atom-reference field-label-hidden"><div class="field-items"><div class="field-item even"><img src="<?=$atom->rendered->thumbnail_source_url?>" class="scald-file-icon" alt="file type icon">
          <a href="<?=file_create_url($atom->file_source); ?>" title="<?=$title_size?>">
            <?=$atom->rendered->title?></a>
          </div></div></div>
        <?php endforeach; ?>
      <?php endif ?>
      </div>
      </div>
    </div>
  </div>
    <div class="content clearfix"<?php print $content_attributes; ?>>
      <?php
        // We hide the comments and links now so that we can render them later.

        hide($content['field_documents_associes']);
        hide($content['field_article_logo']);
        hide($content['field_article_document']);
        hide($content['comments']);
        hide($content['links']);
        hide($content['flippy_pager']);
        hide($content['language']);
        hide($content['field_page_image_accroche']);
        hide($content['field_article_type']);
        hide($content['field_article_keyword']);
        hide($content['field_article_tags_actualites']);
        hide($content['field_article_theme']);
        print render($content);
      ?>
    </div>
  </div>
</div>