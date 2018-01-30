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
  global $language;
  $prev_url =  drupal_get_path_alias("node/" . $content['flippy_pager']['#list']['prev']['nid'], $language->language);
  $next_url =  drupal_get_path_alias("node/" . $content['flippy_pager']['#list']['next']['nid'], $language->language);
  $url = url(NULL, array('absolute' => TRUE));
  $key_name = '';
  $domaine_institution = '';
  if(isset($node->field_article_keyword['und'][0])){
    $term = taxonomy_term_load($node->field_article_keyword['und'][0]['tid']);
    $key_name = $term->name;
  }
  if(isset($node->field_article_theme['und'][0])){
    $term = taxonomy_term_load($node->field_article_theme['und'][0]['tid']);
    $domaine_institution = $term->name;
  }
?>
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="row">
    <div class="col-md-12">
      <div class="agenda">
      <?php if(isset($content['flippy_pager']['#list']['prev']['nid'])) : ?>
        <div class="prec-agenda col-xs-4 col-sm-4">
          <a href="/<?=$prev_url?>">
            <i class="fa fa-angle-left pict-agenda-left" aria-hidden="true"></i>
            <p class="prec"><?php print t('Prev Publications'); ?></p>
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
            <p class="prec"><?php print t('Next Publications'); ?></p>
          </a>
        </div>
      </div>
    <?php endif; ?>
      <div class="img-articles">
        <?php print render($content['field_article_logo']); ?>
      </div>
      <div class="picto-link">
        <p class="social-networks"><a href="http://twitter.com/intent/tweet?status=<?=$title?>+<?=$url?>"><i class="fa fa-twitter" aria-hidden="true"></i></a></p>
        <p class="social-networks"><a href="http://www.facebook.com/share.php?u=<?=$url?>&title=<?=$title?>"><i class="fa fa-facebook" aria-hidden="true"></i></a></p>
        <p class="social-networks"><a href="mailto:subject=<?=$title ?>"><i class="fa fa-envelope-o" aria-hidden="true"></i></a></p>
        <p class="social-networks"><a href="javascript:window.print()"><i class="fa fa-print" aria-hidden="true"></i></a></p>
      </div>
      <div class="desc-articles">
        <?php print render($content['field_article_descriptif']); ?>
      </div>
      <div class="body-articles">
        <?php print render($content['field_article_body']); ?>
      </div>
      <div class="doc-articles">
        <div class="col-sx-12 col-sm-6 col-md-6"><?php print render($content['field_article_document']); ?></div>
      </div>
    </div>
  </div>
    <div class="content clearfix"<?php print $content_attributes; ?>>
      <?php
        // We hide the comments and links now so that we can render them later.

        hide($content['field_documents_associes']);
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