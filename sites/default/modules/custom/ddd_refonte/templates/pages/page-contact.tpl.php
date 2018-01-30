<div class="row" id="main-contact">
  <div class="col-xs-12 col-sm-12 col-md-4" id="1">
    <div class="bloc-contact">
      <div class="img-contact" id="phone"><img src="<?=$vars['file1'];?>" id="phonepic"></div>
      <?php print(t($vars['body1']));?>
    </div>
  </div>

  <div class="col-xs-12 col-sm-12 col-md-4" id="2">
    <div class="bloc-contact">
      <div class="img-contact" id="delegate"><img src="<?=$vars['file2'];?>"></div>
      <?php print(t($vars['body2']));?>
      <div class="content-btn-submit">
        <form action="delegate" method="get">
          <span class="btn-submit-contact">
            <input type="text" name="cp" placeholder="<?php print(t("Postal code"));?>">
          </span>
          <input class="img-search-btn" type="submit" value="" />
        </form>
      </div>
    </div>
  </div>

  <div class="col-xs-12 col-sm-12 col-md-4" id="3">
    <div class="bloc-contact">
      <div class="img-contact"  id="mail"><img src="<?=$vars['file3'];?>"></div>
      <?php print(t($vars['body3']));?>
    </div>
  </div>
</div>

<!-- http://local.droit/fr/delegate -->
