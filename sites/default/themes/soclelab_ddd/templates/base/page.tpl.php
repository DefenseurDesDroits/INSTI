<?php
/**
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path, when linking to the front page. This includes the language domain or prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 */
?>

<header role="banner" id="page-header">
  <div class="container">
    <div class="logo-site">
      <?php if (!drupal_is_front_page()) { ?><h1>
        <a href="<?php print $front_page; ?>" title="<?php print slutil_encode_title(t("Display the homepage of the site") . " " . $site_name); ?>">
      <?php } ?>
          <img src="<?php print $logo; ?>" alt="<?php print slutil_encode_title($site_name); ?>" />
      <?php if (!drupal_is_front_page()) { ?>
        </a>
      </h1>
      <?php } ?>
    </div>
    <a class="glyphicon glyphicon-th-list visible-xs hidden-sm hidden-md hidden-lg" data-toggle="collapse" data-parent="#page-header" href="#collapse-main-menu" aria-expanded="true" aria-controls="collapse-main-menu">
      <span class="element-invisible">Afficher / Masquer le menu</span>
    </a>
    
    <div id="collapse-main-menu" class="panel-collapse collapse">
      <?php print render($page['header']); ?>
    </div>
  </div>
</header>

<main role="main">
  <?php $reg_highlighted_banner = render($page['highlighted_banner']); ?>
  <?php if ($reg_highlighted_banner != "") { ?>
  <section class="" id="page-highlighted-banner">
    <?php print $reg_highlighted_banner; ?>
  </section>
  <?php } ?>
  
  <?php $reg_highlightedr = render($page['highlighted']); ?>
  <?php if ($reg_highlightedr != "") { ?>
  <section class="" id="page-highlighted">
    <div class="container">
      <?php print $reg_highlightedr; ?>
      <?php print $messages; ?>
      
      <?php if (!empty($tabs)): ?>
        <?php print render($tabs); ?>
      <?php endif; ?>
    </div>
  </section>
  <?php } ?>
  
  <section class="main-container container" id="page-main-content">
    <?php print render($page['content']); ?>
  </section>
  
  <section class="" id="page-baspage">
    <?php print render($page['baspage']); ?>
  </section>
</main>

<footer class="footer" id="page-footer" role="contentinfo">
  <div class="footer-before">
    <div class="container">
      <?php print render($page['footer_before']); ?>
    </div>
  </div>
  <div class="footer-content">
    <div class="container">
      <div class="row">
        <?php print render($page['footer']); ?>
      </div>
    </div>
  </div>
  <div class="footer-after">
    <div class="container">
      <?php print render($page['footer_after']); ?>
    </div>
  </div>
</footer>
