<?php
/**
 * @file
 * focus_repository.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function focus_repository_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_repository:repository.
  $menu_links['main-menu_repository:repository'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'repository',
    'router_path' => 'repository',
    'link_title' => 'Repository',
    'options' => array(
      'identifier' => 'main-menu_repository:repository',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Repository');

  return $menu_links;
}
