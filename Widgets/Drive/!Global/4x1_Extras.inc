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

[MeterIconExtra1]
Meter=Image
ImageName=#@#Bitmap\Drive C Effect ([mDM])
X=(12*#Scale#)
Y=(12*#Scale#)
H=(40*#Scale#)
W=(40*#Scale#)
ImageTint=#ThemeColor_General#
DynamicVariables=1
Hidden=(1-[JudgeSDCalc])
[MeterIconExtra2]
Meter=String
MeterStyle=FontStyle_General
Text=#Drive#:\
X=(30*#Scale#)
Y=(23*#Scale#)
FontFace=#FontFace_Clock#
FontWeight=300
FontSize=(14*#Scale#)
StringAlign=CenterCenter
Hidden=[JudgeSDCalc]
