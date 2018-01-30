<?php
/**
 * @file
 * ddd_cf_images.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ddd_cf_images_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: image
  $overrides["image.Library.label"] = 'Library';
  $overrides["image.article_carousel_home.effects|0|data|height"] = 487;
  $overrides["image.article_carousel_home.label"] = 'Article carousel (1920x487)';
  $overrides["image.article_full.effects|0|data|height"] = 410;
  $overrides["image.article_full.effects|0|data|width"] = 1170;
  $overrides["image.article_full.label"] = 'Article logo full (1170x410)';
  $overrides["image.article_vignette_home.effects|0|data|height"] = 572;
  $overrides["image.article_vignette_home.effects|0|data|width"] = 1920;
  $overrides["image.article_vignette_home.label"] = 'Home - vignette article (1920x572)';
  $overrides["image.event_full.effects|0|data|height"] = 410;
  $overrides["image.event_full.effects|0|data|width"] = 1170;
  $overrides["image.event_full.label"] = 'Event logo full (1170x410)';
  $overrides["image.event_vignette_home.effects|0|data|height"] = 572;
  $overrides["image.event_vignette_home.effects|0|data|width"] = 1920;
  $overrides["image.event_vignette_home.label"] = 'Home - vignette event (1920x572)';
  $overrides["image.search_article.effects|0|data|height"] = 165;
  $overrides["image.search_article.effects|0|data|width"] = 270;
  $overrides["image.search_article.label"] = 'Search - article (270x165)';
  $overrides["image.taxo_vignette_home.effects|0|data|height"] = 487;
  $overrides["image.taxo_vignette_home.effects|0|data|width"] = 1920;
  $overrides["image.taxo_vignette_home.label"] = 'Home - logo taxo liste (1920x487)';

 return $overrides;
}
