<div class="row">
	<div class="navbar navbar-default">
			<!-- Brand and toggle get grouped for better mobile display -->
		    <div class="navbar-header">
		      <button type="button" class="navbar-toggle collapsed" data-toggle="collapse" data-target="#bs-example-navbar-collapse-6">
		        <span class="sr-only"></span>
		        <i class="fa fa-chevron-right"></i>
		      </button>
			<div class="open-navbrand">
				<button type="button" class="navbar-toggle collapsed" data-toggle="collapse" data-target="#bs-example-navbar-collapse-6">
			  		<h2 class="navbar-brand"><?php print $vars['titre'] ?></h2>
				</button>
			</div>	
		    </div>
			<!-- Collect the nav links, forms, and other content for toggling -->
			<div class="collapse-6 navbar-collapse collapse" id="bs-example-navbar-collapse-6">
					<ul class="items">
						<?php foreach($vars['partenaires'] as $partenaire) : ?>
							<?php if(!empty($partenaire['title'])) : ?>
								<li class="item col-sm-6 col-md-3 col-lg-3">
								  <?php print l('<div><img src="' . $partenaire['img_url'] . '" alt="" /></div><span>' . $partenaire['title'] . '</span>', $partenaire['url'], array('html' => true)); ?>
								  
								</li>
							<?php endif; ?>
						<?php endforeach; ?>
					</ul>
			</div><!-- /.navbar-collapse -->
	</div>
</div>
