<?php
/**
 * @file
 * focus_directory_of_professionals.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function focus_directory_of_professionals_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_accept_prof_descrp|bean|focus_accept_professionals|default';
  $field_group->group_name = 'group_accept_prof_descrp';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'focus_accept_professionals';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Accept professional description',
    'weight' => '1',
    'children' => array(
      0 => 'field_focus_image_professionals',
      1 => 'field_focus_text_professionals',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Accept professional description',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-accept-prof-descrp field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_accept_prof_descrp|bean|focus_accept_professionals|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_accept_prof_image|bean|focus_accept_professionals|default';
  $field_group->group_name = 'group_accept_prof_image';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'focus_accept_professionals';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Accept professional image',
    'weight' => '2',
    'children' => array(
      0 => 'field_focus_descrp_professionals',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Accept professional image',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-accept-prof-image field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_accept_prof_image|bean|focus_accept_professionals|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image_personal|node|focus_directory_of_professionals|default';
  $field_group->group_name = 'group_image_personal';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'focus_directory_of_professionals';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group-image-personal-dates',
    'weight' => '0',
    'children' => array(
      0 => 'group_image',
      1 => 'group_personal_dates',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group-image-personal-dates',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-image-personal field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_image_personal|node|focus_directory_of_professionals|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image|node|focus_directory_of_professionals|default';
  $field_group->group_name = 'group_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'focus_directory_of_professionals';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_image_personal';
  $field_group->data = array(
    'label' => 'group-image',
    'weight' => '19',
    'children' => array(
      0 => 'field_image_professional',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group-image',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-image field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_image|node|focus_directory_of_professionals|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_other_dates|node|focus_directory_of_professionals|default';
  $field_group->group_name = 'group_other_dates';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'focus_directory_of_professionals';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group-other-dates',
    'weight' => '1',
    'children' => array(
      0 => 'field_country_of_professional',
      1 => 'field_description_professional',
      2 => 'field_expertise_professional',
      3 => 'field_institution_professional',
      4 => 'field_kind_of_professional',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group-other-dates',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-other-dates field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_other_dates|node|focus_directory_of_professionals|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_personal_dates|node|focus_directory_of_professionals|default';
  $field_group->group_name = 'group_personal_dates';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'focus_directory_of_professionals';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_image_personal';
  $field_group->data = array(
    'label' => 'group-personal-dates',
    'weight' => '20',
    'children' => array(
      0 => 'field_email_professional',
      1 => 'field_last_name_professional',
      2 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group-personal-dates',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-personal-dates field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_personal_dates|node|focus_directory_of_professionals|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Accept professional description');
  t('Accept professional image');
  t('group-image');
  t('group-image-personal-dates');
  t('group-other-dates');
  t('group-personal-dates');

  return $field_groups;
}
