[Variables]
SkinW=14
SkinH=9
BeginY=88
GapUnscaled=85
Gap=(#GapUnscaled#*#Scale#)
BoardAlpha=0
Fix=[#Default_[#System].Fix]

[Rainmeter]
Update=-1
DynamicVariables=1
RightMouseUpAction=[!SkinCustomMenu]
MiddleMouseUpAction=[]
OnFocusAction=[!SetOptionGroup MainTitle ImageTint #FontColor_General#,255][!SetOptionGroup MainTitle FontColor #FontColor_General#,255][!CommandMeasure MeasureFade "Execute 2"][!Redraw]
OnUnfocusAction=[!SetOptionGroup MainTitle ImageTint #FontColor_General#,128][!SetOptionGroup MainTitle FontColor #FontColor_General#,128][!CommandMeasure MeasureFade "Execute 1"][!Redraw]
Group=Welcome
OnUpdateAction=[!UpdateMeter MeterBlurBorederImage][!Move ((#SCREENAREAWIDTH#/2)-((896*#Scale_Actual#/1.25)/2)) ((#SCREENAREAHEIGHT#/2)-((576*#Scale_Actual#/1.25)/2))]

;ContextTitle=#OT.Refresh#
;ContextTitle2=#OT.Unload#
;ContextTitle3=#OT.More#
;ContextAction=#GeneralAction5#
;ContextAction2=#GeneralAction6#
;ContextAction3=#GeneralAction7#

[MeasureFade]
Measure=Plugin
Plugin=ActionTimer
ActionList1=Repeat FadeInBoard,8,32
ActionList2=Repeat FadeOutBoard,8,32
FadeInBoard=[!SetVariable BoardAlpha "(Clamp((#BoardAlpha#+32*#Alpha_Scale#),0,(#Alpha#/4*5)))"][!UpdateMeasure MeasureFade][!UpdateMeter MeterSquareUnselected][!Redraw]
FadeOutBoard=[!SetVariable BoardAlpha "(Clamp((#BoardAlpha#-32*#Alpha_Scale#),0,(#Alpha#/4*5)))"][!UpdateMeasure MeasureFade][!UpdateMeter MeterSquareUnselected][!Redraw]
DynamicVariables=1




[MeterOptionStyle]
X=0r
Y=((#Gap#))r
Shape=Rectangle 0,0,(490*#Scale#),(80*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_OptionAlpha#
Shape2=Rectangle 0,0,(490*#Scale#),(80*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape3=Rectangle (1*#Scale#),(1*#Scale#),((490-2)*#Scale#),((80-2)*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#)
Shape4=Combine Shape2 | Exclude Shape3
DynamicVariables=1
Group=MouseAction

[MeterOptionSelectedStyle]
X=0r
Y=((#Gap#))r
Shape=Rectangle 0,0,(490*#Scale#),(80*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_BackgroundSelectedLight# | Stroke Color 0,0,0,0
DynamicVariables=1
Hidden=1
Group=Hover

[MeterIconStyle]
X=0r
Y=((#Gap#))r
W=(24*#Scale#)
H=(24*#Scale#)
ImageTint=#FontColor_General#,255

[MeterOptionTitleStyle]
X=0r
Y=((#Gap#))r
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(12*#Scale#)
AntiAlias=1

[MeterOptionTextStyle]
X=0r
Y=((#Gap#))r
FontFace=#FontFace_General#
FontColor=#FontColor_General#,128
FontSize=(10*#Scale#)
W=(184*#Scale#)
ClipString=2
StringAlign=LeftCenter
AntiAlias=1
DynamicVariables=1
InlineSetting=Size | (12*#Scale#)
InlineSetting2=Color | #FontColor_General#

[MeterOptionTextStyleTO]
X=0r
Y=((#Gap#))r
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(12*#Scale#)
W=(184*#Scale#)
ClipString=2
StringAlign=LeftCenter
AntiAlias=1
DynamicVariables=1

[MeterSmallIconStyle]
H=(16*#Scale#)
W=(16*#Scale#)
ImageTint=#FontColor_General#,255

[MeterSwitcherIconStyle]
H=(48*#Scale#)
W=(48*#Scale#)

[MeterTextInputStyle]
Shape=Rectangle 0,0,(200*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_TextInputerAlpha#
Shape2=Rectangle 0,0,(200*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape3=Rectangle (1*#Scale#),(1*#Scale#),(198*#Scale#),(38*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape4=Combine Shape2 | Exclude Shape3
DynamicVariables=1

[TextInputer]
MouseActionCursor=1
MouseActionCursorName=TEXT

[MeterTextInputSelectedStyle]
Shape=Rectangle 0,0,(192*#Scale#),(36*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_BackgroundSelected# | StrokeWidth 0
DynamicVariables=1
Hidden=1

[MeterSmallButtonStyle]
X=(((98)*#Scale#))r
Y=0r
Shape=Rectangle 0,0,(92*#Scale#),(36*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color 0,0,0,0 | Stroke Color #ThemeColor_BarBorder#
Shape2=Rectangle 0,0,(92*#Scale#),(36*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_TextInputerAlpha# | StrokeWidth 0
DynamicVariables=1

[MeterSmallButtonSelectedStyle]
X=(((98)*#Scale#))r
Y=0r
Shape=Rectangle 0,0,(92*#Scale#),(36*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_BackgroundSelected# | StrokeWidth 0
DynamicVariables=1
Hidden=1

[MeterTextInputChoosenStyle]
X=(((98)*#Scale#))r
Y=0r
Shape=Rectangle 0,0,(192*#Scale#),(#Scale#*36),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_General# | Stroke Color 0,0,0,0
Shape2=Rectangle 0,(-2*#Scale#),(192*#Scale#),(#Scale#*36),(4*#Scale#),(4*#Scale#)
Shape3=Combine Shape | Exclude Shape2
DynamicVariables=1
Hidden=1

[MeterTitleStyle]
X=(72*#Scale#)
Y=(12*#Scale#)
DynamicVariables=1
Group=MainTitle

[MeterBackButtonZoneStyle]
Shape=Rectangle (2*#Scale#),(2*#Scale#),(60*#Scale#),(40*#Scale#),(8*#Arched#*#Scale#),(8*#Arched#*#Scale#) | Stroke Color 0,0,0,0
Shape2=Rectangle (54*#Scale#),(2*#Scale#),(10*#Scale#),(40*#Scale#),0,0
Shape3=Rectangle (2*#Scale#),(34*#Scale#),(60*#Scale#),(10*#Scale#),0,0
Shape4=Combine Shape | Union Shape2 | Union Shape3
DynamicVariables=1
MouseOverAction=[!ShowMeter MeterBackButtonSelected][!Redraw]
MouseLeaveAction=[!SetOption MeterBackButton ImageTint "#FontColor_General#"][!HideMeter MeterBackButtonSelected][!Redraw]
LeftMouseDownAction=[!SetOption MeterBackButton ImageTint "#FontColor_General#,128"][!Redraw]

[MeterBackButtonStyle]
X=(2*#Scale#)
Y=(2*#Scale#)
ImageName=#@#Bitmap\Back Button.png
W=(60*#Scale#)
H=(40*#Scale#)
DynamicVariables=1
ImageTint=#FontColor_General#
Container=MeterBackButtonZone
Group=MainTitle

[MeterBackButtonZoneStyle]
Shape=Rectangle (2*#Scale#),(2*#Scale#),(60*#Scale#),(40*#Scale#),(8*#Arched#*#Scale#),(8*#Arched#*#Scale#) | Stroke Color 0,0,0,0
Shape2=Rectangle (54*#Scale#),(2*#Scale#),(10*#Scale#),(40*#Scale#),0,0
Shape3=Rectangle (2*#Scale#),(34*#Scale#),(60*#Scale#),(10*#Scale#),0,0
Shape4=Combine Shape | Union Shape2 | Union Shape3
DynamicVariables=1

[MeterBackButtonSelectedStyle]
Shape=Rectangle (2*#Scale#),(2*#Scale#),(60*#Scale#),(40*#Scale#),(8*#Arched#*#Scale#),(8*#Arched#*#Scale#) | Fill Color #ThemeColor_BackgroundSelected# | Stroke Color 0,0,0,0
Shape2=Rectangle (54*#Scale#),(2*#Scale#),(10*#Scale#),(40*#Scale#),0,0
Shape3=Rectangle (2*#Scale#),(34*#Scale#),(60*#Scale#),(10*#Scale#),0,0
Shape4=Combine Shape | Union Shape2 | Union Shape3
Hidden=1
DynamicVariables=1

[TIB]
X=((#BeginX#+270)*#Scale#)
Y=((#BeginY#+20)*#Scale#)
[TIIB]
X=((#BeginX#+270+200-18-8)*#Scale#)
Y=((#BeginY#+20+20-8)*#Scale#)
[TITB]
X=((#BeginX#+270+8)*#Scale#)
Y=((#BeginY#+40-20+19)*#Scale#)
[CMTB]
X=(16*#Scale#)r
Y=(18*#Scale#)r

[Next]
X=0r
Y=(85*#Scale#)r
[NextT]
X=0r
Y=(40*#Scale#)r

[SOIA_CM]
LeftMouseUpAction=[!ShowMeterGroup G#CURRENTSECTION#][!Redraw]
[SOIA_TI]
LeftMouseUpAction=[!CommandMeasure TI#CURRENTSECTION# "ExecuteBatch 1" ][!ShowMeter C#CURRENTSECTION#][!Redraw]

[STI]
Shape=Rectangle 0,0,(200*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_TextInputerAlpha#
Shape2=Rectangle 0,0,(200*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape3=Rectangle (1*#Scale#),(1*#Scale#),(198*#Scale#),(38*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape4=Combine Shape2 | Exclude Shape3
DynamicVariables=1
MouseOverAction=[!ShowMeter H#CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!HideMeter H#CURRENTSECTION#][!Redraw]

[STIH]
Shape=Rectangle 0,0,(200*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BackgroundSelectedLight#
DynamicVariables=1
Hidden=1

[STIC]
Shape=Rectangle 0,0,(200*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_TextInputer#
Shape2=Rectangle 0,0,(200*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape3=Rectangle (1*#Scale#),(1*#Scale#),(198*#Scale#),(38*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape4=Combine Shape2 | Exclude Shape3
Shape5=Rectangle 0,0,(200*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_General#
Shape6=Rectangle 0,(-2*#Scale#),(200*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#)
Shape7=Combine Shape5 | Exclude Shape6
DynamicVariables=1
Hidden=1

[STIIA]
ImageName=#@#Bitmap\Arrow Down
W=(18*#Scale#)
H=(18*#Scale#)
DynamicVariables=1
ImageTint=#FontColor_General#

[STIIE]
ImageName=#@#Bitmap\Edit
W=(18*#Scale#)
H=(18*#Scale#)
DynamicVariables=1
ImageTint=#FontColor_General#

[STIT]
W=(150*#Scale#)
ClipString=1
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(12*#Scale#)
StringAlign=LeftCenter
AntiAlias=1
DynamicVariables=1

[SCMT]
StringAlign=LeftCenter
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(12*#Scale#)
DynamicVariables=1
AntiAlias=1
W=((200-16-8)*#Scale#)
ClipString=1

[SCMM]
Shape=Rectangle (8*#Scale#),(10*#Scale#),(3*#Scale#),((40-10*2)*#Scale#),(1.5*#Scale#),(1.5*#Scale#) | StrokeWidth 0 | Fill Color #ThemeColor_General#
DynamicVariables=1

[STISq]
Shape=Rectangle 0,0,(40*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_TextInputerAlpha#
Shape2=Rectangle 0,0,(40*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape3=Rectangle (1*#Scale#),(1*#Scale#),(38*#Scale#),(38*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape4=Combine Shape2 | Exclude Shape3
DynamicVariables=1
MouseOverAction=[!ShowMeter H#CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!HideMeter H#CURRENTSECTION#][!Redraw]

[STISqH]
X=0r
Y=0r
Shape=Rectangle 0,0,(40*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BackgroundSelectedLight#
DynamicVariables=1
Hidden=1
