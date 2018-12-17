<div class="row">
	<div class="col-md-12">
		<nav class="navbar navbar-default">
			<div class="container-fluid">
				<!-- Brand and toggle get grouped for better mobile display -->
			    <div class="navbar-header">
			      <button type="button" class="navbar-toggle collapsed" data-toggle="collapse" data-target="#bs-example-navbar-collapse-102" aria-expanded="false">
			        <span class="sr-only"></span>
			        <i class="fa fa-chevron-right" aria-hidden="true"></i>
			      </button>
			      <p class="navbar-brand"><?php print(t("All")); ?></p>
			    </div>
				<!-- Collect the nav links, forms, and other content for toggling -->
				<div class="collapse navbar-collapse" id="bs-example-navbar-collapse-102">
					<ul class="nav navbar-nav menu-taxo-vues">
					<?php foreach($vars['menu'] as $m) : ?>
						<li role="presentation">
							<a href="<?=$m['path']?>" <?php print ($m['active'] == TRUE ? 'class="active"' : '')?>><?=$m['name']?></a>
						</li>
					<?php endforeach; ?>
					</ul>
				</div>
			</div>
		</nav>
	</div>
</div>
<div class="txt-resultats col-md-12"><?php print $vars['nb_result'] . t(' Result(s) for ') . '"' . $vars['name'] . '"'; ?></div>
<?php print $vars['view']; ?>
