<?php
/**
 * @file
 * focus_news.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function focus_news_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function focus_news_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function focus_news_node_info() {
  $items = array(
    'focus_news' => array(
      'name' => t('FOCUS News'),
      'base' => 'node_content',
      'description' => t('Content type for news content.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
