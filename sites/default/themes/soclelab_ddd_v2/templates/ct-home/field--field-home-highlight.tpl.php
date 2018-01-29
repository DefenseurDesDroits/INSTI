<?php if ($element['#view_mode'] == 'full' && isset($element['#items'])) { ?>
  <div class="row">
    <div class="col-xs-12 col-sm-12 col-md-1 col-lg-1"></div>
    <?php foreach ($element['#items'] as $key => $cur_item) { ?>
      <?php if(isset($cur_item['value'])) { ?> 
        <?php $fc_bloc = field_collection_field_get_entity($cur_item); ?>
        <?php $classes = ""; ?> 
        <?php if (isset($fc_bloc->field_home_fc_highlight_texte['und'][0]['value'])) { ?>
          <?php $classes = slutil_encode_title($fc_bloc->field_home_fc_highlight_texte['und'][0]['value']); ?>
        <?php } ?>
        <?php $title = ""?>
        <?php if (isset($fc_bloc->field_home_fc_highlight_info['und'][0]['value'])) { ?>
          <?php 
            $title = slutil_encode_title($fc_bloc->field_home_fc_highlight_info['und'][0]['value']); 
          ?>
        <?php } ?>
        <div class="col-xs-12 col-sm-6 col-md-2 col-lg-2 <?php print $classes; ?>" title="<?php print $title ?>">    
          <div class="bloc-content-highlight">   
            <div class="container-txt">
              <?php if (isset($fc_bloc->field_home_fc_highlight_titre['und'][0]['value'])) { ?>
                <?php $bloc_title = $fc_bloc->field_home_fc_highlight_titre['und'][0]['value'];?>
                <?php if (isset($fc_bloc->field_home_fc_highlight_link['und'][0]['url'])) { ?>
                  <a href="<?php print $fc_bloc->field_home_fc_highlight_link['und'][0]['url']; ?>" title="<?php print slutil_encode_title(t("Display the page") . " " . $bloc_title); ?>">
                    <?php print $bloc_title; ?>
                    <div class="click-here-txt"><?php print t("click here"); ?></div>
                  </a>
                <?php } else { print $bloc_title; } ?>
              <?php } ?>
            </div>
            <div class="bg-circle-white-123"></div>
            <div class="bg-circle-white-150"></div>
          </div>
        </div> 
      <?php } ?>
    <?php } ?>
    <div class="col-xs-12 col-sm-12 col-md-1 col-lg-1"></div>
  </div>
<?php } ?>  
    