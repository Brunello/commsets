<?php
/**
 * Each of the Communication Sets should be defined here. Leave the first
 * example intact as a template.
 */
$commsets = array(
  'EXAMPLE1' => array( // <-- This key is equal to the URL param value.
    'mandatory_articles' => array( // <-- These Articles show in the blue block at the top of the LP and at the top of each Article.
      '3348', // <-- Article Drupal Node ID.
      '3487',
      '3512',
      '3501',
      '3493',
      '3494',
      '3497',
      '3509',
      '2795',
    ),
    'highlighted_article' => '3343', // <-- Highlighted article that appears above other associated articles.
    'associated_aricles' => array( // <-- These articles are displayed at the bottom of the landing page.
      '3435', // <-- Article Drupal Node ID.
      '3459',
    ),
    'sm_links' => array(
      'facebook' => 'http://www.anthem.com/spotlight_facebook',
      'twitter' => 'http://www.anthem.com/spotlight_twitter',
    ),
  ),
  '03293CEMENABSASO' => array(
    'mandatory_articles' => array(
      '123',
      '456',
      '789',
    ),
    'highlighted_article' => '555',
    'associated_aricles' => array(
      '987',
      '654',
      '321',
    ),
    'sm_links' => array(
      'facebook' => 'http://facebook.com/123',
      'twitter' => 'http://twitter.com/123',
    ),
  ),
);
