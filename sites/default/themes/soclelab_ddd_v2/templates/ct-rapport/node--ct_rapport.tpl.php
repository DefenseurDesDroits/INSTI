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
			<h1 class="text-em"><?php print $title; ?></h1>
      <?php if (isset($node->field_article_date['und'][0]['value'])) { ?>
        <div class="node-date date-offre">
          <?php print format_date(strtotime($node->field_article_date['und'][0]['value']), 'ddd_medium'); ?>
        </div>
      <?php } ?>
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
	
	<?php if (isset($node->field_article_logo['und'][0]['sid'])) { ?>
    <div class="node-logo logo-article">
      <?php print slutil_get_img($node->field_article_logo['und'][0]['sid'], "article_full");  ?>
      <div class="overlay-legend">
        <?php print slutil_get_imglegend($node->field_article_logo['und'][0]['sid']) ;?>
        <div class="bg-legende-image"></div>
		</div>
	</div>
  <?php } ?>

	<div class="keywords-article clearfix row">
    <?php if( isset($node->field_article_keyword['und'][0]['tid'])){ ?>
      <div class="col-xs-12 col-sm-6 col-lg-6 col-lg-6 pull-left">
			<div class="node-motcle motcle-article">
				<span class="bloc-inline-title"><?php print t("Keywords:"); ?></span>
          <?php foreach ($node->field_article_keyword['und'] as $key => $cur_tid) { ?>
            <?php $link_taxo = slutil_get_taxo_link($cur_tid['tid']); ?>
            <a href="<?php print $link_taxo['url']; ?>"
					title="<?php print $link_taxo['title']; ?>"><?php print $link_taxo['name']; ?></a>
          <?php }?>
        </div>
		</div>
    <?php } ?>
    <?php if( isset($node->field_article_theme['und'][0]['tid'])){ ?>
      <div class="col-xs-12 col-sm-6 col-lg-6 col-lg-6 pull-right">
			<div class="node-theme theme-article">
				<span class="bloc-inline-title"><?php print t("Institution's competence:"); ?></span>
          <?php foreach ($node->field_article_theme['und'] as $key => $cur_tid) { ?>
            <?php $link_taxo = slutil_get_taxo_link($cur_tid['tid']); ?>
            <a href="<?php print $link_taxo['url']; ?>"
					title="<?php print $link_taxo['title']; ?>"><?php print $link_taxo['name']; ?></a>
          <?php }?>
        </div>
		</div>
    <?php } ?>
  </div>

  <?php if (isset($content["field_article_descriptif"])) { ?>
    <div class="node-chapo chapo-offre">
      <?php print render($content["field_article_descriptif"]); ?>
    </div>
  <?php } ?>

	<?php if (isset($content["field_article_libelle_section"])) { ?>
		<h2><?php print render($content["field_article_libelle_section"]); ?></h2>
	<?php } ?>
	

  <?php if (isset($content["field_article_body"])) { ?>
    <div class="node-body body-offre text-riche">
      <?php print render($content["field_article_body"]); ?>
    </div>
  <?php } ?>

  <?php if (isset($content["field_article_document"])) { ?>
    <div class="node-document document-offre">
      <?php
		
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
		
		foreach ( $content ['field_article_document'] ['#items'] as $files ) {
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
		
		?>
    </div>

  <?php } ?>

  <?php if (isset($node->field_article_descriptif['und'][0]['value'])) { ?>
    <?php $chapo_length = strlen($node->field_article_descriptif['und'][0]['value']); ?>
  <?php } else { $chapo_length = 0; } ?>
  <?php if (isset($node->field_article_body['und'][0]['value'])) { ?>
    <?php $body_length = strlen($node->field_article_body['und'][0]['value']); ?>
  <?php } else { $body_length = 0; } ?>
  <?php $article_length = $chapo_length + $body_length; ?>

  <?php if ($article_length > 2500) { //TODO : rendre le paramètre configurable ?>
    <div class="keywords-article clearfix row">
      <?php if( isset($node->field_article_keyword['und'][0]['tid'])){ ?>
        <div class="col-xs-12 col-sm-6 col-lg-6 col-lg-6 pull-left">
			<div class="node-motcle motcle-article">
				<span class="bloc-inline-title"><?php print t("Keywords:"); ?></span>
            <?php foreach ($node->field_article_keyword['und'] as $key => $cur_tid) { ?>
              <?php $link_taxo = slutil_get_taxo_link($cur_tid['tid']); ?>
              <a href="<?php print $link_taxo['url']; ?>"
					title="<?php print $link_taxo['title']; ?>"><?php print $link_taxo['name']; ?></a>
            <?php }?>
          </div>
		</div>
      <?php } ?>
      <?php if( isset($node->field_article_theme['und'][0]['tid'])){ ?>
        <div class="col-xs-12 col-sm-6 col-lg-6 col-lg-6 pull-right">
			<div class="node-theme theme-article">
				<span class="bloc-inline-title"><?php print t("Institution's competence:"); ?></span>
            <?php foreach ($node->field_article_theme['und'] as $key => $cur_tid) { ?>
              <?php $link_taxo = slutil_get_taxo_link($cur_tid['tid']); ?>
              <a href="<?php print $link_taxo['url']; ?>"
					title="<?php print $link_taxo['title']; ?>"><?php print $link_taxo['name']; ?></a>
            <?php }?>
          </div>
		</div>
      <?php } ?>
    </div>
  <?php } ?>

  <?php global $user; ?>
  <?php if (isset($user->roles) && (in_array('administrator', array_values($user->roles)) || in_array('contributeur', array_values($user->roles)) ) ) { ?>
    <div class="unpublish admin-info">
      <?php if(isset($node->created)) { ?>
        <div class="node-created inline-field">
			<div class="field-label-bo"><?php print t("Creation date:"); ?></div>
			<div class="field-value"><?php print format_date(intval($node->created), 'court'); ?></div>
		</div>
      <?php } ?>
      <?php if(isset($node->changed)) { ?>
        <div class="node-modified inline-field">
			<div class="field-label-bo"><?php print t("Date of last update:"); ?></div>
			<div class="field-value"><?php print format_date(intval($node->changed), 'court'); ?></div>
		</div>
      <?php } ?>
    </div>
  <?php } ?>

</article>

<?php } elseif ($view_mode == "search_result") { ?>
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
      <?php if (isset($content["field_article_document"])) { ?>
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

      <?php if (isset($node->field_article_descriptif) && isset($node->field_article_body)) { ?>
        <div class="search-chapo chapo-offre text-em">
          <?php print slutil_get_txtvignette($node->field_article_descriptif, $node->field_article_body, 200); ?>
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
