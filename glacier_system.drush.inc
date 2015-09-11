<?php

/**
 * Implements hook_drush_command().
 */
function glacier_system_drush_command() {

  $items['glacier-system-update-bower-dependencies'] = array(
    'description' => 'Update bower dependencies of the default theme with dependencies from glacier features.',
    'aliases' => array('glacier-upbd'),
    'callback' => 'glacier_system_update_bower_dependencies',
  );

  return $items;
}
