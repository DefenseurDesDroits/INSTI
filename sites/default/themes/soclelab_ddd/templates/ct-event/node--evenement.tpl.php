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
		<div class="col-xs-12 col-sm-6 col-md-6 col-lg-6">
			<h1 class="text-em"><?php print $title; ?></h1>
		</div>
		<div class="col-xs-12 col-sm-6 col-md-6 col-lg-6 align-right">
			<div class="node-type type-article">
				<a href="/agenda" title="<?php print t("Display the agenda"); ?>"><?php print t("Agenda"); ?></a>
			</div>
      
      <?php $current_url = $_SERVER['HTTP_HOST'] . request_uri(); ?>
      <?php $current_title = drupal_get_title(); ?>
      <a class="a2a_dd addtoany_share_save"
				href="https://www.addtoany.com/share_save#url=<?php echo $current_url; ?>&title=<?php echo $current_title; ?>&description=">
			</a>      
      
      <?php $block_sharthis = module_invoke('sharethis', 'block_view', 'sharethis_block'); ?>
      <?php print render($block_sharthis['content']); ?>
    </div>
	</div>
  
  <?php if (isset($node->field_event_logo['und'][0]['sid'])) { ?>
    <div class="node-logo logo-event">
      <?php print slutil_get_img($node->field_event_logo['und'][0]['sid'], "event_full");  ?>
      <div class="overlay-legend">
        <?php print slutil_get_imglegend($node->field_event_logo['und'][0]['sid']) ;?>
        <div class="bg-legende-image"></div>
		</div>
	</div>
  <?php } ?>
    
  <?php if (isset($content["field_event_date"])) { ?>
    <div class="node-date date-event text-em">
      <?php print drupal_render($content["field_event_date"]); ?>
    </div>
  <?php } ?>
  
  <?php if (isset($content["field_event_lieu"])) { ?>
    <div class="node-lieu lieu-event text-riche text-em">
      <?php print drupal_render($content["field_event_lieu"]); ?>
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
    
  <?php if (isset($node->field_event_descriptif['und'][0]['value'])) { ?>
    <div class="node-chapo chapo-event text-em">
      <?php print $node->field_event_descriptif['und'][0]['value']; ?>
    </div>
  <?php } ?>
  
  <?php if (isset($content["field_event_body"])) { ?>
    <div class="node-body body-event text-riche text-em">
      <?php print drupal_render($content["field_event_body"]); ?>
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
  
  <?php if (isset($node->field_event_logo['und'][0]['sid'])) { ?>
    <div class="carousel-logo logo-article">
		<div class="big-img-slide hidden-xs visible-sm visible-md visible-lg">
        <?php print slutil_get_img($node->field_event_logo['und'][0]['sid'], "article_vignette_home");  ?>
      </div>
		<div class="small-img-slide visible-xs hidden-sm hidden-md hidden-lg">
        <?php print slutil_get_img($node->field_event_logo['und'][0]['sid'], "home_slider_mobile");  ?>
      </div>
	</div>
  <?php } ?>
  
  <div class="container">
		<div class="vignette-text">
			<div class="vignette-title vignette-article">
				<a href="<?php print $node_url; ?>"
					title="<?php print $node_url_title; ?>"><?php print $title; ?></a>
			</div>
      
      <?php if (isset($node->field_event_descriptif) && isset($node->field_event_body)) { ?>
        <div class="vignette-chapo"><?php print slutil_get_txtvignette($node->field_event_descriptif, $node->field_event_body, 200); ?></div>
      <?php } ?>
    </div>
	</div>
</article>





<?php } elseif ($view_mode == "agenda_accueil") { ?>
<?php

	
/**
	 * ***************************************************************************************************
	 */
	/* VIGNETTE DANS L'AGENDA DE LA PAGE D'ACCUEIL */
	/**
	 * *********************************************************************************************************
	 */
	?>
<article
	class="<?php print $classes; ?> event-agenda-home col-xs-12 col-sm-6 col-md-6 col-lg-3"
	<?php print $attributes; ?>>
  <?php if (isset($node->field_event_date['und'][0]['value'])) { ?>
    <?php $timestamp_date_event = strtotime($node->field_event_date['und'][0]['value']); ?>
    <div class="agendahome-date date-event">
		<a href="<?php print $node_url; ?>"
			title="<?php print $node_url_title; ?>">
			<div class="date-day"><?php print format_date($timestamp_date_event, 'base_day'); ?></div>
			<div class="date-month-year">
				<span class="date-month"><?php print format_date($timestamp_date_event, 'base_month'); ?></span>
			</div>
			<div class="bg-circle-white-123"></div>
		</a>
	</div>
  <?php } ?>

  <div class="container-txt-agenda-home">
		<div class="agendahome-title title-event">
			<a href="<?php print $node_url; ?>"
				title="<?php print $node_url_title; ?>"><?php print $title; ?></a>
		</div>
    
    <?php if (isset($node->field_event_descriptif) && isset($node->field_event_body)) { ?>
      <div class="agendahome-chapo chapo-event">
        <?php print slutil_get_txtvignette($node->field_event_descriptif, $node->field_event_body, 75); ?>
      </div>
    <?php } ?>
  </div>
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
		<div class="col-xs-6 col-sm-12 col-md-6 col-lg-5">
      <?php if (isset($node->field_event_date['und'][0]['value'])) { ?>
        <?php $timestamp_date_event = strtotime($node->field_event_date['und'][0]['value']); ?>
        <div class="agendasidebar-date date-event text-em">
				<div class="date-day"><?php print format_date($timestamp_date_event, 'base_day'); ?></div>
				<div class="date-month-year">
					<span class="date-month"><?php print format_date($timestamp_date_event, 'base_month_cond'); ?></span>
					<span class="date-year"><?php print format_date($timestamp_date_event, 'base_year'); ?></span>
				</div>
			</div>
      <?php } ?>
  
      <?php if (isset($node->field_event_logo['und'][0]['sid'])) { ?>
        <div class="agendasidebar-logo logo-event">
				<a href="<?php print $node_url; ?>"
					title="<?php print $node_url_title; ?>">
            <?php print slutil_get_img($node->field_event_logo['und'][0]['sid'], "sidebar_event");  ?>
          </a>
			</div>
      <?php } ?>
    </div>

		<div class="col-xs-6 col-sm-12 col-md-6 col-lg-7">
			<div class="container-txt-agenda-sidebar">
				<div class="agendasidebar-title title-event text-em">
					<a href="<?php print $node_url; ?>"
						title="<?php print $node_url_title; ?>"><?php print $title; ?></a>
				</div>
			</div>
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
  
  <?php if (isset($node->field_event_logo['und'][0]['sid'])) { ?>
    <div class="carousel-logo logo-event">
		<div class="big-img-slide hidden-xs visible-sm visible-md visible-lg">
        <?php print slutil_get_img($node->field_event_logo['und'][0]['sid'], "article_carousel_home");  ?>
      </div>
		<div class="small-img-slide visible-xs hidden-sm hidden-md hidden-lg">
        <?php print slutil_get_img($node->field_event_logo['und'][0]['sid'], "home_slider_mobile");  ?>
      </div>
	</div>
  <?php } ?>
  
  <div class="container">
		<div class="carousel-text">
			<div class="bg-slider"></div>
      <?php if (isset($content["field_event_date"])) { ?>
        <div class="carousel-date date-event text-em">
          <?php print drupal_render($content["field_event_date"]); ?>
        </div>
      <?php } ?>
    
      <div class="carousel-title title-event text-em">
				<a href="<?php print $node_url; ?>"
					title="<?php print $node_url_title; ?>"><?php print $title; ?></a>
			</div>
      
      <?php if (isset($node->field_event_descriptif) && isset($node->field_event_body)) { ?>
        <div class="carousel-chapo chapo-event text-em"><?php print slutil_get_txtvignette($node->field_event_descriptif, $node->field_event_body, 200); ?></div>
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
	<div class="search-event-left-part">
    <?php if (isset($node->field_event_date['und'][0]['value'])) { ?>
      <?php $timestamp_date_event = strtotime($node->field_event_date['und'][0]['value']); ?>
      <div class="search-date-big date-event">
			<div class="date-day"><?php print format_date($timestamp_date_event, 'base_day'); ?></div>
			<div class="date-month-year">
				<span class="date-month"><?php print format_date($timestamp_date_event, 'base_month_cond'); ?></span>
				<span class="date-year"><?php print format_date($timestamp_date_event, 'base_year'); ?></span>
			</div>
		</div>
    <?php } elseif (isset($node->field_event_date[0]['value'])) { ?>
      <?php $timestamp_date_event = strtotime($node->field_event_date[0]['value']); ?>
      <div class="search-date-big date-event">
			<div class="date-day"><?php print format_date($timestamp_date_event, 'base_day'); ?></div>
			<div class="date-month-year">
				<span class="date-month"><?php print format_date($timestamp_date_event, 'base_month_cond'); ?></span>
				<span class="date-year"><?php print format_date($timestamp_date_event, 'base_year'); ?></span>
			</div>
		</div>
    <?php } ?>
  </div>
	<div class="search-title title-event text-em">
		<a href="<?php print $node_url; ?>"
			title="<?php print $node_url_title; ?>"><?php print $title; ?></a>
	</div>
  
  <?php if (isset($content["field_event_lieu"])) { ?>
    <div class="search-lieu lieu-event">
      <?php print drupal_render($content["field_event_lieu"]); ?>
    </div>
  <?php } ?>

  <?php if (isset($node->field_event_descriptif) && isset($node->field_event_body)) { ?>
    <div class="search-chapo chapo-event text-riche">
      <?php print slutil_get_txtvignette($node->field_event_descriptif, $node->field_event_body, 200); ?>
    </div>
  <?php } ?>
</article>
<?php } ?>
