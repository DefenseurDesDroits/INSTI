<?php if ($element['#view_mode'] == 'full' && isset($element['#items'])) { ?>
  <?php $make_clear = 0; ?>
  <div class="row">
    <?php foreach ($element['#items'] as $key => $cur_item) { ?>
      <?php if(isset($cur_item['target_id'])) { ?>
        <?php $current_node = node_load(getNidTrad($cur_item['target_id'])); ?>
        <?php if($current_node != null){ ?>
          <?php if($make_clear==0 && isset($current_node->field_article_type['und'][0]['tid'])){ ?>
            <?php $term_to_show =taxonomy_term_load($current_node->field_article_type['und'][0]['tid']); ?>
            <?php if ($term_to_show) { ?>
              <div class="vignette-home-type">
                <?php $link_array = slutil_get_taxo_link($current_node->field_article_type['und'][0]['tid']); ?>
                <a href="<?php print $link_array['url']; ?>" title="<?php print $link_array['title']; ?>"><?php print $term_to_show->name; ?></a>
              </div>
            <?php } ?>
          <?php } ?>
          <?php $view_to_show = node_view($current_node, 'vignette_accueil'); ?>
          <?php print drupal_render($view_to_show); ?>
        <?php } ?>
      <?php } ?>
      <?php $make_clear = ($make_clear+1)%2; ?>
      <?php if ($make_clear==0) { ?><div class="clearfix"></div><?php } ?>
    <?php } ?>
  </div>
<?php } ?>  
    
