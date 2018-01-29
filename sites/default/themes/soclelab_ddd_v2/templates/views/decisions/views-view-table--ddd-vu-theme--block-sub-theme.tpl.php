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
?>
<?php $views_base = views_get_view("decisions"); ?>
<?php if(isset($views_base->display['page_decison']->display_options['path'])) { ?>
   <?php $url_views = "/" . getCurLang() . "/" . $views_base->display['page_decison']->display_options['path']; ?>
<?php } else { $url_views = "/" . getCurLang() . "/decision"; } ?>

<?php $params = drupal_get_query_parameters(); ?>
<?php if(isset($params['sub_id'])) { ?>
  <?php $cur_subid = $params['sub_id']; ?>
<?php } else { ?>
  <?php $cur_subid = ""; ?>
<?php } ?>

<h2 class="sub-theme-label"><?php print t("Thematic:"); ?></h2>
<ul>
  <?php foreach ($rows as $row_count => $row) { ?>
    <li>
      <a class="<?php if ($cur_subid == $row['tid'] . "") { print "actif"; }?>" href="<?php print $url_views; ?>?theme_id=<?php print $row['tid_1']; ?>&sub_id=<?php print $row['tid']; ?>" title="<?php print slutil_encode_title(t('Filter on') . " " . $row['name']); ?>">
        <?php print $row['name']; ?>
      </a>
    </li>
  <?php } ?>
</ul>
<a href="<?php print $url_views; ?>?theme_id=<?php print $row['tid_1']; ?>" class="btn-reset" title="<?php print t("Reset filters"); ?>" ><?php print t("Reset filters"); ?></a>