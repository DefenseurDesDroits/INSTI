<?php
/** *
 * Variables:
 * - $css: An array of CSS files for the current page.
 * - $language: (object) The language the site is being displayed in.
 *   $language->language contains its textual representation.
 *   $language->dir contains the language direction. It will either be 'ltr' or
 *   'rtl'.
 * - $rdf_namespaces: All the RDF namespace prefixes used in the HTML document.
 * - $grddl_profile: A GRDDL profile allowing agents to extract the RDF data.
 * - $head_title: A modified version of the page title, for use in the TITLE
 *   tag.
 * - $head_title_array: (array) An associative array containing the string parts
 *   that were used to generate the $head_title variable, already prepared to be
 *   output as TITLE tag. The key/value pairs may contain one or more of the
 *   following, depending on conditions:
 *   - title: The title of the current page, if any.
 *   - name: The name of the site.
 *   - slogan: The slogan of the site, if any, and if there is no title.
 * - $head: Markup for the HEAD section (including meta tags, keyword tags, and
 *   so on).
 * - $styles: Style tags necessary to import all CSS files for the page.
 * - $scripts: Script tags necessary to load the JavaScript files and settings
 *   for the page.
 * - $page_top: Initial markup from any modules that have altered the
 *   page. This variable should always be output first, before all other dynamic
 *   content.
 * - $page: The rendered page content.
 * - $page_bottom: Final closing markup from any modules that have altered the
 *   page. This variable should always be output last, after all other dynamic
 *   content.
 * - $classes String of classes that can be used to style contextually through
 *   CSS.
 *
 */
?>
<!DOCTYPE html>
<html lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>">
<head>
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <?php print $head; ?>
  <title><?php print $head_title; ?></title>
  <?php print $styles; ?>
  <!-- HTML5 element support for IE6-8 -->
  <!--[if lt IE 9]>
    <script src="//html5shiv.googlecode.com/svn/trunk/html5.js"></script>
    <link rel="stylesheet" type="text/css" media="all" href="/sites/default/themes/soclelab_ddd/css/ie-style.css" />
  <![endif]-->
<script type="text/javascript" src="https://core.xvox.fr/Clients/DEFENSEURDESDROITS/core/xvox.min.js"></script>
<link rel="stylesheet" type="text/css" href="https://core.xvox.fr/Clients/DEFENSEURDESDROITS/design/player.css" />
<?php print $scripts; ?>
  <noscript>
    <style>li.expanded.dropdown:hover > .dropdown-menu{ display: block; }</style>
  </noscript>
</head>
<body class=" <?php print $classes; ?> <?php print "lang-" . getCurLang(); ?>" <?php print $attributes;?> <?php print $content_attributes; ?>>
  <div id="top-link">
    <a href="#page-menu" class="element-invisible element-focusable"><?php print t('Skip to menu'); ?></a>
    <?php if(drupal_is_front_page()) {?>
      <a href="#page-main" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
    <?php }else{ ?>
      <a href="#page-main" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
    <?php } ?>
    <a href="#dd-recherche-form" class="element-invisible element-focusable"><?php print t('Skip to search'); ?></a>
    <a href="#page-footer" class="element-invisible element-focusable"><?php print t('Skip to footer'); ?></a>
  </div>
  <?php print $page_top; ?>
  <?php print $page; ?>
  <?php print $page_bottom; ?>
  <script type="text/javascript" src="/sites/default/themes/soclelab_ddd_v2/js/high_contrast.js"></script>
</body>
</html>