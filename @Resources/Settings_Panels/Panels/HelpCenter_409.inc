[Variables]
Grade=1
DisplayPage=9/9
TextFix=0
HideImage=1
HideCntnt=0
HidePrvsB=0
HideNextB=1

[MeterOption1]
Meter=Shape
MeterStyle=MeterOptionStyle | MeterOptionDownStart
MouseOverAction=[!ShowMeter MeterOptionHover1][!Redraw]
MouseLeaveAction=[!HideMeter MeterOptionHover1][!Redraw]
LeftMouseUpAction=[!SetClip "#Help.409_Refer_2.Title#"][!SetOption MeterText1 Text "#T.Copy# #Help.409_Refer_2.Title# (#T.Copied#)"][!Update][!Delay 1000][!SetOption MeterText1 Text "#T.Copy# #Help.409_Refer_2.Title#"][!Update]

[MeterOption2]
Meter=Shape
MeterStyle=MeterOptionStyle | Prev
MouseOverAction=[!ShowMeter MeterOptionHover2][!Redraw]
MouseLeaveAction=[!HideMeter MeterOptionHover2][!Redraw]
LeftMouseUpAction=[Regedit.exe]

[MeterOptionHover1]
Meter=Shape
MeterStyle=MeterOptionHoverStyle | MeterOptionDownStart

[MeterOptionHover2]
Meter=Shape
MeterStyle=MeterOptionHoverStyle | Prev

[MeterText1]
Meter=String
Text=#T.Copy# #Help.409_Refer_2.Title#
MeterStyle=FontStyle_General | FontStyle_Custom1 | FontStyle_CustomDownStart

[MeterText2]
Meter=String
Text=#T.Open# #Help.409_Refer_1.Title#
MeterStyle=FontStyle_General | FontStyle_Custom1 | Prev

[MeterSmallIcon1]
Meter=Image
ImageName=#@#Bitmap\Copy
MeterStyle=MeterSmallIconStyle | MeterSmallIconDownStart

[MeterSmallIcon2]
Meter=Image
ImageName=#@#Bitmap\Open
MeterStyle=MeterSmallIconStyle | Prev

@include=#@#Settings_Panels\Panels\HelpCenter_Global.inc
