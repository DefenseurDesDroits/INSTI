
<?php $current_obj_show = menu_get_object(); ?>

<?php if (isset($current_obj_show->field_article_keyword['und'])) { ?>
  <?php $str_keyword = array(); ?>
  <?php foreach ($current_obj_show->field_article_keyword['und'] as $key => $cur_keyword) { ?>
    <?php $str_keyword[] = $cur_keyword['tid']; ?>
  <?php } ?>
  <?php $query_str = array(implode('+', $str_keyword)); ?>
  
  <?php $view_seemore = slutil_embed_view_args('vue_mediatheque','block_media_seemore', $str_keyword); ?>
  <?php if ($view_seemore) { ?>
    <div class="block-seemore">
      <div class="row">
        <div class="col-xs-2 col-sm-2 col-md-2 col-lg-3">
          <div class="bloc-puce puce-left"><?php print t("See also"); ?></div>
        </div>
        
        <div class="col-xs-8 col-sm-8 col-md-8 col-lg-6">
          <div class="row">
            <?php print $view_seemore; ?>
          </div>
        </div>
        
        <div class="col-xs-2 col-sm-2 col-md-2 col-lg-3">
          <div class="bloc-puce puce-right"><?php print t("See also"); ?></div>
        </div>
      </div>
    </div>
  <?php } ?>  
<?php } ?>  