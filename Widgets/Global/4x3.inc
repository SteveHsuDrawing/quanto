[Rainmeter]
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
BeginX=0
BeginY=0
BarH=128
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
MouseOverAction=[!ShowMeter MeterSquareSelected][!Redraw]
MouseLeaveAction=[!HideMeter MeterSquareSelected][!Redraw]

[MeterIconEffect]
Meter=Shape

[MeterText1]
Meter=String
Text=#Text1#
X=(60*#Scale#)
Y=(14*#Scale#)
FontFace=#FontFace_General#
StringStyle=Bold
FontColor=#FontColor_General#
FontSize=(#FontSize_General#*3/4*#Scale#)
DynamicVariables=1
AntiAlias=1
ToolTipText=#Text1ToolTipText#

[Custom1]
X=0r
Y=(#4x3LineSpacing#*#Scale#)r
StringAlign=RightCenter
Container=MeterSquareZone

[Custom2]
X=0r
Y=(#4x3LineSpacing#*#Scale#)r
StringAlign=LeftCenter
ClipString=1
W=((256-32-#4x3TextXBegin#)*#Scale#)
FontColor=#FontColor_General#,192
Container=MeterSquareZone

[Custom1Begin]
X=(#4x3TextXBegin#*#Scale#)
Y=((64+#4x3TextYBegin#)*#Scale#)

[Custom2Begin]
X=((#4x3TextXBegin#+8)*#Scale#)
Y=((64+#4x3TextYBegin#)*#Scale#)

[MeterExtraTitle1]
Meter=String
Text=#4x3Title1#
MeterStyle=FontStyle_Small | Custom1 | Custom1Begin
Hidden=#4x3Hiden1#

[MeterExtraTitle2]
Meter=String
Text=#4x3Title2#
MeterStyle=FontStyle_Small | Custom1
Hidden=#4x3Hiden2#

[MeterExtraTitle3]
Meter=String
Text=#4x3Title3#
MeterStyle=FontStyle_Small | Custom1
Hidden=#4x3Hiden3#

[MeterExtraTitle4]
Meter=String
Text=#4x3Title4#
MeterStyle=FontStyle_Small | Custom1
Hidden=#4x3Hiden4#

[MeterExtraTitle5]
Meter=String
Text=#4x3Title5#
MeterStyle=FontStyle_Small | Custom1
Hidden=#4x3Hiden5#

[MeterExtraTitle6]
Meter=String
Text=#4x3Title6#
MeterStyle=FontStyle_Small | Custom1
Hidden=#4x3Hiden6#

[MeterExtraCntnt1]
Meter=String
Text=#4x3Cntnt1#
MeasureName=MeasureSourceTotal
MeasureName2=MeasureSource
AutoScale=1
ToolTipText=#4x3Cntnt1#
MeterStyle=FontStyle_Small | Custom2 | Custom2Begin
Hidden=#4x3Hiden1#

[MeterExtraCntnt2]
Meter=String
Text=#4x3Cntnt2#
ToolTipText=#4x3Cntnt2#
MeterStyle=FontStyle_Small | Custom2
Hidden=#4x3Hiden2#

[MeterExtraCntnt3]
Meter=String
Text=#4x3Cntnt3#
ToolTipText=#4x3Cntnt3#
MeterStyle=FontStyle_Small | Custom2
Hidden=#4x3Hiden3#

[MeterExtraCntnt4]
Meter=String
Text=#4x3Cntnt4#
ToolTipText=#4x3Cntnt4#
MeterStyle=FontStyle_Small | Custom2
Hidden=#4x3Hiden4#

[MeterExtraCntnt5]
Meter=String
Text=#4x3Cntnt5#
ToolTipText=#4x3Cntnt5#
MeterStyle=FontStyle_Small | Custom2
Hidden=#4x3Hiden5#

[MeterExtraCntnt6]
Meter=String
Text=#4x3Cntnt6#
ToolTipText=#4x3Cntnt6#
MeterStyle=FontStyle_Small | Custom2
Hidden=#4x3Hiden6#

[MeterSquareSelected]
Meter=Shape
X=(8*#Scale#)
Y=(8*#Scale#)
Shape=Rectangle 0,0,(48*#Scale#),(48*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_BackgroundSelected# | StrokeWidth 0
Hidden=1
DynamicVariables=1