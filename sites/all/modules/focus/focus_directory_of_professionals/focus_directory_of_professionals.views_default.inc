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
  $view->human_name = 'FOCUS Directory of professionals';
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
    'title' => 'title',
    'field_last_name_professional' => 'field_last_name_professional',
    'field_country_of_professional' => 'field_country_of_professional',
    'field_expertise_professional' => 'field_expertise_professional',
    'field_institution_professional' => 'field_institution_professional',
    'field_kind_of_professional' => 'field_kind_of_professional',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_last_name_professional' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_country_of_professional' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_expertise_professional' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_institution_professional' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_kind_of_professional' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 0,
    'bordered' => 0,
    'hover' => 0,
    'condensed' => 0,
  );
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<p><i>i</i>You can order the table by any field you want just clicking on the header of the column or searching in the search field.</p>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<h2>You have no contact to accept yet.</h2>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Last name */
  $handler->display->display_options['fields']['field_last_name_professional']['id'] = 'field_last_name_professional';
  $handler->display->display_options['fields']['field_last_name_professional']['table'] = 'field_data_field_last_name_professional';
  $handler->display->display_options['fields']['field_last_name_professional']['field'] = 'field_last_name_professional';
  $handler->display->display_options['fields']['field_last_name_professional']['label'] = 'Last Name';
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_country_of_professional']['id'] = 'field_country_of_professional';
  $handler->display->display_options['fields']['field_country_of_professional']['table'] = 'field_data_field_country_of_professional';
  $handler->display->display_options['fields']['field_country_of_professional']['field'] = 'field_country_of_professional';
  $handler->display->display_options['fields']['field_country_of_professional']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Expertise */
  $handler->display->display_options['fields']['field_expertise_professional']['id'] = 'field_expertise_professional';
  $handler->display->display_options['fields']['field_expertise_professional']['table'] = 'field_data_field_expertise_professional';
  $handler->display->display_options['fields']['field_expertise_professional']['field'] = 'field_expertise_professional';
  /* Field: Content: Institution */
  $handler->display->display_options['fields']['field_institution_professional']['id'] = 'field_institution_professional';
  $handler->display->display_options['fields']['field_institution_professional']['table'] = 'field_data_field_institution_professional';
  $handler->display->display_options['fields']['field_institution_professional']['field'] = 'field_institution_professional';
  /* Field: Content: Kind of stakeholder */
  $handler->display->display_options['fields']['field_kind_of_professional']['id'] = 'field_kind_of_professional';
  $handler->display->display_options['fields']['field_kind_of_professional']['table'] = 'field_data_field_kind_of_professional';
  $handler->display->display_options['fields']['field_kind_of_professional']['field'] = 'field_kind_of_professional';
  $handler->display->display_options['fields']['field_kind_of_professional']['label'] = 'Type of professional';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Select stakeholder';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'rules_component::rules_accept_professional' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_delete_professional' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
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
  /* Filter criterion: Content: Kind of stakeholder (field_kind_of_professional) */
  $handler->display->display_options['filters']['field_kind_of_professional_value']['id'] = 'field_kind_of_professional_value';
  $handler->display->display_options['filters']['field_kind_of_professional_value']['table'] = 'field_data_field_kind_of_professional';
  $handler->display->display_options['filters']['field_kind_of_professional_value']['field'] = 'field_kind_of_professional_value';
  $handler->display->display_options['filters']['field_kind_of_professional_value']['value'] = array(
    0 => '0',
    1 => '1',
    2 => '2',
    3 => '3',
  );
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'word';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Search contact';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
    'field_last_name_professional' => 'field_last_name_professional',
    'field_expertise_professional' => 'field_expertise_professional',
    'field_institution_professional' => 'field_institution_professional',
  );
  /* Filter criterion: Content: Accept professional (field_accept_professional) */
  $handler->display->display_options['filters']['field_accept_professional_value']['id'] = 'field_accept_professional_value';
  $handler->display->display_options['filters']['field_accept_professional_value']['table'] = 'field_data_field_accept_professional';
  $handler->display->display_options['filters']['field_accept_professional_value']['field'] = 'field_accept_professional_value';
  $handler->display->display_options['filters']['field_accept_professional_value']['value'] = array(
    1 => '1',
  );

  /* Display: Core board */
  $handler = $view->new_display('page', 'Core board', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Core board';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '(You can search by: name, last name, expertise or institution)';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Last name */
  $handler->display->display_options['fields']['field_last_name_professional']['id'] = 'field_last_name_professional';
  $handler->display->display_options['fields']['field_last_name_professional']['table'] = 'field_data_field_last_name_professional';
  $handler->display->display_options['fields']['field_last_name_professional']['field'] = 'field_last_name_professional';
  $handler->display->display_options['fields']['field_last_name_professional']['label'] = 'Last Name';
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_country_of_professional']['id'] = 'field_country_of_professional';
  $handler->display->display_options['fields']['field_country_of_professional']['table'] = 'field_data_field_country_of_professional';
  $handler->display->display_options['fields']['field_country_of_professional']['field'] = 'field_country_of_professional';
  $handler->display->display_options['fields']['field_country_of_professional']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Expertise */
  $handler->display->display_options['fields']['field_expertise_professional']['id'] = 'field_expertise_professional';
  $handler->display->display_options['fields']['field_expertise_professional']['table'] = 'field_data_field_expertise_professional';
  $handler->display->display_options['fields']['field_expertise_professional']['field'] = 'field_expertise_professional';
  /* Field: Content: Institution */
  $handler->display->display_options['fields']['field_institution_professional']['id'] = 'field_institution_professional';
  $handler->display->display_options['fields']['field_institution_professional']['table'] = 'field_data_field_institution_professional';
  $handler->display->display_options['fields']['field_institution_professional']['field'] = 'field_institution_professional';
  /* Field: Content: Kind of stakeholder */
  $handler->display->display_options['fields']['field_kind_of_professional']['id'] = 'field_kind_of_professional';
  $handler->display->display_options['fields']['field_kind_of_professional']['table'] = 'field_data_field_kind_of_professional';
  $handler->display->display_options['fields']['field_kind_of_professional']['field'] = 'field_kind_of_professional';
  $handler->display->display_options['fields']['field_kind_of_professional']['label'] = 'Type of professional';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  /* Filter criterion: Content: Kind of stakeholder (field_kind_of_professional) */
  $handler->display->display_options['filters']['field_kind_of_professional_value']['id'] = 'field_kind_of_professional_value';
  $handler->display->display_options['filters']['field_kind_of_professional_value']['table'] = 'field_data_field_kind_of_professional';
  $handler->display->display_options['filters']['field_kind_of_professional_value']['field'] = 'field_kind_of_professional_value';
  $handler->display->display_options['filters']['field_kind_of_professional_value']['value'] = array(
    0 => '0',
    1 => '1',
    2 => '2',
    3 => '3',
  );
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'word';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Search stakeholder';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    3 => 0,
    4 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
    'field_last_name_professional' => 'field_last_name_professional',
    'field_expertise_professional' => 'field_expertise_professional',
    'field_institution_professional' => 'field_institution_professional',
  );
  /* Filter criterion: Content: Accept professional (field_accept_professional) */
  $handler->display->display_options['filters']['field_accept_professional_value']['id'] = 'field_accept_professional_value';
  $handler->display->display_options['filters']['field_accept_professional_value']['table'] = 'field_data_field_accept_professional';
  $handler->display->display_options['filters']['field_accept_professional_value']['field'] = 'field_accept_professional_value';
  $handler->display->display_options['filters']['field_accept_professional_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'core-board';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Core board';
  $handler->display->display_options['menu']['weight'] = '6';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Accept professionals */
  $handler = $view->new_display('page', 'Accept professionals', 'accept_professionals');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Accept stakeholders';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Select stakeholder';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['empty'] = 'There is no stakeholder to accept.';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'rules_component::rules_accept_professional' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_delete_professional' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Last name */
  $handler->display->display_options['fields']['field_last_name_professional']['id'] = 'field_last_name_professional';
  $handler->display->display_options['fields']['field_last_name_professional']['table'] = 'field_data_field_last_name_professional';
  $handler->display->display_options['fields']['field_last_name_professional']['field'] = 'field_last_name_professional';
  $handler->display->display_options['fields']['field_last_name_professional']['label'] = 'Last Name';
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_country_of_professional']['id'] = 'field_country_of_professional';
  $handler->display->display_options['fields']['field_country_of_professional']['table'] = 'field_data_field_country_of_professional';
  $handler->display->display_options['fields']['field_country_of_professional']['field'] = 'field_country_of_professional';
  $handler->display->display_options['fields']['field_country_of_professional']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Expertise */
  $handler->display->display_options['fields']['field_expertise_professional']['id'] = 'field_expertise_professional';
  $handler->display->display_options['fields']['field_expertise_professional']['table'] = 'field_data_field_expertise_professional';
  $handler->display->display_options['fields']['field_expertise_professional']['field'] = 'field_expertise_professional';
  /* Field: Content: Institution */
  $handler->display->display_options['fields']['field_institution_professional']['id'] = 'field_institution_professional';
  $handler->display->display_options['fields']['field_institution_professional']['table'] = 'field_data_field_institution_professional';
  $handler->display->display_options['fields']['field_institution_professional']['field'] = 'field_institution_professional';
  /* Field: Content: Kind of stakeholder */
  $handler->display->display_options['fields']['field_kind_of_professional']['id'] = 'field_kind_of_professional';
  $handler->display->display_options['fields']['field_kind_of_professional']['table'] = 'field_data_field_kind_of_professional';
  $handler->display->display_options['fields']['field_kind_of_professional']['field'] = 'field_kind_of_professional';
  $handler->display->display_options['fields']['field_kind_of_professional']['label'] = 'Type of professional';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'focus_directory_of_professionals' => 'focus_directory_of_professionals',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Accept professional (field_accept_professional) */
  $handler->display->display_options['filters']['field_accept_professional_value']['id'] = 'field_accept_professional_value';
  $handler->display->display_options['filters']['field_accept_professional_value']['table'] = 'field_data_field_accept_professional';
  $handler->display->display_options['filters']['field_accept_professional_value']['field'] = 'field_accept_professional_value';
  $handler->display->display_options['filters']['field_accept_professional_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['path'] = 'new-professional';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Professionals';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['focus_directory_of_professionals'] = $view;

  return $export;
}
