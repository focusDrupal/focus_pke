<?php
/**
 * @file
 * focus_event.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function focus_event_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|focus_event|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'focus_event';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'field_focus_event_date' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'text_default',
      'formatter_settings' => array(
        'format_type' => 'only_numbers',
        'fromto' => 'both',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'show_remaining_days' => 1,
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
  );
  $export['node|focus_event|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function focus_event_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|focus_event|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'focus_event';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'field_event_organiser',
        2 => 'field_event_fees',
        3 => 'field_focus_event_location',
        4 => 'field_focus_event_url',
        5 => 'field_event_registration_url',
        6 => 'field_focus_event_document',
        7 => 'field_event_author',
        8 => 'field_focus_event_date',
        9 => 'field_focus_event_reg_deadline',
        10 => 'field_focus_tags',
        11 => 'field_focus_event_ag',
        12 => 'field_focus_event_text_calendar',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'field_event_organiser' => 'ds_content',
      'field_event_fees' => 'ds_content',
      'field_focus_event_location' => 'ds_content',
      'field_focus_event_url' => 'ds_content',
      'field_event_registration_url' => 'ds_content',
      'field_focus_event_document' => 'ds_content',
      'field_event_author' => 'ds_content',
      'field_focus_event_date' => 'ds_content',
      'field_focus_event_reg_deadline' => 'ds_content',
      'field_focus_tags' => 'ds_content',
      'field_focus_event_ag' => 'ds_content',
      'field_focus_event_text_calendar' => 'ds_content',
    ),
  );
  $export['node|focus_event|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|focus_event|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'focus_event';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_next_events',
        1 => 'group_mini_calendar',
        2 => 'field_focus_event_date',
        3 => 'title',
        4 => 'group_dates_events',
        5 => 'body',
      ),
    ),
    'fields' => array(
      'group_next_events' => 'ds_content',
      'group_mini_calendar' => 'ds_content',
      'field_focus_event_date' => 'ds_content',
      'title' => 'ds_content',
      'group_dates_events' => 'ds_content',
      'body' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|focus_event|teaser'] = $ds_layout;

  return $export;
}
