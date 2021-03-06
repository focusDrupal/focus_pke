<?php
/**
 * @file
 * focus_library.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function focus_library_ctools_plugin_api($module = NULL, $api = NULL) {
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
function focus_library_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function focus_library_node_info() {
  $items = array(
    'focus_library' => array(
      'name' => t('FOCUS Library'),
      'base' => 'node_content',
      'description' => t('Links and media of the FOCUS platform.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
