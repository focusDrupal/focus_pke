<?php
/**
 * @file
 * focus_request.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function focus_request_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'request';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'bean';
  $view->human_name = 'Request';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'ReQuest';
  $handler->display->display_options['css_class'] = 'pepito';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '1';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Block: ReQuest image */
  $handler->display->display_options['fields']['field_request_image']['id'] = 'field_request_image';
  $handler->display->display_options['fields']['field_request_image']['table'] = 'field_data_field_request_image';
  $handler->display->display_options['fields']['field_request_image']['field'] = 'field_request_image';
  $handler->display->display_options['fields']['field_request_image']['label'] = '';
  $handler->display->display_options['fields']['field_request_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_request_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_request_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Block: ReQuest Title */
  $handler->display->display_options['fields']['field_request_title']['id'] = 'field_request_title';
  $handler->display->display_options['fields']['field_request_title']['table'] = 'field_data_field_request_title';
  $handler->display->display_options['fields']['field_request_title']['field'] = 'field_request_title';
  $handler->display->display_options['fields']['field_request_title']['label'] = '';
  $handler->display->display_options['fields']['field_request_title']['element_label_colon'] = FALSE;
  /* Field: Block: ReQuest description */
  $handler->display->display_options['fields']['field_request_description']['id'] = 'field_request_description';
  $handler->display->display_options['fields']['field_request_description']['table'] = 'field_data_field_request_description';
  $handler->display->display_options['fields']['field_request_description']['field'] = 'field_request_description';
  $handler->display->display_options['fields']['field_request_description']['label'] = '';
  $handler->display->display_options['fields']['field_request_description']['element_label_colon'] = FALSE;
  /* Field: Block: ReQuest link */
  $handler->display->display_options['fields']['field_request_link']['id'] = 'field_request_link';
  $handler->display->display_options['fields']['field_request_link']['table'] = 'field_data_field_request_link';
  $handler->display->display_options['fields']['field_request_link']['field'] = 'field_request_link';
  $handler->display->display_options['fields']['field_request_link']['label'] = '';
  $handler->display->display_options['fields']['field_request_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_request_link']['click_sort_column'] = 'url';
  /* Filter criterion: Block: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'bean';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'request_about' => 'request_about',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'request');
  $handler->display->display_options['path'] = 'request';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'ReQuest';
  $handler->display->display_options['menu']['description'] = 'Request page';
  $handler->display->display_options['menu']['weight'] = '2';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';
  $export['request'] = $view;

  return $export;
}
