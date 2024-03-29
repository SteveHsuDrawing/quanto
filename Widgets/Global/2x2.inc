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
SkinW=2
SkinH=2
BeginX=0
BeginY=0
UpdateDivider=1
AverageSize=1

[MeterSquare]
Meter=Shape
MeterStyle=MeterSquare_General
MouseOverAction=[!ShowMeter MeterSquareSelected][!HideMeter MeterText][!HideMeter MeterIcon][!ShowMeter MeterTitle][!Redraw]
MouseLeaveAction=[!HideMeter MeterSquareSelected][!ShowMeter MeterText][!ShowMeter MeterIcon][!HideMeter MeterTitle][!Redraw]

[MeterIcon]
Meter=Image
ImageName=#Icon#
X=(40*#Scale#)
Y=(40*#Scale#)
H=(48*#Scale#)
W=(48*#Scale#)
ImageTint=#FontColor_General#
DynamicVariables=1
Group=Icon

[Style2]
X=(64*#Scale#)
Y=(64*#Scale#)
W=((#SkinW#*64-#Spacing#*2)*#Scale#)
ClipString=0
StringAlign=CenterCenter
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(12*#Scale#)
DynamicVariables=1
AntiAlias=1

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

[MeterBarBack]
Meter=Shape
MeterStyle=RoundlineBack

[MeterBar]
Meter=Roundline
MeasureName=MeasureSourceCalc
MeterStyle=RoundlineStyle