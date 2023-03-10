[Variables]
BeginX=16
BeginY=253

[MeterTitle]
Meter=String
MeterStyle=FontStyle_General | MeterTitleStyle
Text=#T.Start#

[MeterBorder]
Meter=Shape
Shape=Rectangle (#Spacing#*#Scale#),(240*#Scale#),((#SkinW#*64-#Spacing#*2)*#Scale#),(1*#Scale#),0,0 | Fill Color #ThemeColor_BarBorder# | Stroke Color 0,0,0,0
DynamicVariables=1

[MeterImage1]
Meter=Image
ImageName=#@#Bitmap\Title.png
X=(26*#Scale#)
Y=(80*#Scale#)
H=(121*#Scale#)
W=(192*#Scale#)
DynamicVariables=1
PreserveAspectRatio=1

[MeterText1]
Meter=String
Text=#S.Widgets_Settings.1#
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
Text=#S.Widgets_Settings.2#
X=0r
Y=((32*#Scale#))r
W=(360*#Scale#)
ClipString=2
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(12*#Scale#)
DynamicVariables=1
AntiAlias=1

[MeterBackButtonZone]
Meter=Shape
MeterStyle=MeterBackButtonZoneStyle
LeftMouseUpAction=[!SetOption MeterBackButton ImageTint "#FontColor_General#"][!WriteKeyValue Variables Page Start "#ROOTCONFIGPATH#Extras\Welcome\10x13.ini"][!Refresh]

[MeterBackButton]
Meter=Image
MeterStyle=MeterBackButtonStyle

[MeterBackButtonZone]
Meter=Shape
MeterStyle=MeterBackButtonZoneStyle

[MeterBackButtonSelected]
Meter=Shape
MeterStyle=MeterBackButtonSelectedStyle