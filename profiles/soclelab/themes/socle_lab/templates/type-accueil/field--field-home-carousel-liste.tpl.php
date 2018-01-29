<?php if ($element['#view_mode'] == 'full' && isset($element['#items'])) { ?>
<div id="carousel-home" class="carousel slide" data-ride="carousel">
  <!-- Wrapper for slides -->
  <div class="carousel-inner">
    <?php foreach ($element['#items'] as $key => $cur_item) { ?>
      <div class="item <?php if($key==0){ print "active"; } ?>">
        <?php if(isset($cur_item['target_id'])) { ?>
          <?php $current_node = node_load(getNidTrad($cur_item['target_id'])); ?>
          <?php if($current_node != null){ ?>
            <?php $view_to_show = node_view($current_node, 'vignette_carousel'); ?>
            <?php print drupal_render($view_to_show); ?>
          <?php } ?>
        <?php } ?>
      </div>
    <?php } ?>  
  </div>
  
  <!-- Indicators -->
  <div class="container container-indicators">
    <ol class="carousel-indicators">
      <?php for($j=0; $j < count($items); $j++){ ?>
        <li data-nb-elem="<?php print count($items); ?>" title="<?php print slutil_encode_title(t("Display the slide") . " " . $j); ?>" data-target="#carousel-home" data-slide-to="<?php print $j; ?>" class="<?php if($j==0){ print "active"; } ?>">    
      <?php } ?>
    </ol>
  </div>
  <!-- Controls -->
  <a class="left carousel-control" href="#carousel-home" role="button" data-slide="prev">
    <span class="glyphicon glyphicon-chevron-left" aria-hidden="true"></span>
    <span class="sr-only">Previous</span>
  </a>
  <a class="right carousel-control" href="#carousel-home" role="button" data-slide="next">
    <span class="glyphicon glyphicon-chevron-right" aria-hidden="true"></span>
    <span class="sr-only">Next</span>
  </a>
</div>
<?php } ?>  