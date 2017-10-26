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
            "body" : "\\u003Cdiv style=\\u0022background: rgba(244, 244, 244, 0.54); border-radius: 2px; padding-top: 10px;\\u0022\\u003E\\r\\n\\t\\u003Cdiv class=\\u0022header\\u0022\\u003E\\r\\n\\t\\t\\u003Cdiv style=\\u0022width: 120px; margin: 0 auto;\\u0022\\u003E\\r\\n\\t\\t\\t\\u003Cimg style=\\u0022float:left; margin-right:5px;\\u0022 alt=\\u0022Logo FOCUS\\u0022 src=\\u0022http:\\/\\/94.23.87.115:50080\\/focus\\/platform\\/themes\\/focus\\/images\\/icono_logo_focus.png\\u0022\\u003E\\r\\n\\t\\t\\t\\u003Ch1 style=\\u0022font-size:23px; margin-right: 5px; font-weight: 500;\\u0022\\u003EFOCUS\\u003C\\/h1\\u003E\\r\\n\\t\\t\\u003C\\/div\\u003E\\r\\n\\t\\t\\u003Cdiv style=\\u0022background:#0065A2; padding: 1px 20px; text-align: center;\\u0022\\u003E\\r\\n\\t\\t\\t\\u003Cp style=\\u0022color:#ffffff;\\u0022\\u003Efrailty management optimization through EIP AHA commitments and utilization of stakeholders input\\u003C\\/p\\u003E\\r\\n\\t\\t\\u003C\\/div\\u003E\\r\\n\\t\\t\\u003Cimg style=\\u0022width:100%;\\u0022 alt=\\u0022Header FOCUS\\u0022 src=\\u0022http:\\/\\/94.23.87.115:50080\\/focus\\/platform\\/sites\\/default\\/files\\/slider5.jpg\\u0022\\u003E\\r\\n\\t\\u003C\\/div\\u003E\\r\\n\\t\\u003Cdiv\\u003E\\r\\n\\t\\t\\u003Cp style=\\u0022padding: 20px 0 0 20px;\\u0022\\u003EYour request has been accepted to add [node:field-name-professional] [node:field-last-name-professional] to the list of professionals of FOCUS.\\u003C\\/p\\u003E\\r\\n\\t\\u003C\\/div\\u003E\\r\\n\\t\\u003Cdiv style=\\u0022background:#0065A2; padding: 10px 20px; border-radius: 0 0 2px 2px; display: flex; margin-top: 40px;\\u0022\\u003E\\r\\n\\t\\t\\u003Cdiv style=\\u0022float: left; width: 80%;\\u0022\\u003E\\r\\n\\t\\t\\t\\u003Cp style=\\u0022color:#FFFFFF;\\u0022\\u003E\\u0026copy; FOCUS 2017\\u003C\\/p\\u003E\\r\\n\\t\\t\\u003C\\/div\\u003E\\r\\n\\t\\t\\u003Cdiv style=\\u0022float:left; width:20%; padding-top:7px; color:#FFFFFF;\\u0022\\u003E\\r\\n\\t\\t\\t\\u003Ca href=\\u0022https:\\/\\/twitter.com\\/focusonfrailty\\u0022\\u003E\\u003Cimg style=\\u0022padding-top:-7px;\\u0022 alt=\\u0022Icon twitter\\u0022 src=\\u0022http:\\/\\/94.23.87.115:50080\\/focus\\/platform\\/themes\\/focus\\/images\\/twitter.png\\u0022\\u003E\\u003C\\/a\\u003E\\r\\n\\t\\t\\t\\u003Ca style=\\u0022margin: 5px 0 0 5px; color: #FFFFFF; position:absolute;\\u0022 href=\\u0022https:\\/\\/twitter.com\\/focusonfrailty\\u0022\\u003EFollow us on Twitter\\u003C\\/a\\u003E\\r\\n\\t\\t\\u003C\\/div\\u003E\\r\\n\\t\\u003C\\/div\\u003E\\r\\n\\u003C\\/div\\u003E",
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
            "body" : "\\u003Cdiv style=\\u0022background: rgba(244, 244, 244, 0.54); border-radius: 2px; padding-top: 10px;\\u0022\\u003E\\r\\n\\t\\u003Cdiv class=\\u0022header\\u0022\\u003E\\r\\n\\t\\t\\u003Cdiv style=\\u0022width: 120px; margin: 0 auto;\\u0022\\u003E\\r\\n\\t\\t\\t\\u003Cimg style=\\u0022float:left; margin-right:5px;\\u0022 alt=\\u0022Logo FOCUS\\u0022 src=\\u0022http:\\/\\/94.23.87.115:50080\\/focus\\/platform\\/themes\\/focus\\/images\\/icono_logo_focus.png\\u0022\\u003E\\r\\n\\t\\t\\t\\u003Ch1 style=\\u0022font-size:23px; margin-right: 5px; font-weight: 500;\\u0022\\u003EFOCUS\\u003C\\/h1\\u003E\\r\\n\\t\\t\\u003C\\/div\\u003E\\r\\n\\t\\t\\u003Cdiv style=\\u0022background:#0065A2; padding: 1px 20px; text-align: center;\\u0022\\u003E\\r\\n\\t\\t\\t\\u003Cp style=\\u0022color:#ffffff;\\u0022\\u003Efrailty management optimization through EIP AHA commitments and utilization of stakeholders input\\u003C\\/p\\u003E\\r\\n\\t\\t\\u003C\\/div\\u003E\\r\\n\\t\\t\\u003Cimg style=\\u0022width:100%;\\u0022 alt=\\u0022Header FOCUS\\u0022 src=\\u0022http:\\/\\/94.23.87.115:50080\\/focus\\/platform\\/sites\\/default\\/files\\/slider5.jpg\\u0022\\u003E\\r\\n\\t\\u003C\\/div\\u003E\\r\\n\\t\\u003Cdiv\\u003E\\r\\n\\t\\t\\u003Cp style=\\u0022padding: 20px 0 0 20px;\\u0022\\u003EYour request has been declined to add [node:field-name-professional] [node:field-last-name-professional] to the list of professionals of FOCUS.\\u003C\\/p\\u003E\\r\\n\\t\\u003C\\/div\\u003E\\r\\n\\t\\u003Cdiv style=\\u0022background:#0065A2; padding: 10px 20px; border-radius: 0 0 2px 2px; display: flex; margin-top: 40px;\\u0022\\u003E\\r\\n\\t\\t\\u003Cdiv style=\\u0022float: left; width: 80%;\\u0022\\u003E\\r\\n\\t\\t\\t\\u003Cp style=\\u0022color:#FFFFFF;\\u0022\\u003E\\u0026copy; FOCUS 2017\\u003C\\/p\\u003E\\r\\n\\t\\t\\u003C\\/div\\u003E\\r\\n\\t\\t\\u003Cdiv style=\\u0022float:left; width:20%; padding-top:7px; color:#FFFFFF;\\u0022\\u003E\\r\\n\\t\\t\\t\\u003Ca href=\\u0022https:\\/\\/twitter.com\\/focusonfrailty\\u0022\\u003E\\u003Cimg style=\\u0022padding-top:-7px;\\u0022 alt=\\u0022Icon twitter\\u0022 src=\\u0022http:\\/\\/94.23.87.115:50080\\/focus\\/platform\\/themes\\/focus\\/images\\/twitter.png\\u0022\\u003E\\u003C\\/a\\u003E\\r\\n\\t\\t\\t\\u003Ca style=\\u0022margin: 5px 0 0 5px; color: #FFFFFF; position:absolute;\\u0022 href=\\u0022https:\\/\\/twitter.com\\/focusonfrailty\\u0022\\u003EFollow us on Twitter\\u003C\\/a\\u003E\\r\\n\\t\\t\\u003C\\/div\\u003E\\r\\n\\t\\u003C\\/div\\u003E\\r\\n\\u003C\\/div\\u003E",
            "language" : [ "node:language" ]
          }
        }
      ]
    }
  }');
  return $items;
}
