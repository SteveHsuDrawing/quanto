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
Shape=Rectangle (60*#Scale#),(38*#Scale#),((184-#ExtraText3#*56)*#Scale#),(8*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_MeterBar# | StrokeWidth 0
Shape2=Rectangle (60*#Scale#),(38*#Scale#),([MeasureSourceCalc]*(184-#ExtraText3#*56)*#Scale#),(8*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_General# | StrokeWidth 0
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

[MeterIconEffect]
Meter=Shape

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

[MeterText2]
Meter=String
MeasureName=MeasureSourceTotal
MeasureName2=MeasureSource
AutoScale=1
Text=#Text2#
X=((60+184-20*(1-#HideInformation#))*#Scale#)
Y=(14*#Scale#)
W=((118-20*(1-#HideInformation#))*#Scale#)
ClipString=1
StringAlign=Right
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(10*#Scale#)
DynamicVariables=1
AntiAlias=1
ToolTipText=#Text2ToolTipText#

[MeterText3]
Meter=String
MeasureName=MeasureSourceTotal
MeasureName2=MeasureSource
AutoScale=1
Text=#Text3#
X=((184+60-21*(1))*#Scale#)
Y=(35*#Scale#)
;W=((118-21*(1-#HideInformation#))*#Scale#)
;ClipString=1
StringAlign=Right
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
Y=(17*#Scale#)
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
Y=(36*#Scale#)
H=(14*#Scale#)
W=(14*#Scale#)
ImageTint=#FontColor_General#
LeftMouseUpAction=#Text3IconAction#
DynamicVariables=1
ToolTipText=#Text3ToolTipText#
Hidden=(#ExtraText3#-1)