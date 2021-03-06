<?php
/**
 * @file
 * focus_directory_of_professionals.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function focus_directory_of_professionals_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'focus_directory_of_professionals';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Focus directory of professionals';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Directory of professionals';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_name_professional' => 'field_name_professional',
    'field_last_name_professional' => 'field_last_name_professional',
    'field_institution_professional' => 'field_institution_professional',
    'field_expertise_professional' => 'field_expertise_professional',
    'field_email_professional' => 'field_email_professional',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_name_professional' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name_professional' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_institution_professional' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_expertise_professional' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_email_professional' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 0,
    'bordered' => 0,
    'hover' => 0,
    'condensed' => 0,
  );
  /* Field: Content: Name professional */
  $handler->display->display_options['fields']['field_name_professional']['id'] = 'field_name_professional';
  $handler->display->display_options['fields']['field_name_professional']['table'] = 'field_data_field_name_professional';
  $handler->display->display_options['fields']['field_name_professional']['field'] = 'field_name_professional';
  $handler->display->display_options['fields']['field_name_professional']['label'] = 'Name';
  $handler->display->display_options['fields']['field_name_professional']['element_label_colon'] = FALSE;
  /* Field: Content: Last Name professional */
  $handler->display->display_options['fields']['field_last_name_professional']['id'] = 'field_last_name_professional';
  $handler->display->display_options['fields']['field_last_name_professional']['table'] = 'field_data_field_last_name_professional';
  $handler->display->display_options['fields']['field_last_name_professional']['field'] = 'field_last_name_professional';
  $handler->display->display_options['fields']['field_last_name_professional']['label'] = 'Last Name';
  $handler->display->display_options['fields']['field_last_name_professional']['element_label_colon'] = FALSE;
  /* Field: Content: Institution professional */
  $handler->display->display_options['fields']['field_institution_professional']['id'] = 'field_institution_professional';
  $handler->display->display_options['fields']['field_institution_professional']['table'] = 'field_data_field_institution_professional';
  $handler->display->display_options['fields']['field_institution_professional']['field'] = 'field_institution_professional';
  $handler->display->display_options['fields']['field_institution_professional']['label'] = 'Institution';
  $handler->display->display_options['fields']['field_institution_professional']['element_label_colon'] = FALSE;
  /* Field: Content: Expertise professional */
  $handler->display->display_options['fields']['field_expertise_professional']['id'] = 'field_expertise_professional';
  $handler->display->display_options['fields']['field_expertise_professional']['table'] = 'field_data_field_expertise_professional';
  $handler->display->display_options['fields']['field_expertise_professional']['field'] = 'field_expertise_professional';
  $handler->display->display_options['fields']['field_expertise_professional']['label'] = 'Expertise';
  $handler->display->display_options['fields']['field_expertise_professional']['element_label_colon'] = FALSE;
  /* Field: Content: Email professional */
  $handler->display->display_options['fields']['field_email_professional']['id'] = 'field_email_professional';
  $handler->display->display_options['fields']['field_email_professional']['table'] = 'field_data_field_email_professional';
  $handler->display->display_options['fields']['field_email_professional']['field'] = 'field_email_professional';
  $handler->display->display_options['fields']['field_email_professional']['label'] = 'Email';
  $handler->display->display_options['fields']['field_email_professional']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Options';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'focus_directory_of_professionals' => 'focus_directory_of_professionals',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'directory-of-professionals';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Directory of professionals';
  $handler->display->display_options['menu']['description'] = 'All the professionals of the FOCUS project.';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['focus_directory_of_professionals'] = $view;

  return $export;
}
