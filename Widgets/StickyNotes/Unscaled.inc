[Rainmeter]
Update=-1
RightMouseUpAction=[!SkinCustomMenu]

ContextTitle=#OT.Edit#
ContextTitle2=-
ContextTitle3=#OT.Add_Another#
ContextTitle4=#OT.Skin_Settings#
ContextTitle5=#OT.GlobalSettings#
ContextTitle6=-
ContextTitle7=#OT.Refresh#
ContextTitle8=#OT.Unload#
ContextTitle9=#OT.More#

ContextAction=[!CommandMeasure MeasureInput1 "ExecuteBatch 1"][!ShowMeter MeterText1InputZone][!Redraw]
ContextAction2=[]
ContextAction3=[!ActivateConfig "#ROOTCONFIG#\Widgets\StickyNotes\2" "Unscaled.ini"]
ContextAction4=#GeneralAction11#
ContextAction5=#GeneralAction4#
ContextAction6=[]
ContextAction7=#GeneralAction5#
ContextAction8=#GeneralAction6#
ContextAction9=#GeneralAction7#

MouseLeaveAction=[!SetOptionGroup Group1 FontColor #FontColor_General#]

[Variables]
@Include=#@#Global.inc
@Include2=Global.inc
@Include3=SkinSettings#HideSettings#.inc
BeginX=0
BeginY=0

;============================= Measures =============================

[MeasureInput1]
Measure=Plugin
Plugin=InputText.dll
SolidColor=#ThemeColor_TextInputerAlpha#
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(9*#Scale#)
AntiAlias=1
X=(14*#Scale#)
Y=((56-#HideTBar#*42)*#Scale#)
W=((#SkinW#*64-30)*#Scale#)
H=((#SkinH#*64-70+#HideTBar#*42)*#Scale#)
FocusDismiss=1
DefaultValue=#StickyNotes#
Command1=[!WriteKeyValue Variables StickyNotes "$UserInput$" "Settings.inc"][!Refresh]
OnDismissAction=[!HideMeter MeterText1InputZone][!Redraw]
UpdateDivider=50000
DynamicVariables=1

[MeasureInput2]
Measure=Plugin
Plugin=InputText.dll
SolidColor=#ThemeColor_TextInputerAlpha#
FontFace=[#FontFace_General]
FontWeight=700
FontColor=#FontColor_General#
FontSize=(12*#Scale#)
AntiAlias=1
X=(14*#Scale#)
Y=(12*#Scale#)
W=((#SkinW#*64-64-40)*#Scale#)
H=(32*#Scale#)
FocusDismiss=1
DefaultValue=#Title#
Command1=[!WriteKeyValue Variables Title "$UserInput$" "Settings.inc"][!Refresh]
OnDismissAction=[!HideMeter MeterTitleInputZone][!Redraw]
UpdateDivider=50000
DynamicVariables=1

[MeasureCalc]
Measure=Calc
Formula=(#Color#=0)?1:0

[MeterSquare]
Meter=Shape
Shape=Rectangle (#Spacing#*#Scale#),(#Spacing#*#Scale#),((#SkinW#*64-#Spacing#*2)*#Scale#),((#SkinH#*64-#Spacing#*2)*#Scale#),(8*#Arched#*#Scale#),(8*#Arched#*#Scale#) | Fill Color 0,0,0,0 | Stroke Color #ThemeColor_LightShadow# | StrokeWidth (#Spacing#*#Scale#)
Shape2=Rectangle (#Spacing#*#Scale#),(#Spacing#*#Scale#),((#SkinW#*64-#Spacing#*2)*#Scale#),((#SkinH#*64-#Spacing#*2)*#Scale#),(8*#Arched#*#Scale#),(8*#Arched#*#Scale#) | Fill Color 0,0,0,0 | Stroke Color #ThemeColor_LightShadow# | StrokeWidth (#Spacing#*2*#Scale#)
Shape3=Rectangle (#Spacing#*#Scale#),(#Spacing#*#Scale#),((#SkinW#*64-#Spacing#*2)*#Scale#),((#SkinH#*64-#Spacing#*2)*#Scale#),(8*#Arched#*#Scale#),(8*#Arched#*#Scale#) | Fill Color [#ColorBack_[&mDM]_[#Color]] | Stroke Color #ThemeColor_Shadow#
DynamicVariables=1

[MeterZone]
Meter=Shape
MeterStyle=MeterSquare_Zone

[MeterTBar]
Meter=Shape
Shape=Rectangle 0,0,(#SkinW#*64*#Scale#),((48-#HideTBar#*38)*#Scale#),0,0 | Fill Color [#ColorTBar_[&mDM]_[#Color]] | StrokeWidth 0
Shape2=Rectangle (#Spacing#*#Scale#),(#Spacing#*#Scale#),((#SkinW#*64-#Spacing#*2)*#Scale#),((#SkinH#*64-#Spacing#*2)*#Scale#-#CLASSICAL#),(8*#Arched#*#Scale#),(8*#Arched#*#Scale#) | Fill Color 255,255,255,(64*#Light#) | StrokeWidth 0
Shape3=Rectangle (#Spacing#*#Scale#),((#Spacing#+1)*#Scale#),((#SkinW#*64-#Spacing#*2)*#Scale#),((#SkinH#*64-#Spacing#*2)*#Scale#-#CLASSICAL#),(8*#Arched#*#Scale#),(8*#Arched#*#Scale#)
Shape4=Combine Shape2 | Exclude Shape3
Hidden=((#HideTBar#=0)?0:((&mDM#<1)?1:((#Color#=0)?1:0)))
DynamicVariables=1
Container=MeterZone

[Style1]
X=(-40*#Scale#)r
Y=0r
W=(16*#Scale#)
H=(16*#Scale#)
ImageTint=[#ColorIcon_[&mDM]_[#Color]]
DynamicVariables=1
Hidden=#HideTBar#

[Style2]
X=(-40*#Scale#)r
Y=0r
Shape=Rectangle 0,0,(32*#Scale#),(32*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | Fill Color #ThemeColor_BackgroundSelected# | StrokeWidth 0
Hidden=1
DynamicVariables=1
Hidden=#HideTBar#

[MeterIconZone1]
Meter=Shape
X=((#SkinW#*64-44)*#Scale#)
Y=(10*#Scale#)
MeterStyle=Style2

[MeterIconZone2]
Meter=Shape
MeterStyle=Style2

[MeterIconMore]
Meter=Image
ImageName=#@#Bitmap\More
MeterStyle=Style1
X=((#SkinW#*64-36)*#Scale#)
Y=(18*#Scale#)
MouseOverAction=[!ShowMeter MeterIconZone1][!Redraw]
MouseLeaveAction=[!HideMeter MeterIconZone1][!Redraw]
LeftMouseUpAction=#GeneralAction11#

[MeterIconEdit]
Meter=Image
ImageName=#@#Bitmap\Edit
MeterStyle=Style1
MouseOverAction=[!ShowMeter MeterIconZone2][!Redraw]
MouseLeaveAction=[!HideMeter MeterIconZone2][!Redraw]
LeftMouseUpAction=[!CommandMeasure MeasureInput1 "ExecuteBatch 1"][!ShowMeter MeterText1InputZone][!Redraw]

[MeterTitleInputZone]
Meter=Shape
X=(12*#Scale#)
Y=(10*#Scale#)
Shape=Rectangle 0,0,((#SkinW#*64-60-40)*#Scale#),(36*#Scale#),4,4 | Fill Color #ThemeColor_TextInputer# | StrokeWidth 0
Shape2=Rectangle 0,0,((#SkinW#*64-60-40)*#Scale#),(36*#Scale#),4,4 | Fill Color #ThemeColor_General# | StrokeWidth 0
Shape3=Rectangle 0,(-2*#Scale#),((#SkinW#*64-60-40)*#Scale#),(36*#Scale#),4,4
Shape4=Combine Shape2 | Exclude Shape3
DynamicVariables=1
Hidden=1

[MeterText1InputZone]
Meter=Shape
X=0r
Y=((56-#HideTBar#*42)*#Scale#)
Shape=Rectangle 0,0,((#SkinW#*64-26)*#Scale#),((#SkinH#*64-68+#HideTBar#*42)*#Scale#),4,4 | Fill Color #ThemeColor_TextInputer# | StrokeWidth 0
Shape2=Rectangle 0,0,((#SkinW#*64-26)*#Scale#),((#SkinH#*64-68+#HideTBar#*42)*#Scale#),4,4 | Fill Color #ThemeColor_General# | StrokeWidth 0
Shape3=Rectangle 0,(-2*#Scale#),((#SkinW#*64-26)*#Scale#),((#SkinH#*64-68+#HideTBar#*42)*#Scale#),4,4
Shape4=Combine Shape2 | Exclude Shape3
DynamicVariables=1
Hidden=1

[MeterTitle]
Meter=String
Text=#Title#
Y=(26*#Scale#)
W=((#SkinW#*64-64-40)*#Scale#)
ClipString=1
MeterStyle=FontStyle_SmallTitle
;StringStyle=[#StringStyle_[&mDM]]
FontColor=[#ColorIcon_[&mDM]_[#Color]]
DynamicVariables=1
Hidden=#HideTBar#
MouseActionCursor=1
MouseActionCursorName=TEXT
LeftMouseUpAction=[!CommandMeasure MeasureInput2 "ExecuteBatch 1"][!ShowMeter MeterTitleInputZone][!Redraw]

[MeterText1]
Meter=STRING
Text=#StickyNotes#
X=0r
Y=((58-#HideTBar#*42)*#Scale#)
W=((#SkinW#*64-26)*#Scale#)
H=((#SkinH#*64-68+#HideTBar#*42)*#Scale#)
ClipString=2
MeterStyle=FontStyle_General
FontColor=[#ColorText_[&mDM]_[#Color]]
;StringAlign=LeftCenter
DynamicVariables=1