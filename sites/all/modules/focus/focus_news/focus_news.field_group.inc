<?php
/**
 * @file
 * focus_news.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function focus_news_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content_news|node|focus_news|full';
  $field_group->group_name = 'group_content_news';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'focus_news';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content news',
    'weight' => '1',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Content news',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-content-news field-group-fieldset col-xs-12 col-sm-12 col-md-12',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_content_news|node|focus_news|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_footer_news|node|focus_news|full';
  $field_group->group_name = 'group_footer_news';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'focus_news';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Footer news',
    'weight' => '2',
    'children' => array(
      0 => 'field_field_tags',
      1 => 'field_focus_news_document',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Footer news',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-footer-news field-group-div col-xs-12 col-sm-12 col-md-12',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_footer_news|node|focus_news|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_header_news|node|focus_news|full';
  $field_group->group_name = 'group_header_news';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'focus_news';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Header news',
    'weight' => '0',
    'children' => array(
      0 => 'field_focus_news_img_top_ft',
      1 => 'field_summary',
      2 => 'title',
      3 => 'post_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Header news',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-header-news field-group-div col-xs-12 col-sm-12 col-md-12',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_header_news|node|focus_news|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teaser_content|node|focus_news|teaser';
  $field_group->group_name = 'group_teaser_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'focus_news';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Teaser content',
    'weight' => '3',
    'children' => array(
      0 => 'body',
      1 => 'post_date',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Teaser content',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-teaser-content field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_teaser_content|node|focus_news|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_teaser_header|node|focus_news|teaser';
  $field_group->group_name = 'group_teaser_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'focus_news';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Teaser header',
    'weight' => '0',
    'children' => array(
      0 => 'field_focus_news_img_top_ft',
      1 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Teaser header',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-teaser-header field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_teaser_header|node|focus_news|teaser'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content news');
  t('Footer news');
  t('Header news');
  t('Teaser content');
  t('Teaser header');

  return $field_groups;
}
