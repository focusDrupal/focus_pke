<?php
/**
 * @file
 * focus_homepage.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function focus_homepage_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page|search';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page';
  $ds_fieldsetting->view_mode = 'search';
  $ds_fieldsetting->settings = array(
    'title_field' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|page|search'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function focus_homepage_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'bean|add_highlights_home|default';
  $ds_layout->entity_type = 'bean';
  $ds_layout->bundle = 'add_highlights_home';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_add_highlights_home_link',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_add_highlights_home_link' => 'ds_content',
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
  $export['bean|add_highlights_home|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'bean|add_highlights_home|form';
  $ds_layout->entity_type = 'bean';
  $ds_layout->bundle = 'add_highlights_home';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'label',
        1 => 'title',
        2 => 'view_mode',
        3 => 'revision',
        4 => 'field_add_highlights_home_link',
      ),
      'hidden' => array(
        5 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'label' => 'ds_content',
      'title' => 'ds_content',
      'view_mode' => 'ds_content',
      'revision' => 'ds_content',
      'field_add_highlights_home_link' => 'ds_content',
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
  $export['bean|add_highlights_home|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'bean|highlights|default';
  $ds_layout->entity_type = 'bean';
  $ds_layout->bundle = 'highlights';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'group_item_1',
        2 => 'group_item_2',
        3 => 'field_highlights_image_1_weight_',
        4 => 'field_highlights_image_4',
        5 => 'group_item_3',
        6 => 'field_highlights_title_1',
        7 => 'field_highlights_title_4',
        8 => 'field_highlights_description_1',
        9 => 'group_item_4',
        10 => 'field_highlights_description_4',
        11 => 'group_item_5',
        12 => 'group_item_6',
        13 => 'field_highlights_image_2',
        14 => 'field_highlights_title_2',
        15 => 'field_highlights_description_2',
        16 => 'field_highlights_image_5',
        17 => 'field_highlights_title_5',
        18 => 'field_highlights_description_5',
        19 => 'field_highlights_image_3',
        20 => 'field_highlights_title_3',
        21 => 'field_highlights_description_3',
        22 => 'field_highlights_image_6',
        23 => 'field_highlights_title_6',
        24 => 'field_highlights_description_6',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'group_item_1' => 'ds_content',
      'group_item_2' => 'ds_content',
      'field_highlights_image_1_weight_' => 'ds_content',
      'field_highlights_image_4' => 'ds_content',
      'group_item_3' => 'ds_content',
      'field_highlights_title_1' => 'ds_content',
      'field_highlights_title_4' => 'ds_content',
      'field_highlights_description_1' => 'ds_content',
      'group_item_4' => 'ds_content',
      'field_highlights_description_4' => 'ds_content',
      'group_item_5' => 'ds_content',
      'group_item_6' => 'ds_content',
      'field_highlights_image_2' => 'ds_content',
      'field_highlights_title_2' => 'ds_content',
      'field_highlights_description_2' => 'ds_content',
      'field_highlights_image_5' => 'ds_content',
      'field_highlights_title_5' => 'ds_content',
      'field_highlights_description_5' => 'ds_content',
      'field_highlights_image_3' => 'ds_content',
      'field_highlights_title_3' => 'ds_content',
      'field_highlights_description_3' => 'ds_content',
      'field_highlights_image_6' => 'ds_content',
      'field_highlights_title_6' => 'ds_content',
      'field_highlights_description_6' => 'ds_content',
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
  $export['bean|highlights|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'bean|highlights|form';
  $ds_layout->entity_type = 'bean';
  $ds_layout->bundle = 'highlights';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'label',
        1 => 'title',
        2 => 'view_mode',
        3 => 'revision',
        4 => 'field_highlights_image_1_weight_',
        5 => 'field_highlights_title_1',
        6 => 'field_highlights_description_1',
        7 => 'field_highlights_image_2',
        8 => 'field_highlights_title_2',
        9 => 'field_highlights_description_2',
        10 => 'field_highlights_image_3',
        11 => 'field_highlights_title_3',
        12 => 'field_highlights_description_3',
        13 => 'field_highlights_image_4',
        14 => 'field_highlights_title_4',
        15 => 'field_highlights_description_4',
        16 => 'field_highlights_image_5',
        17 => 'field_highlights_title_5',
        18 => 'field_highlights_description_5',
        19 => 'field_highlights_image_6',
        20 => 'field_highlights_title_6',
        21 => 'field_highlights_description_6',
      ),
    ),
    'fields' => array(
      'label' => 'ds_content',
      'title' => 'ds_content',
      'view_mode' => 'ds_content',
      'revision' => 'ds_content',
      'field_highlights_image_1_weight_' => 'ds_content',
      'field_highlights_title_1' => 'ds_content',
      'field_highlights_description_1' => 'ds_content',
      'field_highlights_image_2' => 'ds_content',
      'field_highlights_title_2' => 'ds_content',
      'field_highlights_description_2' => 'ds_content',
      'field_highlights_image_3' => 'ds_content',
      'field_highlights_title_3' => 'ds_content',
      'field_highlights_description_3' => 'ds_content',
      'field_highlights_image_4' => 'ds_content',
      'field_highlights_title_4' => 'ds_content',
      'field_highlights_description_4' => 'ds_content',
      'field_highlights_image_5' => 'ds_content',
      'field_highlights_title_5' => 'ds_content',
      'field_highlights_description_5' => 'ds_content',
      'field_highlights_image_6' => 'ds_content',
      'field_highlights_title_6' => 'ds_content',
      'field_highlights_description_6' => 'ds_content',
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
  $export['bean|highlights|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|focus_highlights_home|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'focus_highlights_home';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_highlights_image',
        1 => 'field_title_link',
        2 => 'field_highlights_description',
      ),
    ),
    'fields' => array(
      'field_highlights_image' => 'ds_content',
      'field_title_link' => 'ds_content',
      'field_highlights_description' => 'ds_content',
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
  $export['node|focus_highlights_home|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|focus_highlights_home|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'focus_highlights_home';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title_field',
        1 => 'field_highlights_image',
        2 => 'field_title_link',
        3 => 'field_type_of_professional',
        4 => 'field_highlights_description',
        6 => 'workbench_access',
        7 => 'path',
        8 => 'metatags',
      ),
      'hidden' => array(
        5 => 'body',
        9 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title_field' => 'ds_content',
      'field_highlights_image' => 'ds_content',
      'field_title_link' => 'ds_content',
      'field_type_of_professional' => 'ds_content',
      'field_highlights_description' => 'ds_content',
      'body' => 'hidden',
      'workbench_access' => 'ds_content',
      'path' => 'ds_content',
      'metatags' => 'ds_content',
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
  $export['node|focus_highlights_home|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|focus_highlights_home|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'focus_highlights_home';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_highlights_image',
        1 => 'field_title_link',
        2 => 'field_highlights_description',
      ),
    ),
    'fields' => array(
      'field_highlights_image' => 'ds_content',
      'field_title_link' => 'ds_content',
      'field_highlights_description' => 'ds_content',
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
  $export['node|focus_highlights_home|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|search';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'search';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title_field',
        1 => 'field_ne_body',
      ),
    ),
    'fields' => array(
      'title_field' => 'ds_content',
      'field_ne_body' => 'ds_content',
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
  $export['node|page|search'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function focus_homepage_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'search';
  $ds_view_mode->label = 'Search';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['search'] = $ds_view_mode;

  return $export;
}
