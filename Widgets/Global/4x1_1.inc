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
SkinH=1
BeginX=0
BeginY=0
UpdateDivider=1
AverageSize=1

[MeterSquare]
Meter=Shape
MeterStyle=MeterSquare_General

[MeterBar]
Meter=Shape
X=(2*#Scale#)
Y=(60*#Scale#)
Shape=Rectangle 0,(1*#Scale#),((256-4)*#Scale#),(1*#Scale#),(0.5*#Scale#*#Arched#),(0.5*#Scale#*#Arched#) | Fill Color #ThemeColor_MeterBar# | StrokeWidth 0
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
Text=#Text1#
X=(64*#Scale#)
Y=(22*#Scale#)
W=(180*#Scale#)
StringAlign=LeftCenter

[MeterText2]
Meter=String
MeterStyle=FontStyle_General
Text=#Text2#
X=(64*#Scale#)
Y=(42*#Scale#)
W=((180-10)*#Scale#-[MeterText3:W]-[MeterInformationIcon:W])
FontSize=(9*#Scale#)
MeasureName=MeasureSourceTotal
MeasureName2=MeasureSource
AutoScale=1
ClipString=1
StringAlign=LeftCenter
ToolTipText=#Text2ToolTipText#

[MeterText3]
Meter=String
MeasureName=MeasureSourceTotal
MeasureName2=MeasureSource
AutoScale=1
Text=#Text3#
X=((184+60-21)*#Scale#)
Y=(42*#Scale#)
StringAlign=RightCenter
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(10*#Scale#)
DynamicVariables=1
AntiAlias=1
Hidden=(#ExtraText3#-1)

[MeterInformationIcon]
Meter=Image
ImageName=#@#Bitmap\Information (Small).png
X=((184+60+6-21*(1))*#Scale#)
Y=(14*#Scale#)
H=(14*#Scale#)
W=(14*#Scale#)
ImageTint=#FontColor_General#
DynamicVariables=1
ToolTipText=#InformationToolTipText#
Hidden=#HideInformation#

[MeterExtraText3Icon]
Meter=Image
ImageName=#Text3Icon#
X=0r
Y=(34*#Scale#)
H=(14*#Scale#)
W=(14*#Scale#)
ImageTint=#FontColor_General#
LeftMouseUpAction=#Text3IconAction#
DynamicVariables=1
ToolTipText=#Text3ToolTipText#
Hidden=(#ExtraText3#-1)