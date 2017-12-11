<?php
/**
 * @file
 * focus_news.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function focus_news_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|focus_news|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'focus_news';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'author' => array(
      'weight' => '10',
      'label' => 'hidden',
      'format' => 'author',
    ),
    'post_date' => array(
      'weight' => '9',
      'label' => 'hidden',
      'format' => 'ds_post_date_only_day',
    ),
  );
  $export['node|focus_news|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|focus_news|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'focus_news';
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
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'h3',
          'lb-cl' => 'listingLinkHeader',
        ),
      ),
    ),
    'author' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'author',
    ),
    'post_date' => array(
      'weight' => '4',
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
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
          'lb-col' => TRUE,
        ),
      ),
    ),
  );
  $export['node|focus_news|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function focus_news_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|focus_news|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'focus_news';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_focus_news_img_top_ft',
        2 => 'field_focus_news_pub_date',
        3 => 'body',
        4 => 'field_field_tags',
        5 => 'path',
        6 => 'field_focus_news_document',
        7 => 'metatags',
      ),
      'hidden' => array(
        8 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_focus_news_img_top_ft' => 'ds_content',
      'field_focus_news_pub_date' => 'ds_content',
      'body' => 'ds_content',
      'field_field_tags' => 'ds_content',
      'path' => 'ds_content',
      'field_focus_news_document' => 'ds_content',
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
  $export['node|focus_news|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|focus_news|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'focus_news';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_header_news',
        1 => 'group_content_news',
        2 => 'body',
        3 => 'group_footer_news',
        4 => 'field_focus_news_document',
        5 => 'field_field_tags',
        6 => 'field_focus_news_img_top_ft',
        7 => 'title',
        8 => 'group_upload_data',
        9 => 'post_date',
        10 => 'author',
      ),
    ),
    'fields' => array(
      'group_header_news' => 'ds_content',
      'group_content_news' => 'ds_content',
      'body' => 'ds_content',
      'group_footer_news' => 'ds_content',
      'field_focus_news_document' => 'ds_content',
      'field_field_tags' => 'ds_content',
      'field_focus_news_img_top_ft' => 'ds_content',
      'title' => 'ds_content',
      'group_upload_data' => 'ds_content',
      'post_date' => 'ds_content',
      'author' => 'ds_content',
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
    'hide_page_title' => '1',
    'page_option_title' => '',
  );
  $export['node|focus_news|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|focus_news|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'focus_news';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_teaser_header',
        1 => 'field_focus_news_img_top_ft',
        2 => 'group_teaser_content',
        3 => 'title',
        4 => 'group_teaser_body',
        5 => 'body',
        6 => 'post_date',
        7 => 'author',
      ),
    ),
    'fields' => array(
      'group_teaser_header' => 'ds_content',
      'field_focus_news_img_top_ft' => 'ds_content',
      'group_teaser_content' => 'ds_content',
      'title' => 'ds_content',
      'group_teaser_body' => 'ds_content',
      'body' => 'ds_content',
      'post_date' => 'ds_content',
      'author' => 'ds_content',
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
  $export['node|focus_news|teaser'] = $ds_layout;

  return $export;
}
