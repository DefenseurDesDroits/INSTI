<div id="div-search" class="search-container" style="display:none;">
<br>
<div class="col-xs-12">
  <a href="" class="btn-close" id="clean" role="button" aria-label="masquer la recherche"><i class="fa fa-close" aria-hidden="true"></i></a>
</div>
  <?php print render($vars['form']); ?>
  <h1 class="element-invisible">Résultats de recherche</h1>
  <div id="results" class="search-results" style="display:none;">
    <div class="row">
      <div class="col-sm-4 col-md-4 col-lg-4" id="Arti">
        <h2><?php print t('Articles'); ?></h2>
        <div id="content-article"></div>
      </div>
      <div class="col-sm-4 col-md-4 col-lg-4" id="Publi">
        <h2><?php print t('Publications'); ?></h2>
        <div id="content-publications"></div>
      </div>
      <div class="col-sm-4 col-md-4 col-lg-4" id="FAQ">
        <h2><?php print t('Frequently Asked Questions'); ?></h2>
        <div id="content-faq"></div>
      </div>
    </div>
  </div>
</div>
