<?php if(isset($vars['title'])) : ?>
  <div class="titre-doc-associes">
  	<?php print $vars['title']; ?>
  </div>
  <?php print render($vars['view']); ?>
<?php endif; ?>
