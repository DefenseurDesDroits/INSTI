<a href="<?php print $vars['link'] ?>">
	<div class="title-last-actus">
  	<h2><?php print $vars['title'];?></h2>
	</div>
</a>
<div class="menu-actu hidden-xs">
	<ul>
		<?php foreach ($vars['taxo'] as $taxo) : ?>
		<li><a href="<?=$taxo['url']?>" ><?=$taxo['name']?></a></li>
		<?php endforeach ?>
	</ul>
</div>



<?php //print $vars['view_actualites'];?>
