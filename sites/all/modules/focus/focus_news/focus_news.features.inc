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
  if ($module == "captcha" && $api == "captcha") {
    return array("version" => "1");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
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
function focus_news_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_features_actions_triggers_export_actions_default().
 */
function focus_news_features_actions_triggers_export_actions_default() {
  $items = array(
    '140:system_send_email_action' => (object) array(
      'aid' => 140,
      'type' => 'system',
      'callback' => 'system_send_email_action',
      'parameters' => 'a:3:{s:9:"recipient";s:31:"javiersanchezflores@hotmail.com";s:7:"subject";s:33:"You have a new comment to approve";s:7:"message";s:139:"Hi admin,

[node:author:mail] wrote a new comment.

The comment is [comment:author:mail].

You can enter at the admin to accept them.";}',
      'label' => 'Send email when there\'s a new comment',
    ),
  );
  return $items;
}

/**
 * Implements hook_features_actions_triggers_export_triggers_default().
 */
function focus_news_features_actions_triggers_export_triggers_default() {
  $items = array(
    'comment_insert:140:system_send_email_action' => (object) array(
      'hook' => 'comment_insert',
      'aid' => 140,
      'weight' => 1,
    ),
  );
  return $items;
}

/**
 * Implements hook_image_default_styles().
 */
function focus_news_image_default_styles() {
  $styles = array();

  // Exported image style: cover_page_news.
  $styles['cover_page_news'] = array(
    'label' => 'Cover page news',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 460,
          'height' => 264,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: thumbail_news.
  $styles['thumbail_news'] = array(
    'label' => 'Thumbail news',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 65,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
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
