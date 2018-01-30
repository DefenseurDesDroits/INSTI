<?php if($element['#field_name'] == 'field_decision_suivi') { ?>
  <?php $i = 0; ?>
  <?php foreach($element['#items'] as $current_decision){ ?>
    <?php $fc_id = $element['#object']->field_decision_suivi['und'][$i]['value']; ?>
    <?php $fc = $element[$i]['entity']['field_collection_item'][$fc_id]; ?>
    
    <?php if(isset($fc['field_title']['#object']) && isset($fc['field_article_descriptif']['#object'])) { ?>
      <div class="one-question one-decision">
        <a data-toggle="collapse" data-parent="#accordion" href="#collapse<?php print $i; ?>" title="<?php print t("Show/hide the decision");?>" class="bootstrap-collapse-processed <?php if($i!=0){ print "collapsed"; } ?>">
          <?php print drupal_render($fc['field_title']); ?>
        </a>
        
        <div id="collapse<?php print $i; ?>" class="collapse-reponse collapse <?php if($i==0){ print "in"; } ?>" >
          <div class="body-suivi"><?php print drupal_render($fc['field_article_descriptif']); ?></div>
          <?php if (isset($fc['field_article_document']['#object'])) {?>
            <div class="pdf-suivi"><?php print drupal_render($fc['field_article_document']); ?></div>
          <?php } ?>
        </div>
      </div>

      <?php $i = $i+1; ?>
    <?php } ?>
  <?php } ?>
<?php } ?>