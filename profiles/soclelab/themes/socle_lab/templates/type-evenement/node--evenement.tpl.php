<?php if ($view_mode == "full") { ?>
<?php /******************************************************************************************************/
/*                          FULL : CONTENU COMPLET                                                          */
/************************************************************************************************************/ ?>
<article class="<?php print $classes; ?> node-vm-full clearfix" <?php print $attributes; ?>>
  <?php if (isset($node->field_event_logo['und'][0]['sid'])) { ?>
    <div class="node-logo logo-event">
      <?php print slutil_get_img($node->field_event_logo['und'][0]['sid'], "event_full");  ?>
      <div class="overlay-legend">
        <?php print slutil_get_imglegend($node->field_event_logo['und'][0]['sid']) ;?>
        <div class="bg-legende-image"></div>
      </div>
    </div>
  <?php } ?>
  
  <h1 class="text-em"><?php print $title; ?></h1>
  
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
<?php /******************************************************************************************************/
/*                          VIGNETTE DE LA PAGE D'ACCUEIL                                                   */
/************************************************************************************************************/ ?>
<article class="<?php print $classes; ?> vignette-accueil col-xs-12 col-sm-6 col-md-6 col-lg-6" <?php print $attributes; ?>>
  
  <?php if (isset($node->field_event_logo['und'][0]['sid'])) { ?>
    <div class="vignette-logo logo-event">
      <a href="<?php print $node_url; ?>" title="<?php print $node_url_title; ?>">
        <?php print slutil_get_img($node->field_event_logo['und'][0]['sid'], "event_vignette_home");  ?>
      </a>
    </div>
  <?php } ?>
  
  <div class="vignette-title title-event text-em">
    <a href="<?php print $node_url; ?>" title="<?php print $node_url_title; ?>"><?php print $title; ?></a>
  </div>
  
  <?php if (isset($content["field_event_date"])) { ?>
    <div class="vignette-date date-event text-em">
      <?php print drupal_render($content["field_event_date"]); ?>
    </div>
  <?php } ?>
  
  <?php if (isset($node->field_event_descriptif) && isset($node->field_event_body)) { ?>
    <div class="vignette-chapo chapo-event text-em">
      <?php print slutil_get_txtvignette($node->field_event_descriptif, $node->field_event_body, 200); ?>
    </div>
  <?php } ?>
  
  <a class="link-more" href="<?php print $node_url; ?>" title="<?php print $node_url_title; ?>"><?php print t("Read more"); ?></a>
</article>





<?php } elseif ($view_mode == "agenda_accueil") { ?>
<?php /******************************************************************************************************/
/*                          VIGNETTE DANS L'AGENDA DE LA PAGE D'ACCUEIL                                     */
/************************************************************************************************************/ ?>
<article class="<?php print $classes; ?> event-agenda-home" <?php print $attributes; ?>>
  <div class="row">
    <div class="col-xs-12 col-sm-6 col-md-6 col-lg-5">
      <?php if (isset($node->field_event_date['und'][0]['value'])) { ?>
        <?php $timestamp_date_event = strtotime($node->field_event_date['und'][0]['value']); ?>
        <div class="agendahome-date date-event text-em">
          <div class="date-day"><?php print format_date($timestamp_date_event, 'base_day'); ?></div>
          <div class="date-month-year">
            <span class="date-month"><?php print format_date($timestamp_date_event, 'base_month'); ?></span>
            <span class="date-year"><?php print format_date($timestamp_date_event, 'base_year'); ?></span>
          </div>
        </div>
      <?php } ?>

      <?php if (isset($node->field_event_logo['und'][0]['sid'])) { ?>
        <div class="agendahome-logo logo-event">
          <a href="<?php print $node_url; ?>" title="<?php print $node_url_title; ?>">
            <?php print slutil_get_img($node->field_event_logo['und'][0]['sid'], "home_agenda");  ?>
          </a>
        </div>
      <?php } ?>
    </div>
  
  
    <div class="col-xs-12 col-sm-6 col-md-6 col-lg-7">
      <div class="container-txt-agenda-home">
        <div class="agendahome-title title-event text-em">
          <a href="<?php print $node_url; ?>" title="<?php print $node_url_title; ?>"><?php print $title; ?></a>
        </div>
        
        <?php if (isset($node->field_event_descriptif) && isset($node->field_event_body)) { ?>
          <div class="agendahome-chapo chapo-event text-em">
            <?php print slutil_get_txtvignette($node->field_event_descriptif, $node->field_event_body, 100); ?>
          </div>
        <?php } ?>
      </div>
    </div>
  </div>
</article>





<?php } elseif ($view_mode == "vignette_sidebar") { ?>
<?php /******************************************************************************************************/
/*                          VIGNETTE DANS LA SIDEBAR                                                        */
/************************************************************************************************************/ ?>
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
          <a href="<?php print $node_url; ?>" title="<?php print $node_url_title; ?>">
            <?php print slutil_get_img($node->field_event_logo['und'][0]['sid'], "sidebar_event");  ?>
          </a>
        </div>
      <?php } ?>
    </div>
    
    <div class="col-xs-6 col-sm-12 col-md-6 col-lg-7">
      <div class="container-txt-agenda-sidebar">
        <div class="agendasidebar-title title-event text-em">
          <a href="<?php print $node_url; ?>" title="<?php print $node_url_title; ?>"><?php print $title; ?></a>
        </div>
      </div>
    </div>
  </div>
</article>





<?php } elseif ($view_mode == "vignette_carousel") { ?>
<?php /******************************************************************************************************/
/*                          VIGNETTE DU CARROUSEL DE L'ACCUEIL                                              */
/************************************************************************************************************/ ?>
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
        <a href="<?php print $node_url; ?>" title="<?php print $node_url_title; ?>"><?php print $title; ?></a>
      </div>
      
      <?php if (isset($node->field_event_descriptif) && isset($node->field_event_body)) { ?>
        <div class="carousel-chapo chapo-event text-em"><?php print slutil_get_txtvignette($node->field_event_descriptif, $node->field_event_body, 200); ?></div>
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
      <div class="search-event-left-part">
        <?php if (isset($node->field_event_date['und'][0]['value'])) { ?>
          <?php $timestamp_date_event = strtotime($node->field_event_date['und'][0]['value']); ?>
          <div class="search-date-big date-event text-em">
            <div class="date-day"><?php print format_date($timestamp_date_event, 'base_day'); ?></div>
            <div class="date-month-year">
              <span class="date-month"><?php print format_date($timestamp_date_event, 'base_month_cond'); ?></span>
              <span class="date-year"><?php print format_date($timestamp_date_event, 'base_year'); ?></span>
            </div>
          </div>
        <?php } ?>
        
        <?php if (isset($node->field_event_logo['und'][0]['sid'])) { ?>
          <div class="search-logo logo-event">
            <a href="<?php print $node_url; ?>" title="<?php print $node_url_title; ?>">
              <?php print slutil_get_img($node->field_event_logo['und'][0]['sid'], "search_event");  ?>
            </a>
          </div>
        <?php } ?>
      </div>
    </div>
  
    <div class="col-xs-12 col-sm-7 col-md-8 col-lg-8 search-content-part">
      <div class="search-title title-event text-em">
        <a href="<?php print $node_url; ?>" title="<?php print $node_url_title; ?>"><?php print $title; ?></a>
      </div>
      
      <?php if (isset($content["field_event_date"])) { ?>
        <div class="search-date date-event text-em">
          <?php print drupal_render($content["field_event_date"]); ?>
        </div>
      <?php } ?>

      <?php if (isset($node->field_event_descriptif) && isset($node->field_event_body)) { ?>
        <div class="search-chapo chapo-event text-em">
          <?php print slutil_get_txtvignette($node->field_event_descriptif, $node->field_event_body, 200); ?>
        </div>
      <?php } ?>
    </div>
  </div>
</article>
<?php } ?>
