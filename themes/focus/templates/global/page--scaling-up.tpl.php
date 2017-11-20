<?php
/**
 * @file
 * Ec_resp's theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template normally located in the
 * modules/system folder.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/ec_resp.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 * - $hide_site_name: TRUE if the site name has been toggled off on the theme
 *   settings page. If hidden, the "element-invisible" class is added to make
 *   the site name visually hidden, but still accessible.
 * - $hide_site_slogan: TRUE if the site slogan has been toggled off on the
 *   theme settings page. If hidden, the "element-invisible" class is added to
 *   make the site slogan visually hidden, but still accessible.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 * - $menu_visible: Checking if the main menu is available in the
 *    region featured
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['header_top']: Displayed at the top line of the header
 *    -> language switcher, links, ...
 * - $page['header_right']: Displayed in the right part of the header
 *    -> logo, search box, ...
 * - $page['featured']: Displayed below the header, take full width of screen
 *    -> main menu, global information, ...
 * - $page['tools']: Displayed on top right of content area
 *    -> login/logout buttons, author information, ...
 * - $page['sidebar_left']: Small sidebar displayed on left of the content
 *    -> navigation, pictures, ...
 * - $page['sidebar_right']: Small sidebar displayed on right of the content
 *    -> latest content, calendar, ...
 * - $page['content_top']: Displayed in middle column
 *    -> carousel, important news, ...
 * - $page['help']: Displayed between page title and content
 *    -> information about the page, contextual help, ...
 * - $page['content']: The main content of the current page.
 * - $page['content_right']: Large sidebar displayed on right of the content
 *    -> 2 column layout
 * - $page['content_bottom']: Displayed below the content, in middle column
 *    -> print button, share tools, ...
 * - $page['footer']: Displayed at bottom of the page, on full width
 *    -> latest update, copyright, ...
 *
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see template_process()
 * @see ec_resp_process_page()
 */
?>

  <a id="top-page"></a>

  <div class="container">

    <?php print $regions['tools']; ?>

  </div>

  <header id="layout-header" role="banner">
    <div class="container">
      <div id="main-title"><?php print $site_name; ?></div>
      <div id="sub-title" class="hidden-xs"><?php print $site_slogan; ?></div>
    </div>
  </header><!-- /#layout-header -->

  <div class="region-featured-wrapper">
    <?php if ($menu_visible): ?>
      <div class="mobile-user-bar navbar navbar-default visible-xs" data-spy="affix" data-offset-top="82" role="navigation">
        <div class="container">

          <!-- Brand and toggle get grouped for better mobile display -->
          <div class="navbar-header" data-spy="affix" data-offset-top="165">
            <?php if ($menu_visible): ?>
              <button id="menu-button" type="button" class="navbar-toggle" data-toggle="collapse" data-target=".navbar-ex1-collapse">
                <div class="arrow-down"></div>
              </button>
            <?php endif; ?>

          </div>
        </div><!-- /.container -->
      </div><!-- /.navbar -->
    <?php endif; ?>

    <?php print $regions['featured']; ?>

  </div>
  <main id="layout-body" class="container<?php
  if ($is_front):
    print "-fluid";
  endif; ?>">

    <?php if ($messages): ?>
     <div class="row">
    <div id="messages">
        <?php print $messages; ?>
    </div><!-- /#messages -->
    </div>
    <?php endif; ?>

    <div class="row">
      <?php if ($regions['sidebar_left']): ?>
      <div id="sidebar-left" class="col-md-4 col-sm-<?php print ($cols['sidebar_left']['sm']); ?> col-xs-<?php print ($cols['sidebar_left']['xs']); ?> sidebar-left visible-lg visible-md">
        <?php print $regions['sidebar_left']; ?>
      </div>
      <?php endif; ?>

      <div id="content-wrapper" class="col-md-<?php print $cols['content_main']['md']; ?> col-sm-<?php print $cols['content_main']['sm']; ?> col-md-<?php print $cols['content_main']['xs']; ?>">

        <a id="content"></a>

        <?php if ($title): ?>
        <h1 class="title" id="content-title">
          <?php print $title; ?>
        </h1>
        <?php endif; ?>


        <?php print $regions['content_top']; ?>


        <a id="main-content"></a>

        <?php if ($tabs): ?>
        <div class="tabs">
          <?php print render($tabs); ?>
        </div>
        <?php endif; ?>

        <?php print $regions['help']; ?>

        <?php if ($action_links): ?>
        <ul class="action-links">
          <?php print render($action_links); ?>
        </ul>
        <?php endif; ?>

        <div class="row">
          <div class="col-md-<?php print $cols['content']['md']; ?> col-sm-<?php print $cols['content']['sm']; ?> col-xs-<?php print $cols['content']['xs']; ?>">
          <?php print $regions['content']; ?>
          </div>

          <div class="col-md-<?php print $cols['content_right']['md']; ?> col-sm-<?php print $cols['content_right']['sm']; ?> col-xs-<?php print $cols['content_right']['xs']; ?>">
          <?php print $regions['content_right']; ?>
          </div>
        </div>

        <?php print $feed_icons; ?>

        <?php print $regions['content_bottom']; ?>

      </div>

      <div class="clearfix visible-sm visible-xs"></div>
      <?php if ($cols['sidebar_right']['md'] == 12): ?>
      <div class="clearfix visible-md"></div>
      <?php endif; ?>

      <?php if ($regions['sidebar_right']): ?>
      <div id="sidebar-right" class="col-md-4 col-sm-<?php print ($cols['sidebar_right']['sm']); ?> col-xs-<?php print ($cols['sidebar_right']['xs']); ?> sidebar-right visible-lg visible-md">
        <?php print $regions['sidebar_right']; ?>
      </div>
      <?php endif; ?>

    </div>
  </main><!-- /#layout-body -->

  <footer id="layout-footer" role="contentinfo">

    <?php if (!empty($regions['footer_top'])): ?>
      <div class="container">
        <?php print $regions['footer_top']; ?>
      </div>
    <?php endif; ?>

    <div class="first-row">
      <div class="container">
        <div class="followUsLinks">
          <div class="row">
            <?php if ($eip_tw): ?>
              <div class="col-md-4 col-sm-4"><?php print $eip_tw; ?></div>
            <?php endif; ?>
            <?php if ($eip_yt): ?>
              <div class="col-md-4 col-sm-4"><?php print $eip_yt; ?></div>
            <?php endif; ?>
            <?php if ($eip_gi): ?>
              <div class="col-md-4 col-sm-4"><?php print $eip_gi; ?></div>
            <?php endif; ?>
          </div>
        </div>
      </div>
    </div>
    <div class="container">
      <?php print $regions['footer']; ?>
    </div>
  </footer><!-- /#layout-footer -->
