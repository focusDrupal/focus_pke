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
        'repository' => 'repository',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-library---header-image-and-descr' => array(
          'module' => 'bean',
          'delta' => 'library---header-image-and-descr',
          'region' => 'content',
          'weight' => '-10',
        ),
        'bean-library---header-upload-block' => array(
          'module' => 'bean',
          'delta' => 'library---header-upload-block',
          'region' => 'content',
          'weight' => '-8',
        ),
        'views--exp-search_repository-page' => array(
          'module' => 'views',
          'delta' => '-exp-search_repository-page',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Pages');
  $export['focus_library'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'search_repository';
  $context->description = '';
  $context->tag = 'search';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'search-repository' => 'search-repository',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-search_repository-page' => array(
          'module' => 'views',
          'delta' => '-exp-search_repository-page',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('search');
  $export['search_repository'] = $context;

  return $export;
}
