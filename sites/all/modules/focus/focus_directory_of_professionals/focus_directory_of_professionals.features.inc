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
