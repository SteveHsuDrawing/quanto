[Variables]
@include=#@#Settings_Panels\Panels\GlobalSettings_Global.inc
GapUnscaled=85
Gap=(#GapUnscaled#*#Scale#)
Gap2=(140*#Scale#)

[MeterOption1]
Meter=Shape
X=(#BeginX#*#Scale#)
Y=(#BeginY#*#Scale#)
MeterStyle=MeterOptionStyle
MouseOverAction=[!ShowMeter MeterOptionSelected1][!Redraw]
MouseLeaveAction=[!HideMeter MeterOptionSelected1][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables SubPage 11 "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!Refresh]

[MeterOption2]
Meter=Shape
MeterStyle=MeterOptionStyle
MouseOverAction=[!ShowMeter MeterOptionSelected2][!Redraw]
MouseLeaveAction=[!HideMeter MeterOptionSelected2][!Redraw]
Hidden=1

[MeterOptionSelected1]
Meter=Shape
X=(#BeginX#*#Scale#)
Y=(#BeginY#*#Scale#)
MeterStyle=MeterOptionSelectedStyle

[MeterOptionSelected2]
Meter=Shape
MeterStyle=MeterOptionSelectedStyle

[MeterIcon1]
Meter=Image
ImageName=#@#Bitmap\Title Icon.png
X=((#BeginX#+24)*#Scale#)
Y=((#BeginY#+28)*#Scale#)
MeterStyle=MeterIconStyle
DynamicVariables=1

[MeterIcon2]
Meter=Image
ImageName=#@#Bitmap\Blur.png
MeterStyle=MeterIconStyle
Hidden=1

[MeterOptionText1]
Meter=String
X=((#BeginX#+68)*#Scale#)
Y=((#BeginY#+40)*#Scale#)
Text=Quanto
MeterStyle=MeterOptionTextStyle

[MeterOptionText2]
Meter=String
Text=#T.Blur_effect#
MeterStyle=MeterOptionTextStyle
Hidden=1

[MeterOption1.Feature1.Display1]
Meter=Image
X=((#BeginX#+574)*#Scale#)
Y=(((#BeginY#+32)+((#GapUnscaled#))*0)*#Scale#)
ImageName=#@#Bitmap\Arrow Right.png
MeterStyle=MeterSmallIconStyle
DynamicVariables=1