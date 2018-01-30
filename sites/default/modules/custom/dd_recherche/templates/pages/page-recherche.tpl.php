<div class="txt-resultats col-md-12"><?php print $vars['count'] .' '. t(' result(s)'); ?></div>
<?php if(isset($vars['xml'])) : ?>
  <?php foreach($vars['xml'] as $xml) : ?>
    <div class="views-field views-field-nothing">
      <span class="field-content"><div class="row">
        <div class="col-xs-6 col-sm-4 col-md-3">
          <div class="img-presse"></div>
        </div>
        <div class="col-xs-6 col-sm-8 col-md-9">
          <div class="tags-presse"></div>
          <div class="titre-presse">
            <a href="<?=$xml['content_link']?>" target='_blank'><?=$xml['title']?></a>
          </div>
          <div class="desc-presse">
            <p><?=$xml['description']?></p>
          </div>
         <!--  <p class="date slash-blue">
            <span class="date-display-single" property="dc:date" datatype="xsd:dateTime" content="2014-09-18T00:00:00+02:00">Jeudi 18 Septembre 2014</span>
          </p> -->
          <p class="lls slash-blue">
            <?=$xml['link']?>
          </p>
        </div>
        </div>
      </span>  
    </div>
  <?php endforeach; ?>
<?php else : ?>
  <?php print $vars['view']; ?>
<?php endif; ?>