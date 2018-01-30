<div class="col-xs-12 col-sm-12">
	<div id="month-name">
		<h2><?php print $vars['name_month']; ?></h2>
	</div>
</div>
<div class="agenda col-md-12">
	<div class="prec-agenda col-xs-4 col-sm-4">
		<a href="?month=<?php print $vars['prev_month']; ?>"><i class="fa fa-angle-left pict-agenda-left" aria-hidden="true"></i>
		<p class="prec"><?php print t('Previous'); ?></p>
		</a>
	</div>
	<div class="prec-agenda col-xs-4 col-sm-4 col-xs-offset-4 col-sm-offset-4">
		<a href="?month=<?php print $vars['next_month']; ?>"><i class="fa fa-angle-right pict-agenda-right" aria-hidden="true"></i>
		<p class="prec"><?php print t('Next'); ?></p>
		</a>
	</div>
</div>
<?php print $vars['view']; ?>
<?php print $vars['empty_result']; ?>
