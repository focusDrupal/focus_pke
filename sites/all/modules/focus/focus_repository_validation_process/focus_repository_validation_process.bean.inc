<?php
/**
 * @file
 * focus_repository_validation_process.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function focus_repository_validation_process_bean_admin_ui_types() {
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
  $bean_type->name = 'focus_practices_uploaded';
  $bean_type->label = 'FOCUS practices uploaded';
  $bean_type->options = '';
  $bean_type->description = 'Block for the evaluated users to view all own practices.';
  $export['focus_practices_uploaded'] = $bean_type;

  return $export;
}
