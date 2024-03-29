[Rainmeter]
Update=1000
RightMouseUpAction=[!SkinCustomMenu]
ContextTitle=#OT.Open# #T.Referenced_folder#
ContextTitle2=#OT.Change#
ContextTitle3=-
ContextTitle4=#OT.Add_Another#
ContextTitle5=#OT.Alternative#
ContextTitle6=#OT.Skin_Settings#
ContextTitle7=#OT.GlobalSettings#
ContextTitle8=-
ContextTitle9=#OT.Refresh#
ContextTitle10=#OT.Unload#
ContextTitle11=#OT.More#
ContextAction=["#CustomAction1#"]
ContextAction2=[!UpdateMeasure MeasureQuote][!Update][!Redraw]
ContextAction3=[]
ContextAction4=[]
ContextAction5=#GeneralAction2#
ContextAction6=#GeneralAction11#
ContextAction7=#GeneralAction4#
ContextAction8=[]
ContextAction9=#GeneralAction5#
ContextAction10=#GeneralAction6#
ContextAction11=#GeneralAction7#

[Variables]
@Include=#@#Global.inc
@Include2=#@#Global_Chameleon.inc
CustomAction1=#Path#
BeginX=0
BeginY=0
BoardAlpha=0
ImageAlpha=0

ChameleonImagePath=[MeasureQuote]

ES_AOF_0=[!CommandMeasure MeasureFade "Execute 1"][!ShowMeterGroup Buttons][!Redraw]
ES_A0U_0=[!CommandMeasure MeasureFade "Execute 2"][!HideMeterGroup Buttons][!Redraw]
ES_AOF_1=[!ShowMeterGroup Buttons][!ShowMeter MeterEffect0][!Redraw]
ES_A0U_1=[!HideMeterGroup Buttons][!HideMeter MeterEffect0][!Redraw]

[MeasureFade]
Measure=Plugin
Plugin=ActionTimer
ActionList1=Repeat FadeInBoard,8,10
ActionList2=Repeat FadeOutBoard,8,10
FadeInBoard=[!SetVariable BoardAlpha "(Clamp((#BoardAlpha#+0.100),0,1))"][!UpdateMeasure MeasureFade][!UpdateMeter MeterEffect][!Redraw]
FadeOutBoard=[!SetVariable BoardAlpha "(Clamp((#BoardAlpha#-0.100),0,1))"][!UpdateMeasure MeasureFade][!UpdateMeter MeterEffect][!Redraw]
DynamicVariables=1

; ============================= Measures =============================

[MeasureQuote]
Measure=Plugin
Plugin=QuotePlugin
PathName=#Path#
Subfolders=1
FileFilter=*.jpg;*.gif;*.png;*.jpeg;*.bmp
UpdateDivider=(#Update#)
DynamicVariables=1
OnUpdateAction=

; ============================= Meters =============================

[MeterSquare]
Meter=Shape
MeterStyle=MeterSquare_General

[MeterZone]
Meter=Shape
Shape=Rectangle (#Spacing#*#Scale#),(#Spacing#*#Scale#),((#SkinW#*64-#Spacing#*2)*#Scale#),((#SkinH#*64-#Spacing#*2)*#Scale#),(8*#Arched#*#Scale#),(8*#Arched#*#Scale#) | StrokeWidth 0
DynamicVariables=1

[MeterImage]
Meter=Image
ImageName=[MeasureQuote]
W=((#SkinW#*64)*#Scale#)
H=((#SkinH#*64)*#Scale#)
PreserveAspectRatio=2
DynamicVariables=1
Container=MeterZone
MouseOverAction=[#ES_AOF_[#EnergySaving]]
MouseLeaveAction=[#ES_A0U_[#EnergySaving]]
;LeftMouseUpAction=["[MeasureQuote]"][!Redraw]


[MeterLightEffect]
Meter=Shape
Shape=Rectangle (#Spacing#*#Scale#),(#Spacing#*#Scale#),((#SkinW#*64-#Spacing#*2)*#Scale#),((#SkinH#*64-#Spacing#*2)*#Scale#),(8*#Arched#*#Scale#),(8*#Arched#*#Scale#) | Fill Color 255,255,255,(64*#Light#) | StrokeWidth 0
Shape2=Rectangle (#Spacing#*#Scale#),((#Spacing#+1)*#Scale#),((#SkinW#*64-#Spacing#*2)*#Scale#),((#SkinH#*64-#Spacing#*2)*#Scale#),(8*#Arched#*#Scale#),(8*#Arched#*#Scale#)
Shape3=Combine Shape | Exclude Shape2
DynamicVariables=1

[MeterEffect]
Meter=Shape
Shape=Rectangle ((4+#Spacing#)*#Scale#),(#CURRENTCONFIGHEIGHT#-(44+6)*#Scale#),((#SkinW#*64-8-#Spacing#*2)*#Scale#),(44*#Scale#),(6*#Arched#*#Scale#),(6*#Arched#*#Scale#) | Fill Color [caaBG1],(255*#BoardAlpha#) | StrokeWidth 0
Shape2=Rectangle ((4+#Spacing#)*#Scale#),(#CURRENTCONFIGHEIGHT#-(44+6)*#Scale#),((#SkinW#*64-8-#Spacing#*2)*#Scale#),(44*#Scale#),(6*#Arched#*#Scale#),(6*#Arched#*#Scale#) | Fill Color 255,255,255,(64*#BoardAlpha#*#Light#) | StrokeWidth 0
Shape3=Rectangle ((4+#Spacing#)*#Scale#),(#CURRENTCONFIGHEIGHT#-(44+5)*#Scale#),((#SkinW#*64-8-#Spacing#*2)*#Scale#),(44*#Scale#),(6*#Arched#*#Scale#),(6*#Arched#*#Scale#)
Shape4=Combine Shape2 | Exclude Shape3
DynamicVariables=1

[MeterEffect0]
Meter=Shape
Shape=Rectangle ((4+#Spacing#)*#Scale#),(#CURRENTCONFIGHEIGHT#-(44+6)*#Scale#),((#SkinW#*64-8-#Spacing#*2)*#Scale#),(44*#Scale#),(6*#Arched#*#Scale#),(6*#Arched#*#Scale#) | Fill Color [caaBG1],(255*1) | StrokeWidth 0
Shape2=Rectangle ((4+#Spacing#)*#Scale#),(#CURRENTCONFIGHEIGHT#-(44+6)*#Scale#),((#SkinW#*64-8-#Spacing#*2)*#Scale#),(44*#Scale#),(6*#Arched#*#Scale#),(6*#Arched#*#Scale#) | Fill Color 255,255,255,(64*1*#Light#) | StrokeWidth 0
Shape3=Rectangle ((4+#Spacing#)*#Scale#),(#CURRENTCONFIGHEIGHT#-(44+5)*#Scale#),((#SkinW#*64-8-#Spacing#*2)*#Scale#),(44*#Scale#),(6*#Arched#*#Scale#),(6*#Arched#*#Scale#)
Shape4=Combine Shape2 | Exclude Shape3
Hidden=1
DynamicVariables=1

[MeterText]
Meter=String
Text=#T.Photos##CRLF#[MeasureQuote]
X=(16*#Scale#)
Y=(#CURRENTCONFIGHEIGHT#-28*#Scale#)
W=(#CURRENTCONFIGWIDTH#-130*#Scale#)
ClipString=1
MeterStyle=FontStyle_General
FontColor=[caaFG1],128
FontSize=(8*#Scale#)
StringAlign=LeftCenter
InlineSetting=Size | (12*#Scale#)
InlinePattern=#T.Photos#
InlineSetting2=Color | [caaFG1]
InlinePattern2=#T.Photos#
Group=Buttons
Hidden=1

[B]
X=(-28*#Scale#)r
Y=0r
H=(16*#Scale#)
W=(16*#Scale#)
DynamicVariables=1
ImageTint=[caaFG1]
Group=Buttons
Hidden=1

[B1]
Meter=Image
MeterStyle=B
ImageName=#@#Bitmap\More
X=(#CURRENTCONFIGWIDTH#-36*#Scale#)
Y=(#CURRENTCONFIGHEIGHT#-36*#Scale#)
LeftMouseUpAction=#GeneralAction11#

[B2]
Meter=Image
MeterStyle=B
ImageName=#@#Bitmap\Folder
LeftMouseUpAction=["#Path#"][!Redraw]

[B3]
Meter=Image
MeterStyle=B
ImageName=#@#Bitmap\Reload
LeftMouseUpAction=[!UpdateMeasure MeasureQuote][!Update][!Redraw]

[B4]
Meter=Image
MeterStyle=B
ImageName=#@#Bitmap\Open
LeftMouseUpAction=["[MeasureQuote]"]
