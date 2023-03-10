[Variables]
@Include=#@#Global.inc
@Include2=#@#Settings.inc
@Include3=Settings.inc
@Include4=#@#TimeFormat\#TimeFormat_Global#.inc
BeginX=0
BeginY=0
FadeResult=0


[Rainmeter]
Blur=0
BlurRegion=0

RightMouseUpAction=[!SkinCustomMenu]
ContextTitle=#OT.Skin_Settings#
ContextTitle2=#OT.GlobalSettings#
ContextTitle3=-
ContextTitle4=#OT.Refresh#
ContextTitle5=#OT.Unload#
ContextTitle6=#OT.More#
ContextAction=#GeneralAction11#
ContextAction2=#GeneralAction4#
ContextAction3=[]
ContextAction4=#GeneralAction5#
ContextAction5=#GeneralAction6#
ContextAction6=#GeneralAction7#

BackgroundMode=2
SolidColor=255,255,255,1
MouseOverAction=[!ShowMeterGroup MovingZone][!CommandMeasure MeasureFade "Execute 1"][!Redraw]
MouseLeaveAction=[!HideMeterGroup MovingZone][!CommandMeasure MeasureFade "Execute 2"][!Redraw]
Group=Extras
DynamicWindowSize=1

[MeasureFade]
Measure=Plugin
Plugin=ActionTimer
ActionList1=Repeat FadeIn,8,8
ActionList2=Repeat FadeOut,16,8
FadeIn=[!SetVariable FadeResult "(Clamp((#FadeResult#+4),0,32))"][!UpdateMeasure MeasureFade][!UpdateMeter MeterMovingZone2][!Redraw]
FadeOut=[!SetVariable FadeResult "(Clamp((#FadeResult#-4),0,32))"][!UpdateMeasure MeasureFade][!UpdateMeter MeterMovingZone2][!Redraw]
DynamicVariables=1

[MeasureTime]
Measure=Time

[MeasureTimeM]
Measure=Time
Format=#VariableTimeM#
Substitute="AM":"#T.AM#","PM":"#T.PM#"

[MeasureTimeAMPM]
Measure=Time
Format=#TimeFormat.3# #VariableTimeAMPM#
Substitute="January":"#T.January#","February":"#T.February#","March":"#T.March#","April":"#T.April#","May":"#T.May#","June":"#T.June#","July":"#T.July#","August":"#T.August#","September":"#T.September#","October":"#T.October#","November":"#T.November#","December":"#T.December#","Jan":"#T.Jan#","Feb":"#T.Feb#","Mar":"#T.Mar#","Apr":"#T.Apr#","May":"#T.May#","Jun":"#T.Jun#","Jul":"#T.Jul#","Aug":"#T.Aug#","Sep":"#T.Sep#","Oct":"#T.Oct#","Nov":"#T.Nov#","Dec":"#T.Dec#","Sunday":"#T.Sunday#","Monday":"#T.Monday#","Tuesday":"#T.Tuesday#","Wednesday":"#T.Wednesday#","Thursday":"#T.Thursday#","Friday":"#T.Friday#","Saturday":"#T.Saturday#","AM":"#T.AM#","PM":"#T.PM#"

[MeasureSecond]
Measure=Time
Format=#VariableTimeM# %S

[MeasureBlurIndex]
Measure=String
String=0

[MeasureBlur]
Measure=Plugin
Plugin=FrostedGlass
Type=None

[MeterText1]
Meter=STRING
Text=[MeasureTimeM]
X=(96*#XFix#*#Scale#*#Scale_Custom#)
W=(192*#Scale#*#Scale_Custom#)
FontFace=#FontFace_General#
FontColor=#FontColor_Custom#
FontSize=(12*#Scale_Custom#*#Scale#)
DynamicVariables=1
AntiAlias=1
StringEffect=Border
StringAlign=#StringAlign#
FontEffectColor=0,0,0,16
InlineSetting=Size | (12*#Scale_Custom#*#Scale#*3.5)
InlinePattern=(\d)
InlineSetting2=Weight | (300+200*#Bold#)
InlinePattern2=(\d)
InlineSetting3=Size | (12*#Scale_Custom#*#Scale#*3.5)
InlinePattern3=:
InlineSetting4=Weight | (300+200*#Bold#)
InlinePattern4=:

[MeterText3]
Meter=STRING
Text=[MeasureTimeAMPM]
X=0r
Y=0R
FontFace=#FontFace_General#
FontColor=#FontColor_Custom#
FontSize=(12*#Scale_Custom#*#Scale#)
DynamicVariables=1
AntiAlias=1
StringEffect=Border
StringAlign=#StringAlign#
FontEffectColor=0,0,0,16

[MeterMovingZone]
Meter=Shape
X=(8*#Scale#)
Y=(8*#Scale#)
MeterStyle=MeterMovingZoneStyle

[MeterMovingImage]
Meter=Image
MeterStyle=MeterMovingImageStyle

[MeterMovingZone2]
Meter=Shape
Shape=Rectangle (1*#Scale#),(1*#Scale#),(#CURRENTCONFIGWIDTH#-2*#Scale#),(#CURRENTCONFIGHEIGHT#-2*#Scale#),(8*#Arched#*#Scale#),(8*#Arched#*#Scale#) | Fill Color #ThemeColor_BackgroundNoAlpha#,#FadeResult# | StrokeWidth (2*#Scale#) | Stroke Color #ThemeColor_BackgroundNoAlpha#,(#FadeResult#*8)
DynamicVariables=1
;Group=MovingZone
Hidden=0

[MeterSquareHover]
Meter=String
Text=""
Hidden=1