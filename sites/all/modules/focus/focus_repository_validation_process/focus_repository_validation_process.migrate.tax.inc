<?php

/**
 * @file
 * focus_repository_validation_process.migrate.tax.inc.
 */

/**
 * Defines a dynamic migration to migrate keywords by id.
 */
class FOCUSRepValidationEvCompetences extends Migration {

  /**
   * Sets the destination vocabulary.
   */
  private $destinationVocabulary = 'evaluators_competencies';

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

    $this->description = t('Import Evaluations Competencies from CSV file.');

    $this->map = new MigrateSQLMap(
        $this->machineName,
        array(
          'term' => array(
            'type' => 'varchar',
            'length' => 255,
            'not null' => TRUE,
          ),
        ), MigrateDestinationTerm::getKeySchema()
    );

    $this->path = drupal_get_path('module', 'focus_repository_validation_process') . '/data/evaluators_competencies.csv';

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
    $this->destination = new MigrateDestinationTerm($this->destinationVocabulary);

    // Defines mapped source and destination fields.
    $this->addFieldMapping('name', 'term');

    // Defines unmapped destination fields.
    $this->addUnmigratedDestinations(
        array(
          'path',
          'weight',
          'description',
          'format',
          'parent_name',
        )
    );

  }

}
