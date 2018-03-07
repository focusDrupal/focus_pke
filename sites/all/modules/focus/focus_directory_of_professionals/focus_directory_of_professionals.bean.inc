<?php
/**
 * @file
 * focus_directory_of_professionals.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function focus_directory_of_professionals_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'focus_accept_professionals';
  $bean_type->label = 'FOCUS Accept professionals';
  $bean_type->options = '';
  $bean_type->description = 'Block to accept or decline the news professionals of the platform.';
  $export['focus_accept_professionals'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'why_join_us';
  $bean_type->label = 'Why join us';
  $bean_type->options = '';
  $bean_type->description = 'Block to link the page why join us.';
  $export['why_join_us'] = $bean_type;

  return $export;
}
