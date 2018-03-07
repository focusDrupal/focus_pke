<?php
/**
 * @file
 * focus_repository.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function focus_repository_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|practice|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'practice';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'comments' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'author' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'author',
    ),
    'post_date' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'ds_post_date_only_day',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_rep_keywords' => array(
      'formatter_settings' => array(
        'ft' => array(
          'prefix' => '<img src="http://focus/themes/focus/images/generals/tags.png"><div class="field field-name-field-rep-keywords field-type-taxonom',
          'suffix' => '</div>',
        ),
      ),
    ),
    'field_kind_of_practice' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => '[node:field_kind_of_practice]',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['node|practice|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|practice|search';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'practice';
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
    'field_rep_summary' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|practice|search'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|practice|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'practice';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => '',
        'class' => '',
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'h3',
          'fi-cl' => 'listingLinkHeader',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'post_date' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'ds_post_date_only_day',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'time',
          'fi-cl' => 'label-little',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'field_rep_summary' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'p',
          'fi-cl' => 'readMore',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
  );
  $export['node|practice|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function focus_repository_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|practice|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'practice';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_practice',
        1 => 'path',
        2 => 'field_rep_org_name',
        5 => 'field_rep_org_address',
        7 => 'field_rep_org_type',
        8 => 'field_rep_name_contact_person',
        10 => 'field_rep_agree',
        11 => 'title',
        12 => 'group_start',
        13 => 'field_main_subject_area',
        14 => 'field_rep_mail_contact_person',
        15 => 'field_copyright_rep_owner',
        16 => 'group_background',
        17 => 'field_rep_target_age',
        18 => 'field_rep_url',
        19 => 'field_rep_file_info',
        20 => 'field_rep_summary',
        21 => 'group_your_initiative',
        22 => 'field_rep_keywords',
        23 => 'field_rep_stakeholders',
        24 => 'group_your_organisation',
      ),
      'hidden' => array(
        3 => 'field_kind_of_practice',
        4 => 'workbench_access',
        6 => 'body',
        9 => 'metatags',
        25 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'group_practice' => 'ds_content',
      'path' => 'ds_content',
      'field_rep_org_name' => 'ds_content',
      'field_kind_of_practice' => 'hidden',
      'workbench_access' => 'hidden',
      'field_rep_org_address' => 'ds_content',
      'body' => 'hidden',
      'field_rep_org_type' => 'ds_content',
      'field_rep_name_contact_person' => 'ds_content',
      'metatags' => 'hidden',
      'field_rep_agree' => 'ds_content',
      'title' => 'ds_content',
      'group_start' => 'ds_content',
      'field_main_subject_area' => 'ds_content',
      'field_rep_mail_contact_person' => 'ds_content',
      'field_copyright_rep_owner' => 'ds_content',
      'group_background' => 'ds_content',
      'field_rep_target_age' => 'ds_content',
      'field_rep_url' => 'ds_content',
      'field_rep_file_info' => 'ds_content',
      'field_rep_summary' => 'ds_content',
      'group_your_initiative' => 'ds_content',
      'field_rep_keywords' => 'ds_content',
      'field_rep_stakeholders' => 'ds_content',
      'group_your_organisation' => 'ds_content',
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
  $export['node|practice|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|practice|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'practice';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_content_practice',
        1 => 'group_author',
        2 => 'field_rep_file_info',
        3 => 'group_background',
        4 => 'field_rep_url',
        5 => 'group_medal',
        6 => 'group_organisation',
        7 => 'comments',
        8 => 'field_rep_summary',
        9 => 'author',
        10 => 'post_date',
        11 => 'field_kind_of_practice',
        12 => 'field_rep_name_contact_person',
        13 => 'group_tag_icon',
        14 => 'field_rep_mail_contact_person',
        15 => 'field_rep_keywords',
        16 => 'field_rep_org_name',
        17 => 'field_rep_org_address',
        18 => 'field_rep_org_type',
      ),
    ),
    'fields' => array(
      'group_content_practice' => 'ds_content',
      'group_author' => 'ds_content',
      'field_rep_file_info' => 'ds_content',
      'group_background' => 'ds_content',
      'field_rep_url' => 'ds_content',
      'group_medal' => 'ds_content',
      'group_organisation' => 'ds_content',
      'comments' => 'ds_content',
      'field_rep_summary' => 'ds_content',
      'author' => 'ds_content',
      'post_date' => 'ds_content',
      'field_kind_of_practice' => 'ds_content',
      'field_rep_name_contact_person' => 'ds_content',
      'group_tag_icon' => 'ds_content',
      'field_rep_mail_contact_person' => 'ds_content',
      'field_rep_keywords' => 'ds_content',
      'field_rep_org_name' => 'ds_content',
      'field_rep_org_address' => 'ds_content',
      'field_rep_org_type' => 'ds_content',
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
  $export['node|practice|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|practice|search';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'practice';
  $ds_layout->view_mode = 'search';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_rep_summary',
        1 => 'title',
      ),
    ),
    'fields' => array(
      'field_rep_summary' => 'ds_content',
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
  $export['node|practice|search'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|practice|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'practice';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'post_date',
        2 => 'field_rep_summary',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'post_date' => 'ds_content',
      'field_rep_summary' => 'ds_content',
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
  $export['node|practice|teaser'] = $ds_layout;

  return $export;
}
