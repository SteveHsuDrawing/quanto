[Variables]
Fix=1
BeginX=384
BeginY=108
TitleButtonAction=[!RefreshApp]
TitleButtonImageName=#@#Bitmap\Reload Button.png

[MeterTitle]
Meter=String
Text=#T.Global_Settings#
MeterStyle=FontStyle_Title
DynamicVariables=1

[MeterTitleButtonZone]
Meter=Shape
MeterStyle=MeterTitleButtonZoneStyle

[MeterTitleButton]
Meter=Image
MeterStyle=MeterTitleButtonStyle

[MeterTitleButtonSelected]
Meter=Shape
MeterStyle=MeterTitleButtonSelectedStyle

[MeasureQuote]
Measure=Plugin
Plugin=QuotePlugin
PathName=Tips_#Language#.txt
UpdateDivider=-1

[FontStyle_Custom1]
ClipString=2
StringAlign=LeftBottom
Text=#S.Widgets_Settings.7##CRLF#[MeasureQuote]
InlinePattern=#S.Widgets_Settings.7#
InlineSetting=Weight | 700

[MeterTipperTextShadow]
Meter=String
MeterStyle=FontStyle_General | FontStyle_Custom1
X=(24*#Scale#)
Y=(869*#Scale#)
W=(316*#Scale#)
Solidcolor=#ThemeColor_BarBorderLight#
Padding=(11*#Scale#),(11*#Scale#),(11*#Scale#),(11*#Scale#)

[MeterTipperText]
Meter=String
MeterStyle=FontStyle_General | FontStyle_Custom1
X=((1*#Scale#))r
Y=((-1*#Scale#))r
W=(316*#Scale#)
Solidcolor=#ThemeColor_Option#
Padding=(10*#Scale#),(10*#Scale#),(10*#Scale#),(10*#Scale#)