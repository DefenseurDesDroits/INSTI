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
      <?php if (drupal_is_front_page()) { ?><h1><?php } ?>
        <a href="<?php print $front_page; ?>" title="<?php print slutil_encode_title(t("Display the homepage of the site") . " " . $site_name); ?>">
          <img src="<?php print $logo; ?>" alt="<?php print slutil_encode_title($site_name); ?>" />
        </a>
      <?php if (drupal_is_front_page()) { ?></h1><?php } ?>
    </div>
    <a class="glyphicon glyphicon-th-list visible-xs hidden-sm hidden-md hidden-lg" data-toggle="collapse" data-parent="#page-header" href="#collapse-main-menu" aria-expanded="true" aria-controls="collapse-main-menu"></a>
    
    <div id="collapse-main-menu" class="panel-collapse collapse" role="tabpanel" aria-labelledby="heading-main-menu">
      <?php print render($page['header']); ?>
    </div>
  </div>
</header>

<section class="" id="page-highlighted-banner">
  <?php print render($page['highlighted_banner']); ?>
</section>

<section class="" id="page-highlighted">
  <div class="container">
    <?php print render($page['highlighted']); ?>
    <?php print $messages; ?>
    
    <?php if (!empty($tabs)): ?>
      <?php print render($tabs); ?>
    <?php endif; ?>
  </div>
</section>

<div class="main-container container" id="page-main-content">
  <div class="row">
    <section class="col-xs-12 col-sm-8 col-md-8 col-lg-8">
      <?php print render($page['content']); ?>
    </section>
    
    <aside class="col-sm-12 col-sm-4 col-md-4 col-lg-4" role="complementary">
      <?php print render($page['sidebar']); ?>
    </aside>
  </div>
</div>

<section class="container" id="page-baspage">
  <?php print render($page['baspage']); ?>
</section>

<footer class="footer" id="page-footer">
  <div class="container">
    <?php print render($page['footer']); ?>
  </div>
</footer>
