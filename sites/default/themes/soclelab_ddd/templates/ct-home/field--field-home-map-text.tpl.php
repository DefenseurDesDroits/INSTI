<?php if ($element['#view_mode'] == 'full' && isset($element['#items'])) { ?>
<div class="row">
  <div class="col-xs-12 col-sm-12 col-md-5 col-lg-5 info pull-left">
    <div class="info-text container-text">
      <?php print $element[0]['#markup']; ?>
    </div>
  </div>
  <div class="col-xs-12 col-sm-12 col-md-7 col-lg-7 map pull-right">
    <?php //print views_embed_view('vu_office', 'block_structure_map');
    	for ($i=0;$i<20;$i++){
				$blockObject = block_load('block', $i);
				$block = _block_get_renderable_array(_block_render_blocks(array($blockObject)));

				if(isset($block["block_".$i]["#block"]->title) && $block["block_".$i]["#block"]->title == "Image de la carte presente en Home"){
				
					print "<a href='./office' >".str_replace(array("<p>", "</p>"), array("",""),$block["block_".$i]["#markup"])."</a>";
					break;
    		}
    	}
    ?>
  </div>
</div>
<?php } ?>