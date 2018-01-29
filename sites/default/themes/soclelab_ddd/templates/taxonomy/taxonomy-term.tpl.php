<?php if ($view_mode == 'full'){ ?>
<?php

  /************************************************************************************************************/
  /*                          AFFICHAGE COMPLET                                                               */
  /************************************************************************************************************/
  ?>
<article class="<?php print $classes; ?> node-vm-full clearfix"
	<?php print $attributes; ?>>
	<div class="pull-right">
    <?php $block_sharthis = module_invoke('sharethis', 'block_view', 'sharethis_block'); ?>
    <?php print render($block_sharthis['content']); ?>
  </div>

  <?php if (isset($term->field_taxo_logo['und'][0]['sid'])) { ?>
    <div class="node-logo logo-article">
      <?php print slutil_get_img($term->field_taxo_logo['und'][0]['sid'], "article_full");  ?>
      <div class="overlay-legend">
        <?php print slutil_get_imglegend($term->field_taxo_logo['und'][0]['sid']) ;?>
        <div class="bg-legende-image"></div>
		</div>
	</div>
  <?php } ?>

  <?php if (isset($content["description"])) { ?>
    <div class="node-body body-taxonomy text-riche text-em">
      <?php print render($content["description"]); ?>
    </div>
  <?php } ?>

  <?php $view_sub_taxo = slutil_embed_view('vue_taxonomy','block_taxonomy_sub', $term->tid); ?>
  <?php if ($view_sub_taxo) { ?>
    <div class="taxonomy-subtheme">
		<div class="bloc-title text-em">
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
<div class="col-xs-12 col-sm-6 col-md-6 col-lg-6">
  <?php $link_array = slutil_get_taxo_link($term->tid); ?>
  <?php if (isset($term->field_url_redirect['und'][0]['url'])) { $link_array['url'] = $term->field_url_redirect['und'][0]['url']; } ?>
  <article class="<?php print $classes; ?> taxo-vm-vignettehome <?php if (isset($term->field_taxo_affichage['und'][0]['value'])) { print slutil_encode_title('vignette-' . $term->field_taxo_affichage['und'][0]['value']); } ?>"
		<?php print $attributes; ?>>

		<div class="vignette-title title-term">
		  <h3 <?php if($term->vocabulary_machine_name == 'espace_juridique'){?> class="rss-title" <?php }?>>
  			<a  href="<?php print $link_array['url']; ?>"
  				title="<?php print $link_array['title']; ?>">
          <?php print $term->name; ?>
        </a>
      </h3>
      <?php /*if($term->vocabulary_machine_name == 'espace_juridique'){
	      	if(isset($term->field_machine_name)){
	      		if($term->field_machine_name['und'][0]['value'] == 'ej_decisions'){ */?><!--
	      			<a class="rss-link" title="<?php /*print t('Access to the rss feed ').$term->name; */?>" href="/rss/decisions.xml"><img class="rss-icon" src="/sites/default/themes/soclelab_ddd/img/content/picto-rss.png" alt="<?php /*print t('Access to the rss feed ').$term->name; */?>"  /></a>
	      		<?php /*}elseif($term->field_machine_name['und'][0]['value'] == 'ej_reglement_amiable'){ */?>
					<a class="rss-link" title="<?php /*print t('Access to the rss feed ').$term->name; */?>" href="/rss/reglements-amiables.xml"><img class="rss-icon" src="/sites/default/themes/soclelab_ddd/img/content/picto-rss.png" alt="<?php /*print t('Access to the rss feed ').$term->name; */?>"  /></a>
	      		<?php /*}elseif($term->field_machine_name['und'][0]['value'] == 'ej_avis_parlement'){ */?>
	      			<a class="rss-link" title="<?php /*print t('Access to the rss feed ').$term->name; */?>" href="/rss/avis-parlement.xml"><img class="rss-icon" src="/sites/default/themes/soclelab_ddd/img/content/picto-rss.png" alt="<?php /*print t('Access to the rss feed ').$term->name; */?>"  /></a>
	      		<?php /*}elseif($term->field_machine_name['und'][0]['value'] == 'ej_proposition_reforme'){ */?>
	      			<a class="rss-link" title="<?php /*print t('Access to the rss feed ').$term->name; */?>" href="/rss/propositions-reforme.xml"><img class="rss-icon" src="/sites/default/themes/soclelab_ddd/img/content/picto-rss.png" alt="<?php /*print t('Access to the rss feed ').$term->name; */?>"  /></a>
	      		<?php /*}elseif($term->field_machine_name['und'][0]['value'] == 'ej_rapports_defenseur'){ */?>
      				<a class="rss-link" title="<?php /*print t('Access to the rss feed ').$term->name; */?>" href="/rss/rapports.xml"><img class="rss-icon" src="/sites/default/themes/soclelab_ddd/img/content/picto-rss.png" alt="<?php /*print t('Access to the rss feed ').$term->name; */?>"  /></a>
	      		--><?php /*}
	      	}
        } */?>
		</div>

    <?php if (isset($term->field_taxo_affichage['und'][0]['value']) && $term->field_taxo_affichage['und'][0]['value'] == 'small') { ?>
      <?php if (isset($term->field_taxo_logo['und'][0]['sid'])) { ?>
        <div class="vignette-logo logo-term">
          <?php print slutil_get_img($term->field_taxo_logo['und'][0]['sid'], "taxo_vignette_small");  ?>
        </div>
      <?php } ?>
    <?php } ?>

    <?php if (isset($term->description) && $term->description != "") { ?>
      <div class="vignette-chapo chapo-term">
        <?php print _filter_htmlcorrector( truncate_utf8(strip_tags($term->description, '<strong><em>'), 200, true, true) ); ?>
      </div>
    <?php } ?>

    <?php if (isset($term->field_taxo_affichage['und'][0]['value']) && $term->field_taxo_affichage['und'][0]['value'] == 'large') { ?>
      <?php if (isset($term->field_taxo_logo['und'][0]['sid'])) { ?>
        <div class="vignette-logo-big logo-big-term">
          <?php print slutil_get_img($term->field_taxo_logo['und'][0]['sid'], "taxo_vignette_large");  ?>
        </div>
      <?php } ?>
    <?php } ?>
    
    <?php if (isset($term->field_action_filter_decision['und'][0]['value']) && $term->field_action_filter_decision['und'][0]['value'] == "filter_decision") { ?>
      <label class="hidden" for="filter_decision_ra"><?php print t('Choose theme or date')?></label>
      <div id="filter-decision" class="js filter-part-vignette">
        <div class="title-filter"><?php print t('Filter by:');?></div>
        <?php $block = module_invoke('ddd_tx_decision', 'block_view', 'block_autorite_selected'); ?>
        <?php print $block['content']; ?>
        <div class="sep-filter"><?php print t('or');?></div>
        <?php $block = module_invoke('ddd_tx_decision', 'block_view', 'block_theme_selected'); ?>
        <?php print $block['content']; ?>
      </div>
    <?php } elseif (isset($term->field_action_filter_decision['und'][0]['value']) && $term->field_action_filter_decision['und'][0]['value'] == "filter_reglement") { ?>
      <label class="hidden" for="filter_decision_ra"><?php print t('Choose theme or date')?></label>
      <div id="filter-reglement" class="js filter-part-vignette">
        <div class="title-filter"><?php print t('Filter by:');?></div>
        <?php $block = module_invoke('ddd_tx_decision', 'block_view', 'block_autorite_selected_ra'); ?>
        <?php print $block['content']; ?>
        <div class="sep-filter"><?php print t('or');?></div>
        <?php $block = module_invoke('ddd_tx_decision', 'block_view', 'block_theme_selected_ra'); ?>
        <?php print $block['content']; ?>
      </div>
    <?php } ?>
  </article>
</div>

<?php } elseif ($view_mode == 'liste_accueil') { ?>
<?php
/************************************************************************************************************/
/*                          LISTE DANS LA PAGE D'ACCUEIL                                                    */
/************************************************************************************************************/
?>
<?php $link_array = slutil_get_taxo_link($term->tid); ?>
<?php if (isset($term->field_url_redirect['und'][0]['url'])) { $link_array['url'] = $term->field_url_redirect['und'][0]['url']; } ?>
<div class="container-banniere">
  <?php print views_embed_view('vue_publications','block_liste_accueil', $term->tid); ?>
</div>
<div class="taxo-acc-bot">
	<div class="container">
		<div class="row">
			<div class="col-xs-12 col-sm-12 col-md-3 col-lg-4 acc-taxo-title">
        <h2><?php print $term->name; ?></h2>
        <div class="def-droit-title"><?php print t('the Défenseur des droits'); ?></div>
        
			</div>
      <?php print views_embed_view('vue_publications','block_liste_accueil_2', $term->tid); ?>
      <div class="col-xs-12 col-sm-2 col-md-1 col-lg-2 pull-right acc-taxo-link">
				<a href="<?php print $link_array['url']; ?>" title="<?php print $link_array['title']; ?>">
          <?php print $term->name; ?>
        </a>
			</div>
		</div>
	</div>
</div>


<?php } ?>