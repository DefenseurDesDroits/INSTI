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

<?php foreach ($rows as $row_count => $row): ?>
  <?php if (isset($row['tid'])) { ?>
    <?php $current_taxo = taxonomy_term_load($row['tid']); ?>
    <?php if($current_taxo != null){ ?>
      <?php $view_mode = (isset($row['nothing']) ? $row['nothing'] : "vignette_accueil"); ?>
      <?php $view_to_show = taxonomy_term_view($current_taxo, $view_mode); ?>
      <?php print drupal_render($view_to_show); ?>
    <?php } ?>
  <?php } else { ?>
    <table>
      <tbody>
        <tr <?php if ($row_classes[$row_count]) { print 'class="' . implode(' ', $row_classes[$row_count]) .'"';  } ?>>
          <?php foreach ($row as $field => $content): ?>
            <td <?php if ($field_classes[$field][$row_count]) { print 'class="'. $field_classes[$field][$row_count] . '" '; } ?><?php print drupal_attributes($field_attributes[$field][$row_count]); ?>>
              <?php print $content; ?>
            </td>
          <?php endforeach; ?>
        </tr>
      </tbody>
    </table>
  <?php } ?>
<?php endforeach; ?>