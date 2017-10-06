<?php
/**
 * @file
 * focus_directory_of_professionals.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function focus_directory_of_professionals_default_rules_configuration() {
  $items = array();
  $items['rules_accept_professional'] = entity_import('rules_config', '{ "rules_accept_professional" : {
      "LABEL" : "Accept professional",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "focus_directory_of_professionals" : "focus_directory_of_professionals" } }
          }
        }
      ],
      "DO" : [ { "data_set" : { "data" : [ "node:status" ], "value" : "1" } } ]
    }
  }');
  $items['rules_delete_professional'] = entity_import('rules_config', '{ "rules_delete_professional" : {
      "LABEL" : "Delete professional",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "focus_directory_of_professionals" : "focus_directory_of_professionals" } }
          }
        }
      ],
      "DO" : [ { "data_set" : { "data" : [ "node:status" ], "value" : "0" } } ]
    }
  }');
  return $items;
}
