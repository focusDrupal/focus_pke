<?php

/**
 * @file
 * focus_homepage.migrate.footer.inc
 */

/**
 * Class MigrationPromotion.
 */
class FocusHomepageFooterMigration extends Migration {

  /**
   * This is the only parameter to change for this migration.
   */
  private $feature = 'focus_homepage';

  private $bundle = 'focus_footer_european_commission';
  private $entityType = 'bean';

  /**
   * Constructor.
   */
  public function __construct($arguments = array()) {
    parent::__construct($arguments);

    $this->team = array(
      new MigrateTeamMember('Javier Sánchez Flores', 'javier.sanchez.flores@everis.com', t('Implementor')),
    );

    $this->description = t('Import focus homepage footer from CSV file.');

    $this->map = new MigrateSQLMap(
      $this->machineName, array(
        'bid' => array(
          'not null' => TRUE,
          'type' => 'int',
        ),
      ), MigrateDestinationBean::getKeySchema($this->entityType)
    );

    $this->path = drupal_get_path('module', $this->feature) . '/data/footer.csv';

    $this->source = new MigrateSourceCSV(
        $this->path, array(), array(
          'header_rows' => 1,
          'delimiter' => ',',
          'enclosure' => '"',
          'embedded_newlines' => TRUE,
        )
    );

    $this->destination = new MigrateDestinationBean($this->entityType, $this->bundle, array('language' => 'en'));

    // Field mapppings.
    $this->addFieldMapping('type', 'type');

    $this->addFieldMapping('label', 'label');

    $this->addFieldMapping('field_image_european_commission', 'image');

    $this->addFieldMapping('field_european_commission_text', 'text');

  }

}
