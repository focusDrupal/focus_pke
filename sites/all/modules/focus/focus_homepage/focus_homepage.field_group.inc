<?php
/**
 * @file
 * focus_homepage.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function focus_homepage_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item_1|bean|highlights|default';
  $field_group->group_name = 'group_item_1';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'highlights';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'item_1',
    'weight' => '1',
    'children' => array(
      0 => 'field_highlights_image_1_weight_',
      1 => 'field_highlights_title_1',
      2 => 'field_highlights_description_1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'item_1',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-item-1 field-group-highlights',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_item_1|bean|highlights|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item_2|bean|highlights|default';
  $field_group->group_name = 'group_item_2';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'highlights';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'item_2',
    'weight' => '2',
    'children' => array(
      0 => 'field_highlights_image_2',
      1 => 'field_highlights_title_2',
      2 => 'field_highlights_description_2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'item_2',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-item-2 field-group-highlights',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_item_2|bean|highlights|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item_3|bean|highlights|default';
  $field_group->group_name = 'group_item_3';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'highlights';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'item_3',
    'weight' => '3',
    'children' => array(
      0 => 'field_highlights_image_3',
      1 => 'field_highlights_title_3',
      2 => 'field_highlights_description_3',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'item_3',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-item-3 field-group-highlights',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_item_3|bean|highlights|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item_4|bean|highlights|default';
  $field_group->group_name = 'group_item_4';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'highlights';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'item_4',
    'weight' => '4',
    'children' => array(
      0 => 'field_highlights_image_4',
      1 => 'field_highlights_title_4',
      2 => 'field_highlights_description_4',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'item_4',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-item-4 field-group-highlights',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_item_4|bean|highlights|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item_5|bean|highlights|default';
  $field_group->group_name = 'group_item_5';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'highlights';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'item_5',
    'weight' => '5',
    'children' => array(
      0 => 'field_highlights_image_5',
      1 => 'field_highlights_title_5',
      2 => 'field_highlights_description_5',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'item_5',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-item-5 field-group-highlights',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_item_5|bean|highlights|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_item_6|bean|highlights|default';
  $field_group->group_name = 'group_item_6';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'highlights';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'item_6',
    'weight' => '6',
    'children' => array(
      0 => 'field_highlights_image_6',
      1 => 'field_highlights_title_6',
      2 => 'field_highlights_description_6',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'item_6',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-item-6 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_item_6|bean|highlights|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('item_1');
  t('item_2');
  t('item_3');
  t('item_4');
  t('item_5');
  t('item_6');

  return $field_groups;
}
