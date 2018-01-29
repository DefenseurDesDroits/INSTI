<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>

<?php if (!empty($title)): ?>
  <h3><?php print $title; ?></h3>
<?php endif; ?>

<?php $i=0; ?>
<div class="row">
  <?php foreach ($rows as $id => $row): ?>
    <div class="<?php if ($classes_array[$id]) { print $classes_array[$id]; } ?> col-xs-12 col-sm-6 col-md-3 col-lg-3 style<?php print $i; ?>">
      <?php print $row; ?>
    </div>
    <?php $i=($i+1)%4; ?>
  <?php endforeach; ?>
</div>