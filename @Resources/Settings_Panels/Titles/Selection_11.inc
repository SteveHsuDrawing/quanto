[Variables]
Fix=0
BeginX=384
BeginY=253

[MeterTitle]
Meter=String
Text=#OT.GlobalSettings#
MeterStyle=FontStyle_Title
DynamicVariables=1

[MeterImage1]
Meter=Image
ImageName=#@#Bitmap\Title (#Language#).png
X=(#BeginX#*#Scale#)
Y=(112*#Scale#)
H=(121*#Scale#)
W=(192*#Scale#)
DynamicVariables=1
PreserveAspectRatio=1

[MeterText1]
Meter=String
Text=#ProjectName#
X=((224*#Scale#))r
Y=0r
FontFace=#FontFace_General#
StringStyle=Bold
FontColor=#FontColor_General#
FontSize=(16*#Scale#)
DynamicVariables=1
AntiAlias=1

[MeterText2]
Meter=String
Text=#T.Welcome#
X=0r
Y=((32*#Scale#))r
W=(360*#Scale#)
ClipString=2
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(12*#Scale#)
DynamicVariables=1
AntiAlias=1