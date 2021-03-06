<?php

/**
 * @file
 * Default theme implementation to display a term.
 *
 * Available variables:
 * - $name: (deprecated) The unsanitized name of the term. Use $term_name
 *   instead.
 * - $content: An array of items for the content of the term (fields and
 *   description). Use render($content) to print them all, or print a subset
 *   such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $term_url: Direct URL of the current term.
 * - $term_name: Name of the current term.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default values can be one or more of the following:
 *   - taxonomy-term: The current template type, i.e., "theming hook".
 *   - vocabulary-[vocabulary-name]: The vocabulary to which the term belongs to.
 *     For example, if the term is a "Tag" it would result in "vocabulary-tag".
 *
 * Other variables:
 * - $term: Full term object. Contains data that may not be safe.
 * - $view_mode: View mode, e.g. 'full', 'teaser'...
 * - $page: Flag for the full page state.
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 * - $zebra: Outputs either "even" or "odd". Useful for zebra striping in
 *   teaser listings.
 * - $id: Position of the term. Increments each time it's output.
 * - $is_front: Flags true when presented in the front page.
 * - $logged_in: Flags true when the current user is a logged-in member.
 * - $is_admin: Flags true when the current user is an administrator.
 *
 * @see template_preprocess()
 * @see template_preprocess_taxonomy_term()
 * @see template_process()
 *
 * @ingroup themeable
 */
?>
<?php // AFFICHAGE EN LISTE SUR LES TAXONMIE "TYPE DE CONTENU" ?>
<?php if(isset($view_actualites)): ?>
<?php print render($content['description']); ?>
<div id="taxonomy-term-<?php print $term->tid; ?>" class="<?php print $classes; ?>">
  <p class="txt-filter col-md-12"><?php print t('Filter results');?></p>
  <div class="col-md-12">
    <nav class="navbar navbar-default">
      <div class="container-fluid">
        <!-- Brand and toggle get grouped for better mobile display -->
        <div class="navbar-header">
          <button type="button" class="navbar-toggle collapsed" data-toggle="collapse" data-target="#bs-example-navbar-collapse-100" aria-expanded="false">
            <span class="sr-only">Toggle navigation</span>
            <i class="fa fa-chevron-right" aria-hidden="true"></i>
          </button>
          <p class="navbar-brand"><?php print t('All') ?></p>
        </div>
        <!-- Collect the nav links, forms, and other content for toggling -->
        <div class="collapse navbar-collapse" id="bs-example-navbar-collapse-100">
          <ul class="nav navbar-nav menu-taxo-vues">
		  <?php  foreach($menu as $m) : ?>
            <li role="presentation">
              <a href="<?=$m['path']?>" <?php print ($m['active'] == TRUE ? 'class="active"' : '')?>><?=$m['name']?></a>
            </li>
            <?php endforeach; ?> 
          </ul>
        </div>
      </div>
    </nav>
  </div>
</div>
  <?php if (!$page): ?>
    <h2><a href="<?php print $term_url; ?>"><?php print $term_name; ?></a></h2>
  <?php endif; ?>
  <div class="txt-resultats col-md-12"><?php print $count . t(' Result(s) for ') . '"' . $name . '"'; ?></div>
  <div class="row">
    <div class="col-md-12"><?php print $view_actualites->render(); ?></div>	
  </div>
</div>
<?php else : ?>
<div id="taxonomy-term-<?php print $term->tid; ?>" class="<?php print $classes; ?>">
  <?php if (!$page): ?>
    <h2><a href="<?php print $term_url; ?>"><?php print $term_name; ?></a></h2>
  <?php endif; ?>
   <div class="content">
    <?php print render($content); ?>
  </div>

</div>

<?php endif; ?>
