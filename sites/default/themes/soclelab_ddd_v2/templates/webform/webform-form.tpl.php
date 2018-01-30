<?php

/**
 * @file
 * Customize the display of a complete webform.
 *
 * This file may be renamed "webform-form-[nid].tpl.php" to target a specific
 * webform on your site. Or you can leave it "webform-form.tpl.php" to affect
 * all webforms on your site.
 *
 * Available variables:
 * - $form: The complete form array.
 * - $nid: The node ID of the Webform.
 *
 * The $form array contains two main pieces:
 * - $form['submitted']: The main content of the user-created form.
 * - $form['details']: Internal information stored by Webform.
 */
?>
<div class="row">
  <div class="col-md-4 col-md-offset-4">
    <div class="markup description"><?php print t('* Required fields');?></div>
  </div>
  <div class="col-md-4 col-md-offset-4">
    <div class="demande-info"><?php print drupal_render($form['submitted']['type']);?></div>
    <?php print drupal_render($form['submitted']['prenom']);?>
    <?php print drupal_render($form['submitted']['nom']);?>
    <?php print drupal_render($form['submitted']['email']);?>
    <?php print drupal_render($form['submitted']['numero_de_telephone']);?>
    <br>
  </div>
  <div class="col-md-6 col-md-offset-3">
    <?php print drupal_render($form['submitted']['votre_message']);?>
    <?php print drupal_render($form['submitted']['message']);?>   

  </div>
  <div class="col-xs-4 col-xs-offset-4 col-md-2 col-md-offset-5">
    <?php print drupal_render($form['submitted']);?>
    <?php print drupal_render_children($form);?>    
  </div>
</div>