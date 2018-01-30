<?php if ($view_mode == "full") { ?>
<?php /******************************************************************************************************/
/*                          FULL : CONTENU COMPLET                                                          */
/************************************************************************************************************/ ?>
<div class="row">
  <article class="<?php print $classes; ?> node-vm-full clearfix" <?php print $attributes; ?>>
    <div class="col-md-12">
      <!-- <h1 class="text-em"><?php //print $title; ?></h1> -->
      <div class="node-decision">
        <?php if (isset($node->field_decision_nature_qualifiee)) {?>
            <?php print $node->field_decision_nature_qualifiee['und'][0]['value']; ?>
        <?php } ?>
      </div>

      <div class="node-decision">
        <?php if (isset($node->field_decision_author['und'][0]['tid'])) { ?>
          <?php foreach ($node->field_decision_author['und'] as $key => $cur_tid) { ?>
            <?php $link_taxo = slutil_get_taxo_link($cur_tid['tid']); ?>
            <?php print $link_taxo['name']; ?> | 
          <?php }?>
        <?php } ?>
        <?php if (isset($node->field_article_date['und'][0]['value'])) { ?>
          <?php print format_date(strtotime($node->field_article_date['und'][0]['value']), 'socle_long'); ?>
        <?php } ?>
      </div>

      <div class="node-decision">
        <?php if( isset($node->field_article_type['und'][0]['tid'])){ ?>
        <?php $link_taxo = slutil_get_taxo_link($node->field_article_type['und'][0]['tid']); ?>
        <?php 
          $taxo_name = $link_taxo['name'];
          if($taxo_name == "Décision") $taxo_name = "Décisions";
          else if($taxo_name == "Règlement amiable") $taxo_name = "Règlements amiables";
        ?>
        <a href="<?php print $link_taxo['url']; ?>" title="<?php print $link_taxo['title']; ?>">
          <?php print $taxo_name; ?>
        </a>
      </div>

      <div class="node-decision">
        <?php } ?>
        <?php $block_sharthis = module_invoke('sharethis', 'block_view', 'sharethis_block'); ?>
        <?php print render($block_sharthis['content']); ?>
      </div>

      <div class="node-decision">
        <?php if( isset($node->field_article_keyword['und'][0]['tid'])){ ?>
        <span class="bloc-inline-title"><?php print t("Keywords:"); ?></span>
        <?php foreach ($node->field_article_keyword['und'] as $key => $cur_tid) { ?>
          <?php $link_taxo = slutil_get_taxo_link($cur_tid['tid']); ?>
          <a href="<?php print $link_taxo['url']; ?>" title="<?php print $link_taxo['title']; ?>"><?php print $link_taxo['name']; ?></a>
        <?php }?>
      </div>

      <div class="node-decision">
        <?php } ?>
        <?php if( isset($node->field_article_theme['und'][0]['tid'])){ ?>
          <span class="bloc-inline-title"><?php print t("Institution's competence:"); ?></span>
          <?php foreach ($node->field_article_theme['und'] as $key => $cur_tid) { ?>
            <?php $link_taxo = slutil_get_taxo_link($cur_tid['tid']); ?>
            <a href="<?php print $link_taxo['url']; ?>" title="<?php print $link_taxo['title']; ?>"><?php print $link_taxo['name']; ?></a>
          <?php }?>
        <?php } ?>
      </div>

      <div class="node-decision">
        <?php if (isset($content["field_article_descriptif"])) { ?>
            <?php print html_entity_decode(render($content["field_article_descriptif"])); ?>
        <?php } ?>
      </div>

      <div class="node-decision">
        <?php if (isset($content["body"])) { ?>
            <?php print render($content["body"]); ?>
        <?php } ?>
      </div>

      <div class="node-decision">
        <?php if (isset($content["field_article_document"])) { ?> 
          <?php print render($content["field_article_document"]); ?>
        <?php } ?>
      </div>

      <div class="node-decision">
        <?php if (isset($content["field_decision_suivi"])) { ?>
          <?php print render($content["field_decision_suivi"]); ?>
        <?php } ?>

        <?php global $user; // TODO : Mettre la partie admin en block dans le socle ?>
        <?php if (isset($user->roles) && (in_array('administrator', array_values($user->roles)) || in_array('contributeur', array_values($user->roles)) ) ) { ?>
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
        <?php } ?>
      </div>

    </div>
  </article>
</div>




<?php } elseif ($view_mode == "vignette_accueil") { ?>
<?php /******************************************************************************************************/
/*                          VIGNETTE DE LA PAGE D'ACCUEIL                                                   */
/************************************************************************************************************/ ?>
<article class="<?php print $classes; ?>" <?php print $attributes; ?>>

  <?php if (isset($node->field_article_logo['und'][0]['sid'])) { ?>
    <div class="carousel-logo logo-article">
      <div class="big-img-slide hidden-xs visible-sm visible-md visible-lg">
        <?php print slutil_get_img($node->field_article_logo['und'][0]['sid'], "article_vignette_home");  ?>
      </div>
      <div class="small-img-slide visible-xs hidden-sm hidden-md hidden-lg">
        <?php print slutil_get_img($node->field_article_logo['und'][0]['sid'], "home_slider_mobile");  ?>
      </div>
    </div>
  <?php } ?>

  <div class="container">
    <div class="vignette-text">
      <?php if( isset($node->field_article_type['und'][0]['tid'])){ ?>
        <div class="vignette-type text-em">
          <?php $cur_taxo = taxonomy_term_load($node->field_article_type['und'][0]['tid']); ?>
          <?php if (isset($cur_taxo->name)) { print $cur_taxo->name; } ?>
        </div>
      <?php } ?>

      <div class="vignette-title vignette-article">
        <a href="<?php print $node_url; ?>" title="<?php print $node_url_title; ?>"><?php print $title; ?></a>
      </div>

      <?php if (isset($node->field_article_descriptif) && isset($node->field_article_body)) { ?>
        <div class="vignette-chapo"><?php print slutil_get_txtvignette($node->field_article_descriptif, $node->field_article_body, 200); ?></div>
      <?php } ?>

      <?php if( isset($node->field_article_type['und'][0]['tid'])){ ?>
        <?php $cur_taxo = taxonomy_term_load($node->field_article_type['und'][0]['tid']); ?>
        <?php if (isset($cur_taxo->name)) { ?>
        <div class="link-more-wrap"><a class="link-more" href="<?php print slutil_encode_title($cur_taxo->name); ?>" title="<?php print $node_url_title; ?>"><?php print t("Every") . " " . $cur_taxo->name; ?></a></div>
        <?php } ?>
      <?php } ?>
    </div>
  </div>
</article>





<?php } elseif ($view_mode == "liste_accueil") { ?>
<?php /******************************************************************************************************/
/*                          VIGNETTE DANS LES LISTES DE TAXONOMIE DE L'ACCUEIL                              */
/************************************************************************************************************/ ?>
<article class="<?php print $classes; ?>" >
  <div class="bg-img">
    <?php if (isset($node->field_article_logo['und'][0]['sid'])) { ?>
      <?php print slutil_get_img($node->field_article_logo['und'][0]['sid'], "taxo_vignette_home");  ?>
    <?php } elseif (isset($node->field_article_type['und'][0]['tid'])) { ?>
      <?php $taxo = taxonomy_term_load($node->field_article_type['und'][0]['tid']); ?>
      <?php if (isset($taxo->field_taxo_logo['und'][0]['sid'])) { print slutil_get_img($taxo->field_taxo_logo['und'][0]['sid'], "taxo_vignette_home"); } ?>
    <?php } ?>
  </div>
  <div class="container">
    <div class="container-text">
      <?php if (isset($content["field_article_date"])) { ?>
        <div class="vignette-date date-article text-em">
          <?php print drupal_render($content["field_article_date"]); ?>
        </div>
      <?php } ?>

      <div class="vignette-title title-article text-em">
        <a href="<?php print $node_url; ?>" title="<?php print $node_url_title; ?>"><?php print $title; ?></a>
      </div>

      <?php if (isset($node->field_article_descriptif) && isset($node->field_article_body)) { ?>
        <div class="vignette-chapo chapo-event text-em">
          <?php print slutil_get_txtvignette($node->field_article_descriptif, $node->field_article_body, 255); ?>
        </div>
      <?php } ?>
    </div>
  </div>
</article>






<?php } elseif ($view_mode == "liste_accueil_small") { ?>
<?php /******************************************************************************************************/
/*                          VIGNETTE DANS LES LISTES DE TAXONOMIE DE L'ACCUEIL EN SMALL                     */
/************************************************************************************************************/ ?>
<article class="<?php print $classes; ?> col-xs-12 col-sm-5 col-md-4 col-lg-3 acc-taxo-node" >

  <?php if (isset($node->field_article_date['und'][0]['value'])) { ?>
    <?php $timestamp_date_article = strtotime($node->field_article_date['und'][0]['value']); ?>
    <div class="vignette-date date-article">
      <div class="date-day"><?php print format_date($timestamp_date_article, 'base_day'); ?></div>
      <div class="date-month-year">
        <span class="date-month"><?php print format_date($timestamp_date_article, 'base_month'); ?></span>
      </div>
    </div>
  <?php } ?>

  <div class="vignette-title title-article text-em">
    <a href="<?php print $node_url; ?>" title="<?php print $node_url_title; ?>"><?php print $title; ?></a>
  </div>
</article>





<?php } elseif ($view_mode == "vignette_related") { ?>
<?php /******************************************************************************************************/
/*                          VIGNETTE POUR LES CONTENUS ASSOCIEES                                            */
/************************************************************************************************************/ ?>
<?php $node_classes = ""; ?>
<?php if( isset($node->field_article_type['und'][0]['tid'])){ ?>
  <?php $cur_taxo = taxonomy_term_load($node->field_article_type['und'][0]['tid']); ?>
  <?php if (isset($cur_taxo->field_taxo_class['und'][0]['value'])) { ?>
    <?php $node_classes = slutil_encode_title($cur_taxo->field_taxo_class['und'][0]['value']); ?>
  <?php } ?>
<?php } ?>
<article class="<?php print $classes; ?> vignette-related-content <?php print $node_classes; ?> " >
  <div class="container-logo">
    <?php if (isset($node->field_article_logo['und'][0]['sid'])) { ?>
      <div class="logo-article">
        <a href="<?php print $node_url; ?>" title="<?php print $node_url_title; ?>">
          <?php print slutil_get_img($node->field_article_logo['und'][0]['sid'], "related_article");  ?>
        </a>
      </div>
    <?php } ?>

    <?php if (isset($node->field_article_date['und'][0]['value'])) { ?>
      <?php $timestamp_date_article = strtotime($node->field_article_date['und'][0]['value']); ?>
      <div class="date-article">
        <div class="date-day"><?php print format_date($timestamp_date_article, 'base_day'); ?></div>
        <div class="date-month"><?php print format_date($timestamp_date_article, 'base_month_cond'); ?></div>
      </div>
    <?php } ?>
  </div>

  <div class="date-full"><?php print format_date($timestamp_date_article, 'socle_long'); ?></div>
  <div class="title-article">
    <a href="<?php print $node_url; ?>" title="<?php print $node_url_title; ?>"><?php print $title; ?></a>
    <div class="bottom-arrow"></div>
  </div>
  <?php if (isset($node->field_article_descriptif) && isset($node->field_article_body)) { ?>
    <div class="article-chapo"><?php print slutil_get_txtvignette($node->field_article_descriptif, $node->field_article_body, 150, false); ?><span class="ellipsis">...</span></div>
  <?php } ?>
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

      <?php if( isset($node->field_article_type['und'][0]['tid'])){ ?>
        <div class="carousel-type text-em">
          <?php $cur_taxo = taxonomy_term_load($node->field_article_type['und'][0]['tid']); ?>
          <?php if (isset($cur_taxo->name)) { print $cur_taxo->name; } ?>
        </div>
      <?php } ?>

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
        <?php $cur_taxo = taxonomy_term_load($node->field_article_type['und'][0]['tid']); ?>
        <?php if (isset($cur_taxo->name)) { ?>
        <div class="link-more-wrap"><a class="link-more" href="<?php print slutil_encode_title($cur_taxo->name); ?>" title="<?php print $node_url_title; ?>"><?php print t("Every") . " " . $cur_taxo->name; ?></a></div>
        <?php } ?>
      <?php } ?>
    </div>
  </div>
</article>




<?php } elseif ($view_mode == "search_result") { ?>
<?php /******************************************************************************************************/
/*                          VIGNETTE DANS UN RESULTAT DE RECHERCHE                                          */
/************************************************************************************************************/ ?>
<article class="<?php print $classes; ?> search-result" <?php print $attributes; ?>>
  <div class="search-event-left-part">
    <?php if (isset($node->field_article_date['und'][0]['value'])) { ?>
      <?php $timestamp_date_article = strtotime($node->field_article_date['und'][0]['value']); ?>
      <div class="search-date-big date-event">
        <div class="date-day"><?php print format_date($timestamp_date_article, 'base_day'); ?></div>
        <div class="date-month-year">
          <span class="date-month"><?php print format_date($timestamp_date_article, 'base_month_cond'); ?></span>
          <span class="date-year"><?php print format_date($timestamp_date_article, 'base_year'); ?></span>
        </div>
      </div>
    <?php } ?>
  </div>
  <div class="search-title title-event text-em">
    <a href="<?php print $node_url; ?>" title="<?php print $node_url_title; ?>"><?php print $title; ?></a>
  </div>

  <?php if (isset($node->field_decision_nature_qualifiee['und'][0]['value'])) { ?>
    <div class="search-nature nature-decision">
      <?php print $node->field_decision_nature_qualifiee['und'][0]['value']; ?>
    </div>
  <?php } ?>

  <?php if( isset($node->field_article_keyword['und'][0]['tid'])){ ?>
    <div class="search-motcle motcle-decision">
      <a href="#" onclick="return false;" title="<?php print t("Keywords"); ?>" class="picto-motcle"></a>
      <div class="list-keyword">
      <?php foreach ($node->field_article_keyword['und'] as $key => $cur_tid) { ?>
        <?php $link_taxo = slutil_get_taxo_link($cur_tid['tid']); ?>
        <a href="<?php print $link_taxo['url']; ?>" title="<?php print $link_taxo['title']; ?>"><?php print $link_taxo['name']; ?></a>
      <?php }?>
      </div>
    </div>
  <?php } ?>
</article>
<?php } ?>









