<?php

/**
 * @file
 * Defines migrations for the FOCUS common data.
 */

/**
 * Implements hook_migrate_api().
 */
function focus_repository_validation_process_migrate_api() {
  $api = array(
    'api' => 2,
    'groups' => array(
      'focus_repvalidation' => array(
        'title' => t('FOCUS Repository Validation Migration'),
      ),
    ),
    'migrations' => array(
      'focus_repository_validation_process_evcompetences' => array(
        'class_name' => 'FOCUSRepValidationEvCompetences',
        'group_name' => 'focus_repvalidation',
      ),
      'focus_repository_validation_process_subject_area' => array(
        'class_name' => 'FOCUSRepValidationSubjectArea',
        'group_name' => 'focus_repvalidation',
      ),
    ),
  );
  return $api;
}
