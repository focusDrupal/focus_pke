<?php
/**
 * @file
 * focus_repository_validation_process.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function focus_repository_validation_process_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
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
function focus_repository_validation_process_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function focus_repository_validation_process_image_default_styles() {
  $styles = array();

  // Exported image style: check_evaluations__150x150_.
  $styles['check_evaluations__150x150_'] = array(
    'label' => 'Check evaluations (150x150)',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 150,
          'height' => 150,
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
function focus_repository_validation_process_node_info() {
  $items = array(
    'focus_repository_evaluation' => array(
      'name' => t('FOCUS Repository evaluation'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'subject_areas' => array(
      'name' => t('Subject areas'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Subject areas'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
