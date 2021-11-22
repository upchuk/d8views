<?php

/**
 * Implements hook_views_data_alter().
 */
function d8views_views_data_alter(array &$data) {

  $data['node']['node_type_flagger'] = array(
    'title' => t('Node type flagger'),
    'group' => t('Content'),
    'field' => array(
      'title' => t('Node type flagger'),
      'help' => t('Flags a specific node type.'),
      'id' => 'node_type_flagger',
    ),
  );

  $data['node_field_data']['node_type_filter'] = array(
    'title' => t('Enhanced node type filter'),
    'group' => t('Content'),
    'filter' => array(
      'title' => t('Enhanced node type filter'),
      'help' => t('Provides a custom filter for nodes by their type.'),
      'field' => 'type',
      'id' => 'string'
    ),
  );

  $data['node_field_data']['nodes_titles'] = array(
    'title' => t('Node titles'),
    'group' => t('Content'),
    'filter' => array(
      'title' => t('Node titles'),
      'help' => t('Specify a list of titles a node can have.'),
      'field' => 'title',
      'id' => 'd8views_node_titles'
    ),
  );
}
