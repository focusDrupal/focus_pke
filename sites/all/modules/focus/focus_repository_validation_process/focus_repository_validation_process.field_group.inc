<?php
/**
 * @file
 * focus_repository_validation_process.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function focus_repository_validation_process_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content_related_evaluation|node|focus_repository_evaluation|form';
  $field_group->group_name = 'group_content_related_evaluation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'focus_repository_evaluation';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_evaluation';
  $field_group->data = array(
    'label' => 'Content related evaluation',
    'weight' => '9',
    'children' => array(
      0 => 'field_assessed_time_impact',
      1 => 'field_assessed_evidence',
      2 => 'field_assessed_level_maturity',
      3 => 'field_assessed_transferability',
    ),
    'format_type' => 'multipage',
    'format_settings' => array(
      'formatter' => 'no-start',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-content-related-evaluation',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_content_related_evaluation|node|focus_repository_evaluation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_evaluate_practice|node|focus_repository_evaluation|form';
  $field_group->group_name = 'group_evaluate_practice';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'focus_repository_evaluation';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_evaluation';
  $field_group->data = array(
    'label' => 'Evaluate practice',
    'weight' => '10',
    'children' => array(
      0 => 'field_evaluation',
      1 => 'field_text_evaluation',
    ),
    'format_type' => 'multipage',
    'format_settings' => array(
      'formatter' => 'no-start',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-evaluate-practice',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_evaluate_practice|node|focus_repository_evaluation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_evaluation|node|focus_repository_evaluation|form';
  $field_group->group_name = 'group_evaluation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'focus_repository_evaluation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Evaluation',
    'weight' => '1',
    'children' => array(
      0 => 'group_formal_review_criteria',
      1 => 'group_content_related_evaluation',
      2 => 'group_evaluate_practice',
    ),
    'format_type' => 'multipage-group',
    'format_settings' => array(
      'label' => 'Evaluation',
      'instance_settings' => array(
        'classes' => 'group-evaluation field-group-multipage-group',
        'page_header' => '3',
        'page_counter' => '1',
        'move_button' => '1',
        'move_additional' => '1',
      ),
    ),
  );
  $field_groups['group_evaluation|node|focus_repository_evaluation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_formal_review_criteria|node|focus_repository_evaluation|form';
  $field_group->group_name = 'group_formal_review_criteria';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'focus_repository_evaluation';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_evaluation';
  $field_group->data = array(
    'label' => 'Formal review criteria',
    'weight' => '8',
    'children' => array(
      0 => 'field_completeness',
      1 => 'field_clarity',
      2 => 'field_evidence',
      3 => 'field_documentation_url',
      4 => 'field_contact',
      5 => 'field_elements_display_clear',
    ),
    'format_type' => 'multipage',
    'format_settings' => array(
      'label' => 'Formal review criteria',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-formal-review-criteria',
        'description' => '',
      ),
      'formatter' => 'start',
    ),
  );
  $field_groups['group_formal_review_criteria|node|focus_repository_evaluation|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content related evaluation');
  t('Evaluate practice');
  t('Evaluation');
  t('Formal review criteria');

  return $field_groups;
}
