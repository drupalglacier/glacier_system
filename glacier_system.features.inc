<?php
/**
 * @file
 * glacier_system.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function glacier_system_image_default_styles() {
  $styles = array();

  // Exported image style: glacier_system_lightbox.
  $styles['glacier_system_lightbox'] = array(
    'label' => 'Lightbox (1280x)',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1280,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      2 => array(
        'name' => 'image_progressive_effect',
        'data' => array(),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: glacier_system_thumbnail.
  $styles['glacier_system_thumbnail'] = array(
    'label' => 'Thumbnail (50x50)',
    'effects' => array(
      1 => array(
        'name' => 'focal_point_scale_and_crop',
        'data' => array(
          'width' => 50,
          'height' => 50,
        ),
        'weight' => 1,
      ),
      2 => array(
        'name' => 'image_progressive_effect',
        'data' => array(),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}
