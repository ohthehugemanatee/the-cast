<?php
  $preface = (empty($content['preface']) ? 'preface-empty' : 'preface');
  $first = (empty($content['first']) ? 'first-empty' : 'first');
  $second = (empty($content['second']) ? 'second-empty' : 'second');
  $classes = "$preface $first $second";
?>

<div<?php if (!empty($css_id)): ?> id="<?php print $css_id; ?>"<?php endif; ?> class="l-panels-two-column <?php print $classes; ?>">
  <?php if (!empty($content['preface'])): ?>
    <div class="l-preface">
      <?php print $content['preface']; ?>
    </div>
  <?php endif; ?>
  <?php if (!empty($content['first'])): ?>
    <div class="l-first">
      <?php print $content['first']; ?>
    </div>
  <?php endif; ?>
  <?php if (!empty($content['second'])): ?>
    <div class="l-second">
      <?php print $content['second']; ?>
    </div>
  <?php endif; ?>
</div>
