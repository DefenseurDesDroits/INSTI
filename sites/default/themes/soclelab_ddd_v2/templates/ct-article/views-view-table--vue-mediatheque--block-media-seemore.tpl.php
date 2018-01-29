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

<?php foreach ($rows as $row_count => $row){ ?>
  <?php if(isset($row['sid'])) { ?>
    <?php $atom = scald_atom_load($row['sid']); ?>
    
    <div class="one-ctasso col-xs-12 col-sm-4 col-md-4 col-lg-4">
      <?php if (isset($atom->file_source) && isset($atom->title)) { ?>
        <div class="ct-asso-title">
          <div class="blue-circle"></div>
          <a href="<?php print file_create_url($atom->file_source); ?>" title="<?php print slutil_encode_title($atom->title . ", " . t("new window")); ?>" target="_blank">
            <?php print slutil_truncate_str($atom->title, 40); ?>
          </a>
        </div>
      <?php } ?>
      
      <?php if (isset($row['field_scald_typepdf'])) { ?>
        <div class="ct-asso-type">
          <?php print $row['field_scald_typepdf']; ?>
        </div>
      <?php } ?>
    </div>
  <?php } ?>        
<?php } ?>