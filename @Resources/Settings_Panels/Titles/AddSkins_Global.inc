[Variables]
Fix=1
BeginX=384
BeginY=108
GapXUnscaled=60
GapYUnscaled=64
GapX=(#GapXUnscaled#*#Scale#)
GapY=(#GapYUnscaled#*#Scale#)
TitleButtonAction=[!WriteKeyValue Variables SubPage 00 "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!Refresh]
TitleButtonImageName=#@#Bitmap\Back Button.png

[MeterTitle]
Meter=String
Text=#T.Add_Skins# - Quanto
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

[FontStyle_Custom1]
ClipString=2
StringAlign=LeftBottom
Text=#S.Widgets_Settings.14##CRLF##ExtraTip#

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

[MeterText11]
Meter=String
Text=#T.Shortcuts#
X=((#BeginX#+#GapXUnscaled#)*#Scale#)
Y=(#BeginY#+6)*#Scale#
StringAlign=Center
MeterStyle=FontStyle_General
LeftMouseUpAction=[!WriteKeyValue Variables SubPage 11 "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!Refresh]

[MeterText12]
Meter=String
Text=#T.Widgets#
X=((#GapX#*2))r
Y=0r
StringAlign=Center
MeterStyle=FontStyle_General
LeftMouseUpAction=[!WriteKeyValue Variables SubPage 21 "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!Refresh]

[MeterText13]
Meter=String
Text=#T.Extras#
X=((#GapX#*2))r
Y=0r
StringAlign=Center
MeterStyle=FontStyle_General
LeftMouseUpAction=[!WriteKeyValue Variables SubPage 31 "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!Refresh]
