<?php
/**
 * @file
 * focus_repository.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function focus_repository_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_all_tutorial|bean|repository_tutorial|default';
  $field_group->group_name = 'group_all_tutorial';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'repository_tutorial';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '+',
    'weight' => '1',
    'children' => array(
      0 => 'group_tutorial1',
      1 => 'group_tutorial2',
      2 => 'group_tutorial3',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '+',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-all-tutorial field-group-accordion',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_all_tutorial|bean|repository_tutorial|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_author|node|practice|full';
  $field_group->group_name = 'group_author';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'practice';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Author',
    'weight' => '1',
    'children' => array(
      0 => 'field_rep_name_contact_person',
      1 => 'field_rep_mail_contact_person',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Author',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-author field-group-div window',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_author|node|practice|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_background|node|practice|form';
  $field_group->group_name = 'group_background';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'practice';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_practice';
  $field_group->data = array(
    'label' => 'Background',
    'weight' => '8',
    'children' => array(
      0 => 'field_rep_url',
      1 => 'field_rep_file_info',
      2 => 'field_rep_stakeholders',
      3 => 'title',
    ),
    'format_type' => 'multipage',
    'format_settings' => array(
      'formatter' => 'no-start',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-background',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_background|node|practice|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_background|node|practice|full';
  $field_group->group_name = 'group_background';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'practice';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Background',
    'weight' => '2',
    'children' => array(
      0 => 'field_rep_url',
      1 => 'field_rep_file_info',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Background',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-background field-group-div window',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_background|node|practice|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content_practice|node|practice|full';
  $field_group->group_name = 'group_content_practice';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'practice';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Summary of the practice',
    'weight' => '0',
    'children' => array(
      0 => 'author',
      1 => 'post_date',
      2 => 'group_medal',
      3 => 'group_tag_icon',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Summary of the practice',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-content-practice field-group-div window_big',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_content_practice|node|practice|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_medal|node|practice|full';
  $field_group->group_name = 'group_medal';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'practice';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_content_practice';
  $field_group->data = array(
    'label' => 'medal',
    'weight' => '3',
    'children' => array(
      0 => 'field_rep_summary',
      1 => 'field_kind_of_practice',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'medal',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-medal field-group-tabs',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_medal|node|practice|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organisation|node|practice|full';
  $field_group->group_name = 'group_organisation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'practice';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Organisation',
    'weight' => '3',
    'children' => array(
      0 => 'field_rep_org_name',
      1 => 'field_rep_org_address',
      2 => 'field_rep_org_type',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Organisation',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-organisation field-group-div window_big',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_organisation|node|practice|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_practice|node|practice|form';
  $field_group->group_name = 'group_practice';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'practice';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Practice',
    'weight' => '0',
    'children' => array(
      0 => 'group_background',
      1 => 'group_start',
      2 => 'group_your_initiative',
      3 => 'group_your_organisation',
    ),
    'format_type' => 'multipage-group',
    'format_settings' => array(
      'label' => 'Practice',
      'instance_settings' => array(
        'classes' => 'group-practice field-group-multipage-group',
        'page_header' => '3',
        'page_counter' => '1',
        'move_button' => '1',
        'move_additional' => '1',
      ),
    ),
  );
  $field_groups['group_practice|node|practice|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_start|node|practice|form';
  $field_group->group_name = 'group_start';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'practice';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_practice';
  $field_group->data = array(
    'label' => '',
    'weight' => '7',
    'children' => array(
      0 => 'field_rep_agree',
      1 => 'field_copyright_rep_owner',
    ),
    'format_type' => 'multipage',
    'format_settings' => array(
      'formatter' => 'no-start',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-start',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_start|node|practice|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tag_icon|node|practice|full';
  $field_group->group_name = 'group_tag_icon';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'practice';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_content_practice';
  $field_group->data = array(
    'label' => 'tag-icon',
    'weight' => '6',
    'children' => array(
      0 => 'field_rep_keywords',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'tag-icon',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-tag-icon field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_tag_icon|node|practice|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tutorial1|bean|repository_tutorial|default';
  $field_group->group_name = 'group_tutorial1';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'repository_tutorial';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_all_tutorial';
  $field_group->data = array(
    'label' => 'Tutorial 1',
    'weight' => '1',
    'children' => array(
      0 => 'field_text_tutorial_1',
      1 => 'field_image_tutorial_1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Tutorial 1',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-tutorial1 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_tutorial1|bean|repository_tutorial|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tutorial2|bean|repository_tutorial|default';
  $field_group->group_name = 'group_tutorial2';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'repository_tutorial';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_all_tutorial';
  $field_group->data = array(
    'label' => 'Tutorial 2',
    'weight' => '2',
    'children' => array(
      0 => 'field_image_tutorial_2',
      1 => 'field_text_tutorial_2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Tutorial 2',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-tutorial2 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_tutorial2|bean|repository_tutorial|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tutorial3|bean|repository_tutorial|default';
  $field_group->group_name = 'group_tutorial3';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'repository_tutorial';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_all_tutorial';
  $field_group->data = array(
    'label' => 'Tutorial 3',
    'weight' => '3',
    'children' => array(
      0 => 'field_image_tutorial_3',
      1 => 'field_text_tutorial_3',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Tutorial 3',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-tutorial3 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_tutorial3|bean|repository_tutorial|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_your_initiative|node|practice|form';
  $field_group->group_name = 'group_your_initiative';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'practice';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_practice';
  $field_group->data = array(
    'label' => 'Your initiative',
    'weight' => '9',
    'children' => array(
      0 => 'field_rep_target_age',
      1 => 'field_rep_summary',
      2 => 'field_rep_keywords',
      3 => 'field_main_subject_area',
    ),
    'format_type' => 'multipage',
    'format_settings' => array(
      'formatter' => 'no-start',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-your-initiative',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_your_initiative|node|practice|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_your_organisation|node|practice|form';
  $field_group->group_name = 'group_your_organisation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'practice';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_practice';
  $field_group->data = array(
    'label' => 'Your organisation',
    'weight' => '10',
    'children' => array(
      0 => 'field_rep_org_name',
      1 => 'field_rep_org_address',
      2 => 'field_rep_org_type',
      3 => 'field_rep_name_contact_person',
      4 => 'field_rep_mail_contact_person',
    ),
    'format_type' => 'multipage',
    'format_settings' => array(
      'formatter' => 'no-start',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-your-organisation',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_your_organisation|node|practice|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('+');
  t('Author');
  t('Background');
  t('Organisation');
  t('Practice');
  t('Summary of the practice');
  t('Tutorial 1');
  t('Tutorial 2');
  t('Tutorial 3');
  t('Your initiative');
  t('Your organisation');
  t('medal');
  t('tag-icon');

  return $field_groups;
}
