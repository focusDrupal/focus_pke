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
      "REQUIRES" : [ "rules", "mimemail" ],
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "focus_directory_of_professionals" : "focus_directory_of_professionals" } }
          }
        }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:field-accept-professional" ], "value" : "1" } },
        { "data_set" : { "data" : [ "node:status" ], "value" : "1" } },
        { "mimemail" : {
            "key" : "AcceptProfessional",
            "to" : "[node:field-email-professional]",
            "from_name" : "[site:name]",
            "from_mail" : "[site:mail]",
            "subject" : "New professional accepted",
            "body" : "\\u003Cdiv\\u003E\\r\\n\\u003Ch1\\u003EEmail de prueba\\u003C\\/h1\\u003E\\r\\n\\u003Cp\\u003ESe ha aceptado el profesional\\u003C\\/p\\u003E\\r\\n\\u003C\\/div\\u003E",
            "language" : [ "node:language" ]
          }
        }
      ]
    }
  }');
  $items['rules_delete_professional'] = entity_import('rules_config', '{ "rules_delete_professional" : {
      "LABEL" : "Delete professional",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "mimemail" ],
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "IF" : [
        { "node_is_of_type" : {
            "node" : [ "node" ],
            "type" : { "value" : { "focus_directory_of_professionals" : "focus_directory_of_professionals" } }
          }
        }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:field-accept-professional" ], "value" : "2" } },
        { "data_set" : { "data" : [ "node:status" ], "value" : "0" } },
        { "mimemail" : {
            "key" : "RejectProfessional",
            "to" : "[node:field-email-professional]",
            "from_name" : "[site:name]",
            "from_mail" : "[site:mail]",
            "subject" : "New professional declined",
            "body" : "\\r\\n\\u003Cdiv\\u003E\\r\\n\\u003Ch1\\u003EEmail de prueba\\u003C\\/h1\\u003E\\r\\n\\u003Cp\\u003ESe ha cancelado el profesional\\u003C\\/p\\u003E\\r\\n\\u003C\\/div\\u003E",
            "language" : [ "node:language" ]
          }
        }
      ]
    }
  }');
  return $items;
}
