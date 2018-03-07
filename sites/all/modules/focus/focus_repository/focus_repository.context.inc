<?php
/**
 * @file
 * focus_repository.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function focus_repository_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'repository';
  $context->description = 'Repository of good practices';
  $context->tag = 'Pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'good-practices' => 'good-practices',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-repository---header-image-and-de' => array(
          'module' => 'bean',
          'delta' => 'repository---header-image-and-de',
          'region' => 'content',
          'weight' => '-7',
        ),
        'views--exp-search_page-page' => array(
          'module' => 'views',
          'delta' => '-exp-search_page-page',
          'region' => 'content',
          'weight' => '-6',
        ),
        'bean-repository---header-upload-block' => array(
          'module' => 'bean',
          'delta' => 'repository---header-upload-block',
          'region' => 'content_bottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Pages');
  t('Repository of good practices');
  $export['repository'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'search_practices';
  $context->description = '';
  $context->tag = 'search';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'search-practices' => 'search-practices',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-search_page-page' => array(
          'module' => 'views',
          'delta' => '-exp-search_page-page',
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
  $export['search_practices'] = $context;

  return $export;
}
