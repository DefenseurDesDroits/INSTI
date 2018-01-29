<?php if ($element['#view_mode'] == 'full' && isset($element['#items'][0]['target_id'])) { ?>
  <?php $node = node_load($element['#items'][0]['target_id']); ?>
  
  <?php if ($node) { ?>
    <?php $link = slutil_get_node_link($node->nid); ?>
    <div id="vignette-pointvue-home">
      <?php if (isset($element['#object']->field_home_pointvue_logo['und'][0]['sid'])) { ?>
        <div class="logo-pointvue">
          <?php print slutil_get_img($element['#object']->field_home_pointvue_logo['und'][0]['sid'], 'home_pointvue'); ?>
        </div>
      <?php } ?>
      <?php if (isset($node->title)) { ?>
        <a href="<?php print $link['url']; ?>" title="<?php print $link['title']; ?>">
          <h2><?php print $node->title; ?></h2>
        </a>
      <?php } ?>
      <div class="home-pointvue-text">
        <blockquote>
          <?php print slutil_get_txtvignette($node->field_article_descriptif, $node->field_article_body, 1500, true, '<strong><em><p><br>'); ?>
        </blockquote>
      </div>
      
      <?php if( isset($node->field_article_type['und'][0]['tid'])){ ?>
        <?php $cur_taxo = slutil_get_taxo_link($node->field_article_type['und'][0]['tid']); ?>
        <?php if (isset($cur_taxo["name"])) { ?> 
          <?php
            $taxo_name = $cur_taxo['name'];
            if($taxo_name == "Point de vue du Défenseur") $taxo_name = "Points de vue du Défenseur des droits";
          ?>
          <div class="link-more-wrap"><a class="link-more" href="<?php print $cur_taxo["url"]; ?>" title="<?php print $cur_taxo["title"]; ?>"><?php print t("Every&nbsp;") . $taxo_name; ?></a></div>
        <?php } ?>
      <?php } ?>
    </div>
  <?php } ?>
<?php } ?>  