<?php
/**
 * @file
 * focus_event.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function focus_event_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_fullcalendar:admin/config/user-interface/fullcalendar.
  $menu_links['management_fullcalendar:admin/config/user-interface/fullcalendar'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/user-interface/fullcalendar',
    'router_path' => 'admin/config/user-interface/fullcalendar',
    'link_title' => 'FullCalendar',
    'options' => array(
      'attributes' => array(
        'title' => 'Adjust FullCalendar settings.',
      ),
      'identifier' => 'management_fullcalendar:admin/config/user-interface/fullcalendar',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
    'parent_identifier' => 'management_user-interface:admin/config/user-interface',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('FullCalendar');

  return $menu_links;
}
