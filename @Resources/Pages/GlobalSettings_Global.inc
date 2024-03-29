[MeterTitle]
Meter=String
Text=#T.Global_Settings#
MeterStyle=FontStyle_Title
DynamicVariables=1

[MeterTitleButtonZone]
Meter=Shape
MeterStyle=MeterTitleButtonZoneStyle

[MeterTitleButton]
Meter=Image
MeterStyle=MeterTitleButtonStyle

[MeterTitleButtonSelected]
Meter=Shape
MeterStyle=MeterTitleButtonSelectedStyle

[Variables]
Fix=1
BeginX=384
BeginY=108
TitleButtonAction=[!WriteKeyValue Variables SubPage 11 "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"]
TitleButtonImageName=#@#Bitmap\Back Button.png

BorderStyle1=Fill Color #ThemeColor_BarBorder# | Stroke Color #ThemeColor_BarBorder#
BorderStyle2=Fill Color #ThemeColor_OptionAlpha# | StrokeWidth 0
BorderStyle3=(300*#Scale#),(1*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | Fill Color #ThemeColor_BarBorder# | StrokeWidth 0
BorderStyle4=Fill Color #ThemeColor_TextInputer# | StrokeWidth 0
BorderStyle5=Fill Color #ThemeColor_Option# | StrokeWidth 0
BorderStyle6=Fill Color 255,255,255 | StrokeWidth 0
OptionH=80

T.0=#T.OFF#
T.1=#T.ON#

[MeterOptionStyle]
X=0r
Y=((#Gap#))r
Shape=Rectangle 0,0,(605*#Scale#),(80*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_OptionAlpha#
Shape2=Rectangle 0,0,(605*#Scale#),(80*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape3=Rectangle (1*#Scale#),(1*#Scale#),((605-2)*#Scale#),((80-2)*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#)
Shape4=Combine Shape2 | Exclude Shape3
DynamicVariables=1
Group=MouseAction

[MeterOptionSelectedStyle]
X=0r
Y=((#Gap#))r
Shape=Rectangle 0,0,(605*#Scale#),(80*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | Fill Color #ThemeColor_BackgroundSelectedLight# | StrokeWidth 0
DynamicVariables=1
Hidden=1
Group=Hover

[MeterIconStyle]
X=0r
Y=((#Gap#))r
H=(24*#Scale#)
W=(24*#Scale#)
ImageTint=#FontColor_General#,255
DynamicVariables=1

[MeterOptionTitleStyle]
X=0r
Y=((#Gap#))r
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(12*#Scale#)
AntiAlias=1
DynamicVariables=1

[MeterOptionTextStyle]
X=0r
Y=((#Gap#))r
W=(286*#Scale#)
ClipString=2
FontFace=#FontFace_General#
FontColor=#FontColor_General#,128
FontSize=(10*#Scale#)
StringAlign=LeftCenter
AntiAlias=1
DynamicVariables=1
InlineSetting=Size | (12*#Scale#)
InlineSetting2=Color | #FontColor_General#

[MeterOptionTextStyleTO]
W=(286*#Scale#)
ClipString=2
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(12*#Scale#)
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
Shape=Rectangle 0,0,(192*#Scale#),(36*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_TextInputerAlpha#
Shape2=Rectangle 0,0,(192*#Scale#),(36*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape3=Rectangle (1*#Scale#),(1*#Scale#),((192-2)*#Scale#),((36-2)*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#)
Shape4=Combine Shape2 | Exclude Shape3
DynamicVariables=1
Group=MouseAction

[TextInputer]
MouseActionCursor=1
MouseActionCursorName=TEXT

[MeterTextInputSelectedStyle]
Shape=Rectangle 0,0,(192*#Scale#),(36*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | Fill Color #ThemeColor_BackgroundSelected# | StrokeWidth 0
DynamicVariables=1
Hidden=1
Group=Hover

[MeterTextInputChoosenStyle]
Shape=Rectangle 0,0,(192*#Scale#),(#Scale#*36),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | Fill Color #ThemeColor_General# | StrokeWidth 0
Shape2=Rectangle 0,(-2*#Scale#),(192*#Scale#),(#Scale#*36),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#)
Shape3=Combine Shape | Exclude Shape2
DynamicVariables=1
Hidden=1
Group=Hover

[MeterSmallButtonStyle]
X=(((98)*#Scale#))r
Y=0r
Shape=Rectangle 0,0,(192*#Scale#),(36*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_TextInputerAlpha#
Shape2=Rectangle 0,0,(192*#Scale#),(36*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape3=Rectangle (1*#Scale#),(1*#Scale#),((192-2)*#Scale#),((36-2)*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#)
Shape4=Combine Shape2 | Exclude Shape3
DynamicVariables=1
Group=MouseAction

[MeterSmallButtonSelectedStyle]
X=(((98)*#Scale#))r
Y=0r
Shape=Rectangle 0,0,(92*#Scale#),(36*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | Fill Color #ThemeColor_BackgroundSelected# | StrokeWidth 0
DynamicVariables=1
Hidden=1
Group=Hover

[MeterSmallButtonChoosenStyle]
X=(((98)*#Scale#))r
Y=0r
Shape=Rectangle 0,0,(92*#Scale#),(#Scale#*36),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | Fill Color #ThemeColor_General# | StrokeWidth 0
Shape2=Rectangle 0,(-2*#Scale#),(92*#Scale#),(#Scale#*36),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#)
Shape3=Combine Shape | Exclude Shape2
Group=Hover
DynamicVariables=1
Hidden=1
Group=Hover

[MeterTextInputWx3ChoosenStyle]
Shape=Rectangle 0,0,(290*#Scale#),(36*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | Fill Color 0,(4*#Scale#*#Arched#),(4*#Scale#*#Arched#),0 | Stroke Color #ThemeColor_BarBorder#
Shape2=Rectangle 0,0,(290*#Scale#),(36*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | Fill Color #ThemeColor_TextInputer# | StrokeWidth 0
Shape3=Rectangle 0,0,(290*#Scale#),(#Scale#*36),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | Fill Color #ThemeColor_General# | StrokeWidth 0
Shape4=Rectangle 0,(-2*#Scale#),(290*#Scale#),(#Scale#*36),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#)
Shape5=Combine Shape3 | Exclude Shape4
DynamicVariables=1
Hidden=1
Group=Hover


[ZB]
X=(#BeginX#*#Scale#)
Y=(#BeginY#*#Scale#)
[IB]
X=((#BeginX#+24)*#Scale#)
Y=((#BeginY#+28)*#Scale#)
[TB]
X=((#BeginX#+68)*#Scale#)
Y=((#BeginY#+40)*#Scale#)
[SIBiP]
X=((#BeginX#+605-9-24)*#Scale#)
Y=((#BeginY#+40-9)*#Scale#)
[TIB]
X=((#BeginX#+605-200-20)*#Scale#)
Y=((#BeginY#+40-20)*#Scale#)
[TIIB]
X=((#BeginX#+605-20-18-8)*#Scale#)
Y=((#BeginY#+40-20+10)*#Scale#)
[TITB]
X=((#BeginX#+605-200-16+4)*#Scale#)
Y=((#BeginY#+40-20+19)*#Scale#)
[CMTB]
X=(16*#Scale#)r
Y=(18*#Scale#)r
[SwcBX2]
X=((#BeginX#+300-48-16)*#Scale#)
Y=((#BeginY#+40-24)*#Scale#)
[SwcBX1]
X=((#BeginX#+605-48-16)*#Scale#)
Y=((#BeginY#+40-24)*#Scale#)

[Next]
X=0r
Y=(((#OptionH#+5)*#Scale#))r
[NextB]
X=0r
Y=(((#OptionH#+5+48)*#Scale#))r
[NextT]
X=0r
Y=(40*#Scale#)r
[NextX]
X=(305*#Scale#)r
Y=0r
[NextY]
X=(-305*#Scale#)r
Y=(((#OptionH#+5)*#Scale#))r

[SBH]
X=0r
Y=(((#OptionH#+5)*#Scale#))r
Shape=Rectangle 0,0,(300*#Scale#),((#OptionH#+5)*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | Fill Color #ThemeColor_BackgroundSelectedLight# | StrokeWidth 0
DynamicVariables=1
Hidden=1

[STN]
X=0r
Y=(((#OptionH#+5)*#Scale#))r
W=(165*#Scale#)
ClipString=2
FontFace=#FontFace_General#
FontColor=#FontColor_General#,128
FontSize=(12*#Scale#)
StringAlign=LeftCenter
AntiAlias=1
DynamicVariables=1
InlineSetting=Color | #FontColor_General#

[STT]
X=0r
Y=(((#OptionH#+5)*#Scale#))r
W=(220*#Scale#)
ClipString=2
FontFace=[#FontFace_General]
FontColor=#FontColor_General#
FontSize=(12*#Scale#)
StringAlign=LeftCenter
AntiAlias=1
DynamicVariables=1
InlineSetting=Color | #FontColor_General#

[SIiP]
X=0r
Y=(((#OptionH#+5)*#Scale#))r
H=(24*#Scale#)
W=(24*#Scale#)
ImageTint=#FontColor_General#,255
DynamicVariables=1

[SSIiP]
X=0r
Y=(((#OptionH#+5)*#Scale#))r
H=(18*#Scale#)
W=(18*#Scale#)
ImageTint=#FontColor_General#,255
DynamicVariables=1

[SZ]
X=0r
Y=(((#OptionH#+5)*#Scale#))r
Shape=Rectangle 0,0,(300*#Scale#),(84*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color 0,(4*#Scale#*#Arched#),(4*#Scale#*#Arched#),0
DynamicVariables=1
MouseOverAction=[!ShowMeter BSH#CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!HideMeter BSH#CURRENTSECTION#][!Redraw]

[SMT]
X=0r
Y=((40*#Scale#))r
W=(260*#Scale#)
ClipString=2
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(12*#Scale#)
StringAlign=LeftCenter
AntiAlias=1
DynamicVariables=1

[SMTU]
FontColor=#FontColor_General#,128

[SMTS]
X=((20*#Scale#))r
Y=((20*#Scale#))r

[SMI]
Shape=Rectangle (9*#Scale#),((#OptionH#/2-10)*#Scale#),(3*#Scale#),(20*#Scale#),(1.5*#Scale#),(1.5*#Scale#) | StrokeWidth 0 | Fill Color #ThemeColor_General#
DynamicVariables=1

[SSwc]
X=0r
Y=(((#OptionH#+5)*#Scale#))r
W=(48*#Scale#)
PreserveAspectRatio=1
ImageName=#@#Bitmap\Switcher ([#[#[#CURRENTSECTION]_Swc]])
ImageTint=[#ThemeColor_CheckBox_[#[#[#CURRENTSECTION]_Swc]]]
LeftMouseUpAction=[!WriteKeyValue Variables [#[#CURRENTSECTION]_Swc] (1-[#[#[#CURRENTSECTION]_Swc]]) "#@#Settings.inc"][!RefreshApp]
DynamicVariables=1

[SBHW]
Shape=Rectangle 0,0,(605*#Scale#),((#OptionH#)*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | Fill Color #ThemeColor_BackgroundSelectedLight# | StrokeWidth 0
DynamicVariables=1
Hidden=1

[SB]
Shape=Rectangle 0,0,(300*#Scale#),(80*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_OptionAlpha#
Shape2=Rectangle 0,0,(300*#Scale#),(80*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape3=Rectangle (1*#Scale#),(1*#Scale#),((300-2)*#Scale#),((80-2)*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape4=Combine Shape2 | Exclude Shape3
DynamicVariables=1

[SBW]
Shape=Rectangle 0,0,(605*#Scale#),(80*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_OptionAlpha#
Shape2=Rectangle 0,0,(605*#Scale#),(80*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape3=Rectangle (1*#Scale#),(1*#Scale#),((605-2)*#Scale#),((80-2)*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape4=Combine Shape2 | Exclude Shape3
DynamicVariables=1

[SZW]
Shape=Rectangle 0,0,(605*#Scale#),(84*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color 0,(4*#Scale#*#Arched#),(4*#Scale#*#Arched#),0
DynamicVariables=1
MouseOverAction=[!ShowMeter BSH#CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!HideMeter BSH#CURRENTSECTION#][!Redraw]

[WT]
W=(300*#Scale#)

[SST]
FontColor=#FontColor_General#,128
StringAlign=LeftCenter
W=(605*#Scale#)
ClipString=1
X=(#BeginX#*#Scale#)

[SSl]
FontColor=#ThemeColor_General#
W=(605*#Scale#)
ClipString=2
X=(#BeginX#*#Scale#)
InlinePattern=.*
InlineSetting=None
MouseActionCursor=1
MouseActionCursorName=HAND
MouseOverAction=[!SetOption #CURRENTSECTION# InlineSetting "Underline"][!Update][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# InlineSetting "None"][!Update][!Redraw]

[SSlN]
Y=(8*#Scale#)R

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

[SOIA_CM]
LeftMouseUpAction=[!ShowMeterGroup G#CURRENTSECTION#][!Redraw]
[SOIA_TI]
LeftMouseUpAction=[!CommandMeasure TI#CURRENTSECTION# "ExecuteBatch 1" ][!ShowMeter C#CURRENTSECTION#][!Redraw]

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

[STISqI]
X=(11*#Scale#)r
Y=(11*#Scale#)r
W=(18*#Scale#)
H=(18*#Scale#)
ImageTint=#FontColor_General#
DynamicVariables=1

;[TI.XXXXX]
;Measure=Plugin
;Plugin=InputText
;X=([iP_OI.03:X]+4*#Scale#)
;Y=([iP_OI.03:Y]+10*#Scale#)
;W=((200-8)*#Scale#)
;H=(20*#Scale#)
;SolidColor=#ThemeColor_TextInputer#
;FontFace=#FontFace_General#
;FontColor=#FontColor_General#
;FontSize=(8*#Scale#)
;AntiAlias=1
;FocusDismiss=1
;DefaultValue=[#FontFace_General]
;Command1=[!WriteKeyValue Variables "FontFace_General" "$UserInput$" "#@#Settings.inc"][!RefreshApp]
;OnDismissAction=[!HideMeter CiP_OI.03][!Redraw]
;DynamicVariables=1