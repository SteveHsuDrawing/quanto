[Variables]
Grade=100
DisplayPage=1/4
TextFix=0
HideImage=1
HideCntnt=1
HidePrvsB=1
HideNextB=0

[MeterOption1]
Meter=Shape
MeterStyle=MeterOptionStyle | MeterOptionStart
MouseOverAction=[!ShowMeter MeterOptionHover1][!Redraw]
MouseLeaveAction=[!HideMeter MeterOptionHover1][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables SubPage 101 "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!Refresh]
[MeterOption2]
Meter=Shape
MeterStyle=MeterOptionStyle | Next
MouseOverAction=[!ShowMeter MeterOptionHover2][!Redraw]
MouseLeaveAction=[!HideMeter MeterOptionHover2][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables SubPage 102 "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!Refresh]
[MeterOption3]
Meter=Shape
MeterStyle=MeterOptionStyle | Next
MouseOverAction=[!ShowMeter MeterOptionHover3][!Redraw]
MouseLeaveAction=[!HideMeter MeterOptionHover3][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables SubPage 103 "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!Refresh]

[MeterOptionHover1]
Meter=Shape
MeterStyle=MeterOptionHoverStyle | MeterOptionStart
[MeterOptionHover2]
Meter=Shape
MeterStyle=MeterOptionHoverStyle | Next
[MeterOptionHover3]
Meter=Shape
MeterStyle=MeterOptionHoverStyle | Next

[MeterText1]
Meter=String
Text=#Help.101_Title#
MeterStyle=FontStyle_General | FontStyle_Custom1 | FontStyle_CustomStart
[MeterText2]
Meter=String
Text=#Help.102_Title#
MeterStyle=FontStyle_General | FontStyle_Custom1 | Next
[MeterText3]
Meter=String
Text=#Help.103_Title#
MeterStyle=FontStyle_General | FontStyle_Custom1 | Next

[MeterSmallIcon1]
Meter=Image
MeterStyle=MeterSmallIconStyle | MeterSmallIconStart
[MeterSmallIcon2]
Meter=Image
MeterStyle=MeterSmallIconStyle | Next
[MeterSmallIcon3]
Meter=Image
MeterStyle=MeterSmallIconStyle | Next

@include=#@#Settings_Panels\Panels\HelpCenter_Global.inc