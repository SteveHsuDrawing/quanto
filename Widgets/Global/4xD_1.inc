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
@Include2=Settings.inc
SkinW=4
SkinH=3
BarH=(64*(#SkinH#-1)+2)
BeginX=0
BeginY=0
UpdateDivider=1
AverageSize=1

[MeterSquare]
Meter=Shape
MeterStyle=MeterSquare_General | MeterSquareBar_General

[MeterSquareZone]
Meter=Shape
MeterStyle=MeterSquare_Zone

[MeterBar]
Meter=Shape
X=(2*#Scale#)
Y=(60*#Scale#)
Shape=Rectangle 0,(1*#Scale#),((256-4)*#Scale#),(1*#Scale#),(1*#Scale#*#Arched#),(1*#Scale#*#Arched#) | Fill Color #ThemeColor_MeterBar# | StrokeWidth 0
Shape2=Rectangle 0,0,([MeasureSourceCalc]*(256-4)*#Scale#),(2*#Scale#),(1*#Scale#*#Arched#),(1*#Scale#*#Arched#) | Fill Color #ThemeColor_General# | StrokeWidth 0
Shape3=Rectangle 0,0,((256-4)*#Scale#),(2*#Scale#),(1*#Scale#*#Arched#),(1*#Scale#*#Arched#)
Shape4=Combine Shape2 | Intersect Shape3
DynamicVariables=1

[MeterIcon]
Meter=Image
ImageName=#Icon#
X=(12*#Scale#)
Y=(12*#Scale#)
H=(40*#Scale#)
W=(40*#Scale#)
ImageTint=#FontColor_General#
DynamicVariables=1
ToolTipText=#IconToolTipText#
LeftMouseUpAction=#IconAction#

[MeterText1]
Meter=String
MeasureName=MeasureUsedCalcPer
MeterStyle=FontStyle_General
Text=#1x1Title#
X=(64*#Scale#)
Y=(22*#Scale#)
W=(180*#Scale#)
StringAlign=LeftCenter

[MeterText2]
Meter=String
MeasureName=MeasureUsedCalcPer
MeterStyle=FontStyle_General
Text=#Text1#
X=(64*#Scale#)
Y=(42*#Scale#)
W=(180*#Scale#)
FontSize=(9*#Scale#)
StringAlign=LeftCenter

[Custom1]
X=0r
Y=(32*#Scale#)r
StringAlign=LeftCenter
Container=MeterSquareZone
FontSize=(10*#Scale#)

[Custom2]
X=0r
Y=(32*#Scale#)r
StringAlign=RightCenter
ClipString=1
W=((256-16-(Max([4x3Title1:XW],(Max([4x3Title2:XW],(Max([4x3Title3:XW],(Max([4x3Title4:XW],(Max([4x3Title5:XW],[4x3Title6:XW])))))))))))*#Scale#)
FontColor=#FontColor_General#,192
Container=MeterSquareZone
FontSize=(10*#Scale#)

[Custom1Begin]
X=(12*#Scale#)
Y=((64+16)*#Scale#)

[Custom2Begin]
X=(238*#Scale#)
Y=((64+16)*#Scale#)

[4x3Title1]
Meter=String
Text=#4x3Title1#
MeterStyle=FontStyle_General | Custom1 | Custom1Begin
[4x3Title2]
Meter=String
Text=#4x3Title2#
MeterStyle=FontStyle_General | Custom1
[4x3Title3]
Meter=String
Text=#4x3Title3#
MeterStyle=FontStyle_General | Custom1
[4x3Title4]
Meter=String
Text=#4x3Title4#
MeterStyle=FontStyle_General | Custom1
[4x3Title5]
Meter=String
Text=#4x3Title5#
MeterStyle=FontStyle_General | Custom1
[4x3Title6]
Meter=String
Text=#4x3Title6#
MeterStyle=FontStyle_General | Custom1
[1]
Meter=String
Text=#4x3Cntnt1#
ToolTipText=#4x3Cntnt1#
MeterStyle=FontStyle_Small | Custom2 | Custom2Begin
[2]
Meter=String
Text=#4x3Cntnt2#
ToolTipText=#4x3Cntnt2#
MeterStyle=FontStyle_Small | Custom2
[3]
Meter=String
Text=#4x3Cntnt3#
ToolTipText=#4x3Cntnt3#
MeterStyle=FontStyle_Small | Custom2
[4]
Meter=String
Text=#4x3Cntnt4#
ToolTipText=#4x3Cntnt4#
MeterStyle=FontStyle_Small | Custom2
[5]
Meter=String
Text=#4x3Cntnt5#
ToolTipText=#4x3Cntnt5#
MeterStyle=FontStyle_Small | Custom2
[6]
Meter=String
Text=#4x3Cntnt6#
ToolTipText=#4x3Cntnt6#
MeterStyle=FontStyle_Small | Custom2

[B]
X=0r
Y=(32*#Scale#)r
Shape=Rectangle 0,0,((256-4)*#Scale#),(1*#Scale#) | StrokeWidth 0 | Fill Color #ThemeColor_MeterBar#
DynamicVariables=1
Container=MeterSquareZone

[B1]
Meter=Shape
MeterStyle=B
X=(2*#Scale#)
Y=(93*#Scale#)
[B2]
Meter=Shape
MeterStyle=B
[B3]
Meter=Shape
MeterStyle=B
[B4]
Meter=Shape
MeterStyle=B
[B5]
Meter=Shape
MeterStyle=B
[B6]
Meter=Shape
MeterStyle=B