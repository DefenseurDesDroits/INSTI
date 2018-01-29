<div class="row">
	<div class="col-md-12">
    <div class="col-xs-9 col-sm-10 col-md-10 col-lg-10 col-second">
      <?php print render($form['search']); ?>
    </div>
		<a href="#" role="button" aria-label="<?=t('Launch search')?>">
	  <div class="col-xs-3 col-sm-2 col-md-2 col-lg-2 col-first" id="getit">
	    <i class="fa fa-search" aria-hidden="true"></i>
	  </div>
    </a>
	</div>
</div>
<?php print drupal_render_children($form);?>
