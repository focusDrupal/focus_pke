<?php
/**
 * @file
 * focus_directory_of_professionals.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function focus_directory_of_professionals_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
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
function focus_directory_of_professionals_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function focus_directory_of_professionals_image_default_styles() {
  $styles = array();

  // Exported image style: header_and_description_image__940x250_.
  $styles['header_and_description_image__940x250_'] = array(
    'label' => 'Header and description image (940X250)',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 940,
          'height' => 250,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: join_us.
  $styles['join_us'] = array(
    'label' => 'Join us',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 465,
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
function focus_directory_of_professionals_node_info() {
  $items = array(
    'focus_directory_of_professionals' => array(
      'name' => t('FOCUS Directory of professionals'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
