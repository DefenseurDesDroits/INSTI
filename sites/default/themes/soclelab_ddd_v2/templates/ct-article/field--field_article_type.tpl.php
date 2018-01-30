<?php if(isset($element['#object']->field_article_type['und'][0]['tid'])) { ?>
  <?php $link_taxo = slutil_get_taxo_link($element['#object']->field_article_type['und'][0]['tid']); ?>
  <?php
    $taxo_name = $link_taxo['name'];
    if($taxo_name == "Histoires vécues") $taxo_name = "Histoire vécue";
    else if($taxo_name == "Questions / réponses") $taxo_name = "Question / réponse";
    else if($taxo_name == "Actualités") $taxo_name = "Actualité";
    else if($taxo_name == "Offres d'emploi") $taxo_name = "Offre d'emploi";
    else if($taxo_name == "Stages") $taxo_name = "Stage";
    else if($taxo_name == "Lettres d'information") $taxo_name = "Lettre d'information";
    else if($taxo_name == "Point de vue du Défenseur") $taxo_name = "Le Point de vue du Défenseur des droits";
    else if($taxo_name == "Études") $taxo_name = "Étude";
  ?>
  <a href="<?php print $link_taxo['url']; ?>" title="<?php print $link_taxo['title']; ?>"><?php print $taxo_name; ?></a>
<?php } ?>