<?php if ($element['#view_mode'] == 'full'){ ?>
  <?php if(isset($element['#items'])){ ?>
    <?php $field_article_galerie = slutil_get_galerie($element['#items']); ?>
    <?php $nb_image_galerie = count( $field_article_galerie ); ?>
    
    <div class="block-galerie-img" id="list-small-img-galerie">
      <div class="bloc-title text-em">
        <?php print t("Media gallery"); ?>
      </div>
      
      <div class="js" style="//display:none;">
        <div class="list-img-galerie">
          <?php for ($i = 0; $i < $nb_image_galerie; $i++) { ?>
            <div class="col-xs-6 col-sm-6 col-md-4 col-lg-4 image-mini-galerie">
              <a href="#" id="img-galerie-<?php print $i; ?>" data-target="#" onclick="ShowLightbox('<?php print "img-galerie-" . $i; ?>'); return false;">
                <?php print $field_article_galerie[$i]['image']; ?>  
                <span style="display:none;" class="image-copyright"><?php print $field_article_galerie[$i]['copyright']; ?></span> 
                <div class="overlay-shaddow"></div>
              </a>
            </div>
           <?php } ?>
        </div>
      </div>
      
      <noscript>
        <div class="galerie">
          <div class="row">
            <?php for ($i = 0; $i < count($field_article_galerie); $i++) { ?>
              <div class="col-md-12 " id="image-large-galerie">
                <?php print $field_article_galerie[$i]['image']; ?>
              </div>
            <?php } ?>
          </div>
        </div>
      </noscript>
    </div>
    
    
    <div class="lightbox" id="popup-galerie" style="display:none;">                              <?php /* LIGHTBOX GALERIE */ ?>
      <div class="background-black" onclick="hide_galerie();"></div>
      <div class="galerie-lightbox">
        <div class="btn-close" onclick="hide_galerie();">x</div>
        <div id="image-large-galerie-lightbox">
          <div class="image-galerie">
            <?php if (isset($field_article_galerie[0]['image'])) { ?>
             <?php print $field_article_galerie[0]['image']; ?>  
            <?php } ?>
          </div>
          
          <div class="caption-galerie">
            <div class="image-name"> <?php print $field_article_galerie[0]['title']; ?> </div>
            <div class="img-copyright">
              <?php if (isset($field_article_galerie[0]['copyright']) && $field_article_galerie[0]['copyright'] != "") { ?>
                &copy; <span class="img-copyright"><?php print $field_article_galerie[0]['copyright']; ?></span>
              <?php } ?>
            </div>
          </div>
        </div>
      </div>
      
      <div class="galerie_mini-lightbox">
        <div class="container">
          <?php for ($i = 0; $i < count($field_article_galerie); $i++) { ?>
            <div class="image-mini-galerie-lightbox">
              <a href="#" id="img-galerie-full-<?php print $i; ?>" data-target="#" onclick="ShowLightbox('<?php print "img-galerie-" . $i; ?>'); return false;">
                <?php print $field_article_galerie[$i]['image']; ?> 
                <span style="display:none;" class="image-copyright"><?php print $field_article_galerie[$i]['copyright']; ?></span> 
              </a>
            </div>
          <?php } ?>
        </div>
      </div>
    </div>                                                                     <?php /* FIN LIGHTBOX GALERIE */ ?>
  <?php } ?>
<?php } ?>  
