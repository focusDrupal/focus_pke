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
          'region' => 'content',
          'weight' => '-43',
        ),
        'views--exp-search_news_page-page' => array(
          'module' => 'views',
          'delta' => '-exp-search_news_page-page',
          'region' => 'content',
          'weight' => '-10',
        ),
        'bean-news---header-upload-block' => array(
          'module' => 'bean',
          'delta' => 'news---header-upload-block',
          'region' => 'content_bottom',
          'weight' => '-10',
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

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'search_news';
  $context->description = '';
  $context->tag = 'search';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'search-news' => 'search-news',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-search_news_page-page' => array(
          'module' => 'views',
          'delta' => '-exp-search_news_page-page',
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
  $export['search_news'] = $context;

  return $export;
}
