<?php
/**
 * @file
 * glacier_system.features.roles_permissions.inc
 */

/**
 * Implements hook_default_roles_permissions().
 */
function glacier_system_default_roles_permissions() {
  $roles = array();

  // Exported role: moderator
  $roles['moderator'] = array(
    'name' => 'moderator',
    'weight' => 2,
    'permissions' => array(
      'access administration pages' => TRUE,
      'access bean overview' => TRUE,
      'access content overview' => TRUE,
      'access draggableviews' => TRUE,
      'access media browser' => TRUE,
      'administer content translations' => TRUE,
      'administer files' => TRUE,
      'administer nodes' => TRUE,
      'administer taxonomy' => TRUE,
      'create files' => TRUE,
      'delete any document files' => TRUE,
      'delete any image files' => TRUE,
      'delete own document files' => TRUE,
      'delete own image files' => TRUE,
      'download any document files' => TRUE,
      'download any image files' => TRUE,
      'download own document files' => TRUE,
      'download own image files' => TRUE,
      'edit any document files' => TRUE,
      'edit any image files' => TRUE,
      'edit meta tags' => TRUE,
      'edit own document files' => TRUE,
      'edit own image files' => TRUE,
      'flush caches' => TRUE,
      'preview focal point' => TRUE,
      'revert revisions' => TRUE,
      'translate any entity' => TRUE,
      'translate bean entities' => TRUE,
      'translate content' => TRUE,
      'translate taxonomy_term entities' => TRUE,
      'use add another' => TRUE,
      'use text format filtered_html' => TRUE,
      'view bean revisions' => TRUE,
      'view own files' => TRUE,
      'view own private files' => TRUE,
      'view own unpublished content' => TRUE,
      'view private files' => TRUE,
      'view revisions' => TRUE,
      'view the administration theme' => TRUE,
    ),
  );

  return $roles;
}
