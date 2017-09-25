<?php
/**
 * @file
 * focus_homepage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function focus_homepage_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function focus_homepage_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function focus_homepage_image_default_styles() {
  $styles = array();

  // Exported image style: highlights.
  $styles['highlights'] = array(
    'label' => 'highlights',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 320,
          'height' => 127,
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
function focus_homepage_node_info() {
  $items = array(
    'focus_partneres_slider' => array(
      'name' => t('FOCUS partners slider'),
      'base' => 'node_content',
      'description' => t('Slider for partners of FOCUS'),
      'has_title' => '1',
      'title_label' => t('FOCUS partneres slider'),
      'help' => '',
    ),
    'focus_top_slider' => array(
      'name' => t('FOCUS Top Slider'),
      'base' => 'node_content',
      'description' => t('FOCUS Slider for the homepage of the project.'),
      'has_title' => '1',
      'title_label' => t('FOCUS Top Slider'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
