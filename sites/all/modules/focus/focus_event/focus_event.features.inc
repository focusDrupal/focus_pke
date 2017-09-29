<?php
/**
 * @file
 * focus_event.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function focus_event_ctools_plugin_api($module = NULL, $api = NULL) {
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
function focus_event_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function focus_event_node_info() {
  $items = array(
    'focus_event' => array(
      'name' => t('FOCUS Event'),
      'base' => 'node_content',
      'description' => t('Create events to be displayed in your calendar.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
