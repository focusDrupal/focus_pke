<?php
/**
 * @file
 * focus_request.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function focus_request_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'request_about';
  $bean_type->label = 'ReQuest About';
  $bean_type->options = '';
  $bean_type->description = 'Description of ReQuest';
  $export['request_about'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'request_block';
  $bean_type->label = 'ReQuest block';
  $bean_type->options = '';
  $bean_type->description = 'ReQuest block description';
  $export['request_block'] = $bean_type;

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'request_highlights';
  $bean_type->label = 'ReQuest Highlights';
  $bean_type->options = '';
  $bean_type->description = 'Highlights for the project Request';
  $export['request_highlights'] = $bean_type;

  return $export;
}
