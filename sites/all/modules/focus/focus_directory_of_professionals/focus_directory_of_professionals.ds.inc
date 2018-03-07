<?php
/**
 * @file
 * focus_directory_of_professionals.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function focus_directory_of_professionals_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|focus_directory_of_professionals|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'focus_directory_of_professionals';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '2',
      'label' => 'above',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => '',
        'class' => '',
        'ft' => array(
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_country_of_professional' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-col' => TRUE,
          'prefix' => '<div class="dates">',
          'suffix' => '</div>',
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_description_professional' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'prefix' => '<div class="description">',
          'suffix' => '</div>',
        ),
      ),
    ),
    'field_email_professional' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_expertise_professional' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'prefix' => '<div class="dates">',
          'suffix' => '</div>',
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_institution_professional' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-col' => TRUE,
          'prefix' => '<div class="dates">',
          'suffix' => '</div>',
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_kind_of_professional' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-col' => TRUE,
          'prefix' => '<div class="dates">',
          'suffix' => '</div>',
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_last_name_professional' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-col' => TRUE,
        ),
      ),
    ),
  );
  $export['node|focus_directory_of_professionals|default'] = $ds_fieldsetting;

  return $export;
}

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
        0 => 'group_image_personal',
        1 => 'group_other_dates',
        2 => 'title',
        3 => 'field_last_name_professional',
        4 => 'field_email_professional',
        5 => 'field_image_professional',
        6 => 'field_description_professional',
        7 => 'field_kind_of_professional',
        8 => 'field_country_of_professional',
        9 => 'group_image',
        10 => 'field_institution_professional',
        11 => 'group_personal_dates',
        12 => 'field_expertise_professional',
      ),
    ),
    'fields' => array(
      'group_image_personal' => 'ds_content',
      'group_other_dates' => 'ds_content',
      'title' => 'ds_content',
      'field_last_name_professional' => 'ds_content',
      'field_email_professional' => 'ds_content',
      'field_image_professional' => 'ds_content',
      'field_description_professional' => 'ds_content',
      'field_kind_of_professional' => 'ds_content',
      'field_country_of_professional' => 'ds_content',
      'group_image' => 'ds_content',
      'field_institution_professional' => 'ds_content',
      'group_personal_dates' => 'ds_content',
      'field_expertise_professional' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 0,
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
        0 => 'field_image_professional',
        1 => 'title_field',
        2 => 'field_last_name_professional',
        3 => 'field_description_professional',
        4 => 'field_email_professional',
        5 => 'field_kind_of_professional',
        6 => 'workbench_access',
        7 => 'field_country_of_professional',
        8 => 'path',
        9 => 'field_institution_professional',
        10 => 'field_expertise_professional',
        11 => 'metatags',
      ),
      'hidden' => array(
        12 => 'body',
        13 => 'field_accept_professional',
        14 => 'field_flag_create_user',
        15 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'field_image_professional' => 'ds_content',
      'title_field' => 'ds_content',
      'field_last_name_professional' => 'ds_content',
      'field_description_professional' => 'ds_content',
      'field_email_professional' => 'ds_content',
      'field_kind_of_professional' => 'ds_content',
      'workbench_access' => 'ds_content',
      'field_country_of_professional' => 'ds_content',
      'path' => 'ds_content',
      'field_institution_professional' => 'ds_content',
      'field_expertise_professional' => 'ds_content',
      'metatags' => 'ds_content',
      'body' => 'hidden',
      'field_accept_professional' => 'hidden',
      'field_flag_create_user' => 'hidden',
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
