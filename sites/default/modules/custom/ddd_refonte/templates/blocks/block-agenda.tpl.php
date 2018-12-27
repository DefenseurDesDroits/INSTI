<div class="row">
	<nav class="navbar navbar-default">
		<!-- Brand and toggle get grouped for better mobile display -->
	    <div class="navbar-header">
			<button type="button" class="navbar-toggle collapsed" data-toggle="collapse" data-target="#bs-example-navbar-collapse-2">
				<span class="sr-only"></span>
				<i class="fa fa-chevron-right"></i>
			</button>
			<div class="open-navbrand">
				<button type="button" class="navbar-toggle collapsed" data-toggle="collapse" data-target="#bs-example-navbar-collapse-2">
					<h2 class="navbar-brand"><?php print $vars['titre'] ?></h2>
				</button>
			</div>	  		
	    </div>
		<!-- Collect the nav links, forms, and other content for toggling -->
		<div class="collapse-2 navbar-collapse collapse" id="bs-example-navbar-collapse-2">
			<div class="row">
					<div id="events">
					<div class="col-sm-6 col-md-5 col-lg-4">
					<?php foreach($vars['event_left'] as $event_left) : ?>
						<div class="content-event">
							<p class="event-date"><a href="<?php print $event_left['url']; ?>" /><?php print $event_left['date']; ?></a></p>
							<p class="event-body"><?php print $event_left['title']; ?></p>
						</div>
					<?php endforeach; ?>
					</div>
				</div>
					<div id="events">
					<div class="col-sm-6 col-md-5 col-lg-4">
					<?php foreach($vars['event_right'] as $event_left) : ?>
						<div class="content-event">
							<p class="event-date"><a href="<?php print $event_left['url']; ?>" /><?php print $event_left['link'] ?><?php print $event_left['date']; ?></a></p>
							<p class="event-body"><?php print $event_left['title']; ?></p>
						</div>
					<?php endforeach; ?>
					</div>
				</div>
			</div>
					<p><span><a href="/agenda-list"><?php print t('Access to Full Calendar'); ?></a><span class="slash-blue"></span></span></p>
		</div><!-- /.navbar-collapse -->
	</nav>
</div>


<!-- //Accéder à l'agenda complet -->
