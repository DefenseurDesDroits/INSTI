<?php
/**
 * @file
 * ddd_configuration_cron.default_elysia_cron_rules.inc
 */

/**
 * Implements hook_default_elysia_cron_rules().
 */
function ddd_configuration_cron_default_elysia_cron_rules() {
  $cron_rules = array();

  $cron_rule = new stdClass;
  $cron_rule->disabled = FALSE; /* Edit this to true to make a default cron_rule disabled initially */
  $cron_rule->api_version = 1;
  $cron_rule->name = 'decision_import_cron';
  $cron_rule->disable = NULL;
  $cron_rule->rule = '30 0 * * *';
  $cron_rule->weight = NULL;
  $cron_rule->context = NULL;
  $cron_rules['decision_import_cron'] = $cron_rule;

  $cron_rule = new stdClass;
  $cron_rule->disabled = FALSE; /* Edit this to true to make a default cron_rule disabled initially */
  $cron_rule->api_version = 1;
  $cron_rule->name = 'delegate_import_cron';
  $cron_rule->disable = NULL;
  $cron_rule->rule = '30 1 * * *';
  $cron_rule->weight = NULL;
  $cron_rule->context = NULL;
  $cron_rules['delegate_import_cron'] = $cron_rule;

  return $cron_rules;

}
