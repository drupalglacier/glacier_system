<?php
/**
 * @file
 * glacier_system.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function glacier_system_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-administration.
  $menus['menu-administration'] = array(
    'menu_name' => 'menu-administration',
    'title' => 'Administration',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Administration');


  return $menus;
}
