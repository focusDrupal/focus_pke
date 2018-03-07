<?php
/**
 * @file
 * focus_request.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function focus_request_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_equest_highlights_3|bean|request_highlights|default';
  $field_group->group_name = 'group_equest_highlights_3';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'request_highlights';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '2',
    'children' => array(
      0 => 'field_request_image_highlights_3',
      1 => 'field_request_descr_highli_3',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-equest-highlights-3 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_equest_highlights_3|bean|request_highlights|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_request_highlights_2|bean|request_highlights|default';
  $field_group->group_name = 'group_request_highlights_2';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'request_highlights';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '1',
    'children' => array(
      0 => 'field_request_image_highlights_2',
      1 => 'field_request_descr_highli_2',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-request-highlights-2 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_request_highlights_2|bean|request_highlights|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_request_highlights|bean|request_highlights|default';
  $field_group->group_name = 'group_request_highlights';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'request_highlights';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '0',
    'children' => array(
      0 => 'field_request_image_highlights',
      1 => 'field_request_description_highli',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-request-highlights field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_request_highlights|bean|request_highlights|default'] = $field_group;

  return $field_groups;
}
