<?php
  $preface = (empty($content['preface']) ? 'preface-empty' : 'preface');
  $first = (empty($content['first']) ? 'first-empty' : 'first');
  $second = (empty($content['second']) ? 'second-empty' : 'second');
  $third = (empty($content['third']) ? 'third-empty' : 'third');
  $fourth = (empty($content['fourth']) ? 'fourth-empty' : 'fourth');
  $fifth = (empty($content['fifth']) ? 'fifth-empty' : 'fifth');
  $classes = "$preface $first $second $third $fourth $fifth";
?>

<div<?php if (!empty($css_id)): ?> id="<?php print $css_id; ?>"<?php endif; ?> class="l-panels-three-column-two-row <?php print $classes; ?>">
  <?php if (!empty($content['preface'])): ?>
    <div class="l-preface">
      <?php print $content['preface']; ?>
    </div>
  <?php endif; ?>
  <div class="l-first-row">
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
    <?php if (!empty($content['third'])): ?>
      <div class="l-third">
        <?php print $content['third']; ?>
      </div>
    <?php endif; ?>
  </div>
  <div class="l-second-row">
    <?php if (!empty($content['fourth'])): ?>
      <div class="l-fourth">
        <?php print $content['fourth']; ?>
      </div>
    <?php endif; ?>
    <?php if (!empty($content['fifth'])): ?>
      <aside class="l-fifth">
        <?php print $content['fifth']; ?>
      </aside>
    <?php endif; ?>
  </div>
</div>
