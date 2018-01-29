
<?php if ($view_mode == "full") { ?>
<?php

	/**
	 * ***************************************************************************************************
	 */
	/* FULL : CONTENU COMPLET */
	/**
	 * *********************************************************************************************************
	 */
	?>
<article class="<?php print $classes; ?> node-vm-full clearfix"
	<?php print $attributes; ?>>
	<div class="row">
		<div class="col-xs-12 col-sm-6 col-md-6 col-lg-8">
			<h2 class="text-em ramarg"><?php print render($title); ?></h2>
		</div>
		<div class="col-xs-12 col-sm-6 col-md-6 col-lg-4 align-right">
      <?php if( isset($node->field_article_type['und'][0]['tid'])){ ?>
        <div class="node-type type-article">
          <?php $link_taxo = slutil_get_taxo_link($node->field_article_type['und'][0]['tid']); ?>
          <a href="<?php print $link_taxo['url']; ?>"
					title="<?php print $link_taxo['title']; ?>"><?php print $link_taxo['name']; ?></a>
			</div>
      <?php } ?>
      <?php $block_sharthis = module_invoke('sharethis', 'block_view', 'sharethis_block'); ?>
      <?php print render($block_sharthis['content']); ?>
    </div>
	</div>

	<?php if (isset($content["field_rapport_corps"])) { ?>
		<div class="node-body body-offre text-riche">
			<?php print render($content["field_rapport_corps"]); ?>
		</div>
	<?php } ?>

	<?php if (isset($content["field_rapport_first_label"])) { ?>
		<h3><?php print render($content["field_rapport_first_label"]); ?></h3>
	<?php } ?>

	<?php if (isset($content["field_rapport_first_section"])) { ?>
		<div class="node-body">
            <?php print render($content["field_rapport_first_section"]); ?>
        </div>
	<?php } ?>

	<?php if (isset($content["field_rapport_second_label"])) { ?>
		<h3><?php print render($content["field_rapport_second_label"]); ?></h3>
	<?php } ?>

	<?php if (isset($content["field_rapport_second_section"])) { ?>
		<div class="node-body">
            <?php print render($content["field_rapport_second_section"]); ?>
        </div>
	<?php
	}

	$taxo2 = slutil_get_taxo_link ( $node->field_rapport_keyword ["und"] [0] ["tid"] );

	$term = taxonomy_term_load ( $node->field_rapport_keyword ["und"] [0] ["tid"] );
	$name = $term->name;

	$a = array('À', 'Á', 'Â', 'Ã', 'Ä', 'Å', 'Æ', 'Ç', 'È', 'É', 'Ê', 'Ë', 'Ì', 'Í', 'Î', 'Ï', 'Ð', 'Ñ', 'Ò', 'Ó', 'Ô', 'Õ', 'Ö', 'Ø', 'Ù', 'Ú', 'Û', 'Ü', 'Ý', 'ß', 'à', 'á', 'â', 'ã', 'ä', 'å', 'æ', 'ç', 'è', 'é', 'ê', 'ë', 'ì', 'í', 'î', 'ï', 'ñ', 'ò', 'ó', 'ô', 'õ', 'ö', 'ø', 'ù', 'ú', 'û', 'ü', 'ý', 'ÿ', 'Ā', 'ā', 'Ă', 'ă', 'Ą', 'ą', 'Ć', 'ć', 'Ĉ', 'ĉ', 'Ċ', 'ċ', 'Č', 'č', 'Ď', 'ď', 'Đ', 'đ', 'Ē', 'ē', 'Ĕ', 'ĕ', 'Ė', 'ė', 'Ę', 'ę', 'Ě', 'ě', 'Ĝ', 'ĝ', 'Ğ', 'ğ', 'Ġ', 'ġ', 'Ģ', 'ģ', 'Ĥ', 'ĥ', 'Ħ', 'ħ', 'Ĩ', 'ĩ', 'Ī', 'ī', 'Ĭ', 'ĭ', 'Į', 'į', 'İ', 'ı', 'Ĳ', 'ĳ', 'Ĵ', 'ĵ', 'Ķ', 'ķ', 'Ĺ', 'ĺ', 'Ļ', 'ļ', 'Ľ', 'ľ', 'Ŀ', 'ŀ', 'Ł', 'ł', 'Ń', 'ń', 'Ņ', 'ņ', 'Ň', 'ň', 'ŉ', 'Ō', 'ō', 'Ŏ', 'ŏ', 'Ő', 'ő', 'Œ', 'œ', 'Ŕ', 'ŕ', 'Ŗ', 'ŗ', 'Ř', 'ř', 'Ś', 'ś', 'Ŝ', 'ŝ', 'Ş', 'ş', 'Š', 'š', 'Ţ', 'ţ', 'Ť', 'ť', 'Ŧ', 'ŧ', 'Ũ', 'ũ', 'Ū', 'ū', 'Ŭ', 'ŭ', 'Ů', 'ů', 'Ű', 'ű', 'Ų', 'ų', 'Ŵ', 'ŵ', 'Ŷ', 'ŷ', 'Ÿ', 'Ź', 'ź', 'Ż', 'ż', 'Ž', 'ž', 'ſ', 'ƒ', 'Ơ', 'ơ', 'Ư', 'ư', 'Ǎ', 'ǎ', 'Ǐ', 'ǐ', 'Ǒ', 'ǒ', 'Ǔ', 'ǔ', 'Ǖ', 'ǖ', 'Ǘ', 'ǘ', 'Ǚ', 'ǚ', 'Ǜ', 'ǜ', 'Ǻ', 'ǻ', 'Ǽ', 'ǽ', 'Ǿ', 'ǿ');
	$b = array('A', 'A', 'A', 'A', 'A', 'A', 'AE', 'C', 'E', 'E', 'E', 'E', 'I', 'I', 'I', 'I', 'D', 'N', 'O', 'O', 'O', 'O', 'O', 'O', 'U', 'U', 'U', 'U', 'Y', 's', 'a', 'a', 'a', 'a', 'a', 'a', 'ae', 'c', 'e', 'e', 'e', 'e', 'i', 'i', 'i', 'i', 'n', 'o', 'o', 'o', 'o', 'o', 'o', 'u', 'u', 'u', 'u', 'y', 'y', 'A', 'a', 'A', 'a', 'A', 'a', 'C', 'c', 'C', 'c', 'C', 'c', 'C', 'c', 'D', 'd', 'D', 'd', 'E', 'e', 'E', 'e', 'E', 'e', 'E', 'e', 'E', 'e', 'G', 'g', 'G', 'g', 'G', 'g', 'G', 'g', 'H', 'h', 'H', 'h', 'I', 'i', 'I', 'i', 'I', 'i', 'I', 'i', 'I', 'i', 'IJ', 'ij', 'J', 'j', 'K', 'k', 'L', 'l', 'L', 'l', 'L', 'l', 'L', 'l', 'l', 'l', 'N', 'n', 'N', 'n', 'N', 'n', 'n', 'O', 'o', 'O', 'o', 'O', 'o', 'OE', 'oe', 'R', 'r', 'R', 'r', 'R', 'r', 'S', 's', 'S', 's', 'S', 's', 'S', 's', 'T', 't', 'T', 't', 'T', 't', 'U', 'u', 'U', 'u', 'U', 'u', 'U', 'u', 'U', 'u', 'U', 'u', 'W', 'w', 'Y', 'y', 'Y', 'Z', 'z', 'Z', 'z', 'Z', 'z', 's', 'f', 'O', 'o', 'U', 'u', 'A', 'a', 'I', 'i', 'O', 'o', 'U', 'u', 'U', 'u', 'U', 'u', 'U', 'u', 'U', 'u', 'A', 'a', 'AE', 'ae', 'O', 'o');
	$taxoSystemName = strtolower(str_replace(' ', '-', str_replace($a, $b, $name)));

	/**
	 * R�cup�ration du nombre d'it�ration du mot-clef de r�f�rence *
	 */
	$tid = $node->field_rapport_keyword ["und"] [0] ["tid"];
	$query = new EntityFieldQuery ();
	$countTaxoTerm = $query->entityCondition ( 'entity_type', 'node' )->propertyCondition ( 'status', 1 )->fieldCondition ( 'field_article_keyword', 'tid', $tid, '=' )->count ()->execute ();

	?>
        <div class="vue_publication">
        <?php

	if (isset ( $taxoSystemName )) {
		print "<a href=/rapport-annuel/" . $taxoSystemName . ">";
	} else {
		print "<a href>";
	}

	$result = t ( "View all publications related to " ) . $node->title . ' (' . $countTaxoTerm . ')';
	print $result;
	?>
        </a>
	</div>
	<div class="row node-body index">
            <?php
	// the view returns objects containing the id of the documents containing the keyword corresponding to field_rapport_keyword
	$view_results = views_get_view_result ( 'ddd_vu_index_rapport_annuel', 'block' );
	// On r�cup�re les id retourn�s par la view
	$nids = array_map ( function ($view_result) {
		return $view_result->nid;
	}, $view_results );
	$nodes = node_load_multiple ( $nids );
	$nested_keywords_tids = array_map ( function ($node) {
		if (isset ( $node->field_article_keyword ) && isset ( $node->field_article_keyword ["und"] )) {
			return $node->field_article_keyword ["und"];
		}
	}, $nodes );
	// array of $node->field_article_keyword["und"]
	// flatten the arrays
	$flattened_keywords_tids = array ();
	array_walk ( $nested_keywords_tids, function ($keywords_tids) use(&$flattened_keywords_tids) {
		if(!empty($keywords_tids)) {
			foreach ( $keywords_tids as $keywords_tid ) {
				if (! empty ( $keywords_tid ))
					$flattened_keywords_tids [] = $keywords_tid ["tid"];
			}
		}
	} );
	$keywords_tids_filtered = array_filter ( $flattened_keywords_tids, function ($keywords_tid) use($node) {
		return $keywords_tid !== $node->field_article_keyword ['und'] [0] ['tid'];
	} );
	$keywords_tids_uniques = array_unique ( $keywords_tids_filtered );

	// On supprime le keyword initial du contenu
	foreach ( $keywords_tids_uniques as $key => $uniqueTid ) {
		if ($uniqueTid == $tid) {
			array_splice ( $keywords_tids_uniques, $key, 1 );
		}
	}

	// load the taxonomies
	$taxos = array ();
	//Chargement de 20 taxos
	/*if (count ( $keywords_tids_uniques ) > 20) {
		for($i = 0; $i <= 21; $i ++) {
			$taxos [] = slutil_get_taxo_link ( $keywords_tids_uniques [$i] );
		}
	} else {
		for($i = 0; $i < count ( $keywords_tids_uniques ); $i ++) {
			$taxos [] = slutil_get_taxo_link ( $keywords_tids_uniques [$i] );
		}
	}*/
	//Chargement de toutes les taxos
	for($i=0 ; $i < count ( $keywords_tids_uniques ) ; $i++){
		$taxos [] = slutil_get_taxo_link ( $keywords_tids_uniques [$i] );
	}
	//Création d'une fonction de tri des taxos par nom
	function cmp_by_name($a, $b) {
		return strnatcasecmp($a['name'], $b['name']);
	}
	//appel au tri
	usort($taxos, "cmp_by_name");

	?>
            <div class="col-xs-12 col-sm-12 col-md-12 col-lg-12">
			<h3>Index</h3>
			<hr class="separator-index-rapport-annuel-haut" />
                <?php
	$chunks_length = ceil ( count ( $taxos ) / 2 );
	list ( $taxos1, $taxos2 ) = array_chunk ( $taxos, $chunks_length );
	?>
                <div>
				<div class="col-xs-12 col-sm-12 col-md-6 col-lg-6">
					<ul class="list-unstyled">
                        <?php foreach ($taxos1 as $taxo) { ?>
                            <li><a href="<?php print $taxo['url']; ?>"
							title="<?php print $taxo['title']; ?>"><?php print $taxo['name']; ?></a></li>
                        <?php } ?>
                    </ul>
				</div>
				<div class="col-xs-12 col-sm-12 col-md-6 col-lg-6">
					<ul class="list-unstyled">
                            <?php foreach ($taxos2 as $taxo) { ?>
                                <li><a
							href="<?php print $taxo['url']; ?>"
							title="<?php print $taxo['title']; ?>"><?php print $taxo['name']; ?></a></li>
                            <?php } ?>
                        </ul>
				</div>
			</div>
		</div>
		<div class="col-xs-12 col-sm-12 col-md-12 col-lg-12">
			<hr class="separator-index-rapport-annuel-bas" />
		</div>
	</div>

	<?php

	if (isset ( $content ['field_rapport_piece_jointe'] )) {
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

		$sid = $content ['field_rapport_piece_jointe'] ['#items'] [0] ['sid'];
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
	?>

</article>
<?php }elseif ($view_mode == "search_result") { ?>
<?php

	/**
	 * ***************************************************************************************************
	 */
	/* VIGNETTE DANS UN RESULTAT DE RECHERCHE */
	/**
	 * *********************************************************************************************************
	 */
	?>
<article class="<?php print $classes; ?> search-result"
	<?php print $attributes; ?>>
	<div class="row">

		<div class="col-xs-12 col-sm-5 col-md-4 col-lg-3">
      <?php if (isset($content["field_rapport_piece_jointe"])) { ?>
        <div class="search-logo pdf-rapport">
				<div class="sl-scald-file extension-pdf">
	         <?php
		$sid = $files ['sid'];
		$atom = scald_atom_load ( $sid );
		$title = $node->title;
		$link = $atom->rendered->file_source_url;
		?>
						<a href="<?php print $link; ?>"
						title="<?php print(t("Download file ").$title); ?>"
						target="_blank"></a>
				</div>

			</div>
      <?php } ?>
    </div>

		<div class="col-xs-12 col-sm-7 col-md-8 col-lg-9 search-content-part">
			<div class="search-title title-offre">
				<a href="<?php print $node_url; ?>"
					title="<?php print $node_url_title; ?>"><?php print $title; ?></a>
			</div>

      <?php if (isset($content["field_article_date"])) { ?>
        <div class="search-date date-offre">
          <?php print drupal_render($content["field_article_date"]); ?>
        </div>
      <?php } ?>

      <?php if (isset($node->field_rapport_corps)) { ?>
        <div class="search-chapo chapo-offre text-em">
          <?php print slutil_get_txtvignette($node->field_rapport_corps, 200); ?>
        </div>
      <?php } ?>

      <?php if( isset($node->field_article_type['und'][0]['tid'])){ ?>
        <div class="search-type type-offre text-em">
          <?php $list_taxo = slutil_get_list_tid($node->field_article_type['und'][0]['tid']); ?>
          <?php $i=0; ?>
          <?php foreach ($list_taxo[1] as $current_taxo_link => $current_taxo) { ?>
            <?php print $current_taxo; ?>
            <?php $i=$i+1; if(count($list_taxo[1])> $i){ print " - "; }?>
          <?php }?>
        </div>
      <?php } ?>
    </div>
	</div>
</article>
<?php } ?>
