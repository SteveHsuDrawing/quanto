[Variables]
@Include=#ROOTCONFIGPATH#Shortcuts\Global\Global.inc
BeginX=0
BeginY=0
SkinW=2
SkinH=1

[MeterSquareColored]
Meter=Shape
Shape=Rectangle (#Spacing#*#Scale#),(#Spacing#*#Scale#),((#SkinW#*64-#Spacing#*2)*#Scale#),((#SkinH#*64-#Spacing#*2)*#Scale#),(8*#Arched#*#Scale#),(8*#Arched#*#Scale#) | Fill LinearGradient BackgroundGradient_1 | StrokeWidth 0
BackgroundGradient_1=[#QuickSetting.BackgroundGradientRange.[#QuickSetting_1]] | [#QuickSetting.BackgroundGradientColor_1.[#QuickSetting_1]];0.0 | [#QuickSetting.BackgroundGradientColor_2.[#QuickSetting_1]] ; 1.0
DynamicVariables=1

[MeterIcon]
Meter=Image
ImageName=[#QuickSetting.Icon.[#QuickSetting_1]]
X=(42*#Scale#)
Y=(12*#Scale#)
H=(40*#Scale#)
W=(40*#Scale#)
DynamicVariables=1
Hidden=[#QuickSetting.HideIcon.2x1.[#QuickSetting_1]]
ToolTipText=[#QuickSetting.Text.[#QuickSetting_1]]

[MeterSquareZone]
Meter=Shape
Shape=Rectangle (#Spacing#*#Scale#),(#Spacing#*#Scale#),((#SkinW#*64-#Spacing#*2)*#Scale#),((#SkinH#*64-#Spacing#*2)*#Scale#),(8*#Arched#*#Scale#),(8*#Arched#*#Scale#) | Stroke Color 0,0,0,0  | StrokeWidth 0 | Fill Color 255,255,255
DynamicVariables=1

[MeterImage]
Meter=Image
ImageName=[#QuickSetting.Image_2x1.[#QuickSetting_1]]
X=(#Spacing#*#Scale#)
Y=(#Spacing#*#Scale#)
W=((2*64-#Spacing#*2)*#Scale#)
H=((1*64-#Spacing#*2)*#Scale#)
DynamicVariables=1
Container=MeterSquareZone

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