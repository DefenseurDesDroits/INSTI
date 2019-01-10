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
global $language;
$path_saisir = translation_path_get_translations('node/23436');
?>

<header class="header container-wrapper" role="banner">
  <div class="container-fluid">
    <div class="row">
      <div class="col-sm-12 col-md-12">
        <div class='header-top'>
          <div class="row">
            <div class="col-sm-6 col-lg-4 col-lg-push-4">
              <div class="row"><div class="header-top-left">
                <ul><li><span><?php print t('You have a question? Call'); ?> <strong><a href="tel:0969390000" aria-describedby="info-tel"><?php print t('09 69 39 00 00'); ?><sup>*</sup></a></strong></span></li>
				<li><span><a href="/<?php print $language->language; ?>/<?php print drupal_get_path_alias('faq', $language->language);?>"><?php print t('Need help ?') ?></a></span></li></ul>
              </div></div>
			</div>
			<div class="col-sm-6 col-lg-4 col-lg-push-4">
			  <div class="row"><div class="header-top-right">
			   <?php print render($page['header_language']); ?>
			   </div>
			 </div>
            </div>
          </div>
        </div> <!-- header-top -->
        <div class="header-bottom">
          <div class="row">
            <div class="col-sm-8 col-md-8">
                <div class="navbar navbar-default">
                  <div class="navbar-header">
                    <div class="col-xs-2 hidden-sm hidden-md">
                      <button type="button" class="navbar-toggle collapsed" data-toggle="collapse" data-target="#myNavbar">
                        <span class="icon-bar top-bar"></span>
                        <span class="icon-bar middle-bar"></span>
                        <span class="icon-bar bottom-bar"></span>
                      </button>
                    </div>
                    <div class="col-xs-8 hidden-sm hidden-md hidden-lg">
                      <a href="/" class="logo-mobile"><img alt="Défenseur des droits - République Française" src="/sites/default/themes/soclelab_ddd_v2/img/header/home-header-logo-mobile.png"/></a>
                    </div>
                    <div class="col-xs-2">
                      <p class="navbar-brand">
                        <a href="#" id="loupe" class="btn-recherche" aria-label="Afficher le formulaire de recherche" role="button"><i id="loupe-search" class="fa fa-search" aria-hidden="true"></i><i id="responsiv-close" class="fa fa-close hidden"></i></a>
                      </p>
                    </div>
                  </div>
                  <div class="collapse navbar-collapse" id="myNavbar">
                    <div class="btn-droits-2">
                      <a href="/saisir"><?php print t('Seizing the Rights Defender')?></a>
                    </div>
                    <nav role="navigation" id="page-menu">
                    <?php print render($page['header']); ?>
                    </nav>
                    <div class="txt-num-menu">
                      <?php print t('You have a question?'); ?>
                      <br>
                      <?php print t('Call'); ?> <strong><?php print t('09 69 39 00 00'); ?><sup>*</sup></strong>
                      <div class="num-vert-menu"><a href="tel:0969390000"><img src="/sites/default/themes/soclelab_ddd_v2/img/accueil/num-vert-menu.png" /></a></div>
                      <div class="horaires-standart"><sup>*</sup><?php print t('Monday to Friday, 8:30AM to 7:30PM (local call cost from France)'); ?></div>
                      <hr>
                      <div class="call-menu-footer">
                        <?php $menu = menu_navigation_links('menu-footer-menu-v2');
                        print theme('links__menu_footer_menu_v2', array('links' => $menu));?>
                      </div>
                      <div class="faq-presse-langue">
                        <?php print render($page['header_language']); ?>
                      </div>
                    </div>
                  </div>
                </div>
            </div>
            <div class="col-sm-4 col-md-4">
              <div class="btn-droits">
                <a href="/<?php print $language->language; ?>/<?php print drupal_get_path_alias('saisir', $language->language);?>"><?php print t('File a claim')?></a>
              </div>
            </div>
          </div>
        </div>
        <!-- header-bottom -->
      </div>
    </div>
      <?php print render($page['header_second']); ?>
  </div> <!-- header -->
</header>
<?php print $messages; ?>
<!-- Pouvons-nous vous aider ? -->
<main id="page-main" role="main">
  <div class="main-content container-wrapper" <?php if(isset($url_image_bandeau)){ print 'style="background-image: url('.$url_image_bandeau.');"';} ?>>
    <div class="container-fluid">
      <div class="col-md-12">
        <div class="logo"><img alt="Défenseur des droits - République Française" src="<?=$logo?>" /></div>
        <div class="title-home-hide"><h1>Défenseur des Droits</h1></div>
      </div>
      <div class="col-md-12">
        <div class="slogan"><?php print $site_slogan; ?></div>
      </div>
      <div class="col-md-12">
        <div class="row">
          <?php print render($page['before_content']); ?>
        </div>
      </div>
    </div>
  </div>
</main>

<div class="content container-wrapper">
  <?php print render($page['content']); ?>
</div>
<?php if (!empty($page['actualites'])): ?>
<div class="actualites container-wrapper">
    <?php print render($page['actualites']); ?>
</div>

<?php endif; ?>

<?php if (!empty($page['faq'])): ?>
<div class="faq container-wrapper">
  <div class="container-fluid">
    <?php print render($page['faq']); ?>
  </div>
</div>
<?php endif; ?>

<?php print render($page['footer']); ?>
<footer id="page-footer" role="contentinfo">
  <div class="footer container-wrapper">
    <div class="container-fluid">
      <div class="row">
        <div class="col-sm-12 col-md-4 col-lg-4">
          <?php print render($page['footer_first']); ?>
        </div>
        <div class="col-sm-12 col-md-8 col-lg-8">
          <?php print render($page['footer_second']); ?>
        </div>
      </div>
      <div class="row border-footer">
        <div class="col-sm-12 col-md-4 col-lg-4">
          <?php print render($page['footer_third']); ?>
        </div>
        <div class="col-sm-12 col-md-4 col-lg-4">
          <?php print render($page['footer_fourth']); ?>
        </div>
        <div class="col-sm-12 col-md-4 col-lg-4">
          <?php print render($page['footer_fifth']); ?>
        </div>
      </div>
      <div class="row">
        <div class="col-sm-12 col-md-12 col-lg-12">
          <?php print render($page['footer_sixth']); ?>
        </div>
      </div>
    </div>
  </div>
  <div class="page-bottom container-wrapper">
    <div class="container-fluid">
      <div class="row">
        <div class="col-sm-4 col-md-3 col-lg-3">
          <p><?php print t("© Defenseur des droits ".date("Y"))?></p>
         <?php //print render($page['page_bottom_first']); ?>
        </div>
        <div class="col-sm-9 col-md-9 col-lg-9">
          <?php print render($page['page_bottom_second']); ?>
        </div>
      </div>
    </div>
  </div>
</footer>
