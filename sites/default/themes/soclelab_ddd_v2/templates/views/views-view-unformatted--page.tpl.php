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
<?php foreach ($rows as $id => $row): ?>
  <div class="style<?php print $i; ?>">
    <div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
      <?php print $row; ?>
    </div>
  </div>
  <?php $i=($i+1)%4; ?>
<?php endforeach; ?>