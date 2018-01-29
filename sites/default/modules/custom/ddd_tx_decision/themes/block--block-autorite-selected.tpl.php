
<div class="select-container">
  <select id="form-select-year" name="annee" data-url-redirect="<?php print $type; ?>">
    <option selected disabled hidden value=''><?php print t("Dates"); ?></option>
    <?php foreach ($rows as $row): ?>
      <optgroup label="<?php echo $row->taxonomy_term_data_name; ?>">
        <?php $list_year = array(); ?>
        <?php foreach($row->_field_data['tid']['entity']->field_annee['und'] as $field_annee): ?>
          <?php array_push($list_year, $field_annee['value']); ?>
        <?php endforeach; ?>
        <?php rsort($list_year); ?>
        <?php foreach($list_year as $year_count => $year): ?>
          <option value="annee%5Bvalue%5D%5Byear%5D=<?php echo $year; ?>&authorite=<?php echo $row->tid; ?>">
            <?php echo $year; ?>
          </option>
        <?php endforeach; ?>
      </optgroup>
    <?php endforeach; ?>
  </select>
  <div class="select-arrow-btn"></div>
</div>
