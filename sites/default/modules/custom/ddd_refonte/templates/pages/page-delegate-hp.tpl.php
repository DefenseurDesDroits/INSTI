<div class="row">
  <div class="col-md-12">
    <?php print $vars['txt']; ?>
    <br>
  </div>
  <div class="col-md-12">
    <div id="gmaps-autocomplete-container" class="input-group col-md-3 col-xs-9">
      <input id="gmaps-autocomplete" class="controls form-control" type="search" autocomplete="off">
      <div class="input-group-btn">
        <button id="submit-gmap-search" class="btn btn-default" type="submit">
          <i class="glyphicon glyphicon-search"></i>
        </button>
      </div>
    </div>
    <div id="map" class="embed-responsive embed-responsive-16by9"></div>
    <?php if (!empty($vars['gmaps_js'])): ?>
      <?php print $vars['gmaps_js']; ?>
    <?php endif; ?>
    <div id="delegates">
      <?php if (!empty($vars['initial_text'])): ?>
        <?php print $vars['initial_text']; ?>
      <?php endif; ?>
    </div>
    <div id="no-delegates-message">
      <?php if (!empty($vars['no_results_text'])): ?>
        <?php print $vars['no_results_text']; ?>
      <?php endif; ?>
    </div>
  </div>
</div>
