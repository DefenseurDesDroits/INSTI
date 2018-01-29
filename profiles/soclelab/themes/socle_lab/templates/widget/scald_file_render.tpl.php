<?php
/**
 * @file
 *   Default theme implementation for Scald File Render.
 */
?>
<div class="sl-scald-file extension-<?php print substr(strrchr($vars['file_source'], '.'), 1); ?>">
  <?php if(isset($vars['thumbnail_source']) && substr($vars['thumbnail_source'], 0, 6 ) === "public") { ?>
      <img src="<?php print file_create_url($vars['thumbnail_source']); ?>" class="scald-file-icon"/>
  <?php } ?>
  <a href="<?php print file_create_url($vars['file_source']); ?>" title="<?php print t("Download the document") . " " . $vars['file_title'] . ", " . t("new window"); ?>" target="_blank">
    <?php print $vars['file_title']; ?>
  </a>
</div>

