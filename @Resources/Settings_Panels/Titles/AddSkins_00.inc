[Variables]
Fix=0
BeginX=384
BeginY=108
TitleButtonAction=[]
TitleButtonImageName=#@#Bitmap\NA
HelpButtonAction=[!WriteKeyValue Variables Page HelpCenter "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!WriteKeyValue Variables SubPage 00 "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!Refresh]

[MeterTitle]
Meter=String
Text=#T.Add_Skins#
MeterStyle=FontStyle_Title
DynamicVariables=1

[MeterTitleButtonZone]
Meter=Shape
MeterStyle=MeterTitleButtonZoneStyle

[MeterTitleButtonSelected]
Meter=Shape
MeterStyle=MeterTitleButtonSelectedStyle