<?php
/**
 * @file
 * focus_library.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function focus_library_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|focus_library|search';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'focus_library';
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
  );
  $export['node|focus_library|search'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|focus_library|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'focus_library';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '10',
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
      'weight' => '11',
      'label' => 'hidden',
      'format' => 'ds_post_date_only_day',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'div',
          'lb-cl' => 'field-time',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'span',
          'fi-cl' => 'label-little',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
          'fi-first-last' => FALSE,
        ),
      ),
    ),
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_focus_library_tags' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'prefix' => '<div class="field-keywords evidence-little"><span class="glyphicon glyphicon-tags icon-element"></span>',
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
  );
  $export['node|focus_library|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function focus_library_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'bean|header_image_and_description|default';
  $ds_layout->entity_type = 'bean';
  $ds_layout->bundle = 'header_image_and_description';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_header_image',
        1 => 'field_header_description',
      ),
    ),
    'fields' => array(
      'field_header_image' => 'ds_content',
      'field_header_description' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['bean|header_image_and_description|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'bean|header_image_and_description|form';
  $ds_layout->entity_type = 'bean';
  $ds_layout->bundle = 'header_image_and_description';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'label',
        1 => 'title',
        2 => 'view_mode',
        3 => 'revision',
        4 => 'field_header_image',
        5 => 'field_header_description',
      ),
      'hidden' => array(
        6 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'label' => 'ds_content',
      'title' => 'ds_content',
      'view_mode' => 'ds_content',
      'revision' => 'ds_content',
      'field_header_image' => 'ds_content',
      'field_header_description' => 'ds_content',
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
  $export['bean|header_image_and_description|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'bean|header_upload|default';
  $ds_layout->entity_type = 'bean';
  $ds_layout->bundle = 'header_upload';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_header_upload_descrp',
        2 => 'field_header_upload_link',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_header_upload_descrp' => 'ds_content',
      'field_header_upload_link' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['bean|header_upload|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'bean|header_upload|form';
  $ds_layout->entity_type = 'bean';
  $ds_layout->bundle = 'header_upload';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'label',
        1 => 'title',
        2 => 'view_mode',
        3 => 'revision',
        4 => 'field_header_upload_descrp',
        5 => 'field_header_upload_link',
      ),
    ),
    'fields' => array(
      'label' => 'ds_content',
      'title' => 'ds_content',
      'view_mode' => 'ds_content',
      'revision' => 'ds_content',
      'field_header_upload_descrp' => 'ds_content',
      'field_header_upload_link' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['bean|header_upload|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|focus_library|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'focus_library';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'field_focus_library_publish_date',
        2 => 'field_focus_library_resource',
        3 => 'field_focus_library_resource_url',
        4 => 'field_focus_library_tags',
        5 => 'field_focus_library_contact_name',
        6 => 'field_focus_library_author',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'field_focus_library_publish_date' => 'ds_content',
      'field_focus_library_resource' => 'ds_content',
      'field_focus_library_resource_url' => 'ds_content',
      'field_focus_library_tags' => 'ds_content',
      'field_focus_library_contact_name' => 'ds_content',
      'field_focus_library_author' => 'ds_content',
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
  $export['node|focus_library|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|focus_library|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'focus_library';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'workbench_access',
        1 => 'title',
        2 => 'path',
        3 => 'metatags',
        4 => 'field_focus_library_publish_date',
        5 => 'body',
        6 => 'field_focus_library_resource',
        7 => 'field_focus_library_resource_url',
        8 => 'field_focus_library_tags',
        9 => 'field_focus_library_contact_name',
        10 => 'field_focus_library_author',
      ),
      'hidden' => array(
        11 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'workbench_access' => 'ds_content',
      'title' => 'ds_content',
      'path' => 'ds_content',
      'metatags' => 'ds_content',
      'field_focus_library_publish_date' => 'ds_content',
      'body' => 'ds_content',
      'field_focus_library_resource' => 'ds_content',
      'field_focus_library_resource_url' => 'ds_content',
      'field_focus_library_tags' => 'ds_content',
      'field_focus_library_contact_name' => 'ds_content',
      'field_focus_library_author' => 'ds_content',
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
  $export['node|focus_library|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|focus_library|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'focus_library';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_focus_library_content',
        1 => 'group_focus_library_aside',
        2 => 'field_focus_library_publish_date',
        3 => 'body',
        4 => 'field_focus_library_contact_name',
        5 => 'field_focus_library_resource_url',
        6 => 'field_focus_library_resource',
        7 => 'field_focus_library_tags',
        8 => 'group_focus_library_ev_fields',
        9 => 'group_focus_library_aside_body',
      ),
    ),
    'fields' => array(
      'group_focus_library_content' => 'ds_content',
      'group_focus_library_aside' => 'ds_content',
      'field_focus_library_publish_date' => 'ds_content',
      'body' => 'ds_content',
      'field_focus_library_contact_name' => 'ds_content',
      'field_focus_library_resource_url' => 'ds_content',
      'field_focus_library_resource' => 'ds_content',
      'field_focus_library_tags' => 'ds_content',
      'group_focus_library_ev_fields' => 'ds_content',
      'group_focus_library_aside_body' => 'ds_content',
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
  $export['node|focus_library|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|focus_library|revision';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'focus_library';
  $ds_layout->view_mode = 'revision';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'field_focus_library_publish_date',
        2 => 'field_focus_library_resource',
        3 => 'field_focus_library_resource_url',
        4 => 'field_focus_library_tags',
        5 => 'field_focus_library_contact_name',
        6 => 'field_focus_library_author',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'field_focus_library_publish_date' => 'ds_content',
      'field_focus_library_resource' => 'ds_content',
      'field_focus_library_resource_url' => 'ds_content',
      'field_focus_library_tags' => 'ds_content',
      'field_focus_library_contact_name' => 'ds_content',
      'field_focus_library_author' => 'ds_content',
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
  $export['node|focus_library|revision'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|focus_library|search';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'focus_library';
  $ds_layout->view_mode = 'search';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'body',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
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
  $export['node|focus_library|search'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|focus_library|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'focus_library';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_focus_ts_library_txt',
        1 => 'title',
        2 => 'post_date',
        3 => 'body',
        4 => 'field_focus_library_tags',
      ),
    ),
    'fields' => array(
      'group_focus_ts_library_txt' => 'ds_content',
      'title' => 'ds_content',
      'post_date' => 'ds_content',
      'body' => 'ds_content',
      'field_focus_library_tags' => 'ds_content',
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
  $export['node|focus_library|teaser'] = $ds_layout;

  return $export;
}
