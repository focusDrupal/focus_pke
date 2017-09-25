<?php
/**
 * @file
 * focus_repository.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function focus_repository_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function focus_repository_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function focus_repository_node_info() {
  $items = array(
    'practice' => array(
      'name' => t('Practice'),
      'base' => 'node_content',
      'description' => t('Practices for the repository of good practices.'),
      'has_title' => '1',
      'title_label' => t('Practice'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
