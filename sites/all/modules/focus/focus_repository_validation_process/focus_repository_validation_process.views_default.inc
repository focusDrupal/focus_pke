<?php
/**
 * @file
 * focus_repository_validation_process.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function focus_repository_validation_process_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'focus_repository_evaluation_evaluator';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'FOCUS Repository evaluation evaluator';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Invitations';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    7 => '7',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'view_node' => 'view_node',
    'views_bulk_operations' => 'views_bulk_operations',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_node' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['bootstrap_styles'] = array(
    'striped' => 'striped',
    'bordered' => 'bordered',
    'hover' => 'hover',
    'condensed' => 'condensed',
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'pending_invitations';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p class="any_invitation">You don\'t have any pending invitation.</p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_referenced_practice_target_id']['id'] = 'field_referenced_practice_target_id';
  $handler->display->display_options['relationships']['field_referenced_practice_target_id']['table'] = 'field_data_field_referenced_practice';
  $handler->display->display_options['relationships']['field_referenced_practice_target_id']['field'] = 'field_referenced_practice_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_referenced_practice_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'PRACTICE TO EVALUATE';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Date Invitation */
  $handler->display->display_options['fields']['field_date_invitation']['id'] = 'field_date_invitation';
  $handler->display->display_options['fields']['field_date_invitation']['table'] = 'field_data_field_date_invitation';
  $handler->display->display_options['fields']['field_date_invitation']['field'] = 'field_date_invitation';
  $handler->display->display_options['fields']['field_date_invitation']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Evaluation */
  $handler->display->display_options['fields']['field_evaluation']['id'] = 'field_evaluation';
  $handler->display->display_options['fields']['field_evaluation']['table'] = 'field_data_field_evaluation';
  $handler->display->display_options['fields']['field_evaluation']['field'] = 'field_evaluation';
  /* Contextual filter: Content: Evaluator (field_evaluator) */
  $handler->display->display_options['arguments']['field_evaluator_target_id']['id'] = 'field_evaluator_target_id';
  $handler->display->display_options['arguments']['field_evaluator_target_id']['table'] = 'field_data_field_evaluator';
  $handler->display->display_options['arguments']['field_evaluator_target_id']['field'] = 'field_evaluator_target_id';
  $handler->display->display_options['arguments']['field_evaluator_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_evaluator_target_id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_evaluator_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_evaluator_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_evaluator_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'focus_repository_evaluation' => 'focus_repository_evaluation',
    'practice' => 'practice',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Evaluation (field_evaluation) */
  $handler->display->display_options['filters']['field_evaluation_value']['id'] = 'field_evaluation_value';
  $handler->display->display_options['filters']['field_evaluation_value']['table'] = 'field_data_field_evaluation';
  $handler->display->display_options['filters']['field_evaluation_value']['field'] = 'field_evaluation_value';
  $handler->display->display_options['filters']['field_evaluation_value']['value'] = array(
    1 => '1',
    -1 => '-1',
    2 => '2',
  );
  $handler->display->display_options['filters']['field_evaluation_value']['group'] = 1;
  /* Filter criterion: Content: Acceptance (field_acceptance) */
  $handler->display->display_options['filters']['field_acceptance_value']['id'] = 'field_acceptance_value';
  $handler->display->display_options['filters']['field_acceptance_value']['table'] = 'field_data_field_acceptance';
  $handler->display->display_options['filters']['field_acceptance_value']['field'] = 'field_acceptance_value';
  $handler->display->display_options['filters']['field_acceptance_value']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['field_acceptance_value']['group'] = 1;
  /* Filter criterion: Workbench Moderation: State */
  $handler->display->display_options['filters']['state']['id'] = 'state';
  $handler->display->display_options['filters']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['filters']['state']['field'] = 'state';
  $handler->display->display_options['filters']['state']['relationship'] = 'field_referenced_practice_target_id';
  $handler->display->display_options['filters']['state']['value'] = array(
    'published' => 'published',
    'archived' => 'archived',
  );

  /* Display: Evaluate practices */
  $handler = $view->new_display('page', 'Evaluate practices', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Evaluate';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_field']['id'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['table'] = 'field_data_title_field';
  $handler->display->display_options['fields']['title_field']['field'] = 'title_field';
  $handler->display->display_options['fields']['title_field']['relationship'] = 'field_referenced_practice_target_id';
  $handler->display->display_options['fields']['title_field']['label'] = 'Practice';
  $handler->display->display_options['fields']['title_field']['link_to_entity'] = 0;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['relationship'] = 'field_referenced_practice_target_id';
  $handler->display->display_options['fields']['view_node']['label'] = 'View Practice';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Invitation';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'rules_component::rules_accept_invitation' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_decline_invitation' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  $handler->display->display_options['path'] = 'evaluate-practices';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Evaluations';
  $handler->display->display_options['menu']['description'] = 'Page to evaluate the practices you have been assigned.';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Invitations */
  $handler = $view->new_display('page', 'Invitations', 'invitations');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<p>Select the practice you want accept or decline</p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_referenced_practice_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Practice';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['relationship'] = 'field_referenced_practice_target_id';
  $handler->display->display_options['fields']['view_node']['label'] = 'View practice';
  $handler->display->display_options['fields']['view_node']['alter']['text'] = '<a href="[view_node]" target="_blank">[title]</a>';
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['target'] = '_blank';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Select Practice';
  $handler->display->display_options['fields']['views_bulk_operations']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'rules_component::rules_accept_invitation' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_decline_invitation' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'focus_repository_evaluation' => 'focus_repository_evaluation',
    'practice' => 'practice',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Evaluation (field_evaluation) */
  $handler->display->display_options['filters']['field_evaluation_value']['id'] = 'field_evaluation_value';
  $handler->display->display_options['filters']['field_evaluation_value']['table'] = 'field_data_field_evaluation';
  $handler->display->display_options['filters']['field_evaluation_value']['field'] = 'field_evaluation_value';
  $handler->display->display_options['filters']['field_evaluation_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_evaluation_value']['group'] = 1;
  /* Filter criterion: Content: Acceptance (field_acceptance) */
  $handler->display->display_options['filters']['field_acceptance_value']['id'] = 'field_acceptance_value';
  $handler->display->display_options['filters']['field_acceptance_value']['table'] = 'field_data_field_acceptance';
  $handler->display->display_options['filters']['field_acceptance_value']['field'] = 'field_acceptance_value';
  $handler->display->display_options['filters']['field_acceptance_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_acceptance_value']['group'] = 1;
  $handler->display->display_options['path'] = 'evaluate-practices/invitations';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Invitations';
  $handler->display->display_options['menu']['description'] = 'Manage your invitations';
  $handler->display->display_options['menu']['weight'] = '1';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Invitations';
  $handler->display->display_options['tab_options']['description'] = 'Manage your invitations';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Pending evaluations */
  $handler = $view->new_display('page', 'Pending evaluations', 'pending_evaluations');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Pending evaluations';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'pending_invitations';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p class="any_practice">You don\'t have any pending practice to evaluate.</p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_referenced_practice_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'PRACTICE TO EVALUATE';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Date Invitation */
  $handler->display->display_options['fields']['field_date_invitation']['id'] = 'field_date_invitation';
  $handler->display->display_options['fields']['field_date_invitation']['table'] = 'field_data_field_date_invitation';
  $handler->display->display_options['fields']['field_date_invitation']['field'] = 'field_date_invitation';
  $handler->display->display_options['fields']['field_date_invitation']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Evaluation */
  $handler->display->display_options['fields']['field_evaluation']['id'] = 'field_evaluation';
  $handler->display->display_options['fields']['field_evaluation']['table'] = 'field_data_field_evaluation';
  $handler->display->display_options['fields']['field_evaluation']['field'] = 'field_evaluation';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'OPTIONS';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = 'Evaluate';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'focus_repository_evaluation' => 'focus_repository_evaluation',
    'practice' => 'practice',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Evaluation (field_evaluation) */
  $handler->display->display_options['filters']['field_evaluation_value']['id'] = 'field_evaluation_value';
  $handler->display->display_options['filters']['field_evaluation_value']['table'] = 'field_data_field_evaluation';
  $handler->display->display_options['filters']['field_evaluation_value']['field'] = 'field_evaluation_value';
  $handler->display->display_options['filters']['field_evaluation_value']['value'] = array(
    0 => '0',
  );
  $handler->display->display_options['filters']['field_evaluation_value']['group'] = 1;
  /* Filter criterion: Content: Acceptance (field_acceptance) */
  $handler->display->display_options['filters']['field_acceptance_value']['id'] = 'field_acceptance_value';
  $handler->display->display_options['filters']['field_acceptance_value']['table'] = 'field_data_field_acceptance';
  $handler->display->display_options['filters']['field_acceptance_value']['field'] = 'field_acceptance_value';
  $handler->display->display_options['filters']['field_acceptance_value']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['field_acceptance_value']['group'] = 1;
  $handler->display->display_options['path'] = 'evaluate-practices/pending-evaluations';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Pending evaluations';
  $handler->display->display_options['menu']['description'] = 'Pending evaluations for the evaluator';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Invitations';
  $handler->display->display_options['tab_options']['description'] = 'Manage your invitations';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Evaluated practices */
  $handler = $view->new_display('page', 'Evaluated practices', 'evaluated_practices');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Evaluated practices';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'pending_invitations';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p class="any_practice">You haven\'t evaluation done.</p>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_referenced_practice_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'PRACTICE TO EVALUATE';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Date Invitation */
  $handler->display->display_options['fields']['field_date_invitation']['id'] = 'field_date_invitation';
  $handler->display->display_options['fields']['field_date_invitation']['table'] = 'field_data_field_date_invitation';
  $handler->display->display_options['fields']['field_date_invitation']['field'] = 'field_date_invitation';
  $handler->display->display_options['fields']['field_date_invitation']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  /* Field: Content: Evaluation */
  $handler->display->display_options['fields']['field_evaluation']['id'] = 'field_evaluation';
  $handler->display->display_options['fields']['field_evaluation']['table'] = 'field_data_field_evaluation';
  $handler->display->display_options['fields']['field_evaluation']['field'] = 'field_evaluation';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['relationship'] = 'field_referenced_practice_target_id';
  $handler->display->display_options['fields']['view_node']['label'] = 'View practice';
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['target'] = '_blank';
  /* Field: Workbench Moderation: State */
  $handler->display->display_options['fields']['state']['id'] = 'state';
  $handler->display->display_options['fields']['state']['table'] = 'workbench_moderation_node_history';
  $handler->display->display_options['fields']['state']['field'] = 'state';
  $handler->display->display_options['fields']['state']['relationship'] = 'field_referenced_practice_target_id';
  $handler->display->display_options['fields']['state']['label'] = 'STATE OF THE PRACTICE';
  $handler->display->display_options['fields']['state']['machine_name'] = 0;
  $handler->display->display_options['path'] = 'evaluate-practices/evaluated-practices';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Evaluated practices';
  $handler->display->display_options['menu']['description'] = 'Evaluated practices for the evaluator';
  $handler->display->display_options['menu']['weight'] = '3';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'tab';
  $handler->display->display_options['tab_options']['title'] = 'Invitations';
  $handler->display->display_options['tab_options']['description'] = 'Manage your invitations';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $export['focus_repository_evaluation_evaluator'] = $view;

  $view = new view();
  $view->name = 'repository_evaluation_candidates';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Repository Evaluation Candidates';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Create content';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_table_plugin_style';
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  /* Field: User: First name */
  $handler->display->display_options['fields']['field_firstname']['id'] = 'field_firstname';
  $handler->display->display_options['fields']['field_firstname']['table'] = 'field_data_field_firstname';
  $handler->display->display_options['fields']['field_firstname']['field'] = 'field_firstname';
  /* Field: User: Last name */
  $handler->display->display_options['fields']['field_lastname']['id'] = 'field_lastname';
  $handler->display->display_options['fields']['field_lastname']['table'] = 'field_data_field_lastname';
  $handler->display->display_options['fields']['field_lastname']['field'] = 'field_lastname';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Create content */
  $handler = $view->new_display('page', 'Create content', 'page');
  $handler->display->display_options['path'] = 'admin/config/content/create-content';

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'field_firstname' => 'field_firstname',
    'field_lastname' => 'field_lastname',
    'name' => 'name',
    'uid' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['repository_evaluation_candidates'] = $view;

  return $export;
}
