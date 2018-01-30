<div class="row">
	<nav class="navbar navbar-default">
		<!-- Brand and toggle get grouped for better mobile display -->
		<div class="navbar-header">
			<button type="button" class="navbar-toggle collapsed" data-toggle="collapse" data-target="#bs-example-navbar-collapse-4">
				<span class="sr-only"></span>
				<i class="fa fa-chevron-right"></i>
			</button>
			<div class="open-navbrand">
				<button type="button" class="navbar-toggle collapsed" data-toggle="collapse" data-target="#bs-example-navbar-collapse-4">
					<h2 class="navbar-brand"><?php print $vars['titre'] ?></h2>
				</button>
			</div>	
		</div>
		<!-- Collect the nav links, forms, and other content for toggling -->
		<div class="collapse-4 navbar-collapse collapse" id="bs-example-navbar-collapse-4">
        	<div class="row">
                  <ul class="custom-ul">
                    <li>
                      <div class="col-xs-6">
                        <strong><?php print $vars['nb_traite']; ?></strong><span class="small"><?php print(t('registered claims'))?></span>
                      </div>
                    </li>
                    <li>
                      <div class="col-xs-6">
                        <strong><?php print $vars['nb_rendu']; ?></strong><span class="small"><?php print(t('processed claims'))?></span>
                      </div>
                    </li>
                    <li>
                      <div class="col-xs-6">
                        <strong><?php print $vars['nb_mesures']; ?></strong><span class="small"> <?php print(t('Representatives'))?></span>
                      </div>
                    </li>
                    <li>
                      <div class="col-xs-6">
                        <strong><?php print $vars['nb_observation']; ?></strong><span class="small"><?php print(t('Reception desks'))?></span>
                      </div>
                    </li>
                  </ul>
                  

				
			</div>

			<p><span class="small"><?php print l(t('Download the Annual Report') . ' ' . $vars['rapport']['annee'], $vars['rapport']['file_url'],array('attributes' => array('title' => t('Download the Annual Report') . ' ' . $vars['rapport']['annee']. ' (PDF '.$vars['rapport']['file_size'].')'))); ?><span class="slash-blue"></span></span></p>
		</div><!-- /.navbar-collapse -->
	</nav>
</div>