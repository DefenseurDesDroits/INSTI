
<?php print drupal_render($vars['form']); ?>
<?php if(isset($vars['final_form'])):?>
<div class="hide">
  <?php print $vars['final_form']; ?>
</div>
<?php endif; ?>