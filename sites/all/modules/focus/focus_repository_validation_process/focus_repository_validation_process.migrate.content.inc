<?php

/**
 * @file
 * Eiponaha_repvalidation.migrate.content.inc.
 */

/**
 * Defines a dynamic migration to migrate keywords by name.
 */
class FOCUSRepValidationSubjectArea extends Migration {
  /**
   * Sets the destination ctype.
   */
  private $destinationCtype = 'subject_areas';

  /**
   * Constructs the migration.
   */
  public function __construct($arguments = array()) {
    parent::__construct($arguments);

    $this->team = array(
      new MigrateTeamMember(
                'Javier Sánchez Flores', 'javier.sanchez.flores@everis.com',
                t('Implementor')
      ),
    );

    $this->description = t('Import FOCUS Subject areas contents from CSV file.');

    $this->map = new MigrateSQLMap(
                $this->machineName,
                array(
                  'title' => array(
                    'type' => 'varchar',
                    'length' => 255,
                    'not null' => TRUE,
                  ),
                ), MigrateDestinationNode::getKeySchema()
    );

    $this->path = drupal_get_path('module', 'focus_repository_validation_process') . '/data/subject_areas.csv';

    $this->source = new MigrateSourceCSV(
        $this->path,
        array(),
        array(
          'header_rows' => 1,
          'delimiter' => ',',
          'enclosure' => '"',
          'embedded_newlines' => TRUE,
        )
    );

    // Creates a destination object that receives the data.
    $this->destination = new MigrateDestinationNode($this->destinationCtype);

    $this->addFieldMapping('status')->defaultValue(1);
    $this->addFieldMapping('language')->defaultValue(LANGUAGE_NONE);

    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('field_evaluators_competencies', 'evaluators_competencies')->separator('|');
    $this->addFieldMapping('field_evaluators_competencies:create_term')->defaultValue(FALSE);

    $this->addFieldMapping('pathauto')->defaultValue(0);
    $this->addFieldMapping('uid')->defaultValue(1);

    $this->addUnmigratedDestinations(
        array(
          'uuid',
          'body',
        )
    );
  }

}
