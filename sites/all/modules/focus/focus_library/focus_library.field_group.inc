<?php
/**
 * @file
 * focus_library.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function focus_library_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_focus_library_aside_body|node|focus_library|full';
  $field_group->group_name = 'group_focus_library_aside_body';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'focus_library';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_focus_library_aside';
  $field_group->data = array(
    'label' => 'Aside body',
    'weight' => '17',
    'children' => array(
      0 => 'field_focus_library_resource',
      1 => 'field_focus_library_resource_url',
      2 => 'field_focus_library_tags',
      3 => 'field_focus_library_contact_name',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-focus-library-aside-body field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_focus_library_aside_body|node|focus_library|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_focus_library_aside|node|focus_library|full';
  $field_group->group_name = 'group_focus_library_aside';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'focus_library';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Details',
    'weight' => '1',
    'children' => array(
      0 => 'group_focus_library_aside_body',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'Details',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-focus-library-aside field-group-html-element col-xs-12 col-sm-4 col-md-4',
        'wrapper' => 'section',
      ),
    ),
  );
  $field_groups['group_focus_library_aside|node|focus_library|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_focus_library_content|node|focus_library|full';
  $field_group->group_name = 'group_focus_library_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'focus_library';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '0',
    'children' => array(
      0 => 'group_focus_library_ev_fields',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-focus-library-content field-group-html5  col-xs-12 col-sm-8 col-md-8',
        'wrapper' => 'section',
      ),
    ),
  );
  $field_groups['group_focus_library_content|node|focus_library|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_focus_library_ev_fields|node|focus_library|full';
  $field_group->group_name = 'group_focus_library_ev_fields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'focus_library';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_focus_library_content';
  $field_group->data = array(
    'label' => 'Fields evidence',
    'weight' => '15',
    'children' => array(
      0 => 'body',
      1 => 'field_focus_library_publish_date',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => 'group-focus-library-ev-fields field-group-html-element',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_focus_library_ev_fields|node|focus_library|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_focus_ts_library_txt|node|focus_library|teaser';
  $field_group->group_name = 'group_focus_ts_library_txt';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'focus_library';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_focus_library_tags',
      2 => 'title',
      3 => 'post_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-focus-ts-library-txt field-group-div col col-md-11 col-xs-11 col-sm-11',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_focus_ts_library_txt|node|focus_library|teaser'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Aside body');
  t('Details');
  t('Fields evidence');

  return $field_groups;
}
