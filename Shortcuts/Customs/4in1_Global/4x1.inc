[Variables]
@Include=#@#Global.inc
@Include2=#ROOTCONFIGPATH#Shortcuts\Customs\4in1_Global\Global.inc
SkinW=4
SkinH=1
BeginX=0
BeginY=0
CW=((64-(2*#Spacing#/(#Spacing#+1)+#Spacing#*(1+#Spacing#/10))*#Arched#-0.5*#Spacing#*(1-#Arched#))*#Scale#)
CH=((64-4*#Arched#-2*(#Spacing#*(1+#Spacing#/10))+#Spacing#*(1-#Arched#))*#Scale#)
CR=((10-#Spacing#/2)*#Arched#*#Scale#)
IWH=((44-#Spacing#*#Arched#-#Spacing#/2)*#Scale#)
GX=(#CW#+(#Spacing#*#Arched#*#Scale#))

[MeterSquare]
Meter=Shape
MeterStyle=MeterSquare_General

[Style1]
X=(#GX#)r
Y=0r
Shape=Rectangle 0,0,#CW#,#CH#,#CR#,#CR# | Fill LinearGradient BackgroundGradient | StrokeWidth 0
DynamicVariables=1

[Style2]
X=(#GX#)r
Y=0r
W=#IWH#
H=#IWH#
PreserveAspectRatio=1
DynamicVariables=1

[Style3]
X=(#GX#)r
Y=0r
Shape=Rectangle 0,0,#CW#,#CH#,#CR#,#CR# | Fill Color 255,255,255 | StrokeWidth 0
DynamicVariables=1

[Style4]
X=0R
Y=0r
W=#CW#
H=#CH#
PreserveAspectRatio=2
DynamicVariables=1

[Style5]
X=(#GX#)r
Y=0r
Shape=Rectangle 0,0,#CW#,#CH#,#CR#,#CR# | Fill Color #ThemeColor_BackgroundSelected# | StrokeWidth 0
DynamicVariables=1
Hidden=1

[MeterIcon11]
Meter=Shape
X=((#Spacing#*(#Arched#+1))*#Scale#)
Y=((#Spacing#*(#Arched#+1))*#Scale#)
MeterStyle=Style1
BackgroundGradient=[#QuickSetting.BackgroundGradientRange.[#QuickSetting_1]] | [#QuickSetting.BackgroundGradientColor_1.[#QuickSetting_1]];0.0 | [#QuickSetting.BackgroundGradientColor_2.[#QuickSetting_1]] ; 1.0
MouseOverAction=[!ShowMeter MeterIcon15][!Redraw]
MouseLeaveAction=[!HideMeter MeterIcon15][!Redraw]
LeftMouseUpAction=[!ShowMeter MeterIcon15]["[#QuickSetting.Action.[#QuickSetting_1]]"][!Redraw]
ToolTipText=[#QuickSetting.Text.[#QuickSetting_1]]

[MeterIcon21]
Meter=Shape
MeterStyle=Style1
BackgroundGradient=[#QuickSetting.BackgroundGradientRange.[#QuickSetting_2]] | [#QuickSetting.BackgroundGradientColor_1.[#QuickSetting_2]];0.0 | [#QuickSetting.BackgroundGradientColor_2.[#QuickSetting_2]] ; 1.0
MouseOverAction=[!ShowMeter MeterIcon25][!Redraw]
MouseLeaveAction=[!HideMeter MeterIcon25][!Redraw]
LeftMouseUpAction=[!ShowMeter MeterIcon25]["[#QuickSetting.Action.[#QuickSetting_2]]"][!Redraw]
ToolTipText=[#QuickSetting.Text.[#QuickSetting_2]]

[MeterIcon31]
Meter=Shape
MeterStyle=Style1
BackgroundGradient=[#QuickSetting.BackgroundGradientRange.[#QuickSetting_3]] | [#QuickSetting.BackgroundGradientColor_1.[#QuickSetting_3]];0.0 | [#QuickSetting.BackgroundGradientColor_2.[#QuickSetting_3]] ; 1.0
MouseOverAction=[!ShowMeter MeterIcon35][!Redraw]
MouseLeaveAction=[!HideMeter MeterIcon35][!Redraw]
LeftMouseUpAction=[!ShowMeter MeterIcon35]["[#QuickSetting.Action.[#QuickSetting_3]]"][!Redraw]
ToolTipText=[#QuickSetting.Text.[#QuickSetting_3]]

[MeterIcon41]
Meter=Shape
MeterStyle=Style1
BackgroundGradient=[#QuickSetting.BackgroundGradientRange.[#QuickSetting_4]] | [#QuickSetting.BackgroundGradientColor_1.[#QuickSetting_4]];0.0 | [#QuickSetting.BackgroundGradientColor_2.[#QuickSetting_4]] ; 1.0
MouseOverAction=[!ShowMeter MeterIcon45][!Redraw]
MouseLeaveAction=[!HideMeter MeterIcon45][!Redraw]
LeftMouseUpAction=[!ShowMeter MeterIcon45]["[#QuickSetting.Action.[#QuickSetting_4]]"][!Redraw]
ToolTipText=[#QuickSetting.Text.[#QuickSetting_4]]

[MeterIcon12]
Meter=Image
ImageName=[#QuickSetting.Icon.[#QuickSetting_1]]
X=((#Spacing#+10+#Spacing#/2)*#Scale#)
Y=((#Spacing#+10)*#Scale#)
MeterStyle=Style2

[MeterIcon22]
Meter=Image
ImageName=[#QuickSetting.Icon.[#QuickSetting_2]]
MeterStyle=Style2

[MeterIcon32]
Meter=Image
ImageName=[#QuickSetting.Icon.[#QuickSetting_3]]
MeterStyle=Style2

[MeterIcon42]
Meter=Image
ImageName=[#QuickSetting.Icon.[#QuickSetting_4]]
MeterStyle=Style2

[MeterIcon13]
Meter=Shape
X=((#Spacing#*(#Arched#+1))*#Scale#)
Y=((#Spacing#*(#Arched#+1))*#Scale#)
MeterStyle=Style3

[MeterIcon23]
Meter=Shape
MeterStyle=Style3

[MeterIcon33]
Meter=Shape
MeterStyle=Style3

[MeterIcon43]
Meter=Shape
MeterStyle=Style3

[MeterIcon14]
Meter=Image
MeterStyle=Style4
ImageName=[#QuickSetting.Image_1x1.[#QuickSetting_1]]
Container=MeterIcon13

[MeterIcon24]
Meter=Image
MeterStyle=Style4
ImageName=[#QuickSetting.Image_1x1.[#QuickSetting_2]]
Container=MeterIcon23

[MeterIcon34]
Meter=Image
MeterStyle=Style4
ImageName=[#QuickSetting.Image_1x1.[#QuickSetting_3]]
Container=MeterIcon33

[MeterIcon44]
Meter=Image
MeterStyle=Style4
ImageName=[#QuickSetting.Image_1x1.[#QuickSetting_4]]
Container=MeterIcon43

[MeterIcon15]
Meter=Shape
X=((#Spacing#*(#Arched#+1))*#Scale#)
Y=((#Spacing#*(#Arched#+1))*#Scale#)
MeterStyle=Style5

[MeterIcon25]
Meter=Shape
MeterStyle=Style5

[MeterIcon35]
Meter=Shape
MeterStyle=Style5

[MeterIcon45]
Meter=Shape
MeterStyle=Style5

[MeterMovingZone]
Meter=Shape
MeterStyle=MeterMovingZoneStyle

[MeterMovingImage]
Meter=Image
MeterStyle=MeterMovingImageStyle