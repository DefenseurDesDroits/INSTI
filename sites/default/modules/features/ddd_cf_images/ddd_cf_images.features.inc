<?php
/**
 * @file
 * ddd_cf_images.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ddd_cf_images_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function ddd_cf_images_image_default_styles() {
  $styles = array();

  // Exported image style: article_vignette_home_xs.
  $styles['article_vignette_home_xs'] = array(
    'name' => 'article_vignette_home_xs',
    'label' => 'Home - vignette article XS (767x572)',
    'effects' => array(
      28 => array(
        'label' => 'Mise à l’échelle et recadrage',
        'help' => 'La mise à l\'échelle et le recadrage maintiendront les proportions originales de l\'image puis recadreront la dimension la plus large. C\'est très utile pour créer des vignettes carrées sans étirer les images.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 767,
          'height' => 572,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: home_pointvue.
  $styles['home_pointvue'] = array(
    'name' => 'home_pointvue',
    'label' => 'Home - logo point de vue',
    'effects' => array(
      23 => array(
        'label' => 'Échelle',
        'help' => 'La mise à l\'échelle maintiendra les proportions originales de l\'image. Si une seule dimension est précisée, l\'autre dimension sera calculée automatiquement.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 250,
          'height' => 175,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: photo_delegue.
  $styles['photo_delegue'] = array(
    'name' => 'photo_delegue',
    'label' => 'Photo délegué (103x103)',
    'effects' => array(
      24 => array(
        'label' => 'Mise à l’échelle et recadrage',
        'help' => 'La mise à l\'échelle et le recadrage maintiendront les proportions originales de l\'image puis recadreront la dimension la plus large. C\'est très utile pour créer des vignettes carrées sans étirer les images.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 103,
          'height' => 103,
        ),
        'weight' => 1,
      ),
      25 => array(
        'label' => 'Désaturer',
        'help' => 'La désaturation converti l\'image en niveaux de gris.',
        'effect callback' => 'image_desaturate_effect',
        'dimensions passthrough' => TRUE,
        'module' => 'image',
        'name' => 'image_desaturate',
        'data' => array(),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: related_article.
  $styles['related_article'] = array(
    'name' => 'related_article',
    'label' => 'Logo contenu associé (270x140)',
    'effects' => array(
      19 => array(
        'label' => 'Mise à l’échelle et recadrage',
        'help' => 'La mise à l\'échelle et le recadrage maintiendront les proportions originales de l\'image puis recadreront la dimension la plus large. C\'est très utile pour créer des vignettes carrées sans étirer les images.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 270,
          'height' => 140,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: taxo_vignette_home_xs.
  $styles['taxo_vignette_home_xs'] = array(
    'name' => 'taxo_vignette_home_xs',
    'label' => 'Home - logo taxo liste XS (767x487)',
    'effects' => array(
      27 => array(
        'label' => 'Mise à l’échelle et recadrage',
        'help' => 'La mise à l\'échelle et le recadrage maintiendront les proportions originales de l\'image puis recadreront la dimension la plus large. C\'est très utile pour créer des vignettes carrées sans étirer les images.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 767,
          'height' => 487,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: taxo_vignette_large.
  $styles['taxo_vignette_large'] = array(
    'name' => 'taxo_vignette_large',
    'label' => 'Taxo vignette large (570x240)',
    'effects' => array(
      21 => array(
        'label' => 'Mise à l’échelle et recadrage',
        'help' => 'La mise à l\'échelle et le recadrage maintiendront les proportions originales de l\'image puis recadreront la dimension la plus large. C\'est très utile pour créer des vignettes carrées sans étirer les images.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 570,
          'height' => 240,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: taxo_vignette_small.
  $styles['taxo_vignette_small'] = array(
    'name' => 'taxo_vignette_small',
    'label' => 'Taxo vignette small (175x175)',
    'effects' => array(
      22 => array(
        'label' => 'Mise à l’échelle et recadrage',
        'help' => 'La mise à l\'échelle et le recadrage maintiendront les proportions originales de l\'image puis recadreront la dimension la plus large. C\'est très utile pour créer des vignettes carrées sans étirer les images.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 175,
          'height' => 175,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
