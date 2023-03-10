[Variables]
Grade=100
DisplayPage=4/4
TextFix=0
HideImage=1
HideCntnt=1
HidePrvsB=0
HideNextB=1

[MeterOption1]
Meter=Shape
MeterStyle=MeterOptionStyle | MeterOptionStart
MouseOverAction=[!ShowMeter MeterOptionHover1][!Redraw]
MouseLeaveAction=[!HideMeter MeterOptionHover1][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables SubPage 401 "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!Refresh]
[MeterOption2]
Meter=Shape
MeterStyle=MeterOptionStyle | Next
MouseOverAction=[!ShowMeter MeterOptionHover2][!Redraw]
MouseLeaveAction=[!HideMeter MeterOptionHover2][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables SubPage 402 "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!Refresh]
[MeterOption3]
Meter=Shape
MeterStyle=MeterOptionStyle | Next
MouseOverAction=[!ShowMeter MeterOptionHover3][!Redraw]
MouseLeaveAction=[!HideMeter MeterOptionHover3][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables SubPage 403 "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!Refresh]
[MeterOption4]
Meter=Shape
MeterStyle=MeterOptionStyle | Next
MouseOverAction=[!ShowMeter MeterOptionHover4][!Redraw]
MouseLeaveAction=[!HideMeter MeterOptionHover4][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables SubPage 404 "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!Refresh]
[MeterOption5]
Meter=Shape
MeterStyle=MeterOptionStyle | Next
MouseOverAction=[!ShowMeter MeterOptionHover5][!Redraw]
MouseLeaveAction=[!HideMeter MeterOptionHover5][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables SubPage 405 "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!Refresh]
[MeterOption6]
Meter=Shape
MeterStyle=MeterOptionStyle | Next
MouseOverAction=[!ShowMeter MeterOptionHover6][!Redraw]
MouseLeaveAction=[!HideMeter MeterOptionHover6][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables SubPage 406 "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!Refresh]
[MeterOption7]
Meter=Shape
MeterStyle=MeterOptionStyle | Next
MouseOverAction=[!ShowMeter MeterOptionHover7][!Redraw]
MouseLeaveAction=[!HideMeter MeterOptionHover7][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables SubPage 407 "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!Refresh]
[MeterOption8]
Meter=Shape
MeterStyle=MeterOptionStyle | Next
MouseOverAction=[!ShowMeter MeterOptionHover8][!Redraw]
MouseLeaveAction=[!HideMeter MeterOptionHover8][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables SubPage 408 "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!Refresh]
[MeterOption9]
Meter=Shape
MeterStyle=MeterOptionStyle | Next
MouseOverAction=[!ShowMeter MeterOptionHover9][!Redraw]
MouseLeaveAction=[!HideMeter MeterOptionHover9][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables SubPage 409 "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!Refresh]

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
[MeterOptionHover5]
Meter=Shape
MeterStyle=MeterOptionHoverStyle | Next
[MeterOptionHover6]
Meter=Shape
MeterStyle=MeterOptionHoverStyle | Next
[MeterOptionHover7]
Meter=Shape
MeterStyle=MeterOptionHoverStyle | Next
[MeterOptionHover8]
Meter=Shape
MeterStyle=MeterOptionHoverStyle | Next
[MeterOptionHover9]
Meter=Shape
MeterStyle=MeterOptionHoverStyle | Next

[MeterText1]
Meter=String
Text=#Help.401_Title#
MeterStyle=FontStyle_General | FontStyle_Custom1 | FontStyle_CustomStart
[MeterText2]
Meter=String
Text=#Help.402_Title#
MeterStyle=FontStyle_General | FontStyle_Custom1 | Next
[MeterText3]
Meter=String
Text=#Help.403_Title#
MeterStyle=FontStyle_General | FontStyle_Custom1 | Next
[MeterText4]
Meter=String
Text=#Help.404_Title#
MeterStyle=FontStyle_General | FontStyle_Custom1 | Next
[MeterText5]
Meter=String
Text=#Help.405_Title#
MeterStyle=FontStyle_General | FontStyle_Custom1 | Next
[MeterText6]
Meter=String
Text=#Help.406_Title#
MeterStyle=FontStyle_General | FontStyle_Custom1 | Next
[MeterText7]
Meter=String
Text=#Help.407_Title#
MeterStyle=FontStyle_General | FontStyle_Custom1 | Next
[MeterText8]
Meter=String
Text=#Help.408_Title#
MeterStyle=FontStyle_General | FontStyle_Custom1 | Next
[MeterText9]
Meter=String
Text=#Help.409_Title#
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
[MeterSmallIcon5]
Meter=Image
MeterStyle=MeterSmallIconStyle | Next
[MeterSmallIcon6]
Meter=Image
MeterStyle=MeterSmallIconStyle | Next
[MeterSmallIcon7]
Meter=Image
MeterStyle=MeterSmallIconStyle | Next
[MeterSmallIcon8]
Meter=Image
MeterStyle=MeterSmallIconStyle | Next
[MeterSmallIcon9]
Meter=Image
MeterStyle=MeterSmallIconStyle | Next

@include=#@#Settings_Panels\Panels\HelpCenter_Global.inc