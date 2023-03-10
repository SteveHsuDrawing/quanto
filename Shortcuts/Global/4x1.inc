[Variables]
@Include=#ROOTCONFIGPATH#Shortcuts\Global\Global.inc
BeginX=0
BeginY=64
SkinW=4
SkinH=1

[MeterSquareColored]
Meter=Shape
X=(12*#Scale#)
Y=(12*#Scale#)
Shape=Rectangle 0,0,(40*#Scale#),(40*#Scale#),(8*#Arched#*#Scale#),(8*#Arched#*#Scale#) | Fill LinearGradient BackgroundGradient_1 | StrokeWidth 0
BackgroundGradient_1=[#QuickSetting.BackgroundGradientRange.[#QuickSetting_1]] | [#QuickSetting.BackgroundGradientColor_1.[#QuickSetting_1]];0.0 | [#QuickSetting.BackgroundGradientColor_2.[#QuickSetting_1]] ; 1.0
DynamicVariables=1

[MeterSquareZone]
Meter=Shape
X=(12*#Scale#)
Y=(12*#Scale#)
Shape=Rectangle 0,0,(40*#Scale#),(40*#Scale#),(8*#Arched#*#Scale#),(8*#Arched#*#Scale#) | Stroke Color 0,0,0,0  | StrokeWidth 0 | Fill Color 255,255,255
DynamicVariables=1

[MeterIcon]
Meter=Image
ImageName=[#QuickSetting.Icon.[#QuickSetting_1]]
X=(4*#Scale#)
Y=(4*#Scale#)
H=(32*#Scale#)
W=(32*#Scale#)
DynamicVariables=1
;Hidden=[#QuickSetting.HideIcon.2x1.[#QuickSetting_1]]
;ToolTipText=[#QuickSetting.Text.[#QuickSetting_1]]
Container=MeterSquareZone

[MeterImage]
Meter=Image
ImageName=[#QuickSetting.Image_1x1.[#QuickSetting_1]]
H=(40*#Scale#)
W=(40*#Scale#)
DynamicVariables=1
Container=MeterSquareZone

[MeterText]
Meter=String
MeterStyle=FontStyle_General
X=((12*#Scale#))R
Y=((20*#Scale#))r
W=(180*#Scale#)
Text=[#QuickSetting.Text.[#QuickSetting_1]]
FontColor=#FontColor_General#
FontSize=(12*#Scale#)
ClipString=2
StringAlign=LeftCenter
DynamicVariables=1

[MeterSquareSelected]
Meter=Shape
MeterStyle=MeterSquareSelected_General
Hidden=1
DynamicVariables=1

[MeterMovingZone]
Meter=Shape
MeterStyle=MeterMovingZoneStyle

[MeterMovingImage]
Meter=Image
MeterStyle=MeterMovingImageStyle