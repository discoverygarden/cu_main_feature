<?php
/**
 * @file
 * saas_solr_fields_configuration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function saas_solr_fields_configuration_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_islandora_solr_fields_features_default_fields().
 */
function saas_solr_fields_configuration_islandora_solr_fields_features_default_fields() {
  return array(
  0 => array(
    'solr_field' => 'dc.title',
    'field_type' => 'result_fields',
    'weight' => -10,
    'solr_field_settings' => array(
      'label' => '<none>',
      'snippet' => NULL,
      'date_format' => '',
      'truncation_type' => 'separate_value_option',
      'maximum_length' => 0,
      'add_ellipsis' => FALSE,
      'wordsafe' => FALSE,
      'wordsafe_length' => 1,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
      'link_to_object' => TRUE,
      'link_to_search' => FALSE,
    ),
  ),
  1 => array(
    'solr_field' => 'dc.description',
    'field_type' => 'result_fields',
    'weight' => -9,
    'solr_field_settings' => array(
      'label' => '<none>',
      'snippet' => NULL,
      'date_format' => '',
      'truncation_type' => 'whole_field_option',
      'maximum_length' => 150,
      'add_ellipsis' => FALSE,
      'wordsafe' => FALSE,
      'wordsafe_length' => 1,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  2 => array(
    'solr_field' => 'mods_subject_topic_ss',
    'field_type' => 'result_fields',
    'weight' => -8,
    'solr_field_settings' => array(
      'label' => 'Topics',
      'snippet' => NULL,
      'date_format' => '',
      'truncation_type' => 'separate_value_option',
      'maximum_length' => 0,
      'add_ellipsis' => FALSE,
      'wordsafe' => FALSE,
      'wordsafe_length' => 1,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  3 => array(
    'solr_field' => 'fgs_createdDate_dt',
    'field_type' => 'result_fields',
    'weight' => -7,
    'solr_field_settings' => array(
      'label' => 'Created Date',
      'snippet' => NULL,
      'date_format' => '',
      'truncation_type' => 'separate_value_option',
      'maximum_length' => 0,
      'add_ellipsis' => FALSE,
      'wordsafe' => FALSE,
      'wordsafe_length' => 1,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
  4 => array(
    'solr_field' => 'dc.title',
    'field_type' => 'search_fields',
    'weight' => 0,
    'solr_field_settings' => array(
      'label' => 'Title',
      'permissions' => FALSE,
    ),
  ),
  5 => array(
    'solr_field' => 'fgs_createdDate_dt',
    'field_type' => 'sort_fields',
    'weight' => 0,
    'solr_field_settings' => array(
      'label' => 'Created Date',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  6 => array(
    'solr_field' => 'fgs_createdDate_dt',
    'field_type' => 'facet_fields',
    'weight' => 0,
    'solr_field_settings' => array(
      'label' => 'Created date',
      'sort_by' => 'count',
      'date_facet_format' => 'Y',
      'range_facet_select' => 1,
      'range_facet_start' => 'NOW/YEAR-20YEARS',
      'range_facet_end' => 'NOW',
      'range_facet_gap' => '+1YEAR',
      'range_facet_slider_enabled' => 1,
      'range_facet_slider_color' => '#504B5D',
      'date_filter_datepicker_enabled' => 1,
      'date_filter_datepicker_range' => '-100:+3',
      'pid_object_label' => 1,
      'range_facet_variable_gap' => NULL,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  7 => array(
    'solr_field' => 'fgs_label_ss',
    'field_type' => 'sort_fields',
    'weight' => 1,
    'solr_field_settings' => array(
      'label' => 'Label',
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  8 => array(
    'solr_field' => 'RELS_EXT_isMemberOfCollection_uri_mt',
    'field_type' => 'facet_fields',
    'weight' => 1,
    'solr_field_settings' => array(
      'label' => 'Is Member Of',
      'sort_by' => 'count',
      'pid_object_label' => 1,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  9 => array(
    'solr_field' => 'mods_typeOfResource_mt',
    'field_type' => 'facet_fields',
    'weight' => 2,
    'solr_field_settings' => array(
      'label' => 'Resource Type',
      'sort_by' => 'count',
      'pid_object_label' => 1,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
    ),
  ),
  10 => array(
    'solr_field' => 'RELS_EXT_isMemberOfCollection_uri_ss',
    'field_type' => 'result_fields',
    'weight' => 4,
    'solr_field_settings' => array(
      'label' => 'Library/Archive',
      'snippet' => NULL,
      'date_format' => '',
      'truncation_type' => 'separate_value_option',
      'maximum_length' => 0,
      'add_ellipsis' => FALSE,
      'wordsafe' => FALSE,
      'wordsafe_length' => 1,
      'permissions' => array(
        1 => 1,
        2 => 2,
        3 => 3,
      ),
      'link_to_object' => FALSE,
      'link_to_search' => FALSE,
    ),
  ),
);
}
