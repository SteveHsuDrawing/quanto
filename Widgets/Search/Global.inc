[Rainmeter]
Update=-1

RightMouseUpAction=[!SkinCustomMenu]
ContextTitle=#OT.Alternative#
ContextTitle2=#OT.Skin_Settings#
ContextTitle3=#OT.GlobalSettings#
ContextTitle4=-
ContextTitle5=#OT.Refresh#
ContextTitle6=#OT.Unload#
ContextTitle7=#OT.More#

ContextAction=#GeneralAction2#
ContextAction2=#GeneralAction11#
ContextAction3=#GeneralAction4#
ContextAction4=[]
ContextAction5=#GeneralAction5#
ContextAction6=#GeneralAction6#
ContextAction7=#GeneralAction7#

MouseOverAction=[!ShowMeterGroup MovingZone][!Redraw]
MouseLeaveAction=[!HideMeterGroup MovingZone][!Redraw]

[Variables]
L.0=https://www.baidu.com/s?wd=
L.1=https://#bing#/search?q=
L.2=https://google.com/search?q=
L.3=https://#languageCode#.wikipedia.org/w/index.php?title=Special:#Quanto.Widgets_Search.Name#&search=
L.4=https://yandex.com/search/?text=

; ============================= Measures =============================

[MeasureSearchEngineLink]
Measure=String
String=#SearchEngine#
Substitute="0":"","1":"","2":"","3":""

[MeasureInput]
Measure=Plugin
Plugin=InputText.dll
SolidColor=#ThemeColor_TextInputer#
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(10*#Scale#)
AntiAlias=1
X=(52*#Scale#)
Y=(20*#Scale#)
W=((#SkinW#*64-66)*#Scale#)
H=(24*#Scale#)
FocusDismiss=1
DefaultValue=""
Command1=["[#L.[#SearchEngine]]$UserInput$"][!HideMeter MeterBar][!Redraw]
OnDismissAction=[!HideMeter MeterBar][!Redraw]
UpdateDivider=50000
DynamicVariables=1

[MeasureHotKey]
Measure=Plugin
Plugin=HotKey
HotKey=#HotKey#
KeyDownAction=[!CommandMeasure MeasureInput "ExecuteBatch 1"][!ShowMeter MeterBar][!Redraw]

; ============================= Meters =============================

[MeterSquare]
Meter=Shape
MeterStyle=MeterSquare_General
MouseActionCursor=1
MouseActionCursorName=TEXT
MouseOverAction=[!ShowMeter MeterSquareSelected][!Redraw]
MouseLeaveAction=[!HideMeter MeterSquareSelected][!Redraw]
LeftMouseUpAction=[!CommandMeasure MeasureInput "ExecuteBatch 1"][!ShowMeter MeterBar][!Redraw]
DynamicVariables=1

[MeterSquareSelected]
Meter=Shape
MeterStyle=MeterSquareSelected_General

[MeterBar]
Meter=Shape
Shape=Rectangle (#Spacing#*#Scale#),(#Spacing#*#Scale#),((#SkinW#*64-#Spacing#*2)*#Scale#),((#SkinH#*64-#Spacing#*2)*#Scale#),(8*#Arched#*#Scale#),(8*#Arched#*#Scale#) | Fill Color #ThemeColor_TextInputer# | StrokeWidth 0
Shape2=Rectangle (#Spacing#*#Scale#),(#Spacing#*#Scale#),((#SkinW#*64-#Spacing#*2)*#Scale#),((#SkinH#*64-#Spacing#*2)*#Scale#),(8*#Arched#*#Scale#),(8*#Arched#*#Scale#) | Fill Color #ThemeColor_General# | StrokeWidth 0
Shape3=Rectangle (#Spacing#*#Scale#),((#Spacing#-2)*#Scale#),((#SkinW#*64-#Spacing#*2)*#Scale#),((#SkinH#*64-#Spacing#*2)*#Scale#),(8*#Arched#*#Scale#),(8*#Arched#*#Scale#)
Shape4=Combine Shape2 | Exclude Shape3
DynamicVariables=1
Hidden=1

[MeterIcon]
Meter=Image
ImageName=#@#Bitmap\Search Engine [#SearchEngine]
X=(22*#Scale#)
Y=(22*#Scale#)
H=(18*#Scale#)
W=(18*#Scale#)
ImageTint=#FontColor_General#
DynamicVariables=1

[MeterText1]
Meter=String
Text=[#Quanto.Widgets_Search.Name]...
MeterStyle=FontStyle_General
X=(52*#Scale#)
Y=(32*#Scale#)
W=((#SkinW#*64-66)*#Scale#)
StringAlign=LeftCenter
AntiAlias=1
DynamicVariables=1

[MMeterHotKey]
Measure=String
String=#HotKey#
Substitute=" ":" + "

[MeterHotKey]
Meter=String
MeterStyle=FontStyle_General
MeasureName=M#CURRENTSECTION#
X=(#CURRENTCONFIGWIDTH#-24*#Scale#)
Y=(32*#Scale#)
StringAlign=RightCenter
FontColor=#FontColor_General#,128