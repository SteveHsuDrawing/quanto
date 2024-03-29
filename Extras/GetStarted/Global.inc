[Variables]
SkinW=18
SkinH=9
BoardAlpha=0
AniImage=0

[MeasureFade]
Measure=Plugin
Plugin=ActionTimer
ActionList1=Repeat FadeInBoard,8,32
ActionList2=Repeat FadeOutBoard,8,32
FadeInBoard=[!SetVariable BoardAlpha "(Clamp((#BoardAlpha#+32*#Alpha_Scale#),0,(#Alpha#/4*5)))"][!UpdateMeasure MeasureFade][!UpdateMeter MeterSquareUnselected][!Redraw]
FadeOutBoard=[!SetVariable BoardAlpha "(Clamp((#BoardAlpha#-32*#Alpha_Scale#),0,(#Alpha#/4*5)))"][!UpdateMeasure MeasureFade][!UpdateMeter MeterSquareUnselected][!Redraw]
DynamicVariables=1

[MeasureAnimation_Image]
Measure=Plugin
Plugin=ActionTimer
ActionList1=Repeat ImageIn,8,20
ActionList2=Repeat ImageOut,8,20
ImageIn=[!SetVariable AniImage "(Clamp((#AniImage#+0.050),0,1))"][!UpdateMeasure MeasureAnimation_Image][!UpdateMeter mTI][!Redraw]
ImageOut=[!SetVariable AniImage "(Clamp((#AniImage#-0.050),0,1))"][!UpdateMeasure MeasureAnimation_Image][!UpdateMeter mTI][!Redraw]
DynamicVariables=1

[Rainmeter]
Update=-1
DynamicVariables=1
RightMouseUpAction=[!SkinCustomMenu]
OnRefreshAction=[!SetWindowPosition 50% 50% 50% 50%][!Delay 500][!CommandMeasure MeasureAnimation_Image "Execute 1"][!Redraw]
OnFocusAction=[!CommandMeasure MeasureFade "Execute 2"][!Redraw]
OnUnfocusAction=[!CommandMeasure MeasureFade "Execute 1"][!Redraw]
LeftMouseUpAction=[]
LeftMouseDownAction=[]

DefaultAlwaysOnTop=0
DefaultDraggable=0

Group=Extras

ContextTitle=#OT.Unload#
ContextAction=#GeneralAction6#[!WriteKeyValue Variables Page 10]

[TI]
X=((576*(1+(#AniImage#-1)**4))*#Scale#)
Y=0
W=(576*#Scale#)
H=(576*#Scale#)
ImageName=#@#Bitmap\GetStarted_#Page#
Container=MeterSquareZone
Hidden=#HideAtFirst#
DynamicVariables=1

[TT]
FontFace=#FontFace_General#
FontColor=#FontColor_General#
Text=[#GetStarted.[#Page]_Title]
X=(64*#Scale#)
Y=(48*#Scale#)
W=(64*7*#Scale#)
ClipString=2
FontSize=(36*#Scale#)
AntiAlias=1
DynamicVariables=1

[TC]
FontFace=#FontFace_General#
Text=[#GetStarted.[#Page]_Cntnt]
X=0r
Y=(32*#Scale#)R
W=(64*7*#Scale#)
ClipString=2
FontSize=(16*#Scale#)
FontColor=#FontColor_General#,192
AntiAlias=1
DynamicVariables=1

[MB]
X=0r
Y=(32*#Scale#)R
DynamicVariables=1
MouseOverAction=[!ShowMeter mBH][!Redraw]
MouseLeaveAction=[!HideMeter mBH][!Redraw]

[MB1]
Shape=Rectangle 0,0,(192*#Scale#),(36*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color 0,0,0,0 | Stroke Color #ThemeColor_BarBorder#
Shape2=Rectangle 0,0,(192*#Scale#),(36*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_General# | StrokeWidth 0
LeftMouseUpAction=[!HideMeterGroup ANI][!ShowMeter mTI][!CommandMeasure MeasureAnimation_Image "Execute 2"][!WriteKeyValue Variables Page (#Page#+1)][!Delay 500][!Refresh]

[MB2]
Shape=Rectangle 0,0,(192*#Scale#),(36*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color 0,0,0,0 | StrokeWidth 0
Shape2=Rectangle 0,0,(192*#Scale#),(36*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #FontColor_General#,96 | StrokeWidth 0
Shape3=Rectangle 0,(-1*#Scale#),(192*#Scale#),(36*#Scale#),(4*#Scale#),(4*#Scale#)
Shape4=Combine Shape2 | Exclude Shape3
LeftMouseUpAction=[!HideMeterGroup ANI][!ShowMeter mTI][!CommandMeasure MeasureAnimation_Image "Execute 2"][!Delay 500][!Refresh]

[BH]
X=0r
Y=0r
Shape=Rectangle 0,0,(192*#Scale#),(36*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_BackgroundSelectedLight# | Stroke Color 0,0,0,0
DynamicVariables=1
Hidden=1

[BT1]
X=((96*#Scale#))r
Y=((18*#Scale#))r
Text=#T.Next#
FontFace=#FontFace_General#
FontColor=#FontColor_Choosen#
FontSize=(12*#Scale#)
AntiAlias=1
StringAlign=CenterCenter
DynamicVariables=1

[BT2]
X=((96*#Scale#))r
Y=((18*#Scale#))r
Text=#T.Repeat#
FontFace=#FontFace_General#
FontColor=#ThemeColor_General#
FontSize=(12*#Scale#)
AntiAlias=1
StringAlign=CenterCenter
DynamicVariables=1



[MeterSmallButtonStart]
X=((#SkinW#*64-576-128)*#Scale#)
Y=((#SkinH#*64-60)*#Scale#)

[MeterSmallButtonUnavailableStyle]
X=((46*#Scale#))r
Y=0r
Shape=Rectangle 0,0,(40*#Scale#),(40*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color 0,0,0,0 | Stroke Color #ThemeColor_BarBorder#
Shape2=Rectangle 0,0,(40*#Scale#),(40*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_BackgroundNoAlpha#,(#Alpha#/2) | StrokeWidth 0
DynamicVariables=1

[MeterSmallButtonAvailableStyle]
X=((46*#Scale#))r
Y=0r
Shape=Rectangle 0,0,(40*#Scale#),(40*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color 0,0,0,0 | Stroke Color #ThemeColor_BarBorder#
Shape2=Rectangle 0,0,(40*#Scale#),(40*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_OptionAlpha# | StrokeWidth 0
DynamicVariables=1

[MeterSmallButtonHoverStyle]
X=((46*#Scale#))r
Y=0r
Shape=Rectangle 0,0,(40*#Scale#),(40*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_BackgroundSelectedLight# | StrokeWidth 0
Hidden=1
DynamicVariables=1

[MeterPrvsButtonUnavailable]
Meter=Shape
MeterStyle=MeterSmallButtonUnavailableStyle | MeterSmallButtonStart

[MeterNextButtonUnavailable]
Meter=Shape
MeterStyle=MeterSmallButtonUnavailableStyle

[MeterImageStyle]
X=((46*#Scale#))r
Y=0r
W=(16*#Scale#)
H=(16*#Scale#)
DynamicVariables=1

[MeterImageUnavailableStyle]
ImageTint=#FontColor_General#,128

[MeterImageAvailableStyle]
ImageTint=#FontColor_General#

[MeterImagePrvsUnavailable]
Meter=Image
ImageName=#@#Bitmap\Arrow Left
X=((#SkinW#*64-576-128+12)*#Scale#)
Y=((#SkinH#*64-60+12)*#Scale#)
MeterStyle=MeterImageStyle | MeterImageUnavailableStyle

[MeterImageNextUnavailable]
Meter=Image
ImageName=#@#Bitmap\Arrow Right
MeterStyle=MeterImageStyle | MeterImageUnavailableStyle

[MeterPrvsButton]
Meter=Shape
MeterStyle=MeterSmallButtonAvailableStyle | MeterSmallButtonStart
Hidden=#HidePrvsB#
MouseOverAction=[!ShowMeter MeterPrvsButtonHover][!Redraw]
MouseLeaveAction=[!HideMeter MeterPrvsButtonHover][!Redraw]
LeftMouseUpAction=[!HideMeterGroup ANI][!ShowMeter mTI][!CommandMeasure MeasureAnimation_Image "Execute 2"][!Delay 500][!WriteKeyValue Variables Page (#Page#-1)][!Refresh]

[MeterNextButton]
Meter=Shape
MeterStyle=MeterSmallButtonAvailableStyle
Hidden=#HideNextB#
MouseOverAction=[!ShowMeter MeterNextButtonHover][!Redraw]
MouseLeaveAction=[!HideMeter MeterNextButtonHover][!Redraw]
LeftMouseUpAction=[!HideMeterGroup ANI][!ShowMeter mTI][!CommandMeasure MeasureAnimation_Image "Execute 2"][!Delay 500][!WriteKeyValue Variables Page (#Page#+1)][!Refresh]

[MeterPrvsButtonHover]
Meter=Shape
MeterStyle=MeterSmallButtonHoverStyle | MeterSmallButtonStart

[MeterNextButtonHover]
Meter=Shape
MeterStyle=MeterSmallButtonHoverStyle

[MeterImagePrvsAvailable]
Meter=Image
ImageName=#@#Bitmap\Arrow Left
X=((#SkinW#*64-576-128+12)*#Scale#)
Y=((#SkinH#*64-60+12)*#Scale#)
MeterStyle=MeterImageStyle | MeterImageAvailableStyle
Hidden=#HidePrvsB#

[MeterImageNextAvailable]
Meter=Image
ImageName=#@#Bitmap\Arrow Right
MeterStyle=MeterImageStyle | MeterImageAvailableStyle
Hidden=#HideNextB#

[MeterDisplayPage]
Meter=String
X=((#SkinW#*64-576-128-10)*#Scale#)
Y=((#SkinH#*64-60+20)*#Scale#)
Text=#DisplayPage#
MeterStyle=FontStyle_General
StringAlign=RightCenter
