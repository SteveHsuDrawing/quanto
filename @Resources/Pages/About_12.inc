[Variables]
@include=#@#Pages\GlobalSettings_Global.inc
Fix=1
BeginX=384
BeginY=108
TitleButtonAction=[!WriteKeyValue Variables SubPage 11 "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"]
TitleButtonImageName=#@#Bitmap\Back Button.png

[iP_BO1]
Meter=Shape
MeterStyle=ZB
Shape=Rectangle 0,0,(605*#Scale#),([Text:H]+(80+30)*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_OptionAlpha#
Shape2=Rectangle 0,0,(605*#Scale#),([Text:H]+(80+30)*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape3=Rectangle (1*#Scale#),(1*#Scale#),((605-2)*#Scale#),([Text:H]+(80+30-2)*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape4=Combine Shape2 | Exclude Shape3
Shape5=Rectangle (1*#Scale#),(80*#Scale#),((605-2)*#Scale#),(1*#Scale#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
DynamicVariables=1
[iP_I01]
Meter=Image
MeterStyle=SIiP|IB
ImageName=#@#Bitmap\Information
[iP_T01]
Meter=String
MeterStyle=MeterOptionTextStyle|WT|TB
Text=#T.Changelog_of_Version##CRLF##S.Widgets_Settings.3#
InlinePattern=#T.Changelog_of_Version##CRLF#
InlinePattern2=#T.Changelog_of_Version##CRLF#
W=(524*#Scale#)

[Text]
Meter=String
MeterStyle=FontStyle_General
Text=#S.Changelog#
X=((#BeginX#+68)*#Scale#)
Y=((#BeginY#+85+10)*#Scale#)
W=(524*#Scale#)
ClipString=2
;FontSize=(10*#Scale#)

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
