[Variables]
Grade=1
DisplayPage=4/9
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
LeftMouseUpAction=[https://learn.microsoft.com/#languageCode#-#countryCode#/windows-hardware/test/weg/delivering-a-great-startup-and-shutdown-experience]

[MeterOption2]
Meter=Shape
MeterStyle=MeterOptionStyle | Prev
MouseOverAction=[!ShowMeter MeterOptionHover2][!Redraw]
MouseLeaveAction=[!HideMeter MeterOptionHover2][!Redraw]
LeftMouseUpAction=[Perfmon.exe]

[MeterOptionHover1]
Meter=Shape
MeterStyle=MeterOptionHoverStyle | MeterOptionDownStart

[MeterOptionHover2]
Meter=Shape
MeterStyle=MeterOptionHoverStyle | Prev

[MeterText1]
Meter=String
Text=#T.Learn_about# #Help.404_Refer_2.Title#
MeterStyle=FontStyle_General | FontStyle_Custom1 | FontStyle_CustomDownStart

[MeterText2]
Meter=String
Text=#T.Open# #Help.404_Refer_1.Title#
MeterStyle=FontStyle_General | FontStyle_Custom1 | Prev

[MeterSmallIcon1]
Meter=Image
ImageName=#@#Bitmap\Open
MeterStyle=MeterSmallIconStyle | MeterSmallIconDownStart

[MeterSmallIcon2]
Meter=Image
ImageName=#@#Bitmap\Open
MeterStyle=MeterSmallIconStyle | Prev

@include=#@#Settings_Panels\Panels\HelpCenter_Global.inc