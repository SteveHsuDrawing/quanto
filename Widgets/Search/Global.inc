[Rainmeter]
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

; ============================= Measures =============================

[MeasureSearchEngine]
Measure=Calc
Formula="0":"Baidu","1":"Microsoft_Bing","2":"Google","3":"Wikipedia"

[MeasureSearchEngineLink]
Measure=String
String=#SearchEngine#
Substitute="0":"https://www.baidu.com/s?wd=","1":"https://#bing#/search?q=","2":"https://google.com/search?q=","3":"https://#languageCode#.wikipedia.org/w/index.php?title=Special:#Widgets_Search_Text.0#&search="

[MeasureInput]
Measure=Plugin
Plugin=InputText.dll
SolidColor=#ThemeColor_BackgroundNoAlpha#
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(10*#Scale#)
AntiAlias=1
X=(52*#Scale#)
Y=(21*#Scale#)
W=((#SkinW#*64-66)*#Scale#)
H=(24*#Scale#)
FocusDismiss=1
DefaultValue=""
Command1=[[MeasureSearchEngineLink]$UserInput$][!HideMeter MeterBar][!Redraw]
OnDismissAction=[!HideMeter MeterBar][!Redraw][!ZPos -1]
UpdateDivider=50000
DynamicVariables=1

[MeasureHotKey]
Measure=Plugin
Plugin=HotKey
HotKey=CTRL /
KeyDownAction=[!CommandMeasure MeasureInput "ExecuteBatch 1"][!ShowMeter MeterBar][!ZPos 1][!Redraw]

; ============================= Meters =============================

[MeterSquare]
Meter=Shape
MeterStyle=MeterSquare_General
MouseActionCursor=1
MouseActionCursorName=TEXT
MouseOverAction=[!ShowMeter MeterSquareSelected][!Redraw]
MouseLeaveAction=[!HideMeter MeterSquareSelected][!Redraw]
LeftMouseUpAction=[!CommandMeasure MeasureInput "ExecuteBatch 1"][!ShowMeter MeterBar]
DynamicVariables=1

[MeterBar]
Meter=Shape
Shape=Rectangle (#Spacing#*#Scale#),(#Spacing#*#Scale#),((#SkinW#*64-#Spacing#*2)*#Scale#),((#SkinH#*64-#Spacing#*2)*#Scale#),(8*#Arched#*#Scale#),(8*#Arched#*#Scale#) | Fill Color #ThemeColor_General# | Stroke Color #ThemeColor_Shadow#
Shape2=Rectangle (#Spacing#*#Scale#),((#Spacing#-2)*#Scale#),((#SkinW#*64-#Spacing#*2)*#Scale#),((#SkinH#*64-#Spacing#*2)*#Scale#),(8*#Arched#*#Scale#),(8*#Arched#*#Scale#)
Shape3=Combine Shape | Exclude Shape2
DynamicVariables=1
Hidden=1

[MeterIcon]
Meter=Image
ImageName=#@#Bitmap\Search.png
X=(22*#Scale#)
Y=(22*#Scale#)
H=(18*#Scale#)
W=(18*#Scale#)
ImageTint=#FontColor_General#
DynamicVariables=1

[MeterText1]
Meter=String
Text=[#T.SearchEngine.[#SearchEngine]]
MeterStyle=FontStyle_General
X=(52*#Scale#)
Y=(32*#Scale#)
W=((#SkinW#*64-66)*#Scale#)
StringAlign=LeftCenter
AntiAlias=1
DynamicVariables=1

[MeterIconHotKey]
Meter=Image
ImageName=#@#Bitmap\Hot Key (CTRL+Slash).png
X=(#CURRENTCONFIGWIDTH#-80*#Scale#)
Y=(16*#Scale#)
H=(32*#Scale#)
PreserveAspectRatio=2
ImageTint=#FontColor_General#,128
DynamicVariables=1

[MeterSquareSelected]
Meter=Shape
MeterStyle=MeterSquareSelected_General