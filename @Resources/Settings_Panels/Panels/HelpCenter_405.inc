[Variables]
Grade=1
DisplayPage=5/9
TextFix=0
HideImage=0
HideCntnt=0
HidePrvsB=0
HideNextB=0

[MeterOption1]
Meter=Shape
MeterStyle=MeterOptionStyle | MeterOptionDownStart
MouseOverAction=[!ShowMeter MeterOptionHover1][!Redraw]
MouseLeaveAction=[!HideMeter MeterOptionHover1][!Redraw]
LeftMouseUpAction=[https://www.aida64.com/]

[MeterOptionHover1]
Meter=Shape
MeterStyle=MeterOptionHoverStyle | MeterOptionDownStart

[MeterText1]
Meter=String
Text=#T.Go_to# #Help.405_Refer_1.Title#
MeterStyle=FontStyle_General | FontStyle_Custom1 | FontStyle_CustomDownStart

[MeterSmallIcon1]
Meter=Image
ImageName=#@#Bitmap\Open
MeterStyle=MeterSmallIconStyle | MeterSmallIconDownStart

@include=#@#Settings_Panels\Panels\HelpCenter_Global.inc