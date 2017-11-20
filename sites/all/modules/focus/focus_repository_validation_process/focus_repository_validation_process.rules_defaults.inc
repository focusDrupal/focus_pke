<?php
/**
 * @file
 * focus_repository_validation_process.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function focus_repository_validation_process_default_rules_configuration() {
  $items = array();
  $items['rules_accept_invitation'] = entity_import('rules_config', '{ "rules_accept_invitation" : {
      "LABEL" : "Accept Invitation",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "focus_repository_evaluation" : "focus_repository_evaluation" } }
          }
        }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:field-acceptance" ], "value" : "3" } },
        { "data_set" : { "data" : [ "node:field-answer-date" ], "value" : "now" } }
      ]
    }
  }');
  $items['rules_decline_invitation'] = entity_import('rules_config', '{ "rules_decline_invitation" : {
      "LABEL" : "Decline invitation",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "focus_repository_evaluation" : "focus_repository_evaluation" } }
          }
        }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:field-acceptance" ], "value" : "2" } },
        { "data_set" : { "data" : [ "node:field-answer-date" ], "value" : "now" } }
      ]
    }
  }');
  return $items;
}
