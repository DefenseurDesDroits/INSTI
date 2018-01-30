<?php
/**
 * @file gmap-view-gmap.tpl.php
 * Default view template for a gmap.
 *
 * - $map contains a themed map object.
 * - $map_object contains an unthemed map object.
 *
 * @ingroup views_templates
 */
?>
<?php $msg = t('Rechercher'); ?>
<form method="get" action="/office/" id="search_input_gmap" class="input-group">
	<input type="text" title="<?php echo $msg; ?>" placeholder="<?php echo $msg; ?>" class="form-text form-control" />
	<span class="input-group-btn">
		<button title="<?php echo $msg; ?>" value="<?php echo $msg; ?>" class="btn btn-primary" type="submit"><span class="glyphicon glyphicon-search"></span></button>
	</span>
</form>

<?php if (!empty($title)) : ?>
  <h3><?php echo $title; ?></h3>
<?php endif; ?>
<?php echo $map; ?>

<?php $path = '/' . drupal_get_path('module', 'ddd_custom_gmap') . '/js/gmap_office.js'; ?>
<script type="text/javascript" src="<?php echo $path; ?>"></script>
