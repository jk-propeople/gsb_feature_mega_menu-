<?php
/**
 * @file
 * gsb_feature_mega_menu.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gsb_feature_mega_menu_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
