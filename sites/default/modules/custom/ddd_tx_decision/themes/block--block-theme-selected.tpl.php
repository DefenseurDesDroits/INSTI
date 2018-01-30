
<div class="select-container">
  <select id="form-select-theme" name="theme_id" data-url-redirect="<?php print $type; ?>">
    <option selected disabled hidden value=''><?php print t("Themes"); ?></option>
    <?php foreach ($rows as $id => $row): ?>
      <option value="theme_id=<?php print $row->tid; ?>">
        <?php echo $row->taxonomy_term_data_name; ?>
      </option>
    <?php endforeach; ?>
  </select>
  <div class="select-arrow-btn"></div>
</div>