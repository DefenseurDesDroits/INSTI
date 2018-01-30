<div class="block-ressources-juridiques">
	<a href="<?php print file_create_url("/espace-juridique"); ?>"
		title="<?php t("Legal publications") ?>">

		<div class="block-resssources-juridiques-titre">
			<p><?php print t("Legal publications"); ?></p>
		</div>
		<?php
		
		if (isset ( $element ['#object'] ) && isset ( $element ['#object']->field_home_img_resss_juridiques ) && isset ( $element ['#object']->field_home_img_resss_juridiques ['und'] ) && isset ( $element ['#object']->field_home_img_resss_juridiques ['und'] [0] ) && isset ( $element ['#object']->field_home_img_resss_juridiques ['und'] [0] ['sid'] )) {
			$atom = scald_fetch ( $element ['#object']->field_home_img_resss_juridiques ['und'] [0] ['sid'] );
			$uri = $atom->file_source;
			$urlImage = file_create_url ( $uri );
		}
		?>
		
		<div class="bandeau_cache">&nbsp</div>
		<div class="block-image-ressources-juridiques" style="background-image:url(<?php print $urlImage ?>);">
			<img />
		</div>
	</a>
</div>

<?php if ($element['#view_mode'] == 'full' && isset($element['#items'])) { ?>
<?php $node = node_load($element['#items'][0]['target_id']); ?>
<?php if($node){ ?>
<?php $link = slutil_get_node_link($node->nid); ?>
<?php $field_text = taxonomy_term_load ( $node->field_rapport_keyword ['und'] [0] ['tid'] )->name; ?>
<?php $date = substr ( $field_text, - 4 ); ?>
<div class="block-rapport-annuel">
	<a href="<?php print  $link['url'] ?>" title="<?php print  $link['title'] ?>">
		<div class="block-rapport-annuel-titre">
			<p><?php print t("Annual activity report"); $link['name'] ?></p>
		</div>
		<div class="bandeau_cache">&nbsp</div>
		<div class="block-rapport-annuel-annee">
			<p>
				<?php print $date?>
			</p>
		</div>
		
	    
	       	
	        
    	  <?php } ?>
		</div>
	</a>
</div>
<?php } ?> 