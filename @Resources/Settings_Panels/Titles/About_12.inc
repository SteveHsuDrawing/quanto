[Variables]
Fix=1
BeginX=384
BeginY=108
TitleButtonAction=[!WriteKeyValue Variables SubPage 11 "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"]
TitleButtonImageName=#@#Bitmap\Back Button.png

[MeterTitle]
Meter=String
Text=#T.About# - #T.Changelog#
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