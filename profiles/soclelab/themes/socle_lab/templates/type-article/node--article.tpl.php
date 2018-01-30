<?php if ($view_mode == "full") { ?>
<?php /******************************************************************************************************/
/*                          FULL : CONTENU COMPLET                                                          */
/************************************************************************************************************/ ?>
<article class="<?php print $classes; ?> node-vm-full clearfix" <?php print $attributes; ?>>
  <?php if (isset($node->field_article_logo['und'][0]['sid'])) { ?>
    <div class="node-logo logo-article">
      <?php print slutil_get_img($node->field_article_logo['und'][0]['sid'], "article_full");  ?>
      <div class="overlay-legend">
        <?php print slutil_get_imglegend($node->field_article_logo['und'][0]['sid']) ;?>
        <div class="bg-legende-image"></div>
      </div>
    </div>
  <?php } ?>

  <div class="date-type-article clearfix">
    <?php if( isset($node->field_article_type['und'][0]['tid'])){ ?>
      <div class="node-type type-article text-em">
        <?php $list_taxo = slutil_get_list_tid($node->field_article_type['und'][0]['tid']); ?>
        <?php $i=0; ?>
        <?php foreach ($list_taxo[1] as $current_taxo_link => $current_taxo) { ?>
          <?php print $current_taxo; ?> 
          <?php $i=$i+1; if(count($list_taxo[1])> $i){ print " - "; }?>
        <?php }?>
      </div>
    <?php } ?>
    <?php if (isset($node->field_article_date['und'][0]['value'])) { ?>
      <div class="node-date date-article text-em">
        <?php print format_date(strtotime($node->field_article_date['und'][0]['value']), 'socle_long'); ?>
      </div>
    <?php } ?>
  </div>
  
  <h1 class="text-em"><?php print $title; ?></h1>
  
  <?php if (isset($content["field_article_descriptif"])) { ?>
    <div class="node-chapo chapo-article text-em">
      <?php print render($content["field_article_descriptif"]); ?>
    </div>
  <?php } ?>
  
  <?php if (isset($content["field_article_body"])) { ?>
    <div class="node-body body-article text-riche text-em">
      <?php print render($content["field_article_body"]); ?>
    </div>
  <?php } ?>
  
  <?php if (isset($content["field_article_document"])) { ?>
    <div class="node-document document-article">
      <?php print render($content["field_article_document"]); ?>
    </div>
  <?php } ?>
  
  <?php if (isset($content["field_article_video"])) { ?>
    <div class="node-video video-article">
      <?php print render($content["field_article_video"]); ?>
    </div>
  <?php } ?>
  
  <?php if (isset($content["field_article_galerie"])) { ?>
    <div class="node-galerie galerie-article">
      <?php print drupal_render($content["field_article_galerie"]); ?>
    </div>
  <?php } ?>
  
  <?php if( isset($node->field_article_theme['und'][0]['tid'])){ ?>
    <div class="node-theme theme-article text-em">
      <div class="bloc-title text-em">
        <?php print t("Themes"); ?>
      </div>
      <?php foreach ($node->field_article_theme['und'] as $key => $cur_tid) { ?>
        <?php $link_taxo = slutil_get_taxo_link($cur_tid['tid']); ?> 
        <a href="<?php print $link_taxo['url']; ?>" title="<?php print $link_taxo['title']; ?>" class="theme-link"><?php print $link_taxo['name']; ?></a>
      <?php }?>
    </div>
  <?php } ?>
  
  <?php if (isset($content["field_article_ctasso"])) { ?>
    <div class="node-ctasso ctasso-article">
      <div class="bloc-title text-em">
        <?php print t("Related content"); ?>
      </div>
      
      <?php foreach ($node->field_article_ctasso['und'] as $key => $node_asso) { ?>
        <?php if(isset($node_asso['target_id'])) { ?>
          <?php $current_node = node_load(getNidTrad($node_asso['target_id'])); ?>
          <?php if (isset($current_node)) { ?>
            <?php $node_to_show = node_view($current_node, "search_result"); ?>
            <?php print drupal_render($node_to_show); ?>
          <?php } ?>
        <?php } ?>
      <?php } ?>
    </div>
  <?php } ?>
  
  <?php global $user; ?>
  <?php if (isset($user->roles) && (in_array('administrator', array_values($user->roles)) || in_array('contributeur', array_values($user->roles)) ) ) { ?>
    <div class="unpublish admin-info">
      <?php if(isset($node->created)) { ?>
        <div class="node-created inline-field">
          <div class="field-label-bo"><?php print t("Creation date:"); ?></div>
          <div class="field-value"><?php print format_date(intval($node->created), 'court'); ?></div>
        </div>
      <?php } ?>
      <?php if(isset($node->changed)) { ?>
        <div class="node-modified inline-field">
          <div class="field-label-bo"><?php print t("Date of last update:"); ?></div>
          <div class="field-value"><?php print format_date(intval($node->changed), 'court'); ?></div>
        </div>
      <?php } ?>
    </div>
  <?php } ?>
  
</article>





<?php } elseif ($view_mode == "vignette_accueil") { ?>
<?php /******************************************************************************************************/
/*                          VIGNETTE DE LA PAGE D'ACCUEIL                                                   */
/************************************************************************************************************/ ?>
<article class="<?php print $classes; ?> vignette-accueil col-xs-12 col-sm-6 col-md-6 col-lg-6" <?php print $attributes; ?>>
  
  <?php if (isset($node->field_article_logo['und'][0]['sid'])) { ?>
    <div class="vignette-logo logo-article">
      <a href="<?php print $node_url; ?>" title="<?php print $node_url_title; ?>">
        <?php print slutil_get_img($node->field_article_logo['und'][0]['sid'], "article_vignette_home");  ?>
      </a>
    </div>
  <?php } ?>
  
  <div class="vignette-title title-article text-em">
    <a href="<?php print $node_url; ?>" title="<?php print $node_url_title; ?>"><?php print $title; ?></a>
  </div>
  
  <?php if (false && isset($content["field_article_date"])) { ?>
    <div class="vignette-date date-article text-em">
      <?php print drupal_render($content["field_article_date"]); ?>
    </div>
  <?php } ?>
  
  <?php if (isset($node->field_article_descriptif) && isset($node->field_article_body)) { ?>
    <div class="vignette-chapo chapo-article text-em">
      <?php print slutil_get_txtvignette($node->field_article_descriptif, $node->field_article_body, 200); ?>
    </div>
  <?php } ?>
  
  <a class="link-more" href="<?php print $node_url; ?>" title="<?php print $node_url_title; ?>"><?php print t("Read more"); ?></a>
</article>





<?php } elseif ($view_mode == "liste_accueil") { ?>
<?php /******************************************************************************************************/
/*                          VIGNETTE DANS LES LISTES DE TAXONOMIE DE L'ACCUEIL                              */
/************************************************************************************************************/ ?>
<article class="<?php print $classes; ?>" <?php print $attributes; ?>>
  
  <?php if (isset($node->field_article_logo['und'][0]['sid'])) { ?>
    <a class="logo-article liste-accueil-logo" href="<?php print $node_url; ?>" title="<?php print $node_url_title; ?>">
      <?php print slutil_get_img($node->field_article_logo['und'][0]['sid'], "taxo_vignette_home");  ?>
    </a>
  <?php } ?>
  
  <div class="vignette-title title-article text-em">
    <a href="<?php print $node_url; ?>" title="<?php print $node_url_title; ?>"><?php print $title; ?></a>
  </div>
  
  <?php if (isset($content["field_article_date"])) { ?>
    <div class="vignette-date date-article text-em">
      <?php print drupal_render($content["field_article_date"]); ?>
    </div>
  <?php } ?>
      
  <?php if (isset($node->field_article_descriptif) && isset($node->field_article_body)) { ?>
    <div class="vignette-chapo chapo-event text-em">
      <?php print slutil_get_txtvignette($node->field_article_descriptif, $node->field_article_body, 200); ?>
    </div>
  <?php } ?>
  
  <a class="link-more" href="<?php print $node_url; ?>" title="<?php print $node_url_title; ?>"><?php print t("Read more"); ?></a>
</article>





<?php } elseif ($view_mode == "vignette_sidebar") { ?>
<?php /******************************************************************************************************/
/*                          VIGNETTE DANS LA SIDEBAR                                                        */
/************************************************************************************************************/ ?>
<article class="<?php print $classes; ?>" <?php print $attributes; ?>>
  <div class="row">
    <div class="col-xs-4 col-sm-5 col-md-4 col-lg-3">
      <?php if (isset($node->field_article_logo['und'][0]['sid'])) { ?>
        <div class="sidebar-logo logo-article">
          <a href="<?php print $node_url; ?>" title="<?php print $node_url_title; ?>">
            <?php print slutil_get_img($node->field_article_logo['und'][0]['sid'], "sidebar_article");  ?>
          </a>
        </div>
      <?php } ?>
    </div>
  
    <div class="col-xs-8 col-sm-7 col-md-8 col-lg-9">
      <div class="sidebar-title title-article text-em">
        <a href="<?php print $node_url; ?>" title="<?php print $node_url_title; ?>"><?php print $title; ?></a>
      </div>
      
      <?php if (isset($node->field_article_descriptif) && isset($node->field_article_body)) { ?>
        <div class="sidebar-chapo chapo-event text-em">
          <?php print slutil_get_txtvignette($node->field_article_descriptif, $node->field_article_body, 100); ?>
        </div>
      <?php } ?>
    </div>
  </div>
</article>





<?php } elseif ($view_mode == "vignette_carousel") { ?>
<?php /******************************************************************************************************/
/*                          VIGNETTE DU CARROUSEL DE L'ACCUEIL                                              */
/************************************************************************************************************/ ?>
<article class="<?php print $classes; ?>" <?php print $attributes; ?>>
  
  <?php if (isset($node->field_article_logo['und'][0]['sid'])) { ?>
    <div class="carousel-logo logo-article">
      <div class="big-img-slide hidden-xs visible-sm visible-md visible-lg">
        <?php print slutil_get_img($node->field_article_logo['und'][0]['sid'], "article_carousel_home");  ?>
      </div>
      <div class="small-img-slide visible-xs hidden-sm hidden-md hidden-lg">
        <?php print slutil_get_img($node->field_article_logo['und'][0]['sid'], "home_slider_mobile");  ?>
      </div>
    </div>
  <?php } ?>
  
  <div class="container">
    <div class="carousel-text">
      <div class="bg-slider"></div>
      <div class="carousel-title carousel-article text-em">
        <a href="<?php print $node_url; ?>" title="<?php print $node_url_title; ?>"><?php print $title; ?></a>
      </div>
      
      <?php if (false && isset($content["field_article_date"])) { ?>
        <div class="carousel-date date-article text-em">
          <?php print drupal_render($content["field_article_date"]); ?>
        </div>
      <?php } ?>
    
      <?php if (isset($node->field_article_descriptif) && isset($node->field_article_body)) { ?>
        <div class="carousel-chapo chapo-event text-em"><?php print slutil_get_txtvignette($node->field_article_descriptif, $node->field_article_body, 200); ?></div>
      <?php } ?>
      
      <?php if( isset($node->field_article_type['und'][0]['tid'])){ ?>
        <div class="carousel-type text-em">
          <?php $list_taxo = slutil_get_list_tid($node->field_article_type['und'][0]['tid']); ?>
          <?php $i=0; ?>
          <?php foreach ($list_taxo[1] as $current_taxo_link => $current_taxo) { ?>
            <?php print $current_taxo; ?> 
            <?php $i=$i+1; if(count($list_taxo[1])> $i){ print " - "; }?>
          <?php }?>
        </div>
      <?php } ?>
    </div>
  </div>
  
</article>





<?php } elseif ($view_mode == "search_result") { ?>
<?php /******************************************************************************************************/
/*                          VIGNETTE DANS UN RESULTAT DE RECHERCHE                                          */
/************************************************************************************************************/ ?>
<article class="<?php print $classes; ?> search-result" <?php print $attributes; ?>>
  <div class="row">
    <div class="col-xs-12 col-sm-5 col-md-4 col-lg-4">
      <?php if (isset($node->field_article_logo['und'][0]['sid'])) { ?>
        <div class="search-logo logo-article">
          <a href="<?php print $node_url; ?>" title="<?php print $node_url_title; ?>">
            <?php print slutil_get_img($node->field_article_logo['und'][0]['sid'], "search_article");  ?>
          </a>
        </div>
      <?php } ?>
    </div>
  
    <div class="col-xs-12 col-sm-7 col-md-8 col-lg-8 search-content-part">
      
      <div class="search-title title-article text-em">
        <a href="<?php print $node_url; ?>" title="<?php print $node_url_title; ?>"><?php print $title; ?></a>
      </div>
      
      <?php if (isset($content["field_article_date"])) { ?>
        <div class="search-date date-article text-em">
          <?php print drupal_render($content["field_article_date"]); ?>
        </div>
      <?php } ?>
      
      <?php if (isset($node->field_article_descriptif) && isset($node->field_article_body)) { ?>
        <div class="search-chapo chapo-event text-em">
          <?php print slutil_get_txtvignette($node->field_article_descriptif, $node->field_article_body, 200); ?>
        </div>
      <?php } ?>
      
      <?php if( isset($node->field_article_type['und'][0]['tid'])){ ?>
        <div class="search-type text-em">
          <?php $list_taxo = slutil_get_list_tid($node->field_article_type['und'][0]['tid']); ?>
          <?php $i=0; ?>
          <?php foreach ($list_taxo[1] as $current_taxo_link => $current_taxo) { ?>
            <?php print $current_taxo; ?> 
            <?php $i=$i+1; if(count($list_taxo[1])> $i){ print " - "; }?>
          <?php }?>
        </div>
      <?php } ?>
    </div>
  </div>
</article>
<?php } ?>








