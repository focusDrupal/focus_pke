<?php
/**
 * @file
 * focus_homepage.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function focus_homepage_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'about';
  $context->description = 'About page';
  $context->tag = 'Pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'content/about' => 'content/about',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-more-about-the-project' => array(
          'module' => 'bean',
          'delta' => 'more-about-the-project',
          'region' => 'content',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('About page');
  t('Pages');
  $export['about'] = $context;

  return $export;
}
