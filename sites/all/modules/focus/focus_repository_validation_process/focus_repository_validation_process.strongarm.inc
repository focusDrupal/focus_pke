<?php
/**
 * @file
 * focus_repository_validation_process.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function focus_repository_validation_process_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_focus_repository_evaluation';
  $strongarm->value = '0';
  $export['comment_anonymous_focus_repository_evaluation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_subject_areas';
  $strongarm->value = '0';
  $export['comment_anonymous_subject_areas'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_focus_repository_evaluation';
  $strongarm->value = 1;
  $export['comment_default_mode_focus_repository_evaluation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_subject_areas';
  $strongarm->value = 1;
  $export['comment_default_mode_subject_areas'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_focus_repository_evaluation';
  $strongarm->value = '50';
  $export['comment_default_per_page_focus_repository_evaluation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_subject_areas';
  $strongarm->value = '50';
  $export['comment_default_per_page_subject_areas'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_focus_repository_evaluation';
  $strongarm->value = '1';
  $export['comment_focus_repository_evaluation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_focus_repository_evaluation';
  $strongarm->value = 1;
  $export['comment_form_location_focus_repository_evaluation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_subject_areas';
  $strongarm->value = 1;
  $export['comment_form_location_subject_areas'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_focus_repository_evaluation';
  $strongarm->value = '1';
  $export['comment_preview_focus_repository_evaluation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_subject_areas';
  $strongarm->value = '1';
  $export['comment_preview_subject_areas'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_areas';
  $strongarm->value = '2';
  $export['comment_subject_areas'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_focus_repository_evaluation';
  $strongarm->value = 1;
  $export['comment_subject_field_focus_repository_evaluation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_subject_areas';
  $strongarm->value = 1;
  $export['comment_subject_field_subject_areas'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__focus_repository_evaluation';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '9',
        ),
        'path' => array(
          'weight' => '1',
        ),
        'workbench_access' => array(
          'weight' => '8',
        ),
        'metatags' => array(
          'weight' => '11',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__focus_repository_evaluation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__subject_areas';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
        'workbench_access' => array(
          'weight' => '0',
        ),
        'metatags' => array(
          'weight' => '40',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__subject_areas'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_focus_repository_evaluation';
  $strongarm->value = '0';
  $export['language_content_type_focus_repository_evaluation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_subject_areas';
  $strongarm->value = '0';
  $export['language_content_type_subject_areas'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_focus_repository_evaluation';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_focus_repository_evaluation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_subject_areas';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_subject_areas'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_focus_repository_evaluation';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_focus_repository_evaluation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_subject_areas';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_subject_areas'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_focus_repository_evaluation';
  $strongarm->value = array();
  $export['node_options_focus_repository_evaluation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_subject_areas';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_subject_areas'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_focus_repository_evaluation';
  $strongarm->value = '1';
  $export['node_preview_focus_repository_evaluation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_subject_areas';
  $strongarm->value = '0';
  $export['node_preview_subject_areas'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_focus_repository_evaluation';
  $strongarm->value = 0;
  $export['node_submitted_focus_repository_evaluation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_subject_areas';
  $strongarm->value = 0;
  $export['node_submitted_subject_areas'] = $strongarm;

  return $export;
}
