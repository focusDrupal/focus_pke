<?php
/**
 * @file
 * focus_library.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function focus_library_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'focus_library';
  $context->description = '';
  $context->tag = 'Pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'library' => 'library',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-library---header-image-and-descr' => array(
          'module' => 'bean',
          'delta' => 'library---header-image-and-descr',
          'region' => 'content_top_left',
          'weight' => '-10',
        ),
        'bean-library---header-upload-block' => array(
          'module' => 'bean',
          'delta' => 'library---header-upload-block',
          'region' => 'content_top_right',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Pages');
  $export['focus_library'] = $context;

  return $export;
}
