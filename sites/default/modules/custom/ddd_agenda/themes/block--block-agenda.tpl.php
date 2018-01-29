<!-- <nav class="carousel-nav"> -->
<!--   <a id="prev" title="previous" href="#">&#60;</a> -->
<!--   <a id="next" title="next" href="#">&#62;</a> -->
<!-- </nav> -->

<aside class="row text-center">
  <div id="prev" class="col-md-offset-1 col-md-4" >
    <a title="previous" href="#">&#60;</a>
  </div>
  <section class="divs search-date-big col-md-4">
  <?php for ($i = 1; $i <= 53; $i++): ?>
    <div id="week-val" class="cls<?php echo $i; ?>"></div>
  <?php endfor; ?>
  </section>
  <div id="next" class="col-md-4" >
    <a title="next" href="#">&#62;</a>
  </div>
</aside>
<!-- <div id="chargementEvent"></div> -->
<noscript>
  <p class="text-center">
    <?php echo t('L\'agenda ne fonctionne pas sans le javascript'); ?>
  </p>
</noscript>