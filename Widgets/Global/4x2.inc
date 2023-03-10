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
SkinH=2
BeginX=0
BeginY=0
BarH=64
UpdateDivider=1
AverageSize=1

[MeterSquare]
Meter=Shape
MeterStyle=MeterSquare_General | MeterSquareBar_General

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

[MeterText2]
Meter=String
MeasureName=MeasureSourceTotal
MeasureName2=MeasureSource
AutoScale=1
Text=#Text2#
X=(((184-21*(1-#HideInformation#))*#Scale#))r
Y=0r
W=((118-21*(1-#HideInformation#))*#Scale#)
ClipString=1
StringAlign=Right
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(#FontSize_General#*3/4*#Scale#)
DynamicVariables=1
AntiAlias=1
ToolTipText=#Text2ToolTipText#

[MeterInformationIcon]
Meter=Image
ImageName=#@#Bitmap\Information (Small).png
X=((6*#Scale#))r
Y=(17*#Scale#)
H=(14*#Scale#)
W=(14*#Scale#)
ImageTint=#FontColor_General#
DynamicVariables=1
ToolTipText=#InformationToolTipText#
Hidden=#HideInformation#

[MeterExtraBar1_Icon]
Meter=Image
ImageName=#4x2Bar1_Icon#
X=(14*#Scale#)
Y=((76+#4x2Bar2_Hidden#*12)*#Scale#)
H=(14*#Scale#)
W=(14*#Scale#)
ImageTint=#FontColor_General#
DynamicVariables=1

[MeterExtraBar1_Text]
Meter=String
Text=#4x2Bar1_Text#
X=(20*#Scale#)r
Y=(7*#Scale#)r
MeterStyle=FontStyle_Small
StringAlign=LeftCenter

[MeterExtraBar1]
Meter=Shape
X=((244-#4x2Bar1_Width#)*#Scale#)
Y=(-7*#Scale#)r
Shape=Rectangle 0,(2*#Scale#),(#4x2Bar1_Width#*#Scale#),(8*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_MeterBar# | StrokeWidth 0
Shape2=Rectangle 0,(2*#Scale#),((#4x2Bar1_Dividen#/#4x2Bar1_Divisor#)*#4x2Bar1_Width#*#Scale#),(8*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_General# | StrokeWidth 0
Shape3=Rectangle 0,(2*#Scale#),(#4x2Bar1_Width#*#Scale#),(8*#Scale#),(4*#Scale#),(4*#Scale#) | StrokeWidth 0
Shape4=Combine Shape2 | Intersect Shape3
DynamicVariables=1

[MeterExtraBar2_Icon]
Meter=Image
ImageName=#4x2Bar2_Icon#
X=(14*#Scale#)
Y=(100*#Scale#)
H=(14*#Scale#)
W=(14*#Scale#)
ImageTint=#FontColor_General#
DynamicVariables=1

[MeterExtraBar2_Text]
Meter=String
Text=#4x2Bar2_Text#
X=(20*#Scale#)r
Y=(7*#Scale#)r
MeterStyle=FontStyle_Small
StringAlign=LeftCenter

[MeterExtraBar2]
Meter=Shape
X=((244-#4x2Bar2_Width#)*#Scale#)
Y=(-7*#Scale#)r
Shape=Rectangle 0,(2*#Scale#),(#4x2Bar2_Width#*#Scale#),(8*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_MeterBar# | StrokeWidth 0
Shape2=Rectangle 0,(2*#Scale#),((#4x2Bar2_Dividen#/#4x2Bar2_Divisor#)*#4x2Bar2_Width#*#Scale#),(8*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_General# | StrokeWidth 0
Shape3=Rectangle 0,(2*#Scale#),(#4x2Bar1_Width#*#Scale#),(8*#Scale#),(4*#Scale#),(4*#Scale#) | StrokeWidth 0
Shape4=Combine Shape2 | Intersect Shape3
DynamicVariables=1


[MeterSquareSelected]
Meter=Shape
X=(8*#Scale#)
Y=(8*#Scale#)
Shape=Rectangle 0,0,(48*#Scale#),(48*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_BackgroundSelected# | StrokeWidth 0
Hidden=1
DynamicVariables=1