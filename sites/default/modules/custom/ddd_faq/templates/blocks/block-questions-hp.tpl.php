<div class="title-questions col-md-12"><?php print t('Questions les plus fréquentes'); ?></div>
<div class="st-questions col-md-12"><?php print t('Vous avez une question ? Consultez notre foire aux questions pour trouver nos réponses aux questions les plus fréquentes'); ?></div>

<?php print t("Generic questions"); ?><span>/</span>
<div class="panel-group" id="accordion">
  <?php foreach($vars['view1'] as $key => $v) : ?>
    <div class="panel panel-default">
        <div class="panel-heading">
             <h4 class="panel-title">
                <a class="accordion-toggle" data-toggle="collapse" data-parent="#accordion" href="#term1-<?=$key?>"><?=$v['title']?></a><i class="fa fa-plus-circle"></i>
            </h4>

        </div>
        <div id="term1-<?=$key?>" class="panel-collapse collapse">
            <div class="panel-body"><?=$v['content']?></div>
        </div>
    </div>
  <?php endforeach; ?>
</div>

<?php print t("Defense of the Rights of the Child"); ?><span>/</span>
<div class="panel-group" id="accordion">
  <?php foreach($vars['view2'] as $key => $v) : ?>
    <div class="panel panel-default">
        <div class="panel-heading">
             <h4 class="panel-title">
                <a class="accordion-toggle" data-toggle="collapse" data-parent="#accordion" href="#term2-<?=$key?>"><?=$v['title']?></a><i class="fa fa-plus-circle"></i>
            </h4>

        </div>
        <div id="term2-<?=$key?>" class="panel-collapse collapse">
            <div class="panel-body"><?=$v['content']?></div>
        </div>
    </div>
  <?php endforeach; ?>
</div>

<?php print t("Orientation and protection of warning launchers"); ?><span>/</span>
<div class="panel-group" id="accordion">
  <?php foreach($vars['view3'] as $key => $v) : ?>
    <div class="panel panel-default">
        <div class="panel-heading">
             <h4 class="panel-title">
                <a class="accordion-toggle" data-toggle="collapse" data-parent="#accordion" href="#term3-<?=$key?>"><?=$v['title']?></a><i class="fa fa-plus-circle"></i>
            </h4>

        </div>
        <div id="term3-<?=$key?>" class="panel-collapse collapse">
            <div class="panel-body"><?=$v['content']?></div>
        </div>
    </div>
  <?php endforeach; ?>
</div>

<?php print t("The defense of the rights of users of public services"); ?><span>/</span>
<div class="panel-group" id="accordion">
  <?php foreach($vars['view4'] as $key => $v) : ?>
    <div class="panel panel-default">
        <div class="panel-heading">
             <h4 class="panel-title">
                <a class="accordion-toggle" data-toggle="collapse" data-parent="#accordion" href="#term4-<?=$key?>"><?=$v['title']?></a><i class="fa fa-plus-circle"></i>
            </h4>

        </div>
        <div id="term4-<?=$key?>" class="panel-collapse collapse">
            <div class="panel-body"><?=$v['content']?></div>
        </div>
    </div>
  <?php endforeach; ?>
</div>

<?php print t("The fight against discrimination"); ?><span>/</span>
<div class="panel-group" id="accordion">
  <?php foreach($vars['view5'] as $key => $v) : ?>
    <div class="panel panel-default">
        <div class="panel-heading">
             <h4 class="panel-title">
                <a class="accordion-toggle" data-toggle="collapse" data-parent="#accordion" href="#term5-<?=$key?>"><?=$v['title']?></a><i class="fa fa-plus-circle"></i>
            </h4>

        </div>
        <div id="term5-<?=$key?>" class="panel-collapse collapse">
            <div class="panel-body"><?=$v['content']?></div>
        </div>
    </div>
  <?php endforeach; ?>
</div>

<?php print t("Compliance with ethics by persons engaged in security activities"); ?><span>/</span>
<div class="panel-group" id="accordion">
  <?php foreach($vars['view6'] as $key => $v) : ?>
    <div class="panel panel-default">
        <div class="panel-heading">
             <h4 class="panel-title">
                <a class="accordion-toggle" data-toggle="collapse" data-parent="#accordion" href="#term6-<?=$key?>"><?=$v['title']?></a><i class="fa fa-plus-circle"></i>
            </h4>

        </div>
        <div id="term6-<?=$key?>" class="panel-collapse collapse">
            <div class="panel-body"><?=$v['content']?></div>
        </div>
    </div>
  <?php endforeach; ?>
</div>
 