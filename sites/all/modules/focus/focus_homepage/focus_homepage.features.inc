<?php
/**
 * @file
 * focus_homepage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function focus_homepage_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function focus_homepage_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function focus_homepage_image_default_styles() {
  $styles = array();

  // Exported image style: highlights.
  $styles['highlights'] = array(
    'label' => 'highlights',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 320,
          'height' => 127,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function focus_homepage_node_info() {
  $items = array(
    'focus_highlights_home' => array(
      'name' => t('FOCUS Highlights home'),
      'base' => 'node_content',
      'description' => t('Highlights for the project.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'focus_partneres_slider' => array(
      'name' => t('FOCUS partners slider'),
      'base' => 'node_content',
      'description' => t('Slider for partners of FOCUS'),
      'has_title' => '1',
      'title_label' => t('FOCUS partneres slider'),
      'help' => '',
    ),
    'focus_top_slider' => array(
      'name' => t('FOCUS Top Slider'),
      'base' => 'node_content',
      'description' => t('FOCUS Slider for the homepage of the project.'),
      'has_title' => '1',
      'title_label' => t('FOCUS Top Slider'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_default_search_api_index().
 */
function focus_homepage_default_search_api_index() {
  $items = array();
  $items['all_search'] = entity_import('search_api_index', '{
    "name" : "All Search",
    "machine_name" : "all_search",
    "description" : null,
    "server" : "database_server",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [ "page", "focus_event", "focus_library", "focus_news", "practice" ] },
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "field_ne_body:value" : { "type" : "text" },
        "search_api_language" : { "type" : "string" },
        "title" : { "type" : "text" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_language_control" : {
          "status" : 0,
          "weight" : "0",
          "settings" : { "lang_field" : "", "languages" : [] }
        },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } }
      },
      "processors" : {
        "search_api_case_ignore" : {
          "status" : 1,
          "weight" : "0",
          "settings" : { "fields" : { "title" : true, "field_ne_body:value" : true } }
        },
        "search_api_html_filter" : {
          "status" : 1,
          "weight" : "10",
          "settings" : {
            "fields" : { "title" : true, "field_ne_body:value" : true },
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_transliteration" : {
          "status" : 1,
          "weight" : "15",
          "settings" : { "fields" : { "title" : true, "field_ne_body:value" : true } }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : { "title" : true, "field_ne_body:value" : true },
            "spaces" : "[^[:alnum:]]",
            "ignorable" : "[\\u0027]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : { "title" : true, "field_ne_body:value" : true },
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_porter_stemmer" : {
          "status" : 1,
          "weight" : "35",
          "settings" : {
            "fields" : { "title" : true, "field_ne_body:value" : true },
            "exceptions" : "texan=texa"
          }
        },
        "search_api_highlighting" : {
          "status" : 1,
          "weight" : "40",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always",
            "highlight_partial" : 0
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "entity_type" : "search_api_index",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function focus_homepage_default_search_api_server() {
  $items = array();
  $items['database_server'] = entity_import('search_api_server', '{
    "name" : "Database server",
    "machine_name" : "database_server",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "1",
      "partial_matches" : 1,
      "indexes" : {
        "practice_search" : {
          "title" : {
            "table" : "search_api_db_practice_search_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_practice_search",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "body:value" : {
            "table" : "search_api_db_practice_search_text",
            "type" : "text",
            "boost" : "1.0"
          }
        },
        "news_search" : {
          "field_field_tags" : {
            "table" : "search_api_db_news_search_field_field_tags",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_news_search",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_ne_body:value" : {
            "table" : "search_api_db_news_search_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_news_search_text",
            "type" : "text",
            "boost" : "1.0"
          }
        },
        "repository_search" : {
          "search_api_language" : {
            "table" : "search_api_db_repository_search",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_focus_library_resource:file" : {
            "table" : "search_api_db_repository_search",
            "column" : "field_focus_library_resource_file",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_focus_library_resource_url:title" : {
            "table" : "search_api_db_repository_search_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_repository_search_text",
            "type" : "text",
            "boost" : "1.0"
          }
        },
        "events_search" : {
          "search_api_language" : {
            "table" : "search_api_db_events_search",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_ne_body:value" : {
            "table" : "search_api_db_events_search_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "title_field" : {
            "table" : "search_api_db_events_search_text",
            "type" : "text",
            "boost" : "1.0"
          }
        },
        "all_search" : {
          "title" : {
            "table" : "search_api_db_all_search_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_all_search",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_ne_body:value" : {
            "table" : "search_api_db_all_search_text",
            "type" : "text",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1",
    "entity_type" : "search_api_server",
    "rdf_mapping" : []
  }');
  return $items;
}
