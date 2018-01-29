<?php if ($element['#view_mode'] == 'full' && isset($element['#items'])) { ?>
  <div class="row">
    <?php foreach ($element['#items'] as $key => $cur_item) { ?>
      <?php if(isset($cur_item['value'])) { ?> 
        <div class="col-xs-12 col-sm-6 col-md-4 col-lg-4">    
          <?php $fc_bloc = field_collection_field_get_entity($cur_item); ?>
          <div class="bloc-content-highlight">
            <?php if (isset($fc_bloc->field_home_fc_highlight_logo['und'][0]['sid'])) { ?>
              <div class="highlight-logo logo-bloc">
                <?php print slutil_get_img($fc_bloc->field_home_fc_highlight_logo['und'][0]['sid'], "highlighted_bloc_accueil");  ?>
              </div>
            <?php } ?>
            
            <div class="container-txt">
              <?php if (isset($fc_bloc->field_home_fc_highlight_titre['und'][0]['value'])) { ?>
                <div class="highlight-titre titre-bloc">
                  <?php print $fc_bloc->field_home_fc_highlight_titre['und'][0]['value']; ?>
                  <?php $bloc_title = $fc_bloc->field_home_fc_highlight_titre['und'][0]['value'];?>
                </div>
              <?php } else { $bloc_title = ""; }?>
              
              <div class="highlight-texte texte-bloc">
                <?php if (isset($fc_bloc->field_home_fc_highlight_texte['und'][0]['value'])) { ?>
                  <?php print $fc_bloc->field_home_fc_highlight_texte['und'][0]['value']; ?>
                <?php } ?>
                <?php if (isset($fc_bloc->field_home_fc_highlight_link['und'][0]['url'])) { ?>
                  <a href="<?php print $fc_bloc->field_home_fc_highlight_link['und'][0]['url']; ?>" title="<?php print slutil_encode_title(t("Display the page") . " " . $bloc_title); ?>"><?php print t("=> more"); ?></a>
                <?php } ?>
              </div>
            </div>
          </div>
        </div> 
      <?php } ?>
    <?php } ?>
  </div>
<?php } ?>  
    