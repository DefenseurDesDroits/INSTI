
<?php if(isset($element['#items'][0]['value'])){ ?>
  <?php $i = 0; ?>
  <?php foreach($element['#items'] as $current_question){ ?>
    <?php $fc = field_collection_field_get_entity($current_question); ?>
    
    <?php if(isset($fc->field_faq_fc_question['und'][0]['value']) && isset($fc->field_faq_fc_reponse['und'][0]['value'])) { ?>
      <div class="one-question">
        <h2>
          <a role="button" data-toggle="collapse" data-parent="#accordion" href="#collapse<?php print $i; ?>" title="<?php print t("Show/hide the question");?>" class="bootstrap-collapse-processed <?php if($i!=0){ print "collapsed"; } ?>">
            <?php print $fc->field_faq_fc_question['und'][0]['value']; ?>
          </a>
        </h2>
        <div id="collapse<?php print $i; ?>" class="collapse-reponse collapse <?php if($i==0){ print "in"; } ?>" >
          <div class="texte-em">
            <?php print $fc->field_faq_fc_reponse['und'][0]['value']; ?>
          </div>
        </div>
      </div>
      <?php $i = $i+1; ?>
    <?php } ?>
  <?php } ?>
<?php } ?>