<?php
/**
 * @file
 * focus_news.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function focus_news_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news';
  $context->description = 'News context';
  $context->tag = 'Pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'news' => 'news',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'bean-news---header-image-and-descript' => array(
          'module' => 'bean',
          'delta' => 'news---header-image-and-descript',
          'region' => 'content_top_left',
          'weight' => '-10',
        ),
        'bean-news---header-upload-block' => array(
          'module' => 'bean',
          'delta' => 'news---header-upload-block',
          'region' => 'content_top_right',
          'weight' => '-10',
        ),
        'search-form' => array(
          'module' => 'search',
          'delta' => 'form',
          'region' => 'content_top_right',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('News context');
  t('Pages');
  $export['news'] = $context;

  return $export;
}
