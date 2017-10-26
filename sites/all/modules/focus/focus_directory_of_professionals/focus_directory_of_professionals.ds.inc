<?php
/**
 * @file
 * focus_directory_of_professionals.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function focus_directory_of_professionals_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|focus_directory_of_professionals|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'focus_directory_of_professionals';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_name_professional',
        1 => 'field_last_name_professional',
        2 => 'field_email_professional',
        3 => 'field_institution_professional',
        4 => 'field_expertise_professional',
      ),
    ),
    'fields' => array(
      'field_name_professional' => 'ds_content',
      'field_last_name_professional' => 'ds_content',
      'field_email_professional' => 'ds_content',
      'field_institution_professional' => 'ds_content',
      'field_expertise_professional' => 'ds_content',
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
  $export['node|focus_directory_of_professionals|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|focus_directory_of_professionals|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'focus_directory_of_professionals';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_name_professional',
        2 => 'field_last_name_professional',
        3 => 'field_email_professional',
        4 => 'field_institution_professional',
        5 => 'field_expertise_professional',
      ),
      'hidden' => array(
        6 => 'workbench_access',
        7 => 'path',
        8 => 'body',
        9 => 'metatags',
        10 => 'field_accept_professional',
        11 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_name_professional' => 'ds_content',
      'field_last_name_professional' => 'ds_content',
      'field_email_professional' => 'ds_content',
      'field_institution_professional' => 'ds_content',
      'field_expertise_professional' => 'ds_content',
      'workbench_access' => 'hidden',
      'path' => 'hidden',
      'body' => 'hidden',
      'metatags' => 'hidden',
      'field_accept_professional' => 'hidden',
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
  $export['node|focus_directory_of_professionals|form'] = $ds_layout;

  return $export;
}
