[Variables]
Grade=1
DisplayPage=6/9
TextFix=0
HideImage=1
HideCntnt=0
HidePrvsB=0
HideNextB=0

[MeterOption1]
Meter=Shape
MeterStyle=MeterOptionStyle | MeterOptionDownStart
MouseOverAction=[!ShowMeter MeterOptionHover1][!Redraw]
MouseLeaveAction=[!HideMeter MeterOptionHover1][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables SubPage 101 "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!Refresh]

[MeterOptionHover1]
Meter=Shape
MeterStyle=MeterOptionHoverStyle | MeterOptionDownStart

[MeterText1]
Meter=String
Text=#T.Reference#: #Help.100_Title# - #Help.101_Title#
MeterStyle=FontStyle_General | FontStyle_Custom1 | FontStyle_CustomDownStart

[MeterSmallIcon1]
Meter=Image
MeterStyle=MeterSmallIconStyle | MeterSmallIconDownStart

@include=#@#Settings_Panels\Panels\HelpCenter_Global.inc