<?php
/**
 * @file
 * focus_repository.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function focus_repository_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'focus_check_your_evaluations';
  $bean_type->label = 'FOCUS check your evaluations';
  $bean_type->options = '';
  $bean_type->description = 'New block to check your evaluations.';
  $export['focus_check_your_evaluations'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'header_image_and_description';
  $bean_type->label = 'Header image and description';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['header_image_and_description'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'header_upload';
  $bean_type->label = 'Header upload';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['header_upload'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'repository_tutorial';
  $bean_type->label = 'Repository tutorial';
  $bean_type->options = '';
  $bean_type->description = 'Tutorial for the page of Repository of good practices';
  $export['repository_tutorial'] = $bean_type;

  return $export;
}
