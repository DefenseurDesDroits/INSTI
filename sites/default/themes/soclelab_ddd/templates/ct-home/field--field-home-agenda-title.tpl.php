<?php if ($element['#view_mode'] == 'full' && isset($element['#items'])) { ?>
  
  <div id="block-agenda-home">
    <a href="/<?php print getCurLang(); ?>/agenda" title="<?php print slutil_encode_title(t("Dispaly the agenda of the Rights Defender")); ?>">
      <h2><?php print t("The agenda of the Rights Defender"); ?></h2>
    </a>
    <?php if (isset($element['#items'][0]['value'])) { ?>
      <div class="home-agenda-text">
        <?php print $element['#items'][0]['value']; ?>
      </div>
    <?php } ?>
  </div>
  
  <?php print slutil_embed_view('vue_events','block_agenda_home'); ?>
<?php } ?> 