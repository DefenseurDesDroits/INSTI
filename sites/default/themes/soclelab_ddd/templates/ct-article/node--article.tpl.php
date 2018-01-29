<?php if ($view_mode == "full") { ?>
<?php

	/**
	 * ***************************************************************************************************
	 */
	/* FULL : CONTENU COMPLET */
	/**
	 * *********************************************************************************************************
	 */
	?>
<article class="<?php print $classes; ?> node-vm-full clearfix"
	<?php print $attributes; ?>>
	<div class="row">
		<div class="col-xs-12 col-sm-6 col-md-6 col-lg-8">
			<h1 class="text-em"><?php print $title; ?></h1>
      <?php if (isset($node->field_article_date['und'][0]['value'])) { ?>
        <div class="node-date date-article text-em">
          <?php print format_date(strtotime($node->field_article_date['und'][0]['value']), 'ddd_medium'); ?>
        </div>
      <?php } ?>
    </div>
		<div class="col-xs-12 col-sm-6 col-md-6 col-lg-4 align-right">
      <?php if( isset($node->field_article_type['und'][0]['tid'])){ ?>
        <div class="node-type type-article">
          <?php $link_taxo = slutil_get_taxo_link($node->field_article_type['und'][0]['tid']); ?>
          <a href="<?php print $link_taxo['url']; ?>"
					title="<?php print $link_taxo['title']; ?>"><?php print $link_taxo['name']; ?></a>
			</div>
 
        <?php $current_url = $_SERVER['HTTP_HOST'] . request_uri(); ?>
        <?php $current_title = drupal_get_title(); ?>
        <a class="a2a_dd addtoany_share_save"
				href="https://www.addtoany.com/share_save#url=<?php echo $current_url; ?>&title=<?php echo $current_title; ?>&description=">
			</a>

      <?php } ?>
      <?php $block_sharthis = module_invoke('sharethis', 'block_view', 'sharethis_block'); ?>
      <?php print render($block_sharthis['content']); ?>
    </div>
	</div>
  
  <?php if (isset($node->field_article_logo['und'][0]['sid'])) { ?>
    <div class="node-logo logo-article">
		<figure>
      <?php print slutil_get_img($node->field_article_logo['und'][0]['sid'], "article_full");  ?>
      <figcaption>
				<div class="overlay-legend">
        <?php print slutil_get_imglegend($node->field_article_logo['und'][0]['sid']) ;?>
        <div class="bg-legende-image"></div>
				</div>
			</figcaption>
		</figure>
	</div>
  <?php } ?>

  <div class="keywords-article clearfix row">
    <?php if( isset($node->field_article_keyword['und'][0]['tid'])){ ?>
      <div class="col-xs-12 col-sm-6 col-lg-6 col-lg-6 pull-left">
			<div class="node-motcle motcle-article">
				<span class="bloc-inline-title"><?php print t("Keywords:"); ?></span>
          <?php foreach ($node->field_article_keyword['und'] as $key => $cur_tid) { ?>
            <?php $link_taxo = slutil_get_taxo_link($cur_tid['tid']); ?> 
            <a href="<?php print $link_taxo['url']; ?>"
					title="<?php print $link_taxo['title']; ?>"><?php print $link_taxo['name']; ?></a>
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
            <a href="<?php print $link_taxo['url']; ?>"
					title="<?php print $link_taxo['title']; ?>"><?php print $link_taxo['name']; ?></a>
          <?php }?>
        </div>
		</div>
    <?php } ?>
  </div>
  
  <?php if (isset($content["field_article_descriptif"])) { ?>
    <div class="node-chapo chapo-article text-em">
      <?php print render($content["field_article_descriptif"]); ?>
    </div>
  <?php } ?>
  
  <?php $block_seemore = module_invoke('ddd_blocks', 'block_view', 'block_seemore'); ?>
  <?php print render($block_seemore['content']); ?>
  
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
  
  <?php if (isset($content["field_article_ctasso"])) { ?>
    <div class="node-ctasso ctasso-article">
      <?php print render($content["field_article_ctasso"]); ?>
    </div>
  <?php } ?>
  
  <?php if (isset($node->field_article_descriptif['und'][0]['value'])) { ?>
    <?php $chapo_length = strlen($node->field_article_descriptif['und'][0]['value']); ?>
  <?php } else { $chapo_length = 0; } ?>
  <?php if (isset($node->field_article_body['und'][0]['value'])) { ?>
    <?php $body_length = strlen($node->field_article_body['und'][0]['value']); ?>
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
              <a href="<?php print $link_taxo['url']; ?>"
					title="<?php print $link_taxo['title']; ?>"><?php print $link_taxo['name']; ?></a>
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
              <a href="<?php print $link_taxo['url']; ?>"
					title="<?php print $link_taxo['title']; ?>"><?php print $link_taxo['name']; ?></a>
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
<?php

	/**
	 * ***************************************************************************************************
	 */
	/* VIGNETTE DE LA PAGE D'ACCUEIL */
	/**
	 * *********************************************************************************************************
	 */
	?>
<article class="<?php print $classes; ?>" <?php print $attributes; ?>>
  
  <?php if (isset($node->field_article_logo['und'][0]['sid'])) { ?>
    <div class="carousel-logo logo-article">
		<div class="big-img-slide hidden-xs visible-sm visible-md visible-lg">
        <?php print slutil_get_img($node->field_article_logo['und'][0]['sid'], "article_vignette_home", TRUE);  ?>
      </div>
		<div class="small-img-slide visible-xs hidden-sm hidden-md hidden-lg">
        <?php print slutil_get_img($node->field_article_logo['und'][0]['sid'], "article_vignette_home_xs", TRUE);  ?>
      </div>
	</div>
  <?php } ?>
  
  <div class="container">
		<div class="vignette-text">      
      <?php if( isset($node->field_article_type['und'][0]['tid'])){ ?>
        <div class="vignette-type">
				<h2>
          <?php $cur_taxo = slutil_get_taxo_link($node->field_article_type['und'][0]['tid']); ?>
          <?php if (isset($cur_taxo["name"])) { ?>
            <a href="<?php print $cur_taxo["url"]; ?>"
						title="<?php print $cur_taxo["title"]; ?>"><?php print $cur_taxo["name"]; ?></a>
          <?php } ?>
          </h2>
			</div>
      <?php } ?>
      
      <div class="vignette-title vignette-article">
				<a href="<?php print $node_url; ?>"
					title="<?php print $node_url_title; ?>"><?php print $title; ?></a>
			</div>
      
      <?php if (isset($node->field_article_descriptif) && isset($node->field_article_body)) { ?>
        <div class="vignette-chapo"><?php print slutil_get_txtvignette($node->field_article_descriptif, $node->field_article_body, 200); ?></div>
      <?php } ?>
    
      <?php if( isset($node->field_article_type['und'][0]['tid'])){ ?>
        <?php $cur_taxo = slutil_get_taxo_link($node->field_article_type['und'][0]['tid']); ?>
        <?php if (isset($cur_taxo["name"])) { ?> 
          <div class="link-more-wrap">
				<a class="link-more" href="<?php print $cur_taxo["url"]; ?>"
					title="<?php print $cur_taxo["title"]; ?>"><?php print t("Every ") . $cur_taxo["name"]; ?></a>
			</div>
        <?php } ?>
      <?php } ?>
    </div>
	</div>
</article>





<?php } elseif ($view_mode == "liste_accueil") { ?>
<?php

	/**
	 * ***************************************************************************************************
	 */
	/* VIGNETTE DANS LES LISTES DE TAXONOMIE DE L'ACCUEIL */
	/**
	 * *********************************************************************************************************
	 */
	?>
<article class="<?php print $classes; ?>">
	<div class="bg-img">  
    <?php if (isset($node->field_article_logo['und'][0]['sid'])) { ?>
      <div class="hidden-xs visible-sm visible-md visible-lg">
        <?php print slutil_get_img($node->field_article_logo['und'][0]['sid'], "taxo_vignette_home", TRUE);  ?>
      </div>
		<div class="visible-xs hidden-sm hidden-md hidden-lg">
        <?php print slutil_get_img($node->field_article_logo['und'][0]['sid'], "taxo_vignette_home_xs", TRUE); ?>
      </div>
    <?php } elseif (isset($node->field_article_type['und'][0]['tid'])) { ?>
      <?php $taxo = taxonomy_term_load($node->field_article_type['und'][0]['tid']); ?>
      <?php if (isset($taxo->field_taxo_logo['und'][0]['sid'])) { ?>
        <div class="hidden-xs visible-sm visible-md visible-lg">
          <?php print slutil_get_img($taxo->field_taxo_logo['und'][0]['sid'], "taxo_vignette_home", TRUE);  ?>
        </div>
		<div class="visible-xs hidden-sm hidden-md hidden-lg">
          <?php print slutil_get_img($taxo->field_taxo_logo['und'][0]['sid'], "taxo_vignette_home_xs", TRUE); ?>
        </div>
      <?php } ?>
    <?php } ?>
  </div>
	<div class="container">
		<div class="vignette-bloc-text">
			<div class="container-text">
        <?php if (isset($content["field_article_date"])) { ?>
          <div class="vignette-date date-article text-em">
            <?php print drupal_render($content["field_article_date"]); ?>
          </div>
        <?php } ?>
        
        <div class="vignette-title title-article text-em">
					<a href="<?php print $node_url; ?>"
						title="<?php print $node_url_title; ?>"><?php print $title; ?></a>
				</div>
              
        <?php if (isset($node->field_article_descriptif) && isset($node->field_article_body)) { ?>
          <div class="vignette-chapo chapo-event text-em">
            <?php print slutil_get_txtvignette($node->field_article_descriptif, $node->field_article_body, 255); ?>
          </div>
        <?php } ?>
      </div>
		</div>
	</div>
</article>






<?php } elseif ($view_mode == "liste_accueil_small") { ?>
<?php

	/**
	 * ***************************************************************************************************
	 */
	/* VIGNETTE DANS LES LISTES DE TAXONOMIE DE L'ACCUEIL EN SMALL */
	/**
	 * *********************************************************************************************************
	 */
	?>
<article
	class="<?php print $classes; ?> col-xs-12 col-sm-5 col-md-4 col-lg-3 acc-taxo-node">
  
  <?php if (isset($node->field_article_date['und'][0]['value'])) { ?>
    <?php $timestamp_date_article = strtotime($node->field_article_date['und'][0]['value']); ?>
    <div class="vignette-date date-article">
		<a href="<?php print $node_url; ?>"
			title="<?php print $node_url_title; ?>">
			<div class="date-day"><?php print format_date($timestamp_date_article, 'base_day'); ?></div>
			<div class="date-month-year">
				<span class="date-month"><?php print format_date($timestamp_date_article, 'base_month'); ?></span>
			</div>
		</a>
	</div>
  <?php } ?>
  
  <div class="vignette-title title-article text-em">
		<a href="<?php print $node_url; ?>"
			title="<?php print $node_url_title; ?>"><?php print $title; ?></a>
	</div>
</article>





<?php } elseif ($view_mode == "vignette_related") { ?>
<?php

	/**
	 * ***************************************************************************************************
	 */
	/* VIGNETTE POUR LES CONTENUS ASSOCIEES */
	/**
	 * *********************************************************************************************************
	 */
	?>
<?php $node_classes = ""; ?>
<?php if( isset($node->field_article_type['und'][0]['tid'])){ ?>
  <?php $cur_taxo = taxonomy_term_load($node->field_article_type['und'][0]['tid']); ?>
  <?php if (isset($cur_taxo->field_taxo_class['und'][0]['value'])) { ?> 
    <?php $node_classes = slutil_encode_title($cur_taxo->field_taxo_class['und'][0]['value']); ?>
  <?php } ?>
<?php } ?>
<article
	class="<?php print $classes; ?> vignette-related-content <?php print $node_classes; ?> ">
	<div class="container-logo">
    <?php if (isset($node->field_article_logo['und'][0]['sid'])) { ?>
      <div class="logo-article">
			<a href="<?php print $node_url; ?>"
				title="<?php print $node_url_title; ?>">
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
		<h3>
			<a href="<?php print $node_url; ?>"
				title="<?php print $node_url_title; ?>"><?php print $title; ?></a>
		</h3>
		<div class="bottom-arrow"></div>
	</div>
  <?php if (isset($node->field_article_descriptif) && isset($node->field_article_body)) { ?>
    <div class="article-chapo"><?php print slutil_get_txtvignette($node->field_article_descriptif, $node->field_article_body, 150, false); ?><span
			class="ellipsis">...</span>
	</div>
  <?php } ?>
</article>





<?php } elseif ($view_mode == "vignette_sidebar") { ?>
<?php

	/**
	 * ***************************************************************************************************
	 */
	/* VIGNETTE DANS LA SIDEBAR */
	/**
	 * *********************************************************************************************************
	 */
	?>
<article class="<?php print $classes; ?>" <?php print $attributes; ?>>
	<div class="row">
		<div class="col-xs-4 col-sm-5 col-md-4 col-lg-3">
      <?php if (isset($node->field_article_logo['und'][0]['sid'])) { ?>
        <div class="sidebar-logo logo-article">
				<a href="<?php print $node_url; ?>"
					title="<?php print $node_url_title; ?>">
            <?php print slutil_get_img($node->field_article_logo['und'][0]['sid'], "sidebar_article");  ?>
          </a>
			</div>
      <?php } ?>
    </div>

		<div class="col-xs-8 col-sm-7 col-md-8 col-lg-9">
			<div class="sidebar-title title-article text-em">
				<a href="<?php print $node_url; ?>"
					title="<?php print $node_url_title; ?>"><?php print $title; ?></a>
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
<?php

	/**
	 * ***************************************************************************************************
	 */
	/* VIGNETTE DU CARROUSEL DE L'ACCUEIL */
	/**
	 * *********************************************************************************************************
	 */
	?>
<article class="<?php print $classes; ?>" <?php print $attributes; ?>>
  
  <?php if (isset($node->field_article_logo['und'][0]['sid'])) { ?>
    <div class="carousel-logo logo-article">
		<div class="big-img-slide hidden-xs visible-sm visible-md visible-lg">
        <?php print slutil_get_img($node->field_article_logo['und'][0]['sid'], "article_carousel_home", TRUE);  ?>
      </div>
		<div class="small-img-slide visible-xs hidden-sm hidden-md hidden-lg">
        <?php print slutil_get_img($node->field_article_logo['und'][0]['sid'], "home_slider_mobile", TRUE);  ?>
      </div>
	</div>
  <?php } ?>
  
  <div class="container">
		<div class="carousel-text">
			<div class="bg-slider"></div>
      
      <?php if( isset($node->field_article_type['und'][0]['tid'])){ ?>
        <div class="carousel-type">
				<h2><?php $cur_taxo = slutil_get_taxo_link($node->field_article_type['und'][0]['tid']); ?>
          <?php if (isset($cur_taxo["name"])) { ?>
            <a href="<?php print $cur_taxo["url"]; ?>"
						title="<?php print $cur_taxo["title"]; ?>"><?php print $cur_taxo["name"]; ?></a>
          <?php } ?>
          </h2>
			</div>
      <?php } ?>
      
      <div class="carousel-title carousel-article">
				<a href="<?php print $node_url; ?>"
					title="<?php print $node_url_title; ?>"><?php print $title; ?></a>
			</div>
          
      <?php if (isset($node->field_article_descriptif) && isset($node->field_article_body)) { ?>
        <div class="carousel-chapo chapo-event"><?php print slutil_get_txtvignette($node->field_article_descriptif, $node->field_article_body, 200); ?></div>
      <?php } ?>
    
      <?php if( isset($node->field_article_type['und'][0]['tid'])){ ?>
        <?php $cur_taxo = slutil_get_taxo_link($node->field_article_type['und'][0]['tid']); ?>
        <?php if (isset($cur_taxo["name"])) { ?> 
          <div class="link-more-wrap">
				<a class="link-more" href="<?php print $cur_taxo["url"]; ?>"
					title="<?php print $cur_taxo["title"]; ?>"><?php print t("Every ") . $cur_taxo["name"]; ?></a>
			</div>
        <?php } ?>
      <?php } ?>
    </div>
	</div>
</article>





<?php } elseif ($view_mode == "search_result") { ?>
<?php

	/**
	 * ***************************************************************************************************
	 */
	/* VIGNETTE DANS UN RESULTAT DE RECHERCHE */
	/**
	 * *********************************************************************************************************
	 */
	?>
<article class="<?php print $classes; ?> search-result"
	<?php print $attributes; ?>>
	<div class="row">
		<div class="col-xs-12 col-sm-5 col-md-4 col-lg-3">
      <?php if (isset($node->field_article_logo['und'][0]['sid'])) { ?>
        <div class="search-logo logo-article">
				<a href="<?php print $node_url; ?>" title="<?php print $title; ?>">
            <?php print slutil_get_img($node->field_article_logo['und'][0]['sid'], "search_article");  ?>
          </a>
			</div>
      <?php } elseif (isset($node->field_article_logo[0]['sid'])) { ?>
        <div class="search-logo logo-article">
				<a href="<?php print $node_url; ?>" title="<?php print $title; ?>">
            <?php print slutil_get_img($node->field_article_logo[0]['sid'], "search_article");  ?>
          </a>
			</div>
      <?php } else { ?>
        <div class="search-nologo"></div>
      <?php } ?>  
    </div>

		<div class="col-xs-12 col-sm-7 col-md-8 col-lg-9 search-content-part">

			<div class="search-title title-article text-em">
				<h3>
					<a href="<?php print $node_url; ?>" title="<?php print $title; ?>"><?php print $title; ?></a>
				</h3>
			</div>
      
      <?php if (isset($content["field_article_date"])) { ?>
        <div class="search-date date-article text-em">
          <?php print drupal_render($content["field_article_date"]); ?>
        </div>
      <?php } ?>
      <?php if (isset($node->field_article_descriptif) && isset($node->field_article_body)) { ?>
        <div class="search-chapo chapo-event text-em">
				<p>
            <?php print slutil_get_txtvignette($node->field_article_descriptif, $node->field_article_body, 200); ?>
          </p>
			</div>
      <?php } ?>
      
      <?php if( isset($node->field_article_type['und'][0]['tid'])){ ?>
        <div class="search-type text-em">
          <?php $list_taxo = slutil_get_list_tid($node->field_article_type['und'][0]['tid']); ?>
          <?php $i=0; ?>
          <?php foreach ($list_taxo[1] as $current_taxo_link => $current_taxo) { ?>
            <?php $i==0?'':print $current_taxo; ?>
            <?php $i=$i+1; if(count($list_taxo[1])> $i+1){ print " - "; }?>
          <?php }?>
        </div>
      <?php }elseif( isset($node->field_article_type[0]['tid'])){ ?>
        <div class="search-type text-em">
          <?php $list_taxo = slutil_get_list_tid($node->field_article_type[0]['tid']); ?>
          <?php $i=0; ?>
          <?php foreach ($list_taxo[1] as $current_taxo_link => $current_taxo) { ?>
            <?php $i==0?'':print $current_taxo; ?>
            <?php $i=$i+1; if(count($list_taxo[1])> $i+1){ print " - "; }?>
          <?php }?>
        </div>
      <?php } ?>
    </div>
	</div>
</article>
<?php } ?>








