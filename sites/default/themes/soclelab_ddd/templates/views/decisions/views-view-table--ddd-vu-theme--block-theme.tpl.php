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

<?php if(isset($views_base->display['date_filter']->display_options['path'])) { ?>
   <?php $url_views_date = "/" . getCurLang() . "/" . $views_base->display['date_filter']->display_options['path']; ?>
<?php } else { $url_views_date = "/" . getCurLang() . "/decision/date"; } ?>

<?php $params = drupal_get_query_parameters(); ?>
<?php foreach ($rows as $row_count => $row) { ?>
  <div class="section-dec col-xs-6 col-sm-4 col-md-2 col-lg-2 <?php if(isset($params['theme_id']) && $params['theme_id'] == $row['tid']) { print 'actif'; }?>">
    <h2>
      <a href="<?php print $url_views; ?>?theme_id=<?php print $row['tid']; ?>" title="<?php print slutil_encode_title(t("Display the page") . " " . $row['name']); ?>">
        <div class="container-theme"><?php print $row['name']; ?></div>
      </a>
    </h2>
  </div>
<?php } ?>
<div class="section-dec col-xs-6 col-sm-4 col-md-2 col-lg-2 <?php if(strstr(current_path(), "decision/date")) { print 'actif'; }?>">
  <h2>
    <a href="<?php print $url_views_date; ?>" title="<?php print slutil_encode_title(t("Display the decision page with date filter")); ?>">
      <div class="container-theme"><?php print t("Decisions by date"); ?></div>
    </a>
  </h2>
</div>