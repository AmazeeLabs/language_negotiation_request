<?php

/**
 * @file
 *  Admin callbacks for the language negotiation request module.
 */

/**
 * Form constructor for the negotiation settings.
 */
function langauge_negotiation_request_providers_request_form($form, &$form_state) {
  $form['language_negotiation_request_param'] = array(
    '#title' => t('Request parameter'),
    '#type' => 'textfield',
    '#default_value' => variable_get('language_negotiation_request_param', 'language'),
    '#description' => t('Name of the request parameter used to determine the desired language.'),
  );

  $form_state['redirect'] = 'admin/config/regional/language/configure';

  return system_settings_form($form);
}
