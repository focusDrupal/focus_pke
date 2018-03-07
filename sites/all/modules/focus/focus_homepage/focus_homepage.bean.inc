<?php
/**
 * @file
 * focus_homepage.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function focus_homepage_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'about';
  $bean_type->label = 'About';
  $bean_type->options = '';
  $bean_type->description = 'About block for the FOCUS project';
  $export['about'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'add_highlights_home';
  $bean_type->label = 'Add highlights home';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['add_highlights_home'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'footer_european_commission';
  $bean_type->label = 'Footer European Commission';
  $bean_type->options = '';
  $bean_type->description = 'Block for the European Commission Banner';
  $export['footer_european_commission'] = $bean_type;

  return $export;
}
