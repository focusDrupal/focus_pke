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
  $field_group->identifier = 'group_content_left|node|focus_event|default';
  $field_group->group_name = 'group_content_left';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'focus_event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content Left',
    'weight' => '0',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Content Left',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-content-left field-group-fieldset col-sm-8 col-md-8',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_content_left|node|focus_event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content_left|node|focus_event|full';
  $field_group->group_name = 'group_content_left';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'focus_event';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content Left',
    'weight' => '0',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Content Left',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-content-left field-group-div col-xs-12 col-sm-8 col-md-8',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_content_left|node|focus_event|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content_right|node|focus_event|default';
  $field_group->group_name = 'group_content_right';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'focus_event';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content right',
    'weight' => '1',
    'children' => array(
      0 => 'field_event_organiser',
      1 => 'field_event_fees',
      2 => 'field_focus_event_location',
      3 => 'field_focus_event_url',
      4 => 'field_event_registration_url',
      5 => 'field_focus_event_document',
      6 => 'field_event_author',
      7 => 'field_focus_event_date',
      8 => 'field_focus_event_reg_deadline',
      9 => 'field_focus_tags',
      10 => 'field_focus_event_ag',
      11 => 'field_focus_event_text_calendar',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Content right',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-content-right field-group-fieldset col-sm-4 col-md-4',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_content_right|node|focus_event|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content_right|node|focus_event|full';
  $field_group->group_name = 'group_content_right';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'focus_event';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content right',
    'weight' => '1',
    'children' => array(
      0 => 'field_event_organiser',
      1 => 'field_event_fees',
      2 => 'field_focus_event_location',
      3 => 'field_focus_event_url',
      4 => 'field_event_registration_url',
      5 => 'field_focus_event_document',
      6 => 'field_focus_tags',
      7 => 'field_focus_event_ag',
      8 => 'field_focus_event_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Content right',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-content-right field-group-div col-xs-12 col-sm-4 col-md-4',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_content_right|node|focus_event|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dates_events|node|focus_event|teaser';
  $field_group->group_name = 'group_dates_events';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'focus_event';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_next_events';
  $field_group->data = array(
    'label' => 'Dates events',
    'weight' => '2',
    'children' => array(
      0 => 'body',
      1 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Dates events',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-dates-events field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_dates_events|node|focus_event|teaser'] = $field_group;

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
      7 => 'field_focus_event_text_calendar',
      8 => 'title_field',
      9 => 'field_focus_event_type',
      10 => 'field_focus_event_date',
      11 => 'workbench_access',
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

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mini_calendar|node|focus_event|teaser';
  $field_group->group_name = 'group_mini_calendar';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'focus_event';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_next_events';
  $field_group->data = array(
    'label' => 'Mini calendar',
    'weight' => '1',
    'children' => array(
      0 => 'field_focus_event_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Mini calendar',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-mini-calendar field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_mini_calendar|node|focus_event|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_next_events|node|focus_event|teaser';
  $field_group->group_name = 'group_next_events';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'focus_event';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Next events',
    'weight' => '0',
    'children' => array(
      0 => 'group_mini_calendar',
      1 => 'group_dates_events',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Next events',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-next-events field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_next_events|node|focus_event|teaser'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');
  t('Content Left');
  t('Content right');
  t('Dates');
  t('Dates events');
  t('Metadata');
  t('Mini calendar');
  t('Next events');

  return $field_groups;
}
