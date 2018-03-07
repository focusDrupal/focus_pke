<?php
/**
 * @file
 * focus_directory_of_professionals.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function focus_directory_of_professionals_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'directory_of_professionals';
  $context->description = 'Directory of professionals';
  $context->tag = 'Pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'core-board' => 'core-board',
        'core-board/elder-people' => 'core-board/elder-people',
        'core-board/policy-makers' => 'core-board/policy-makers',
        'core-board/healthcare-professional' => 'core-board/healthcare-professional',
        'core-board/organization' => 'core-board/organization',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-professionals---header-image-and' => array(
          'module' => 'bean',
          'delta' => 'professionals---header-image-and',
          'region' => 'content',
          'weight' => '-10',
        ),
        'bean-image-join-us' => array(
          'module' => 'bean',
          'delta' => 'image-join-us',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
        'bean-professionals---header-upload-bl' => array(
          'module' => 'bean',
          'delta' => 'professionals---header-upload-bl',
          'region' => 'content_bottom',
          'weight' => '-9',
        ),
        'bean-focus-accept-professionals' => array(
          'module' => 'bean',
          'delta' => 'focus-accept-professionals',
          'region' => 'content_bottom',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Directory of professionals');
  t('Pages');
  $export['directory_of_professionals'] = $context;

  return $export;
}
