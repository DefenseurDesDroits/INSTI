<div class='row col-md-12 wrapper-suivi-dossier'>
    <div class='col-md-10 col-md-offset-1 col-lg-6 col-lg-offset-3'>
        <div class="row">
            <div class="hidden-xs">
              <?php print $vars['timeline'];?>
            </div>
            <div class="visible-xs">
              <?php print $vars['timeline_responsive'];?>
            </div>
            <div class="col-md-8 col-md-offset-2">
              <div class="content">
                <?php print $vars['body'];?>
              </div>

              <?php print drupal_render($vars['form']);?>
            </div>
        </div>
    </div>
    <div class='col-md-10 col-md-offset-1'>
      <?php if(isset($vars['date'])): ?>
        <div class="wrapper-encart">
            <p><?php print t('Dernière mise à jour le @date', array('@date'=>$vars['date']));?></p>
            <h2 class="encart-title">
              <?php print $vars['encart_titre'];?>
            </h2>
            <div class="encart-content">
              <?php print $vars['encart_body'];?>
            </div>
        </div>
      <?php endif; ?>
    </div>
</div>

