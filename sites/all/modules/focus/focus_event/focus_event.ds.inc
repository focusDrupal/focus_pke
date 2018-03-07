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
  $ds_fieldsetting->id = 'node|focus_event|search';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'focus_event';
  $ds_fieldsetting->view_mode = 'search';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|focus_event|search'] = $ds_fieldsetting;

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
    'regions' => array(
      'ds_content' => array(
        0 => 'field_date_of_the_event',
        1 => 'body',
        2 => 'field_event_organiser',
        3 => 'field_event_fees',
        4 => 'field_focus_event_location',
        5 => 'field_focus_event_url',
        6 => 'field_event_registration_url',
        7 => 'field_focus_event_document',
        8 => 'field_focus_tags',
        9 => 'field_focus_event_ag',
        10 => 'field_focus_event_text_calendar',
      ),
    ),
    'fields' => array(
      'field_date_of_the_event' => 'ds_content',
      'body' => 'ds_content',
      'field_event_organiser' => 'ds_content',
      'field_event_fees' => 'ds_content',
      'field_focus_event_location' => 'ds_content',
      'field_focus_event_url' => 'ds_content',
      'field_event_registration_url' => 'ds_content',
      'field_focus_event_document' => 'ds_content',
      'field_focus_tags' => 'ds_content',
      'field_focus_event_ag' => 'ds_content',
      'field_focus_event_text_calendar' => 'ds_content',
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
  $export['node|focus_event|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|focus_event|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'focus_event';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_focus_event_content',
        1 => 'group_focus_event_metadata',
        2 => 'path',
        3 => 'metatags',
        4 => 'title_field',
        5 => 'field_focus_event_text_calendar',
        6 => 'field_focus_event_type',
        7 => 'body',
        8 => 'field_focus_event_date',
        9 => 'field_event_organiser',
        10 => 'field_event_fees',
        11 => 'field_focus_event_ag',
        12 => 'field_focus_event_location',
        13 => 'field_focus_tags',
        14 => 'field_focus_event_url',
        15 => 'field_event_registration_url',
        16 => 'field_focus_event_document',
        17 => 'workbench_access',
      ),
      'hidden' => array(
        18 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'group_focus_event_content' => 'ds_content',
      'group_focus_event_metadata' => 'ds_content',
      'path' => 'ds_content',
      'metatags' => 'ds_content',
      'title_field' => 'ds_content',
      'field_focus_event_text_calendar' => 'ds_content',
      'field_focus_event_type' => 'ds_content',
      'body' => 'ds_content',
      'field_focus_event_date' => 'ds_content',
      'field_event_organiser' => 'ds_content',
      'field_event_fees' => 'ds_content',
      'field_focus_event_ag' => 'ds_content',
      'field_focus_event_location' => 'ds_content',
      'field_focus_tags' => 'ds_content',
      'field_focus_event_url' => 'ds_content',
      'field_event_registration_url' => 'ds_content',
      'field_focus_event_document' => 'ds_content',
      'workbench_access' => 'ds_content',
      '_add_existing_field' => 'hidden',
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
  $export['node|focus_event|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|focus_event|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'focus_event';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_content_left',
        1 => 'body',
        2 => 'group_content_right',
        3 => 'field_focus_event_date',
        4 => 'field_event_organiser',
        5 => 'field_event_fees',
        6 => 'field_focus_event_location',
        7 => 'field_focus_event_url',
        8 => 'field_event_registration_url',
        9 => 'field_focus_event_document',
        10 => 'field_focus_tags',
        11 => 'field_focus_event_ag',
      ),
    ),
    'fields' => array(
      'group_content_left' => 'ds_content',
      'body' => 'ds_content',
      'group_content_right' => 'ds_content',
      'field_focus_event_date' => 'ds_content',
      'field_event_organiser' => 'ds_content',
      'field_event_fees' => 'ds_content',
      'field_focus_event_location' => 'ds_content',
      'field_focus_event_url' => 'ds_content',
      'field_event_registration_url' => 'ds_content',
      'field_focus_event_document' => 'ds_content',
      'field_focus_tags' => 'ds_content',
      'field_focus_event_ag' => 'ds_content',
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
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|focus_event|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|focus_event|search';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'focus_event';
  $ds_layout->view_mode = 'search';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'title',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'title' => 'ds_content',
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
  $export['node|focus_event|search'] = $ds_layout;

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
