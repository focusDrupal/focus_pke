<?php
/**
 * @file
 * Default theme functions.
 */

/**
* hook_form_FORM_ID_alter
*/
function focus_form_search_block_form_alter(&$form, &$form_state, $form_id) {
  $form['search_block_form']['#title'] = t('Search for innovative practices'); // Change the text on the label element
  $form['search_block_form']['#title_display'] = 'invisible'; // Toggle label visibilty
  $form['search_block_form']['#attributes']['placeholder'] = t('Enter your search...');
  $form['actions']['submit'] = array('#type' => 'image_button', '#src' => base_path() . path_to_theme() . '/images/search-button.png');
} 

/**
 * Implements hook_preprocess_page().
 */
function focus_preprocess_page(&$vars) {

	$status = drupal_get_http_header("status");  
  if($status == "404 Not Found") {      
    $vars['theme_hook_suggestions'][] = 'page__404';
  }

  // Load the JS.
  drupal_add_js('//europa.eu/webtools/load.js', 'external');

  if (module_exists('panels') && $panel_page = page_manager_get_current_page()) {
    $suggestions[] = 'page-panel';
    $suggestions[] = 'page-' . $panel_page['name'];
    $vars['theme_hook_suggestions'] = array_merge($vars['theme_hook_suggestions'], $suggestions);
  }

  $vars['regions']['content_top_left'] = (isset($vars['page']['content_top_left']) ? render($vars['page']['content_top_left']) : '');
  $vars['regions']['content_top_right'] = (isset($vars['page']['content_top_right']) ? render($vars['page']['content_top_right']) : '');
  $vars['regions']['content_bottom_left'] = (isset($vars['page']['content_bottom_left']) ? render($vars['page']['content_bottom_left']) : '');
  $vars['regions']['content_bottom_right'] = (isset($vars['page']['content_bottom_right']) ? render($vars['page']['content_bottom_right']) : '');
  $vars['regions']['footer_top'] = (isset($vars['page']['footer_top']) ? render($vars['page']['footer_top']) : '');

  // Calculate size of regions.
  $vars['cols']['content_top_left'] = array(
    'lg' => (!empty($vars['regions']['content_top_left']) ? 6 : 0),
    'md' => (!empty($vars['regions']['content_top_left']) ? 6 : 0),
    'sm' => (!empty($vars['regions']['content_top_left']) ? 12 : 0),
    'xs' => (!empty($vars['regions']['content_top_left']) ? 12 : 0),
  );

  $vars['cols']['content_top_right'] = array(
    'lg' => (!empty($vars['regions']['content_top_right']) ? 6 : 0),
    'md' => (!empty($vars['regions']['content_top_right']) ? 6 : 0),
    'sm' => (!empty($vars['regions']['content_top_right']) ? 12 : 0),
    'xs' => (!empty($vars['regions']['content_top_right']) ? 12 : 0),
  );

  $vars['cols']['content_bottom_left'] = array(
    'lg' => (!empty($vars['regions']['content_bottom_left']) ? 6 : 0),
    'md' => (!empty($vars['regions']['content_bottom_left']) ? 6 : 0),
    'sm' => (!empty($vars['regions']['content_bottom_left']) ? 12 : 0),
    'xs' => (!empty($vars['regions']['content_bottom_left']) ? 12 : 0),
  );

  $vars['cols']['content_bottom_right'] = array(
    'lg' => (!empty($vars['regions']['content_bottom_right']) ? 6 : 0),
    'md' => (!empty($vars['regions']['content_bottom_right']) ? 6 : 0),
    'sm' => (!empty($vars['regions']['content_bottom_right']) ? 12 : 0),
    'xs' => (!empty($vars['regions']['content_bottom_right']) ? 12 : 0),
  );

  /* Override size of regions (only class col-lg-*). */

  // Format regions.
  $regions = array();
  $regions['sidebar_left'] = (isset($vars['page']['sidebar_left']) ? render($vars['page']['sidebar_left']) : '');
  $regions['sidebar_right'] = (isset($vars['page']['sidebar_right']) ? render($vars['page']['sidebar_right']) : '');

  $eip_cols = array();
  if ($regions['sidebar_left'] && $regions['sidebar_right']) {
    $eip_cols['content_main'] = 4;
  }
  elseif ($regions['sidebar_left'] || $regions['sidebar_right']) {
    $eip_cols['content_main'] = 8;
  }
  else {
    $eip_cols['content_main'] = 12;
  }
  $vars['eip_cols'] = $eip_cols;

  /* Footer elements */

  // Social links.
  $vars['focus_twi'] = l(t('Follow us on Twitter'), 'https://twitter.com/focusonfrailty', array('attributes' => array('class' => array('twitterFollowUs'), 'target' => '_blank')));
  $vars['focus_you'] = l(t('Follow us on Youtube'), 'https://www.youtube.com/user/FOCUS', array('attributes' => array('class' => array('youtubeFollowUs'), 'target' => '_blank')));

  // Service menù.
  $footer_menu = menu_navigation_links("menu-service-tools");

  $menu_el = '';

  $path_login = (module_exists('ecas')) ? url('ecas') : url('user/login');
  $path_logout = (module_exists('ecas')) ? url('ecaslogout') : url('user/logout');

  // Custom error pages.
  $header = drupal_get_http_header("status");
  if ($header == "403 Forbidden") {

    $destination = drupal_get_destination();
    if (!empty($destination)) {
      $destination = array_shift($destination);

      $destination_array = explode('/', $destination);

      $array_first_part = array(
        'content' => 'node',
        'events' => 'events',
        'news article' => 'news',
        'resource' => 'library',
        'project' => 'scaling-up',
        'activity' => 'commitments-tracker',
        'practice' => 'repository',
      );

      // Get the path like news/add.
      if (in_array($destination_array[0], $array_first_part) &&
          ($destination_array[1] == 'add' || $destination_array[1] == 'add_en')
        ) {
        $vars['theme_hook_suggestions'][] = 'page__node_add__403';
        // Get node type.
        $node_type = (isset($destination_array[2]))
                ? node_type_load($destination_array[2])
                : array_search($destination_array[0], $array_first_part);

        if (!empty($node_type->name)) {
          $vars['node_type_403'] = $node_type->name;
        }
        elseif ($node_type != '') {
          $vars['node_type_403'] = $node_type;
        }
        else {
          $vars['node_type_403'] = t('content');
        }
        $vars['title'] = t('Login and profile details required');
      }
    }
  }
}

/**
 * Implements template_preprocess_block().
 */
function focus_preprocess_block(&$vars) {

  /* Welcome message */
  global $user;

  $path_login = (module_exists('ecas')) ? url('ecas') : url('user/login');
  $path_logout = (module_exists('ecas')) ? url('ecaslogout') : url('user/logout');

  $user_fields = user_load($user->uid);
  if (!empty($user_fields->field_firstname[LANGUAGE_NONE][0]['value'])) {
    $first_name = $user_fields->field_firstname[LANGUAGE_NONE][0]['value'];
  }
  else {
    $first_name = "";
  }

  if (!empty($user_fields->field_lastname[LANGUAGE_NONE][0]['value'])) {
    $last_name = $user_fields->field_lastname[LANGUAGE_NONE][0]['value'];
  }
  else {
    $last_name = "";
  }

  if (user_is_logged_in()) {
    $welcome_msg = '<li><span>Welcome ' . $first_name . ' ' . $last_name . '</span></li>';
    $welcome_msg .= '<li><a href="' . url('user') . '">My Profile</a></li>';
    $welcome_msg .= '<li><a href="' . $path_logout . '">Logout</a></li>';
  }
  else {
    $welcome_msg = '<li><a href="' . $path_login . '">Login</a></li>';
  }

  $vars['eip_welcome_msg'] = $welcome_msg;

  /* User Menu */
  $user_menu = menu_navigation_links("menu-service-tools");

  $menu_el = '';
  foreach ($user_menu as $item) {
    $menu_el .= '<li><a href="' . $item['href'] . '">' . $item['title'] . '</a></li>';

  }

  $vars['eip_user_menu'] = $menu_el;
}

/**
 * Implements hook_preprocess_html().
 */
function focus_preprocess_html(&$vars) {
  $vars['fluid'] = 'fluid';

  if (arg(0) == '') {
    $vars['head_title'] = filter_xss(variable_get('site_name')) . ' - ' . t('FOCUS');
  }
}

/**
 * Implements hook_form_alter().
 */
function focus_form_alter(&$form, &$form_state, $form_id) {
  switch ($form_id) {
    case 'search_block_form':
      $form['search_block_form']['#attributes']['placeholder'] = "";
      $form['actions']['submit']['#type'] = 'submit';
      $form['actions']['submit']['#attributes']['class'][] = 'btn btn-default btn-small';
      break;

    case 'apachesolr_search_custom_page_search_form':
    case 'search_form':
      $form['basic']['#attributes']['class'][] = 'input-group';
      $form['basic']['keys']['#title'] = '';
      $form['basic']['keys']['#attributes']['placeholder'] = t('Search');
      $form['basic']['submit']['#type'] = 'image_button';
      $form['basic']['submit']['#src'] = drupal_get_path('theme', 'ec_resp') . '/images/search-button.png';
      $form['basic']['submit']['#attributes']['class'][] = 'btn btn-default btn-small';
      break;

    case 'add_media_form':
      $form['submit']['#attributes']['class'][] = 'btn btn-default';
      break;

    case 'comment_admin_overview':
      $form['options']['submit']['#attributes']['class'][] = 'btn-small';
      $form['comments']['#prefix'] = '<div class="table-responsive">';
      $form['comments']['#suffix'] = '</div>';
      break;

    case 'views_exposed_form':
      if (isset($form['submit'])) {
        $form['submit']['#attributes']['class'][] = 'btn-small';
      }
      break;

    case 'feature_set_admin_form':
      if (isset($form['submit']) && $form['submit']['#type'] == "submit") {
        $form['submit']['#value'] = t('Validate');
        $form['submit']['#attributes']['class'][] = 'btn';
        $form['submit']['#attributes']['class'][] = 'btn-lg';
        $form['submit']['#attributes']['class'][] = 'btn-success';
      }
      break;

    default:
      break;
  }

  $content_types = node_type_get_types();
  foreach ($content_types as $content_type) {
    if ($form_id === $content_type->type . "_node_form") {
      $form['actions']['submit']['#attributes']['class'][] = 'btn btn-default';
      $form['actions']['preview']['#attributes']['class'][] = 'btn btn-default';
    }
  }

}

/**
 * Implements theme_menu_tree__MENU_NAME().
 */
function focus_menu_tree__action_groups_menu($variables) {
  return '<ul class="menu ag-group-list list-group clearfix">' . $variables['tree'] . '</ul>';
}

/**
 * Implements theme_menu_link__MENU_NAME().
 */
function focus_menu_link__action_groups_menu($variables) {
  $element = $variables['element'];
  $sub_menu = '';

  // Test if there is a sub menu.
  if ($element['#below']) {
    // Menu item has sub menu: render sub menu.
    $sub_menu = drupal_render($element['#below']);
  }

  $element['#localized_options']['html'] = TRUE;
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
}

/**
 * Implements theme_tablesort_indicator().
 *
 * Use our own image versions.
 */
function focus_tablesort_indicator($variables) {
  $style = $variables['style'];
  $theme_path = drupal_get_path('theme', 'focus');
  if ($style == 'asc') {
    return theme('image', array(
      'path' => $theme_path . '/images/generals/arrow-down.png',
      'alt' => t('sort ascending'),
      'width' => 15,
      'height' => 15,
      'title' => t('sort ascending'),
    )
      );
  }
  else {
    return theme('image', array(
      'path' => $theme_path . '/images/generals/arrow-up.png',
      'alt' => t('sort descending'),
      'width' => 15,
      'height' => 15,
      'title' => t('sort descending'),
    )
      );
  }
}
