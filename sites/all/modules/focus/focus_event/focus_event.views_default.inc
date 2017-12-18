<?php
/**
 * @file
 * focus_event.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function focus_event_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'focus_events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'FOCUS Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Events';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="row">
  <div class="col-md-12" style="margin-bottom: 30px;">
    <h2 class="pane-title large-header">Upcoming events</h2>
  </div>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="row">
  <div class="col-md-12">
    <h2 class="panel-heading" style="margin-top: -17px; width: 223px;">Upcoming events</h2>
    <p style="font-size: 20px;">There are not upcoming events currently.</p>
  </div>
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Dates (field_focus_event_date) */
  $handler->display->display_options['sorts']['field_focus_event_date_value']['id'] = 'field_focus_event_date_value';
  $handler->display->display_options['sorts']['field_focus_event_date_value']['table'] = 'field_data_field_focus_event_date';
  $handler->display->display_options['sorts']['field_focus_event_date_value']['field'] = 'field_focus_event_date_value';
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
    'focus_event' => 'focus_event',
  );
  /* Filter criterion: Content: Dates (field_focus_event_date) */
  $handler->display->display_options['filters']['field_focus_event_date_value']['id'] = 'field_focus_event_date_value';
  $handler->display->display_options['filters']['field_focus_event_date_value']['table'] = 'field_data_field_focus_event_date';
  $handler->display->display_options['filters']['field_focus_event_date_value']['field'] = 'field_focus_event_date_value';
  $handler->display->display_options['filters']['field_focus_event_date_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_focus_event_date_value']['default_date'] = 'now';
  $handler->display->display_options['filters']['field_focus_event_date_value']['year_range'] = '-0:+3';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'events';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Events';
  $handler->display->display_options['menu']['weight'] = '4';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['focus_events'] = $view;

  $view = new view();
  $view->name = 'ical';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'iCal';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Calendar';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'fullcalendar';
  $handler->display->display_options['style_options']['firstDay'] = '1';
  $handler->display->display_options['style_options']['left'] = 'today prev';
  $handler->display->display_options['style_options']['right'] = 'next';
  $handler->display->display_options['style_options']['fields']['title_field'] = 'field_focus_event_text_calendar';
  $handler->display->display_options['style_options']['fields']['title'] = TRUE;
  $handler->display->display_options['style_options']['fullcalendar_options']['allDaySlot'] = FALSE;
  $handler->display->display_options['style_options']['fullcalendar_options']['disableDragging'] = TRUE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Legend';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '<div id="legend">
<div class="term"><span class="legendColor conference"></span><p>Conference</p></div>
<div class="term"><span class="legendColor congress"></span><p>Congress</p></div>
<div class="term"><span class="legendColor culturalActivity"></span><p>Cultural activity</p></div>
<div class="term"><span class="legendColor meeting"></span><p>Meeting</p></div>
<div class="term"><span class="legendColor seminar"></span><p>Seminar</p></div>
<div class="term"><span class="legendColor videoconference"></span><p>Videoconference</p></div>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  /* Field: Content: Dates */
  $handler->display->display_options['fields']['field_focus_event_date']['id'] = 'field_focus_event_date';
  $handler->display->display_options['fields']['field_focus_event_date']['table'] = 'field_data_field_focus_event_date';
  $handler->display->display_options['fields']['field_focus_event_date']['field'] = 'field_focus_event_date';
  $handler->display->display_options['fields']['field_focus_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_focus_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_focus_event_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 1,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Field: Content: Short name */
  $handler->display->display_options['fields']['field_focus_event_text_calendar']['id'] = 'field_focus_event_text_calendar';
  $handler->display->display_options['fields']['field_focus_event_text_calendar']['table'] = 'field_data_field_focus_event_text_calendar';
  $handler->display->display_options['fields']['field_focus_event_text_calendar']['field'] = 'field_focus_event_text_calendar';
  $handler->display->display_options['fields']['field_focus_event_text_calendar']['label'] = '';
  $handler->display->display_options['fields']['field_focus_event_text_calendar']['element_label_colon'] = FALSE;
  /* Field: Content: Event type */
  $handler->display->display_options['fields']['field_focus_event_type']['id'] = 'field_focus_event_type';
  $handler->display->display_options['fields']['field_focus_event_type']['table'] = 'field_data_field_focus_event_type';
  $handler->display->display_options['fields']['field_focus_event_type']['field'] = 'field_focus_event_type';
  $handler->display->display_options['fields']['field_focus_event_type']['label'] = '';
  $handler->display->display_options['fields']['field_focus_event_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_focus_event_type']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_focus_event_type']['type'] = 'taxonomy_term_reference_plain';
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
    'focus_event' => 'focus_event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['ical'] = $view;

  return $export;
}
