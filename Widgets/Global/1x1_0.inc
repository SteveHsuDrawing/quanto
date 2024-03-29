[Rainmeter]
Update=(1000+1000*#EnergySaving#)

RightMouseUpAction=[!SkinCustomMenu]
ContextTitle=#OT.Alternative#
ContextTitle2=#OT.GlobalSettings#
ContextTitle3=-
ContextTitle4=#OT.Refresh#
ContextTitle5=#OT.Unload#
ContextTitle6=#OT.More#

ContextAction=#GeneralAction2#
ContextAction2=#GeneralAction4#
ContextAction3=[]
ContextAction4=#GeneralAction5#
ContextAction5=#GeneralAction6#
ContextAction6=#GeneralAction7#

[Variables]
@Include=#@#Global.inc
@Include1=Settings.inc
SkinW=1
SkinH=1
BeginX=0
BeginY=0
UpdateDivider=1
AverageSize=1

[MeterSquare]
Meter=Shape
MeterStyle=MeterSquare_General
MouseOverAction=[!HideMeter MeterText][!HideMeter MeterIcon][!ShowMeter MeterTitle][!Redraw]
MouseLeaveAction=[!ShowMeter MeterText][!ShowMeter MeterIcon][!HideMeter MeterTitle][!Redraw]

[MeterIcon]
Meter=Image
ImageName=#Icon#
X=(12*#Scale#)
Y=(4*#Scale#)
H=(40*#Scale#)
W=(40*#Scale#)
ImageTint=#FontColor_General#,96
DynamicVariables=1
ToolTipText=#IconToolTipText#
LeftMouseUpAction=#IconAction#
Group=Icon

[Style2]
X=(32*#Scale#)
Y=(26*#Scale#)
W=((#SkinW#*64-#Spacing#*2)*#Scale#)
ClipString=0
StringAlign=CenterCenter
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(12*1.5*#Scale#)
DynamicVariables=1
AntiAlias=1

[MeterText]
Meter=String
Text=#1x1Text#
MeterStyle=Style2

[MeterTitle]
Meter=String
Text=#1x1Title#
MeasureName=MeasureSourceTotal
MeasureName2=MeasureSource
AutoScale=1
MeterStyle=Style2
FontSize=(12*1.4*#Scale#)
Hidden=1
Group=Icon
LeftMouseUpAction=#IconAction#

[MeterBar]
Meter=Shape
X=(8*#Scale#)
Y=(48*#Scale#)
Shape=Rectangle 0,0,(48*#Scale#),(8*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_MeterBar# | StrokeWidth 0
Shape2=Rectangle 0,0,(48*#Scale#),(8*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_General# | StrokeWidth 0
Shape3=Rectangle 0,0,(48*[MeasureSourceCalc]*#Scale#),(8*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_General# | StrokeWidth 0
Shape4=Combine Shape2 | Intersect Shape3
DynamicVariables=1