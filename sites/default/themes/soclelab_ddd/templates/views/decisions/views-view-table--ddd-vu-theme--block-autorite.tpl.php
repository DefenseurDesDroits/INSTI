<?php

/**
 * @file
 * This template is used to print a single field in a view.
 *
 * It is not actually used in default Views, as this is registered as a theme
 * function which has better performance. For single overrides, the template is
 * perfectly okay.
 *
 * Variables available:
 * - $view: The view object
 * - $field: The field handler object that can process the input
 * - $row: The raw SQL result that can be used
 * - $output: The processed output that will normally be used.
 *
 * When fetching output from the $row, this construct should be used:
 * $data = $row->{$field->field_alias}
 *
 * The above will guarantee that you'll always get the correct data,
 * regardless of any changes in the aliasing that might happen if
 * the view is modified.
 */


/**
  * artf1750548 : il faut afficher le terme "Défenseur des droits", puis un texte descriptif et enfin
  * les termes suivants.
  */
?>
<?php $views_base = views_get_view("decisions"); ?>
<?php if(isset($views_base->display['date_filter']->display_options['path'])) { ?>
   <?php $url_views_date = "/" . getCurLang() . "/" . $views_base->display['date_filter']->display_options['path']; ?>
<?php } else { $url_views_date = "/" . getCurLang() . "/decision/date"; } ?>

<?php $params = drupal_get_query_parameters(); ?>
<?php if(isset($params['annee']['value']['year']) && isset($params['authorite'])) { ?>
  <?php $cur_annee = $params['annee']['value']['year']; ?>
  <?php $cur_author = $params['authorite']; ?>
<?php } else { ?>
  <?php $cur_annee = ""; ?>
  <?php $cur_author = ""; ?>
<?php } ?>

<?php
    $vocabulaire_autorite = taxonomy_vocabulary_load(7);  // 7 = VID du vocabulaire
    // Recherche de l'indexd du terme "Défenseur des droits" (TID = 76) dans son vocabulaire
    $index_terme = -1;
    foreach($rows as $i => $row) {
        if($row['tid'] == 76) {
            $index_terme = $i;
            break;
        }
    }
?>

<?php /* Affichage du terme "Défenseur des droits" */?>
<?php if($index_terme != -1) : ?>
    <?php $row = $rows[$index_terme]; ?>
    <div class="one-authorite">
    <span class="author-name"><?php print $row['name']; ?>&nbsp;:</span>
    
    <?php $list_year = explode(", " , $row['field_annee']); ?>
    <?php rsort($list_year); ?>
    <?php foreach($list_year as $year_count => $year) { ?>
      <a class="<?php if ($cur_annee == $year . "" && $row['tid'] . "" == $cur_author) { print "actif"; }?>" href="<?php print $url_views_date; ?>?annee%5Bvalue%5D%5Byear%5D=<?php print $year; ?>&authorite=<?php print $row['tid']; ?>" title="<?php print slutil_encode_title(t("Filter decisions on year") . " " . $year); ?>"><?php print $year; ?></a><?php if ($year_count+1 < count($list_year)) { print ", "; } ?>
    <?php } ?>
  </div>

  <?php /* Une fois affiché, on supprime le terme de la liste */ ?>
  <?php unset($rows[$index_terme]); ?>
<?php endif; ?>

<div class="description-autorites">
    <?php /* Affichage de la description de la taxonomie*/ ?>
    <?php print($vocabulaire_autorite->field_full_description[LANGUAGE_NONE][0]['safe_value']); ?>
</div>

<?php foreach($rows as $row_count => $row) { ?>
  <div class="one-authorite">
    <span class="author-name"><?php print $row['name']; ?>&nbsp;:</span>
    
    <?php $list_year = explode(", " , $row['field_annee']); ?>
    <?php rsort($list_year); ?>
    <?php foreach($list_year as $year_count => $year) { ?>
      <a class="<?php if ($cur_annee == $year . "" && $row['tid'] . "" == $cur_author) { print "actif"; }?>" href="<?php print $url_views_date; ?>?annee%5Bvalue%5D%5Byear%5D=<?php print $year; ?>&authorite=<?php print $row['tid']; ?>" title="<?php print slutil_encode_title(t("Filter decisions on year") . " " . $year); ?>"><?php print $year; ?></a><?php if ($year_count+1 < count($list_year)) { print ", "; } ?>
    <?php } ?>
  </div>
<?php } ?>

<a href="<?php print $url_views_date; ?>" class="btn-reset" title="<?php print t("Reset filters"); ?>" ><?php print t("Reset filters"); ?></a>