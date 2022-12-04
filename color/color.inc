<?php
$info = [
  // Available colors and color labels used in theme.
  'fields' => [
    'primary' => t('Primary Color'),
    'primary_text' => t('Primary Text'),
    'secondary' => t('Secondary Color'),
    'secondary_text' => t('Secondary Text'),
    'text' => t('Text Color'),
    'background' => t('Background Color')
  ],
  // Pre-defined color schemes.
  'schemes' => [
    'default' => [
      'title' => t('Default'),
      'colors' => [
         'primary' => '#0E0F0F',
         'primary_text' => '#ffffff',
         'secondary' => '#292c2e',
         'secondary_text' => '#ffffff',
         'text' => '#3b3b3b',
         'background' => '#ffffff'
      ],
    ]
  ]
];
// CSS files (excluding @import) to rewrite with new color scheme.
$info['css'] = ['css/colors.css'];