[Variables]
@Include=#ROOTCONFIGPATH#Shortcuts\Global\Global.inc
BeginX=0
BeginY=0
SkinW=2
SkinH=2

[MeterSquare]
Meter=Shape
Shape=Rectangle (#Spacing#*#Scale#),(#Spacing#*#Scale#),((#SkinW#*#Scale_Custom#*64-#Spacing#*2)*#Scale#),((#SkinH#*#Scale_Custom#*64-#Spacing#*2)*#Scale#),(8*#Arched#*#Scale#),(8*#Arched#*#Scale#) | Fill Color 0,0,0,0 | Stroke Color #ThemeColor_LightShadow# | StrokeWidth (#Spacing#*#Scale#)
Shape2=Rectangle (#Spacing#*#Scale#),(#Spacing#*#Scale#),((#SkinW#*#Scale_Custom#*64-#Spacing#*2)*#Scale#),((#SkinH#*#Scale_Custom#*64-#Spacing#*2)*#Scale#),(8*#Arched#*#Scale#),(8*#Arched#*#Scale#) | Fill Color 0,0,0,0 | Stroke Color #ThemeColor_LightShadow# | StrokeWidth (#Spacing#*2*#Scale#)
Shape3=Rectangle (#Spacing#*#Scale#),(#Spacing#*#Scale#),((#SkinW#*#Scale_Custom#*64-#Spacing#*2)*#Scale#),((#SkinH#*#Scale_Custom#*64-#Spacing#*2)*#Scale#),(8*#Arched#*#Scale#),(8*#Arched#*#Scale#) | Fill Color #ThemeColor_Background# | Stroke Color #ThemeColor_Shadow#
Shape4=Rectangle (#Spacing#*#Scale#),(#Spacing#*#Scale#),((#SkinW#*#Scale_Custom#*64-#Spacing#*2)*#Scale#),((#SkinH#*#Scale_Custom#*64-#Spacing#*2)*#Scale#),(8*#Arched#*#Scale#),(8*#Arched#*#Scale#) | Fill Color 255,255,255,(64*#Light#) | StrokeWidth 0
Shape5=Rectangle (#Spacing#*#Scale#),((#Spacing#+1)*#Scale#),((#SkinW#*#Scale_Custom#*64-#Spacing#*2)*#Scale#),((#SkinH#*#Scale_Custom#*64-#Spacing#*2)*#Scale#),(8*#Arched#*#Scale#),(8*#Arched#*#Scale#)
Shape6=Combine Shape4 | Exclude Shape5
DynamicVariables=1
MouseOverAction=[!ShowMeter MeterSquareSelected][!Redraw]
MouseLeaveAction=[!HideMeter MeterSquareSelected][!Redraw]
LeftMouseUpAction=[!ShowMeter MeterSquareSelected]["[#QuickSetting.Action.[#QuickSetting_1]]"][!Redraw]

[MeterSquareColored]
Meter=Shape
Shape=Rectangle (#Spacing#*#Scale#),(#Spacing#*#Scale#),((#SkinW#*#Scale_Custom#*64-#Spacing#*2)*#Scale#),((#SkinH#*#Scale_Custom#*64-#Spacing#*2)*#Scale#),(8*#Arched#*#Scale#),(8*#Arched#*#Scale#) | Fill LinearGradient BackgroundGradient_1 | StrokeWidth 0
BackgroundGradient_1=[#QuickSetting.BackgroundGradientRange.[#QuickSetting_1]] | [#QuickSetting.BackgroundGradientColor_1.[#QuickSetting_1]];0.0 | [#QuickSetting.BackgroundGradientColor_2.[#QuickSetting_1]] ; 1.0
DynamicVariables=1

[MeterIcon]
Meter=Image
ImageName=[#QuickSetting.Icon.[#QuickSetting_1]]
X=(32*#Scale_Custom#*#Scale#)
Y=((22+10*#SCHN#)*#Scale_Custom#*#Scale#)
H=(64*#Scale_Custom#*#Scale#)
W=(64*#Scale_Custom#*#Scale#)
DynamicVariables=1
Hidden=[#QuickSetting.HideIcon.2x2.[#QuickSetting_1]]

[MeterText]
Meter=String
MeterStyle=FontStyle_General
X=(12*#Scale#)
Y=((#SkinH#*#Scale_Custom#*64-12)*#Scale#)
W=(104*#Scale_Custom#*#Scale#)
Text=[#QuickSetting.Text.[#QuickSetting_1]]
FontColor=[#QuickSetting.FontColor.[#QuickSetting_1]]
FontSize=(9*#Scale#)
ClipString=2
StringAlign=LeftBottom
DynamicVariables=1
Hidden=(Max([#QuickSetting.HideIcon.2x2.[#QuickSetting_1]],[#SCHN]))

[MeterSquareZone]
Meter=Shape
Shape=Rectangle (#Spacing#*#Scale#),(#Spacing#*#Scale#),((#SkinW#*#Scale_Custom#*64-#Spacing#*2)*#Scale#),((#SkinH#*#Scale_Custom#*64-#Spacing#*2)*#Scale#),(8*#Arched#*#Scale#),(8*#Arched#*#Scale#) | Stroke Color 0,0,0,0  | StrokeWidth 0 | Fill Color 255,255,255
DynamicVariables=1

[MeterImage]
Meter=Image
ImageName=[#QuickSetting.Image_2x2.[#QuickSetting_1]]
W=(#SkinW#*64*#Scale_Custom#*#Scale#)
H=(#SkinH#*64*#Scale_Custom#*#Scale#)
DynamicVariables=1
Container=MeterSquareZone

[MeterSquareSelected]
Meter=Shape
Shape=Rectangle (#Spacing#*#Scale#),(#Spacing#*#Scale#),((#SkinW#*#Scale_Custom#*64-#Spacing#*2)*#Scale#),((#SkinH#*#Scale_Custom#*64-#Spacing#*2)*#Scale#),(8*#Arched#*#Scale#),(8*#Arched#*#Scale#) | Fill Color #ThemeColor_BackgroundSelected# | StrokeWidth 0
Hidden=1
DynamicVariables=1

[MeterMovingZone]
Meter=Shape
MeterStyle=MeterMovingZoneStyle

[MeterMovingImage]
Meter=Image
MeterStyle=MeterMovingImageStyle