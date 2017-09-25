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
  $context->name = 'focus_homepage';
  $context->description = 'This is the homepage of Focus';
  $context->tag = 'Focus';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'focus-home' => 'focus-home',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-focus-menu' => array(
          'module' => 'menu',
          'delta' => 'menu-focus-menu',
          'region' => 'content_top',
          'weight' => '-10',
        ),
        'bean-focus-header-homepage-block' => array(
          'module' => 'bean',
          'delta' => 'focus-header-homepage-block',
          'region' => 'content',
          'weight' => '-10',
        ),
        'bean-focus-footer-european-commission' => array(
          'module' => 'bean',
          'delta' => 'focus-footer-european-commission',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Focus');
  t('This is the homepage of Focus');
  $export['focus_homepage'] = $context;

  return $export;
}
