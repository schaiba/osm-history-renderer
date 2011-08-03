<!--
Settings for Mapnik Fonts
Uncomment the unifont entries if you have that font installed
in your mapnik fonts dir, and want to use it as a fallback font.
Mapnik includes this font by default since r1328.
To see the fonts you have installed with Mapnik do:
ls `python -c "import mapnik2; print mapnik2.fontscollectionpath"`
-->

<FontSet name="book-fonts">
  <Font face_name="DejaVu Sans Book" />
  <Font face_name="unifont Medium" />
</FontSet>
<FontSet name="bold-fonts">
  <Font face_name="DejaVu Sans Bold" />
  <Font face_name="unifont Medium" />
</FontSet>
<FontSet name="oblique-fonts">
  <Font face_name="DejaVu Sans Oblique" />
  <Font face_name="unifont Medium" />
</FontSet>