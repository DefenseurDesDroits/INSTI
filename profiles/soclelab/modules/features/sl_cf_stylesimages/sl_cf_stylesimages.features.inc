<?php
/**
 * @file
 * sl_cf_stylesimages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function sl_cf_stylesimages_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function sl_cf_stylesimages_image_default_styles() {
  $styles = array();

  // Exported image style: article_carousel_home.
  $styles['article_carousel_home'] = array(
    'name' => 'article_carousel_home',
    'label' => 'Article carousel (1920x487)',
    'effects' => array(
      26 => array(
        'label' => 'Mise à l’échelle et recadrage',
        'help' => 'La mise à l\'échelle et le recadrage maintiendront les proportions originales de l\'image puis recadreront la dimension la plus large. C\'est très utile pour créer des vignettes carrées sans étirer les images.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1920,
          'height' => 487,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: article_full.
  $styles['article_full'] = array(
    'name' => 'article_full',
    'label' => 'Article logo full (1170x410)',
    'effects' => array(
      25 => array(
        'label' => 'Mise à l’échelle et recadrage',
        'help' => 'La mise à l\'échelle et le recadrage maintiendront les proportions originales de l\'image puis recadreront la dimension la plus large. C\'est très utile pour créer des vignettes carrées sans étirer les images.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1170,
          'height' => 410,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: article_galerie.
  $styles['article_galerie'] = array(
    'name' => 'article_galerie',
    'label' => 'Article galerie (1170x780)',
    'effects' => array(
      4 => array(
        'label' => 'Échelle',
        'help' => 'La mise à l\'échelle maintiendra les proportions originales de l\'image. Si une seule dimension est précisée, l\'autre dimension sera calculée automatiquement.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 1170,
          'height' => 780,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: article_vignette_home.
  $styles['article_vignette_home'] = array(
    'name' => 'article_vignette_home',
    'label' => 'Home - vignette article (1920x572)',
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
          'width' => 1920,
          'height' => 572,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: default_max_size.
  $styles['default_max_size'] = array(
    'name' => 'default_max_size',
    'label' => 'Default max-size (770xXX)',
    'effects' => array(
      17 => array(
        'label' => 'Échelle',
        'help' => 'La mise à l\'échelle maintiendra les proportions originales de l\'image. Si une seule dimension est précisée, l\'autre dimension sera calculée automatiquement.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 770,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: event_full.
  $styles['event_full'] = array(
    'name' => 'event_full',
    'label' => 'Event logo full (1170x410)',
    'effects' => array(
      23 => array(
        'label' => 'Mise à l’échelle et recadrage',
        'help' => 'La mise à l\'échelle et le recadrage maintiendront les proportions originales de l\'image puis recadreront la dimension la plus large. C\'est très utile pour créer des vignettes carrées sans étirer les images.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1170,
          'height' => 410,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: event_vignette_home.
  $styles['event_vignette_home'] = array(
    'name' => 'event_vignette_home',
    'label' => 'Home - vignette event (1920x572)',
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
          'width' => 1920,
          'height' => 572,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: highlighted_bloc_accueil.
  $styles['highlighted_bloc_accueil'] = array(
    'name' => 'highlighted_bloc_accueil',
    'label' => 'Highlighted - bloc accueil (70x70)',
    'effects' => array(
      16 => array(
        'label' => 'Mise à l’échelle et recadrage',
        'help' => 'La mise à l\'échelle et le recadrage maintiendront les proportions originales de l\'image puis recadreront la dimension la plus large. C\'est très utile pour créer des vignettes carrées sans étirer les images.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 70,
          'height' => 70,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: home_agenda.
  $styles['home_agenda'] = array(
    'name' => 'home_agenda',
    'label' => 'Home - agenda (162x162)',
    'effects' => array(
      13 => array(
        'label' => 'Mise à l’échelle et recadrage',
        'help' => 'La mise à l\'échelle et le recadrage maintiendront les proportions originales de l\'image puis recadreront la dimension la plus large. C\'est très utile pour créer des vignettes carrées sans étirer les images.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 162,
          'height' => 162,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: home_slider_mobile.
  $styles['home_slider_mobile'] = array(
    'name' => 'home_slider_mobile',
    'label' => 'Home - Slider mobile (768x415)',
    'effects' => array(
      18 => array(
        'label' => 'Mise à l’échelle et recadrage',
        'help' => 'La mise à l\'échelle et le recadrage maintiendront les proportions originales de l\'image puis recadreront la dimension la plus large. C\'est très utile pour créer des vignettes carrées sans étirer les images.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 768,
          'height' => 415,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: page_full.
  $styles['page_full'] = array(
    'name' => 'page_full',
    'label' => 'Page logo full (750x420)',
    'effects' => array(
      3 => array(
        'label' => 'Mise à l’échelle et recadrage',
        'help' => 'La mise à l\'échelle et le recadrage maintiendront les proportions originales de l\'image puis recadreront la dimension la plus large. C\'est très utile pour créer des vignettes carrées sans étirer les images.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 750,
          'height' => 420,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: search_article.
  $styles['search_article'] = array(
    'name' => 'search_article',
    'label' => 'Search - article (270x165)',
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
          'width' => 270,
          'height' => 165,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: search_event.
  $styles['search_event'] = array(
    'name' => 'search_event',
    'label' => 'Search - Evenement (130x115)',
    'effects' => array(
      11 => array(
        'label' => 'Mise à l’échelle et recadrage',
        'help' => 'La mise à l\'échelle et le recadrage maintiendront les proportions originales de l\'image puis recadreront la dimension la plus large. C\'est très utile pour créer des vignettes carrées sans étirer les images.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 130,
          'height' => 115,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: sidebar_article.
  $styles['sidebar_article'] = array(
    'name' => 'sidebar_article',
    'label' => 'Sidebar - Article (70x70)',
    'effects' => array(
      9 => array(
        'label' => 'Mise à l’échelle et recadrage',
        'help' => 'La mise à l\'échelle et le recadrage maintiendront les proportions originales de l\'image puis recadreront la dimension la plus large. C\'est très utile pour créer des vignettes carrées sans étirer les images.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 70,
          'height' => 70,
        ),
        'weight' => 1,
      ),
      14 => array(
        'label' => 'Surimpression (filigrane)',
        'help' => 'Choose the file image you wish to use as an overlay, and position it in a layer on top of the canvas.',
        'dimensions passthrough' => TRUE,
        'effect callback' => 'canvasactions_file2canvas_effect',
        'form callback' => 'canvasactions_file2canvas_form',
        'summary theme' => 'canvasactions_file2canvas_summary',
        'module' => 'imagecache_canvasactions',
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 0,
          'ypos' => 0,
          'alpha' => 100,
          'path' => 'sites/all/themes/socle_lab/img/home/contour-vignette-sidebar.png',
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: sidebar_event.
  $styles['sidebar_event'] = array(
    'name' => 'sidebar_event',
    'label' => 'Sidebar - Event (70x70)',
    'effects' => array(
      8 => array(
        'label' => 'Mise à l’échelle et recadrage',
        'help' => 'La mise à l\'échelle et le recadrage maintiendront les proportions originales de l\'image puis recadreront la dimension la plus large. C\'est très utile pour créer des vignettes carrées sans étirer les images.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 70,
          'height' => 70,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: social_share.
  $styles['social_share'] = array(
    'name' => 'social_share',
    'label' => 'Social Share (300x150)',
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
          'width' => 300,
          'height' => 150,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: taxo_vignette_home.
  $styles['taxo_vignette_home'] = array(
    'name' => 'taxo_vignette_home',
    'label' => 'Home - logo taxo liste (1920x487)',
    'effects' => array(
      20 => array(
        'label' => 'Mise à l’échelle et recadrage',
        'help' => 'La mise à l\'échelle et le recadrage maintiendront les proportions originales de l\'image puis recadreront la dimension la plus large. C\'est très utile pour créer des vignettes carrées sans étirer les images.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1920,
          'height' => 487,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
