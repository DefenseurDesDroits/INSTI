<?php if ($view_mode == "full") { ?>
<?php /******************************************************************************************************/
/*                          FULL : CONTENU COMPLET                                                          */
/************************************************************************************************************/ ?>
<article class="<?php print $classes; ?> node-vm-full clearfix" <?php print $attributes; ?>>
  <div class="row">
    <div class="col-xs-12 col-sm-6 col-md-6 col-lg-8">
      <h1 class="text-em"><?php print $title; ?></h1>
      <?php if (isset($node->field_article_date['und'][0]['value'])) { ?>
        <div class="node-date date-offre">
          <?php print format_date(strtotime($node->field_article_date['und'][0]['value']), 'ddd_medium'); ?>
        </div>
      <?php } ?>
    </div>
    <div class="col-xs-12 col-sm-6 col-md-6 col-lg-4 align-right">
      <?php if( isset($node->field_article_type['und'][0]['tid'])){ ?>
        <div class="node-type type-article">
          <?php $link_taxo = slutil_get_taxo_link($node->field_article_type['und'][0]['tid']); ?>
          <a href="<?php print $link_taxo['url']; ?>" title="<?php print $link_taxo['title']; ?>"><?php print $link_taxo['name']; ?></a>
        </div>
      <?php } ?>
      <?php $block_sharthis = module_invoke('sharethis', 'block_view', 'sharethis_block'); ?>
      <?php print render($block_sharthis['content']); ?>
    </div>
  </div>

  <?php if (isset($node->field_article_logo['und'][0]['sid'])) { ?>
    <div class="node-logo logo-article">
      <?php print slutil_get_img($node->field_article_logo['und'][0]['sid'], "article_full");  ?>
      <div class="overlay-legend">
        <?php print slutil_get_imglegend($node->field_article_logo['und'][0]['sid']) ;?>
        <div class="bg-legende-image"></div>
      </div>
    </div>
  <?php } ?>

  <div class="keywords-article clearfix row">
    <?php if( isset($node->field_article_keyword['und'][0]['tid'])){ ?>
      <div class="col-xs-12 col-sm-6 col-lg-6 col-lg-6 pull-left">
        <div class="node-motcle motcle-article">
          <span class="bloc-inline-title"><?php print t("Keywords:"); ?></span>
          <?php foreach ($node->field_article_keyword['und'] as $key => $cur_tid) { ?>
            <?php $link_taxo = slutil_get_taxo_link($cur_tid['tid']); ?>
            <a href="<?php print $link_taxo['url']; ?>" title="<?php print $link_taxo['title']; ?>"><?php print $link_taxo['name']; ?></a>
          <?php }?>
        </div>
      </div>
    <?php } ?>
    <?php if( isset($node->field_article_theme['und'][0]['tid'])){ ?>
      <div class="col-xs-12 col-sm-6 col-lg-6 col-lg-6 pull-right">
        <div class="node-theme theme-article">
          <span class="bloc-inline-title"><?php print t("Institution's competence:"); ?></span>
          <?php foreach ($node->field_article_theme['und'] as $key => $cur_tid) { ?>
            <?php $link_taxo = slutil_get_taxo_link($cur_tid['tid']); ?>
            <a href="<?php print $link_taxo['url']; ?>" title="<?php print $link_taxo['title']; ?>"><?php print $link_taxo['name']; ?></a>
          <?php }?>
        </div>
      </div>
    <?php } ?>
  </div>

  <?php if (isset($content["field_article_descriptif"])) { ?>
    <div class="node-chapo chapo-offre">
      <?php print render($content["field_article_descriptif"]); ?>
    </div>
  <?php } ?>



  <?php if (isset($content["body"])) { ?>
    <div class="node-body body-offre text-riche">
      <?php print render($content["body"]); ?>
    </div>
  <?php } ?>

  <?php if (isset($content["field_article_document"])) { ?>
    <div class="node-document document-offre">
      <?php

      /**
       * convertit la taille d'un fichier dans l'unité correspondante
       */
      function _mij_formatSizeUnits($bytes) {
        if ($bytes >= 1073741824) {
          $bytes = number_format ( $bytes / 1073741824, 2 ) . ' GB';
        } elseif ($bytes >= 1048576) {
          $bytes = number_format ( $bytes / 1048576, 2 ) . ' MB';
        } elseif ($bytes >= 1024) {
          $bytes = number_format ( $bytes / 1024, 2 ) . ' KB';
        } elseif ($bytes > 1) {
          $bytes = $bytes . ' bytes';
        } elseif ($bytes == 1) {
          $bytes = $bytes . ' byte';
        } else {
          $bytes = '0 bytes';
        }

        return $bytes;
      }

      foreach ($content['field_article_document']['#items'] as $item) {
        $sid = $item['sid'];
        $atom = scald_atom_load ($sid);
        $title = $atom->title;
        $titleWithNoExtension = $title;
        $link = $atom->rendered->file_source_url;
        $field = field_get_items ( 'scald_atom', $atom, 'scald_file' );
        $fichier = $field[0];

        $fid = $fichier ['fid'];
        $file = file_load($fid);
        $size = _mij_formatSizeUnits ($file->filesize);
        $mime = strtoupper(end(explode('.', $file->filename)));

        print '<div class="sl-scald-file extension-pdf">' .
          '<a href="'. $link . '" title="'. $titleWithNoExtension. ', nouvelle fenêtre ' . $mime . ' ' . $size .'" target="_blank">' .
            $titleWithNoExtension . ' (' . $mime . ', ' . $size . ')  </a>'.
        '</div>';
      }

      ?>
    </div>

  <?php } ?>


  <?php if (isset($node->field_article_descriptif['und'][0]['value'])) { ?>
    <?php $chapo_length = strlen($node->field_article_descriptif['und'][0]['value']); ?>
  <?php } else { $chapo_length = 0; } ?>
  <?php if (isset($node->body['und'][0]['value'])) { ?>
    <?php $body_length = strlen($node->body['und'][0]['value']); ?>
  <?php } else { $body_length = 0; } ?>
  <?php $article_length = $chapo_length + $body_length; ?>

  <?php if ($article_length > 2500) { //TODO : rendre le paramètre configurable ?>
    <div class="keywords-article clearfix row">
      <?php if( isset($node->field_article_keyword['und'][0]['tid'])){ ?>
        <div class="col-xs-12 col-sm-6 col-lg-6 col-lg-6 pull-left">
          <div class="node-motcle motcle-article">
            <span class="bloc-inline-title"><?php print t("Keywords:"); ?></span>
            <?php foreach ($node->field_article_keyword['und'] as $key => $cur_tid) { ?>
              <?php $link_taxo = slutil_get_taxo_link($cur_tid['tid']); ?>
              <a href="<?php print $link_taxo['url']; ?>" title="<?php print $link_taxo['title']; ?>"><?php print $link_taxo['name']; ?></a>
            <?php }?>
          </div>
        </div>
      <?php } ?>
      <?php if( isset($node->field_article_theme['und'][0]['tid'])){ ?>
        <div class="col-xs-12 col-sm-6 col-lg-6 col-lg-6 pull-right">
          <div class="node-theme theme-article">
            <span class="bloc-inline-title"><?php print t("Institution's competence:"); ?></span>
            <?php foreach ($node->field_article_theme['und'] as $key => $cur_tid) { ?>
              <?php $link_taxo = slutil_get_taxo_link($cur_tid['tid']); ?>
              <a href="<?php print $link_taxo['url']; ?>" title="<?php print $link_taxo['title']; ?>"><?php print $link_taxo['name']; ?></a>
            <?php }?>
          </div>
        </div>
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
<article class="<?php print $classes; ?>" <?php print $attributes; ?>>

  <?php if (isset($node->field_article_logo['und'][0]['sid'])) { ?>
    <div class="carousel-logo logo-offre">
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
        <div class="vignette-type">
          <?php $cur_taxo = taxonomy_term_load($node->field_article_type['und'][0]['tid']); ?>
          <?php if (isset($cur_taxo->name)) { print $cur_taxo->name; } ?>
        </div>
      <?php } ?>

      <div class="vignette-title vignette-offre">
        <a href="<?php print $node_url; ?>" title="<?php print $node_url_title; ?>"><?php print $title; ?></a>
      </div>

      <?php if (isset($node->field_article_descriptif) && isset($node->body)) { ?>
        <div class="vignette-chapo"><?php print slutil_get_txtvignette($node->field_article_descriptif, $node->body, 200); ?></div>
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
        <div class="vignette-date date-offre">
          <?php print drupal_render($content["field_article_date"]); ?>
        </div>
      <?php } ?>

      <div class="vignette-title title-offre">
        <a href="<?php print $node_url; ?>" title="<?php print $node_url_title; ?>"><?php print $title; ?></a>
      </div>

      <?php if (isset($node->field_article_descriptif) && isset($node->body)) { ?>
        <div class="vignette-chapo chapo-offre">
          <?php print slutil_get_txtvignette($node->field_article_descriptif, $node->body, 255); ?>
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
    <div class="vignette-date date-offre">
      <div class="date-day"><?php print format_date($timestamp_date_article, 'base_day'); ?></div>
      <div class="date-month-year">
        <span class="date-month"><?php print format_date($timestamp_date_article, 'base_month'); ?></span>
      </div>
    </div>
  <?php } ?>

  <div class="vignette-title title-offre">
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
      <div class="logo-offre">
        <a href="<?php print $node_url; ?>" title="<?php print $node_url_title; ?>">
          <?php print slutil_get_img($node->field_article_logo['und'][0]['sid'], "related_article");  ?>
        </a>
      </div>
    <?php } ?>

    <?php if (isset($node->field_article_date['und'][0]['value'])) { ?>
      <?php $timestamp_date_article = strtotime($node->field_article_date['und'][0]['value']); ?>
      <div class="date-offre">
        <div class="date-day"><?php print format_date($timestamp_date_article, 'base_day'); ?></div>
        <div class="date-month"><?php print format_date($timestamp_date_article, 'base_month_cond'); ?></div>
      </div>
    <?php } ?>
  </div>

  <div class="date-full"><?php print format_date($timestamp_date_article, 'socle_long'); ?></div>
  <div class="title-offre">
    <a href="<?php print $node_url; ?>" title="<?php print $node_url_title; ?>"><?php print $title; ?></a>
    <div class="bottom-arrow"></div>
  </div>
  <?php if (isset($node->field_article_descriptif) && isset($node->body)) { ?>
    <div class="offre-chapo"><?php print slutil_get_txtvignette($node->field_article_descriptif, $node->body, 150, false); ?><span class="ellipsis">...</span></div>
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
        <div class="sidebar-logo logo-offre">
          <a href="<?php print $node_url; ?>" title="<?php print $node_url_title; ?>">
            <?php print slutil_get_img($node->field_article_logo['und'][0]['sid'], "sidebar_offre");  ?>
          </a>
        </div>
      <?php } ?>
    </div>

    <div class="col-xs-8 col-sm-7 col-md-8 col-lg-9">
      <div class="sidebar-title title-offre">
        <a href="<?php print $node_url; ?>" title="<?php print $node_url_title; ?>"><?php print $title; ?></a>
      </div>

      <?php if (isset($node->field_article_descriptif) && isset($node->body)) { ?>
        <div class="sidebar-chapo chapo-offre">
          <?php print slutil_get_txtvignette($node->field_article_descriptif, $node->body, 100); ?>
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
    <div class="carousel-logo logo-offre">
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
        <div class="carousel-type">
          <?php $cur_taxo = taxonomy_term_load($node->field_article_type['und'][0]['tid']); ?>
          <?php if (isset($cur_taxo->name)) { print $cur_taxo->name; } ?>
        </div>
      <?php } ?>

      <div class="carousel-title carousel-offre">
        <a href="<?php print $node_url; ?>" title="<?php print $node_url_title; ?>"><?php print $title; ?></a>
      </div>

      <?php if (false && isset($content["field_article_date"])) { ?>
        <div class="carousel-date date-offre">
          <?php print drupal_render($content["field_article_date"]); ?>
        </div>
      <?php } ?>

      <?php if (isset($node->field_article_descriptif) && isset($node->body)) { ?>
        <div class="carousel-chapo chapo-offre"><?php print slutil_get_txtvignette($node->field_article_descriptif, $node->body, 200); ?></div>
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
  <div class="row">

    <div class="col-xs-12 col-sm-5 col-md-4 col-lg-3">
      <?php if (isset($content["field_article_document"])) { ?>
        <div class="search-logo pdf-offre">
          <?php print drupal_render($content['field_article_document'][0]);  ?>
        </div>
      <?php } ?>
    </div>

    <div class="col-xs-12 col-sm-7 col-md-8 col-lg-9 search-content-part">
      <div class="search-title title-offre">
        <a href="<?php print $node_url; ?>" title="<?php print $node_url_title; ?>"><?php print $title; ?></a>
      </div>

      <?php if (isset($content["field_article_date"])) { ?>
        <div class="search-date date-offre">
          <?php print drupal_render($content["field_article_date"]); ?>
        </div>
      <?php } ?>

      <?php if (isset($node->field_article_descriptif) && isset($node->body)) { ?>
        <div class="search-chapo chapo-offre text-em">
          <?php print slutil_get_txtvignette($node->field_article_descriptif, $node->body, 200); ?>
        </div>
      <?php } ?>

      <?php if( isset($node->field_article_type['und'][0]['tid'])){ ?>
        <div class="search-type type-offre text-em">
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
