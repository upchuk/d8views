<?php

/**
 * Implements hook_views_data_alter().
 */
function d8views_views_data_alter(array &$data) {
  $data['node']['node_type_flagger'] = array(
    'title' => t('Node type flagger'),
    'field' => array(
      'title' => t('Node type flagger'),
      'help' => t('Flags a specific node type.'),
      'id' => 'node_type_flagger',
    ),
  );
}