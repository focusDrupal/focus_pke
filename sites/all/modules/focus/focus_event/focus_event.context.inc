<?php
/**
 * @file
 * focus_event.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function focus_event_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'events';
  $context->description = '';
  $context->tag = 'Pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'events' => 'events',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-events---header-image-and-descri' => array(
          'module' => 'bean',
          'delta' => 'events---header-image-and-descri',
          'region' => 'content_top',
          'weight' => '-10',
        ),
        'views-ical-block' => array(
          'module' => 'views',
          'delta' => 'ical-block',
          'region' => 'content_right',
          'weight' => '-10',
        ),
        'bean-events---header-upload-block' => array(
          'module' => 'bean',
          'delta' => 'events---header-upload-block',
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
  $export['events'] = $context;

  return $export;
}
