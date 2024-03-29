[Variables]
@Include=#@#Global.inc
@Include2=#ROOTCONFIGPATH#Shortcuts\Customs\4in1_Global\Global.inc
SkinW=2
SkinH=2
BeginX=0
BeginY=0
CWH=((64-#Spacing#*(1+1.5*#Arched#))*#Scale#)
IWH=((44-#Spacing#*(1-#Arched#))*#Scale#)
CR=((10-#Spacing#/2)*#Arched#*#Scale#)
GX=(#CWH#+(#Spacing#*#Arched#*#Scale#))
GY=(64-#Spacing#*(1+#Arched#))

[MeterSquare]
Meter=Shape
MeterStyle=MeterSquare_General

[Style1]
X=(#GX#)r
Y=0r
Shape=Rectangle 0,0,#CWH#,#CWH#,#CR#,#CR# | Fill LinearGradient BackgroundGradient | StrokeWidth 0
DynamicVariables=1

[Style2]
X=(#GX#)r
Y=0r
W=#IWH#
H=#IWH#
DynamicVariables=1
PreserveAspectRatio=1
DynamicVariables=1

[Style3]
X=(#GX#)r
Y=0r
Shape=Rectangle 0,0,#CWH#,#CWH#,#CR#,#CR# | Fill Color 255,255,255 | StrokeWidth 0
DynamicVariables=1

[Style4]
X=0R
Y=0r
W=#CWH#
H=#CWH#
PreserveAspectRatio=2
DynamicVariables=1

[Style5]
X=(#GX#)r
Y=0r
Shape=Rectangle 0,0,#CWH#,#CWH#,#CR#,#CR# | Fill Color #ThemeColor_BackgroundSelected# | StrokeWidth 0
DynamicVariables=1
Hidden=1

[MeterIcon111]
Meter=Shape
X=((#Spacing#*(#Arched#+1))*#Scale#)
Y=((#Spacing#*(#Arched#+1))*#Scale#)
MeterStyle=Style1
BackgroundGradient=[#QuickSetting.BackgroundGradientRange.[#QuickSetting_1]] | [#QuickSetting.BackgroundGradientColor_1.[#QuickSetting_1]];0.0 | [#QuickSetting.BackgroundGradientColor_2.[#QuickSetting_1]] ; 1.0
MouseOverAction=[!ShowMeter MeterIcon115][!Redraw]
MouseLeaveAction=[!HideMeter MeterIcon115][!Redraw]
LeftMouseUpAction=[!ShowMeter MeterIcon115]["[#QuickSetting.Action.[#QuickSetting_1]]"][!Redraw]
ToolTipText=[#QuickSetting.Text.[#QuickSetting_1]]

[MeterIcon121]
Meter=Shape
MeterStyle=Style1
BackgroundGradient=[#QuickSetting.BackgroundGradientRange.[#QuickSetting_2]] | [#QuickSetting.BackgroundGradientColor_1.[#QuickSetting_2]];0.0 | [#QuickSetting.BackgroundGradientColor_2.[#QuickSetting_2]] ; 1.0
MouseOverAction=[!ShowMeter MeterIcon125][!Redraw]
MouseLeaveAction=[!HideMeter MeterIcon125][!Redraw]
LeftMouseUpAction=[!ShowMeter MeterIcon125]["[#QuickSetting.Action.[#QuickSetting_2]]"][!Redraw]
ToolTipText=[#QuickSetting.Text.[#QuickSetting_2]]

[MeterIcon211]
Meter=Shape
X=((#Spacing#*(#Arched#+1))*#Scale#)
Y=((#Spacing#*(#Arched#+1)+#GY#)*#Scale#)
MeterStyle=Style1
BackgroundGradient=[#QuickSetting.BackgroundGradientRange.[#QuickSetting_3]] | [#QuickSetting.BackgroundGradientColor_1.[#QuickSetting_3]];0.0 | [#QuickSetting.BackgroundGradientColor_2.[#QuickSetting_3]] ; 1.0
MouseOverAction=[!ShowMeter MeterIcon215][!Redraw]
MouseLeaveAction=[!HideMeter MeterIcon215][!Redraw]
LeftMouseUpAction=[!ShowMeter MeterIcon215]["[#QuickSetting.Action.[#QuickSetting_3]]"][!Redraw]
ToolTipText=[#QuickSetting.Text.[#QuickSetting_3]]

[MeterIcon221]
Meter=Shape
MeterStyle=Style1
BackgroundGradient=[#QuickSetting.BackgroundGradientRange.[#QuickSetting_4]] | [#QuickSetting.BackgroundGradientColor_1.[#QuickSetting_4]];0.0 | [#QuickSetting.BackgroundGradientColor_2.[#QuickSetting_4]] ; 1.0
MouseOverAction=[!ShowMeter MeterIcon225][!Redraw]
MouseLeaveAction=[!HideMeter MeterIcon225][!Redraw]
LeftMouseUpAction=[!ShowMeter MeterIcon225]["[#QuickSetting.Action.[#QuickSetting_4]]"][!Redraw]
ToolTipText=[#QuickSetting.Text.[#QuickSetting_4]]

[MeterIcon112]
Meter=Image
ImageName=[#QuickSetting.Icon.[#QuickSetting_1]]
X=((10+#Spacing#)*#Scale#)
Y=((10+#Spacing#)*#Scale#)
MeterStyle=Style2

[MeterIcon122]
Meter=Image
ImageName=[#QuickSetting.Icon.[#QuickSetting_2]]
MeterStyle=Style2

[MeterIcon212]
Meter=Image
ImageName=[#QuickSetting.Icon.[#QuickSetting_3]]
X=((10+#Spacing#)*#Scale#)
Y=((10+#Spacing#+#GY#)*#Scale#)
MeterStyle=Style2

[MeterIcon222]
Meter=Image
ImageName=[#QuickSetting.Icon.[#QuickSetting_4]]
MeterStyle=Style2

[MeterIcon113]
Meter=Shape
X=((#Spacing#*(#Arched#+1))*#Scale#)
Y=((#Spacing#*(#Arched#+1))*#Scale#)
MeterStyle=Style3

[MeterIcon123]
Meter=Shape
MeterStyle=Style3

[MeterIcon213]
Meter=Shape
X=((#Spacing#*(#Arched#+1))*#Scale#)
Y=((#Spacing#*(#Arched#+1)+#GY#)*#Scale#)
MeterStyle=Style3

[MeterIcon223]
Meter=Shape
MeterStyle=Style3

[MeterIcon114]
Meter=Image
MeterStyle=Style4
ImageName=[#QuickSetting.Image_1x1.[#QuickSetting_1]]
Container=MeterIcon113

[MeterIcon124]
Meter=Image
MeterStyle=Style4
ImageName=[#QuickSetting.Image_1x1.[#QuickSetting_2]]
Container=MeterIcon123

[MeterIcon214]
Meter=Image
MeterStyle=Style4
ImageName=[#QuickSetting.Image_1x1.[#QuickSetting_3]]
Container=MeterIcon213

[MeterIcon224]
Meter=Image
MeterStyle=Style4
ImageName=[#QuickSetting.Image_1x1.[#QuickSetting_4]]
Container=MeterIcon223

[MeterIcon115]
Meter=Shape
X=((#Spacing#*(#Arched#+1))*#Scale#)
Y=((#Spacing#*(#Arched#+1))*#Scale#)
MeterStyle=Style5

[MeterIcon125]
Meter=Shape
MeterStyle=Style5

[MeterIcon215]
Meter=Shape
X=((#Spacing#*(#Arched#+1))*#Scale#)
Y=((#Spacing#*(#Arched#+1)+#GY#)*#Scale#)
MeterStyle=Style5

[MeterIcon225]
Meter=Shape
MeterStyle=Style5

[MeterMovingZone]
Meter=Shape
MeterStyle=MeterMovingZoneStyle

[MeterMovingImage]
Meter=Image
MeterStyle=MeterMovingImageStyle


@Include3=SkinSettings#HideSettings#.inc