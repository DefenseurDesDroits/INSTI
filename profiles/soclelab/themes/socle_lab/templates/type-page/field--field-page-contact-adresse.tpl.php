
<?php if(isset($element['#items'][0]['value'])){ ?>
  <div class="bloc-title text-em">
    <?php print t("Contact address"); ?>
  </div>
  <?php $adresse_map = $element['#items'][0]['value']; ?>
  <iframe frameborder="0" scrolling="no" marginheight="0" title="Google Maps" marginwidth="0" src="http://maps.google.com/maps?f=q&source=s_q&hl=en&geocode=&q=<?php print $adresse_map; ?>&ie=UTF8&z=15&t=m&iwloc=near&output=embed"></iframe>
<?php } ?>