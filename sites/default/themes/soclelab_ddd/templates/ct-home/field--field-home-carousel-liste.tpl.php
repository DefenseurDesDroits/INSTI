<?php if ($element['#view_mode'] == 'full' && isset($element['#items'])) { ?>
  <div id="banniere-home">
  <?php $id = (int) rand(0, count($element['#items'])-1); ?>
  <div class="item">
    <?php if (isset($element['#items'][$id]['target_id'])) { ?>
      <?php $current_node = node_load(getNidTrad($element['#items'][$id]['target_id'])); ?>
      <?php if($current_node != null){ ?>
        <?php $view_to_show = node_view($current_node, 'vignette_carousel'); ?>
        <?php print drupal_render($view_to_show); ?>
      <?php } ?>
    <?php } ?>
  </div>
<?php } ?>