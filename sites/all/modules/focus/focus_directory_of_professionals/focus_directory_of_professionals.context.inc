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
        'directory-of-professionals' => 'directory-of-professionals',
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
        'bean-professionals---header-upload-bl' => array(
          'module' => 'bean',
          'delta' => 'professionals---header-upload-bl',
          'region' => 'content',
          'weight' => '-9',
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
