<?php

/**
 * @file
 * Defines migrations for the focus homepage data.
 */

/**
 * Implements hook_migrate_api().
 */
function focus_homepage_migrate_api() {
  $api = array(
    'api' => 2,
    'groups' => array(
      'focus_homepage' => array(
        'title' => t('FOCUS homepage migration'),
      ),
    ),
    'migrations' => array(
      'focus_homepage_footer' => array(
        'class_name' => 'FocusHomepageFooterMigration',
        'group_name' => 'focus_homepage',
      ),
    ),
    'migrations' => array(
      'focus_homepage_about' => array(
        'class_name' => 'FocusHomepageAboutMigration',
        'group_name' => 'focus_homepage',
      ),
    ),  
    'migrations' => array(
      'focus_homepage_highlights' => array(
        'class_name' => 'FocusHomepageHighlightsMigration',
        'group_name' => 'focus_homepage',
      ),
    ),
    /*
    'migrations' => array(
      'focus_homepage_slider_top' => array(
        'class_name' => 'FocusHomepageSliderTopMigration',
        'group_name' => 'focus_homepage',
      ),
    ), 
    'migrations' => array(
      'focus_homepage_slider_partners' => array(
        'class_name' => 'FocusHomepageSliderPartnersMigration',
        'group_name' => 'focus_homepage',
      ),
    ),
    */
  );
  return $api;
}
