<?php if ($element['#view_mode'] == 'full' && isset($element['#items'])) { ?>
  <?php foreach ($element['#items'] as $key => $cur_item) { ?>
    <?php if(isset($cur_item['target_id'])) { ?>      
      <?php $current_taxo = taxonomy_term_load($cur_item['target_id']); ?>
      <?php if ($current_taxo != null) { ?>
        <?php $view_to_show = taxonomy_term_view($current_taxo, "liste_accueil"); ?>
        <?php print drupal_render($view_to_show); ?>
      <?php } ?>
    <?php } ?>
  <?php } ?>
<?php } ?>  
    