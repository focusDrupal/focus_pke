<?php

/**
 * @file
 * Main view template.
 *
 * Variables available:
 * - $classes_array: An array of classes determined in
 *   template_preprocess_views_view(). Default classes are:
 *     .view
 *     .view-[css_name]
 *     .view-id-[view_name]
 *     .view-display-id-[display_name]
 *     .view-dom-id-[dom_id]
 * - $classes: A string version of $classes_array for use in the class attribute
 * - $css_name: A css-safe version of the view name.
 * - $css_class: The user-specified classes names, if any
 * - $header: The view header
 * - $footer: The view footer
 * - $rows: The results of the view query, if any
 * - $empty: The empty text to display if the view is empty
 * - $pager: The pager next/prev links to display, if any
 * - $exposed: Exposed widget form/info to display
 * - $feed_icon: Feed icon to display, if any
 * - $more: A link to view more, if any
 *
 * @ingroup views_templates
 */
?>
<div class="<?php print $classes; ?>">
  <?php print render($title_prefix); ?>
  <?php if ($title): ?>
    <?php print $title; ?>
  <?php endif; ?>
  <?php print render($title_suffix); ?>

  <div class="view-header">
    <div class="row">
      <div class="col-md-12">
        <h2 class="pane-title large-header">Recently submitted projects with scaling up opportunities</h2>
      </div>
    </div>
  </div>

  <?php if ($exposed): ?>
    <div class="view-filters">
      <?php print $exposed; ?>
    </div>
  <?php endif; ?>

  <?php if ($attachment_before): ?>
    <div class="attachment attachment-before">
      <?php print $attachment_before; ?>
    </div>
  <?php endif; ?>

  <?php if ($rows): ?>
    <div class="view-content">
      <?php print $rows; ?>
    </div>
  <?php elseif ($empty): ?>
    <div class="view-empty">
      <?php print $empty; ?>
    </div>
  <?php endif; ?>

  <?php if ($pager): ?>
    <?php print $pager; ?>
  <?php endif; ?>

  <?php if ($attachment_after): ?>
    <div class="attachment attachment-after">
      <?php print $attachment_after; ?>
    </div>
  <?php endif; ?>

  <?php if ($more): ?>
    <?php print $more; ?>
  <?php endif; ?>

  <div class="view-footer">
    <br />
    <h2 class="pane-title large-header">Resources on scaling up innovation</h2>
    <br />
    <h3>Scaling up strategy on AHA</h3>
    <p>A <strong>roadmap</strong> has been set up for <strong>2015</strong> 
      to engage the relevant actors into concrete actions towards the 
      implementation of innovations in practice, be it increase in coverage 
      in the same location or replicability in other locations. 
      <?php print l(t('European Scaling up Strategy in Active and Healthy Ageing (2015)'), "https://ec.europa.eu/research/innovation-union/pdf/active-healthy-ageing/scaling_up_strategy.pdf");?>.
    </p>

    <h3>Digital Single Market</h3>
    <p>It's time to make the EU's single market fit for the digital age – 
      tearing down regulatory walls and moving from 28 national markets to a 
      single one. This could contribute €415 billion per year to our economy 
      and create hundreds of thousands of new jobs.
    </p>
    <p>Commission Priority. <?php print l(t('Digital Single Market: Bringing down barriers to unlock online opportunities'), "http://ec.europa.eu/priorities/digital-single-market/index_en.htm");?>.</p>

    <h3>The Investment Plan</h3>
    <p>The Investment Plan focuses on removing obstacles to investment, 
      providing visibility and technical assistance to investment projects 
      and making smarter use of new and existing financial resources. The Plan
      foresees a smart mobilisation of public and private investments of at 
      least €315 billion over the next three years (2015-2017).
    </p>
    <p>Commission Priority. Jobs, Growth and Investment. Creating jobs and 
      boosting growth – without creating new debt. 
      <?php print l(t('The Investment Plan'), "http://ec.europa.eu/priorities/jobs-growth-investment/plan/index_en.htm");?>. 
    </p>

    <h3>The Silver Economy</h3>
    <p>A key challenge for Europe is its ageing population. It is a major 
      societal challenge (in terms of public budgets, workforce, 
      competitiveness and quality of life) but also a major opportunity for 
      new jobs and growth. The Silver Economy covers new market opportunities 
      arising from public and consumer expenditure related to the rights, 
      needs and demands of the (growing) population over 50.
    </p>
    <p>Innovation Union. 
      <?php print l(t('The Silver Economy'), "http://ec.europa.eu/research/innovation-union/index_en.cfm?section=active-healthy-ageing&pg=silvereconomy");?>.
    </p>

    <h3>Scale AHA</h3>
    <p><em>Support to scaling up of innovations in Active and Healthy Ageing</em>
      (Scale AHA) is an action to support the European Innovation Partnership 
      on Active and Healthy Ageing (EIP on AHA). The objective of this study is 
      to accelerate the scaling-up of innovative approaches and practices in 
      Active and Healthy Ageing by fostering active knowledge exchange among 
      regions through dedicated mentoring activites. <br />
      <?php print l(t('Scale AHA'), "http://www.scale-aha.eu/home/");?>.
    </p>
  </div>

  <?php if ($feed_icon): ?>
    <div class="feed-icon">
      <?php print $feed_icon; ?>
    </div>
  <?php endif; ?>

</div><?php /* class view */ ?>
