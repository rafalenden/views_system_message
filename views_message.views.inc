<?php

/**
 * Implementation of hook_views_data()
 */
function views_message_views_data() {
  $data['views']['message'] = array(
    'title' => t('Message'),
    'help' => t('Provide the message in a view.'),
    'area' => array(
      'handler' => 'views_handler_area_message',
    ),
  );

  return $data;
}
