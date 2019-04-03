<?php
/**
 * @file
 * Default template for feed displays that use the RSS style.
 *
 * @ingroup views_templates
 */
?>
<?php echo '<?xml version="1.0" encoding="utf-8"?>'; ?>
<rss version="2.0" xml:base="<?php echo $link; ?>"<?php echo $namespaces; ?>>
  <channel>
    <title><?php echo variable_get("site_name", ''); ?></title>
    <link><?php echo $link; ?></link>
    <description><?php echo variable_get("site_slogan", ''); ?></description>
    <language><?php echo $langcode; ?></language>
      <?php echo $channel_elements; ?>
      <?php echo $items; ?>
  </channel>
</rss>