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
      '3412',
    ),
    'sm_links' => array(
      'facebook' => 'http://www.anthem.com/spotlight_facebook',
      'twitter' => 'http://www.anthem.com/spotlight_twitter',
    ),
  ),
  '03293COMENABSASO' => array(
    'mandatory_articles' => array(
      '4627',
      '4627',
      '4614',
      '4575',
      '4573',
      '4572',
      '4571',
    ),
    'highlighted_article' => '4570',
    'associated_aricles' => array(
      '4569',
      '4568',
      '4567',
      '4566',
      '4580',
    ),
    'sm_links' => array(
      'facebook' => 'http://www.anthem.com/spotlight_facebook',
      'twitter' => 'http://www.anthem.com/spotlight_twitter',
    ),
  ),
);
