<?php if ($view_mode == 'full'){ ?>
<?php 
/************************************************************************************************************/
/*                          AFFICHAGE COMPLET                                                               */
/************************************************************************************************************/
?>
<article class="<?php print $classes; ?> node-vm-full clearfix" <?php print $attributes; ?>>
  <?php if (isset($term->field_taxo_logo['und'][0]['sid'])) { ?>
    <div class="node-logo logo-article">
      <?php print slutil_get_img($term->field_taxo_logo['und'][0]['sid'], "article_full");  ?>
      <div class="overlay-legend">
        <?php print slutil_get_imglegend($term->field_taxo_logo['und'][0]['sid']) ;?>
        <div class="bg-legende-image"></div>
      </div>
    </div>
  <?php } ?>
  
  <h1 class="text-em"><?php print $term->name; ?></h1>
  
  <?php if (isset($content["description"])) { ?>
    <div class="node-body body-taxonomy text-riche text-em">
      <?php print render($content["description"]); ?>
    </div>
  <?php } ?>
    
  <?php $view_sub_taxo = slutil_embed_view('vue_taxonomy','block_taxonomy_sub', $term->tid); ?>
  <?php if ($view_sub_taxo) { ?>
    <div class="taxonomy-subtheme">
      <div class="bloc-title text-em">
        <?php print t("Sub-theme"); ?>
      </div>
      <div class="row">
        <?php print $view_sub_taxo; ?>
      </div>
    </div>
  <?php } ?>
  
  <?php $view_content_asso = slutil_embed_view('vue_publications','block_taxo_listcontent', $term->tid); ?>
  <?php if ($view_content_asso) { ?>
    <div class="taxonomy-ctasso">
      <div class="bloc-title text-em">
        <?php print t("Related content"); ?>
      </div>
      <?php print $view_content_asso; ?>
     </div>
  <?php } ?>
  
</article>

<?php } elseif ($view_mode == 'vignette_accueil') { ?>
<?php 
/************************************************************************************************************/
/*                          VIGNETTE DANS UNE TAXONOMY                                                      */
/************************************************************************************************************/
?>
<article class="<?php print $classes; ?> taxo-vm-vignettehome col-xs-12 col-sm-6 col-md-6 col-lg-6" <?php print $attributes; ?>>
  <?php $link_array = slutil_get_taxo_link($term->tid); ?>
  <?php if (isset($term->field_taxo_logo['und'][0]['sid'])) { ?>
    <div class="vignette-logo logo-term">
      <a href="<?php print $link_array['url']; ?>" title="<?php print $link_array['title']; ?>">
        <?php print slutil_get_img($term->field_taxo_logo['und'][0]['sid'], "article_vignette_home");  ?>
      </a>
    </div>
  <?php } ?>
  
  <div class="vignette-title title-term">
    <a href="<?php print $link_array['url']; ?>" title="<?php print $link_array['title']; ?>">
      <?php print $term->name; ?>
    </a>
  </div>
  
  <?php if (isset($term->description)) { ?>
    <div class="vignette-chapo chapo-term text-em">
      <?php print _filter_htmlcorrector( truncate_utf8(strip_tags($term->description, '<strong><em>'), 200, true, true) ); ?>
    </div>
  <?php } ?>
  
  <a class="link-more" href="<?php print $link_array['url']; ?>" title="<?php print $link_array['title']; ?>"><?php print t("Read more"); ?></a>
</article>

<?php } elseif ($view_mode == 'liste_accueil') { ?>
<?php 
/************************************************************************************************************/
/*                          LISTE DANS LA PAGE D'ACCUEIL                                                    */
/************************************************************************************************************/
?>
<?php $link_array = slutil_get_taxo_link($term->tid); ?>
  <?php if(isset($link_array['url'])) { ?>
    <div class="taxo-accueil">
      <div class="row">
        <div class="vignette-home-type title-term">
          <a href="<?php print $link_array['url']; ?>" title="<?php print $link_array['title']; ?>">
            <?php print $term->name; ?>
          </a>
        </div>
        <div class="col-xs-12 col-sm-12 col-md-12 col-lg-12">
          <?php if (false && isset($term->field_taxo_logo['und'][0]['sid'])) { ?>
            <a class="liste-accueil-logo" href="<?php print $link_array['url']; ?>" title="<?php print $link_array['title']; ?>">
              <?php print slutil_get_img($term->field_taxo_logo['und'][0]['sid'], "taxo_vignette_home");  ?>
            </a>
          <?php } ?>
        </div>
        <div class="col-xs-12 col-sm-12 col-md-12 col-lg-12">
          <?php print views_embed_view('vue_publications','block_liste_accueil', $term->tid); ?>
        </div>
      </div>
    </div>
  <?php } ?>
<?php } ?>