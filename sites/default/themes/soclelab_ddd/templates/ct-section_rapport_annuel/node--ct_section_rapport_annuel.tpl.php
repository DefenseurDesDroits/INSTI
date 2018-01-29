<?php
if ($view_mode == "full") {
	$query = new EntityFieldQuery ();
	$query->entityCondition ( 'entity_type', 'node' )->entityCondition ( 'bundle', 'ct_rapport_annuel' )->fieldCondition ( 'field_rapport_first_section', 'target_id', array (
			$node->nid
	), 'IN' );
	$query2 = new EntityFieldQuery ();
	$query2->entityCondition ( 'entity_type', 'node' )->entityCondition ( 'bundle', 'ct_rapport_annuel' )->fieldCondition ( 'field_rapport_second_section', 'target_id', array (
			$node->nid
	), 'IN' );
	$result = $query->execute ();
	$result2 = $query2->execute ();
	if (! empty ( $result )) {
		$parent_id = array_keys ( $result ['node'] ) [0];
	} elseif (! empty ( $result2 )) {
		$parent_id = array_keys ( $result2 ['node'] ) [0];
	}
	$variables ["parent_id"] = $parent_id;
	?>
<?php
}
/**
 * ***************************************************************************************************
 */
/* FULL : CONTENU COMPLET */
/**
 * *********************************************************************************************************
 */
?>
<?php if ($view_mode == "full") { ?>
<article class="<?php print $classes; ?> node-vm-full clearfix"
	<?php print $attributes; ?>>
	<div class="row">
		<div class="col-xs-12 col-sm-6 col-md-6 col-lg-8">
			<h1 class="text-em ramarg"><?php print $title; ?></h1>
		</div>

		<div class="col-xs-12 col-sm-6 col-md-6 col-lg-4 align-right">
	      <?php if( isset($node->field_section_reference_rapport)){ ?>
	        <div class="node-type type-article">
				<a href="<?php print url("node/".$node->field_section_reference_rapport['und'][0]['nid'], array("absolute" => TRUE)); ?>" title="<?php print $node->field_section_reference_rapport['und'][0]['node']->title; ?>"><?php print $node->field_section_reference_rapport['und'][0]['node']->title; ?></a>
			</div>
	      <?php } ?>
	      <?php $block_sharthis = module_invoke('sharethis', 'block_view', 'sharethis_block'); ?>
	      <?php print render($block_sharthis['content']); ?>
	    </div>

	</div>

	<?php if (isset($content["field_section_rapport_sommaire"])) { ?>
		<div class="node-body text-riche">
		<?php print html_entity_decode(render($content["field_section_rapport_sommaire"])); ?>
	</div>
	<?php } ?>

	<?php if (isset($content["field_section_rapport_corps"])) { ?>
		<div class="node-body body-offre text-riche">
			<?php print render($content["field_section_rapport_corps"]); ?>
		</div>
	<?php } ?>

	<?php

	if (isset ( $content ['field_section_rapport_annexes'] )) {
		/**
		 * convertit la taille d'un fichier dans l'unité correspondante
		 */
		function _mij_formatSizeUnits($bytes) {
			if ($bytes >= 1073741824) {
				$bytes = number_format ( $bytes / 1073741824, 2 ) . ' GB';
			} elseif ($bytes >= 1048576) {
				$bytes = number_format ( $bytes / 1048576, 2 ) . ' MB';
			} elseif ($bytes >= 1024) {
				$bytes = number_format ( $bytes / 1024, 2 ) . ' KB';
			} elseif ($bytes > 1) {
				$bytes = $bytes . ' bytes';
			} elseif ($bytes == 1) {
				$bytes = $bytes . ' byte';
			} else {
				$bytes = '0 bytes';
			}

			return $bytes;
		}

		foreach ( $content ['field_section_rapport_annexes'] ['#items'] as $files ) {
			$sid = $files ['sid'];
			$atom = scald_atom_load ( $sid );
			$title = $atom->title;
			$titleWithNoExtension = $atom->title;
			$link = $atom->rendered->file_source_url;
			$field = field_get_items ( 'scald_atom', $atom, 'scald_file' );
			$fichier = $field [0];

			$fid = $fichier ['fid'];
			$file = file_load ( $fid );
			$size = _mij_formatSizeUnits ( $file->filesize );
			$mime = strtoupper ( end ( explode ( '.', $file->filename ) ) );

			print '<div class="sl-scald-file extension-pdf">' . '<a href="' . $link . '" title="' . $titleWithNoExtension . ', nouvelle fenêtre ' . $mime . ' ' . $size . '" target="_blank">' . $titleWithNoExtension . ' (' . $mime . ', ' . $size . ')  </a>' . '</div>';
		}
	}
	?>
</article>
<?php

	/**
	 * ***************************************************************************************************
	 */
	/* Included section : Contenu inclu dans un rapport */
	/**
	 * *********************************************************************************************************
	 */
	?>
<?php }elseif($view_mode == "included_section"){ ?>
<section
	class="section_rapport_annuel <?php print $classes; ?> node-vm-included_section clearfix"
	<?php print $attributes; ?>>
	<div class="row">
		<div class="col-xs-12 col-sm-12 col-md-12 col-lg-12">
			<h3 class="text-em">
				<a
					href="<?php print url("node/".$variables["nid"], array("absolute" => TRUE)); ?>"
					title="<?php print render($variables["title"]); ?>">
			<?php print render($variables["title"]); ?> </a>
		</h3>
		</div>
	</div>
	<div class="row ">
		<div class="col-xs-12 col-sm-12 col-md-12 col-lg-12 text_synthese">
                <?php print html_entity_decode(render($content["field_section_rapport_synthese"])); ?>
            </div>
	</div>
	<div class="pull-right">
		<a
			href="<?php print url("node/".$variables["nid"], array("absolute" => TRUE)); ?>"
			title="<?php print render($variables["title"]); ?>">
			<?php print t("Access to this part"); ?>
		</a>
	</div>
</section>
<?php } ?>
