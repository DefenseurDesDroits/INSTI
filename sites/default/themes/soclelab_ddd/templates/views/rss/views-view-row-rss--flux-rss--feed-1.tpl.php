<?php
/**
 * @file
 * Default view template to display a item in an RSS feed.
 *
 * @ingroup views_templates
 */
?>
<?php

$str_return = slutil_truncate_str(html_entity_decode($description, ENT_HTML5), 255);

$str_return = str_replace("&nbsp;", " ", $str_return);  // Modifie l'affichage des espaces
$str_return = str_replace("\n", "", $str_return); // Supprime les retours à la ligne
$str_return = str_replace("\r", " ", $str_return);
$str_return = str_replace("\t", " ", $str_return);
?>
<item>
  <title><?php echo $title; ?></title>
  <link><?php echo $link; ?></link>
  <description><?php echo '<![CDATA[', $str_return, ']]>'; ?></description>
  <dc:creator><?php echo '<![CDATA[', variable_get('dc_dreator', ''), ']]>'; ?></dc:creator>
</item>