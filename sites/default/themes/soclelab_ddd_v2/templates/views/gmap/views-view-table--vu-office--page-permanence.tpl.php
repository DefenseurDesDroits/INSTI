<?php

/**
 * @file
 * Template to display a view as a table.
 *
 * - $title : The title of this group of rows.  May be empty.
 * - $header: An array of header labels keyed by field id.
 * - $caption: The caption for this table. May be empty.
 * - $header_classes: An array of header classes keyed by field id.
 * - $fields: An array of CSS IDs to use for each field id.
 * - $classes: A class or classes to apply to the table, based on settings.
 * - $row_classes: An array of classes to apply to each row, indexed by row
 *   number. This matches the index in $rows.
 * - $rows: An array of row items. Each row is an array of content.
 *   $rows are keyed by row number, fields within rows are keyed by field ID.
 * - $field_classes: An array of classes to apply to each field, indexed by
 *   field id, then row number. This matches the index in $rows.
 * @ingroup views_templates
 */
?>
<?php

ctools_include('ajax');
ctools_include('modal');
ctools_include('plugins');
ctools_modal_add_js();




?>

<?php foreach ($rows as $row_count => $row): ?>
<article class="vignette-delegue search-result">
  <div class="delegue-photo">
    <?php $row['field_delegate_picture'] = str_replace("sites/default/files/", "public://", $row['field_delegate_picture']); ?>
    <?php print theme('image_style', array('path' => $row['field_delegate_picture'],'style_name' => "photo_delegue", 'alt' => t("Picture of") . " " . $row['field_delegate_last_name'] . ' ' . $row['field_delegate_name']));  ?>
  </div>
	<div class="row">
		<div class="col-xs-12 col-sm-6 col-md-6 col-lg-5 container-delegue-contact">
			<div class="delegue-name">
			  <?php print $row['field_delegate_civilite'] . ' ' .  $row['field_delegate_last_name'] . ' ' . $row['field_delegate_name']; ?>
			</div>
			<div class="delegue-phone">
			  <?php if($row['field_structure_phone'] != "") { print t("Phone:") . " " . $row['field_structure_phone']; } ?>
			</div>
			<div class="delegue-fax">
			  <?php if($row['field_structure_fax'] != "") { print t("Fax") . " " . $row['field_structure_fax']; } ?>
			</div>
			<?php
			//En fonction du genre de la personne on affiche un libell� de lien diff�rent
			if ($row['field_delegate_civilite'] == "Monsieur"){
				$lblContact = t('Contact him by email');
			}elseif ($row['field_delegate_civilite'] == "Madame"){
				$lblContact = t('Contact her by email');
			}else {
				$lblContact = t('Contact by email');
			}
			$emailDelegue = $row['field_delegate_email'];
			//$destLink = "mailto:" . $emailDelegue;
			$destLink = 'contact_delegate/' . $row['nid'] . '/nojs';
			print ctools_modal_text_button($lblContact, $destLink, t('contacter délégué'), 'delegate-modal-style'); ?>
		</div>
		<div class="col-xs-12 col-sm-6 col-md-6 col-lg-7">
			<div class="delegue-city-title"><?php print $row['city']; ?></div>
			<div class="delegue-label"><?php print $row['field_structure_label']; ?></div>
			<div class="delegue-label"><?php print $row['field_structure_second_label']; ?></div>
			<div class="delegue-street"><?php print $row['street']; ?></div>
			<div class="delegue-city"><?php print $row['postal_code'] . " " . $row['city']; ?></div>
		</div>
	</div>
	<div class="delegue-bottom-part clearfix">
  	<div class='row'>
  		<div class='col-xs-12 col-sm-6 col-md-6 col-lg-5'>
  			<a title="<?php print t('Locate on map'); ?>" href="javascript:clickMarker(<?php echo $row[coordinates] ?>)" class="btn localization">
  				<?php print t('Locate on map');
          ?>
  			</a>
  		</div>
  		<div class='col-xs-12 col-sm-6 col-md-6 col-lg-7'>
  			<?php print t('Permanence:') . " " . $row['field_office_day'] . " " . $row['field_office_hourly']; ?>
  		</div>
  	</div>
	</div>
</article>
<?php endforeach; ?>
<?php $path = '/' . variable_get('file_public_path', conf_path() . '/files') . '/js/gmap_office.js'; ?>
<script type="text/javascript" src="<?php echo $path; ?>"></script>
