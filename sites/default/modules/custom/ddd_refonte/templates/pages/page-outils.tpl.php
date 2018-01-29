<div class="row">
	<h2 class="st-outils col-md-12"><?php print t("Filter results by type"); ?> :</h2>
	<div class="col-md-12">
		<div class="navbar navbar-default">
			<div class="container-fluid">
				<!-- Brand and toggle get grouped for better mobile display -->
			    <div class="navbar-header">
			      <button type="button" class="navbar-toggle collapsed" data-toggle="collapse" data-target="#bs-example-navbar-collapse-101" aria-expanded="false">
			        <span class="sr-only"></span>
			        <i class="fa fa-chevron-right" aria-hidden="true"></i>
			      </button>
						<?php foreach($vars['menu'] as $m) : ?>
							<?php if($m['active'] == TRUE) : ?>
								<p class="navbar-brand"><?=$m['name']?></p>
							<?php  endif; ?>
							<?php endforeach; ?>
			    </div>
				<!-- Collect the nav links, forms, and other content for toggling -->
				<div class="collapse navbar-collapse" id="bs-example-navbar-collapse-101">
					<ul class="nav navbar-nav menu-taxo-vues">
					    <?php foreach($vars['menu'] as $m) : ?>
				        <li>
				          <a href="/<?=$m['path']?>" <?php print ($m['active'] == TRUE ? 'class="active"' : '')?>><?=$m['name']?></a>
				        </li>
					    <?php endforeach; ?>
					</ul>
				</div><!-- /.navbar-collapse -->
			</div><!-- /.container-fluid -->
		</div>
	</div>
</div>
<div class="row">
	<div class="col-md-12"><?php print render($vars['filter']); ?></div>
</div>
<h2 class="txt-resultats col-md-12"><?php print $vars['nb_result'] . t(' Result(s) for ') . '"' . $vars['name'] . '"'; ?></h2>
<?php print $vars['view']; ?>	
</div>
