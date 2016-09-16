<?php
/**
 * @file
 * opl_search_result.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function opl_search_result_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function opl_search_result_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
