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
BarH=(64*(#SkinH#-1))
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
Shape=Rectangle (60*#Scale#),(38*#Scale#),((184)*#Scale#),(8*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_MeterBar# | StrokeWidth 0
Shape2=Rectangle (60*#Scale#),(38*#Scale#),([MeasureSourceCalc]*(184)*#Scale#),(8*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_General# | StrokeWidth 0
Shape3=Rectangle (60*#Scale#),(38*#Scale#),((184-#ExtraText3#*56)*#Scale#),(8*#Scale#),(4*#Scale#),(4*#Scale#) | StrokeWidth 0
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
Text=#Text1#
X=(60*#Scale#)
Y=(14*#Scale#)
FontFace=[#FontFace_General]
FontWeight=700
FontColor=#FontColor_General#
FontSize=(10*#Scale#)
DynamicVariables=1
AntiAlias=1
ToolTipText=#Text1ToolTipText#

[Custom1]
X=0r
Y=(32*#Scale#)r
StringAlign=LeftCenter
Container=MeterSquareZone
FontSize=(10*#Scale#)

[Custom2]
X=0r
Y=(32*#Scale#)r
StringAlign=LeftCenter
ClipString=1
W=((256-32-(Max([4x3Title1:XW],(Max([4x3Title2:XW],(Max([4x3Title3:XW],(Max([4x3Title4:XW],(Max([4x3Title5:XW],[4x3Title6:XW])))))))))))*#Scale#)
FontColor=#FontColor_General#,192
Container=MeterSquareZone

[Custom1Begin]
X=(12*#Scale#)
Y=((64+16)*#Scale#)

[Custom2Begin]
X=((Max([4x3Title1:XW],(Max([4x3Title2:XW],(Max([4x3Title3:XW],(Max([4x3Title4:XW],(Max([4x3Title5:XW],[4x3Title6:XW]))))))))))+12*#Scale#)
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