<?php
/**
 * @file
 * focus_directory_of_professionals.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function focus_directory_of_professionals_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function focus_directory_of_professionals_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function focus_directory_of_professionals_node_info() {
  $items = array(
    'focus_directory_of_professionals' => array(
      'name' => t('FOCUS Directory of professionals'),
      'base' => 'node_content',
      'description' => t('Directory of professionals'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
