
<div class="row">
  <?php $current_obj_show = menu_get_object(); ?>
  <?php
    if(isset($current_obj_show->field_article_type['und'])) {
      $term = taxonomy_term_load($current_obj_show->field_article_type['und'][0]['tid']);
      $term_name = $term->name;
      if($term_name == 'Actualités' || $term_name == 'Décision' || $term_name == 'Histoires vécues' || $term_name == 'Questions / réponses') {
  ?>
    <?php if(isset($current_obj_show->field_article_keyword['und'])){ ?>
      <?php $str_keyword = array(); ?>
      <?php foreach ($current_obj_show->field_article_keyword['und'] as $key => $cur_keyword) { ?>
        <?php $str_keyword[] = $cur_keyword['tid']; ?>
      <?php } ?>
      <?php $query_str = array(implode('+', $str_keyword), $current_obj_show->language); ?>
      <?php print slutil_embed_view_args('vu_ctasso','block_related_histoire', $query_str); ?>
      <?php print slutil_embed_view_args('vu_ctasso','block_related_decision', $query_str); ?>
      <?php print slutil_embed_view_args('vu_ctasso','block_related_question', $query_str); ?>
      <?php print slutil_embed_view_args('vu_ctasso','block_related_article', $query_str); ?>
    <?php } ?>
   <?php }
   } ?>
</div>