<?php
/**
 * @file
 * focus_event.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function focus_event_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_focus_event_content|node|focus_event|form';
  $field_group->group_name = 'group_focus_event_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'focus_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_event_organiser',
      2 => 'field_event_fees',
      3 => 'field_focus_event_location',
      4 => 'field_focus_event_url',
      5 => 'field_event_registration_url',
      6 => 'field_focus_event_document',
      7 => 'field_event_author',
      8 => 'field_focus_event_id',
      9 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-focus-event-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_focus_event_content|node|focus_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_focus_event_date|node|focus_event|form';
  $field_group->group_name = 'group_focus_event_date';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'focus_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Dates',
    'weight' => '2',
    'children' => array(
      0 => 'field_focus_event_date',
      1 => 'field_focus_event_reg_deadline',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-focus-event-date field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_focus_event_date|node|focus_event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_focus_event_metadata|node|focus_event|form';
  $field_group->group_name = 'group_focus_event_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'focus_event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '3',
    'children' => array(
      0 => 'field_focus_tags',
      1 => 'field_focus_event_ag',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-focus-event-metadata field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_focus_event_metadata|node|focus_event|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');
  t('Dates');
  t('Metadata');

  return $field_groups;
}
