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
        'repository' => 'repository',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-repository---header-image-and-de' => array(
          'module' => 'bean',
          'delta' => 'repository---header-image-and-de',
          'region' => 'content_top_left',
          'weight' => '-10',
        ),
        'bean-repository---header-upload-block' => array(
          'module' => 'bean',
          'delta' => 'repository---header-upload-block',
          'region' => 'content_top_right',
          'weight' => '-10',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'content_top_right',
          'weight' => '-9',
        ),
        'bean-repository-tutorial' => array(
          'module' => 'bean',
          'delta' => 'repository-tutorial',
          'region' => 'content',
          'weight' => '-8',
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

  return $export;
}
