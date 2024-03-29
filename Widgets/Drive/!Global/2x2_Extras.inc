[JudgeSD]
Measure=String
String=#Drive#:
Substitute="%HOMEDRIVE%":"1"
DynamicVariables=1
UpdateDivider=-1

[JudgeSDCalc]
Measure=Calc
Formula=[JudgeSD]
DynamicVariables=1
UpdateDivider=-1

[Variables]
MOA_0=[!ShowMeter MeterSquareSelected][!HideMeter MeterText][!HideMeter MeterIcon][!ShowMeter MeterTitle][!HideMeter MeterIconExtra2][!Redraw]
MLA_0=[!HideMeter MeterSquareSelected][!ShowMeter MeterText][!ShowMeter MeterIcon][!HideMeter MeterTitle][!ShowMeter MeterIconExtra2][!Redraw]
MOA_1=[!ShowMeter MeterSquareSelected][!HideMeter MeterText][!HideMeter MeterIcon][!ShowMeter MeterTitle][!HideMeter MeterIconExtra1][!Redraw]
MLA_1=[!HideMeter MeterSquareSelected][!ShowMeter MeterText][!ShowMeter MeterIcon][!HideMeter MeterTitle][!ShowMeter MeterIconExtra1][!Redraw]

[MeterSquare]
MouseOverAction=[#MOA_[&JudgeSDCalc]]
MouseLeaveAction=[#MLA_[&JudgeSDCalc]]

[MeterIconExtra1]
Meter=Image
ImageName=#@#Bitmap\Drive C Effect ([mDM])
X=(40*#Scale#)
Y=(40*#Scale#)
H=(48*#Scale#)
W=(48*#Scale#)
ImageTint=#ThemeColor_General#
DynamicVariables=1
Hidden=(1-[JudgeSDCalc])
[MeterIconExtra2]
Meter=String
MeterStyle=FontStyle_General
Text=#Drive#:\
X=(64*#Scale#)
Y=(56*#Scale#)
FontFace=#FontFace_Clock#
FontWeight=300
FontSize=(16*#Scale#)
StringAlign=CenterCenter
Hidden=[JudgeSDCalc]
