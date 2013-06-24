<?php
/**
 * Each of the Communication Sets should be defined here. Leave the first
 * example intact as a template.
 */
$commsets = array(
  'EXAMPLE1' => array( // <-- This key is equal to the URL param value.
    'mandatory_articles' => array( // <-- These Articles show in the blue block at the top of the LP and at the top of each Article.
      '123', // <-- Article Drupal Node ID.
      '456',
      '789',
    ),
    'associated_aricles' => array( // <-- These articles are displayed at the bottom of the landing page.
      '987', // <-- Article Drupal Node ID.
      '654',
      '321',
    ),
    'sm_links' => array(
      'facebook' => 'http://facebook.com/123',
      'twitter' => 'http://twitter.com/123',
    ),
  ),
  '03293CEMENABSASO' => array(
    'mandatory_articles' => array(
      '3348',
      '3487',
      '3512',
      '3501',
      '3493',
      '3494',
      '3497',
      '3509',
      '2795',
    ),
    'associated_aricles' => array(
      '3343',
      '3459',
      '3435',
    ),
    'sm_links' => array(
      'facebook' => 'http://www.anthem.com/spotlight_facebook',
      'twitter' => 'http://www.anthem.com/spotlight_twitter',
    ),
  ),
);
