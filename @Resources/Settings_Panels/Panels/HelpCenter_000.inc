[Variables]
Grade=100
DisplayPage=1/1
TextFix=4
HideImage=0
HideCntnt=0
HidePrvsB=1
HideNextB=1

[MeterOption1]
Meter=Shape
MeterStyle=MeterOptionStyle | MeterOptionStart
MouseOverAction=[!ShowMeter MeterOptionHover1][!Redraw]
MouseLeaveAction=[!HideMeter MeterOptionHover1][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables SubPage 100 "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!Refresh]
[MeterOption2]
Meter=Shape
MeterStyle=MeterOptionStyle | Next
MouseOverAction=[!ShowMeter MeterOptionHover2][!Redraw]
MouseLeaveAction=[!HideMeter MeterOptionHover2][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables SubPage 200 "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!Refresh]
[MeterOption3]
Meter=Shape
MeterStyle=MeterOptionStyle | Next
MouseOverAction=[!ShowMeter MeterOptionHover3][!Redraw]
MouseLeaveAction=[!HideMeter MeterOptionHover3][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables SubPage 300 "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!Refresh]
[MeterOption4]
Meter=Shape
MeterStyle=MeterOptionStyle | Next
MouseOverAction=[!ShowMeter MeterOptionHover4][!Redraw]
MouseLeaveAction=[!HideMeter MeterOptionHover4][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables SubPage 400 "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!Refresh]

[MeterOptionHover1]
Meter=Shape
MeterStyle=MeterOptionHoverStyle | MeterOptionStart
[MeterOptionHover2]
Meter=Shape
MeterStyle=MeterOptionHoverStyle | Next
[MeterOptionHover3]
Meter=Shape
MeterStyle=MeterOptionHoverStyle | Next
[MeterOptionHover4]
Meter=Shape
MeterStyle=MeterOptionHoverStyle | Next

[MeterText1]
Meter=String
Text=#Help.100_Title#
MeterStyle=FontStyle_General | FontStyle_Custom1 | FontStyle_CustomStart
[MeterText2]
Meter=String
Text=#Help.200_Title#
MeterStyle=FontStyle_General | FontStyle_Custom1 | Next
[MeterText3]
Meter=String
Text=#Help.300_Title#
MeterStyle=FontStyle_General | FontStyle_Custom1 | Next
[MeterText4]
Meter=String
Text=#Help.400_Title#
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
[MeterSmallIcon4]
Meter=Image
MeterStyle=MeterSmallIconStyle | Next

@include=#@#Settings_Panels\Panels\HelpCenter_Global.inc