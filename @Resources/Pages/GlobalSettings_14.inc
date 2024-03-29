[Variables]
@include=#@#Pages\GlobalSettings_Global.inc

Grade=1
DisplayPage=3/4
HidePrvsB=0
HideNextB=0

iP_B00.11.03_Swc=Arched
iP_B00.21.03_Swc=Light
iP_B00.12.03_Swc=Border
iP_B02S_Swc=SCHN

[MeterTitle]
Text=#T.Details_Settings#

[MeterTitleButtonZone]
Meter=Shape
MeterStyle=MeterTitleButtonZoneStyle

[MeterTitleButton]
Meter=Image
MeterStyle=MeterTitleButtonStyle

[MeterTitleButtonSelected]
Meter=Shape
MeterStyle=MeterTitleButtonSelectedStyle

[iP_B00.11.00]
Meter=Shape
MeterStyle=SB|ZB
[iP_B00.21.00]
Meter=Shape
MeterStyle=SB|NextX
[iP_B00.12.00]
Meter=Shape
MeterStyle=SB|NextY
[iP_B00.22.00]
Meter=Shape
MeterStyle=SB|NextX
[iP_B00.11.01]
Meter=String
MeterStyle=MeterOptionTextStyle|TB
Text=#T.Rounded_corners##CRLF#[#T.[#Arched]]
InlinePattern=#T.Rounded_corners##CRLF#
InlinePattern2=#T.Rounded_corners##CRLF#
W=(172*#Scale#)
[iP_B00.21.01]
Meter=String
MeterStyle=MeterOptionTextStyle|NextX
Text=#T.Light_Effect##CRLF#[#T.[#Light]]
InlinePattern=#T.Light_Effect##CRLF#
InlinePattern2=#T.Light_Effect##CRLF#
W=(172*#Scale#)
[iP_B00.12.01]
Meter=String
MeterStyle=MeterOptionTextStyle|NextY
Text=#T.Borders##CRLF#[#T.[#Border]]
InlinePattern=#T.Borders##CRLF#
InlinePattern2=#T.Borders##CRLF#
W=(172*#Scale#)
[iP_B00.22.01]
Meter=String
MeterStyle=MeterOptionTextStyleTO|NextX
Text=#T.Opacity#
W=(172*#Scale#)
[iP_B00.11.02]
Meter=Image
MeterStyle=SIiP|IB
ImageName=#@#Bitmap\Arch
[iP_B00.21.02]
Meter=Image
MeterStyle=SIiP|NextX
ImageName=#@#Bitmap\Material
[iP_B00.12.02]
Meter=Image
MeterStyle=SIiP|NextY
ImageName=#@#Bitmap\Borders
[iP_B00.22.02]
Meter=Image
MeterStyle=SIiP|NextX
ImageName=#@#Bitmap\Opacity
[iP_B00.11.03]
Meter=Image
MeterStyle=SSwc|SwcBX2
[iP_B00.21.03]
Meter=Image
MeterStyle=SSwc|NextX
[iP_B00.12.03]
Meter=Image
MeterStyle=SSwc|NextY

[iP_B00.22.04.00]
Meter=Shape
X=((#BeginX#+605-100-16)*#Scale#)
Y=((#BeginY#+40-20+85)*#Scale#)
Shape=Rectangle 0,0,(100*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_TextInputerAlpha#
Shape2=Rectangle 0,0,(100*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape3=Rectangle (1*#Scale#),(1*#Scale#),((100-2)*#Scale#),(38*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape4=Combine Shape2 | Exclude Shape3
Shape5=Rectangle (60*#Scale#),(1*#Scale#),(1*#Scale#),(38*#Scale#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
DynamicVariables=1
[iP_B00.22.04.01Z]
Meter=Shape
X=([iP_B00.22.04.00:X]+60*#Scale#)
Y=[iP_B00.22.04.00:Y]
Shape=Rectangle 0,0,(40*#Scale#),(20*#Scale#) | StrokeWidth 0 | Fill Color 0,0,0,0
DynamicVariables=1
MouseOverAction=[!ShowMeter H#CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!HideMeter H#CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!WriteKeyValue "Variables" "Alpha_Scale" "(Clamp(([#Alpha_Scale]+0.05),0,1))" "#@#Settings.inc"][!RefreshApp]
[iP_B00.22.04.02Z]
Meter=Shape
X=([iP_B00.22.04.00:X]+60*#Scale#)
Y=([iP_B00.22.04.00:Y]+20*#Scale#)
Shape=Rectangle 0,0,(40*#Scale#),(20*#Scale#) | StrokeWidth 0 | Fill Color 0,0,0,0
DynamicVariables=1
MouseOverAction=[!ShowMeter H#CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!HideMeter H#CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!WriteKeyValue "Variables" "Alpha_Scale" "(Clamp(([#Alpha_Scale]-0.05),0,1))" "#@#Settings.inc"][!RefreshApp]
[HiP_B00.22.04.01Z]
Meter=Shape
X=[iP_B00.22.04.00:X]
Y=[iP_B00.22.04.00:Y]
Shape=Rectangle 0,0,(100*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BackgroundSelectedLight#
Shape2=Rectangle (60*#Scale#),0,(40*#Scale#),(20*#Scale#)
Shape3=Combine Shape | Intersect Shape2
DynamicVariables=1
Hidden=1
[HiP_B00.22.04.02Z]
Meter=Shape
X=[iP_B00.22.04.00:X]
Y=[iP_B00.22.04.00:Y]
Shape=Rectangle 0,0,(100*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BackgroundSelectedLight#
Shape2=Rectangle (60*#Scale#),(20*#Scale#),(40*#Scale#),(20*#Scale#)
Shape3=Combine Shape | Intersect Shape2
DynamicVariables=1
Hidden=1
[iP_B00.22.04.01I]
Meter=Image
ImageName=#@#Bitmap\Arrow Up
X=([iP_B00.22.04.01Z:X]+(20-8)*#Scale#)
Y=([iP_B00.22.04.01Z:Y]+(10-8)*#Scale#)
W=(16*#Scale#)
H=(16*#Scale#)
ImageTint=#FontColor_General#
DynamicVariables=1
[iP_B00.22.04.02I]
Meter=Image
ImageName=#@#Bitmap\Arrow Down
X=([iP_B00.22.04.02Z:X]+(20-8)*#Scale#)
Y=([iP_B00.22.04.02Z:Y]+(10-8)*#Scale#)
W=(16*#Scale#)
H=(16*#Scale#)
ImageTint=#FontColor_General#
DynamicVariables=1
[iP_B00.22.04.03Z]
Meter=Shape
X=[iP_B00.22.04.00:X]
Y=[iP_B00.22.04.00:Y]
Shape=Rectangle 0,0,(60*#Scale#),(40*#Scale#) | StrokeWidth 0 | Fill Color 0,0,0,0
DynamicVariables=1
MouseOverAction=[!ShowMeter H#CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!HideMeter H#CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!CommandMeasure TI#CURRENTSECTION# "ExecuteBatch 1" ][!ShowMeter C#CURRENTSECTION#][!Redraw]
[HiP_B00.22.04.03Z]
Meter=Shape
X=[iP_B00.22.04.00:X]
Y=[iP_B00.22.04.00:Y]
Shape=Rectangle 0,0,(100*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BackgroundSelectedLight#
Shape2=Rectangle 0,0,(60*#Scale#),(40*#Scale#)
Shape3=Combine Shape | Intersect Shape2
DynamicVariables=1
Hidden=1
[iP_B00.22.04.03I]
Meter=String
MeterStyle=FontStyle_General
X=([iP_B00.22.04.00:X]+8*#Scale#)
Y=([iP_B00.22.04.00:Y]+20*#Scale#)
StringAlign=LeftCenter
Text=#Alpha_Scale#x
DynamicVariables=1
[CiP_B00.22.04.03Z]
Meter=Shape
X=[iP_B00.22.04.00:X]
Y=[iP_B00.22.04.00:Y]
Shape=Rectangle 0,0,(100*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_TextInputer#
Shape2=Rectangle 0,0,(100*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape3=Rectangle (1*#Scale#),(1*#Scale#),((100-2)*#Scale#),(38*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape4=Combine Shape2 | Exclude Shape3
Shape5=Rectangle 0,0,(100*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_General#
Shape6=Rectangle 0,(-2*#Scale#),(100*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#)
Shape7=Combine Shape5 | Exclude Shape6
DynamicVariables=1
Hidden=1
[TIiP_B00.22.04.03Z]
Measure=Plugin
Plugin=InputText
X=([iP_B00.22.04.00:X]+4*#Scale#)
Y=([iP_B00.22.04.00:Y]+10*#Scale#)
W=((100-8)*#Scale#)
H=(20*#Scale#)
SolidColor=#ThemeColor_TextInputer#
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(8*#Scale#)
AntiAlias=1
FocusDismiss=1
DefaultValue=[#Alpha_Scale]
Command1=[!WriteKeyValue Variables "Alpha_Scale" "(Clamp($UserInput$,0,1))" "#@#Settings.inc"][!RefreshApp]
OnDismissAction=[!HideMeter CiP_B00.22.04.03Z][!Redraw]
DynamicVariables=1
InputNumber=1

[iP_ST1]
Meter=String
MeterStyle=FontStyle_General|SST
Y=([iP_B00.12.00:YH]+30*#Scale#)
Text=#T.Design_Style#
MeasureName=iP_ST1M

[iP_B01.00]
Meter=Shape
X=([iP_B00.11.00:X])
Y=([iP_B00.11.00:Y]+(85*2+48)*#Scale#)
Shape=Rectangle 0,0,(605*#Scale#),((64+23*2)*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_OptionAlpha#
Shape2=Rectangle 0,0,(605*#Scale#),((64+23*2)*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape3=Rectangle (1*#Scale#),(1*#Scale#),((605-2)*#Scale#),(((64+23*2)-2)*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#)
Shape4=Combine Shape2 | Exclude Shape3
DynamicVariables=1
[iP_B01.01Z]
Meter=Shape
X=([iP_B01.00:X]+4*#Scale#)
Y=([iP_B01.00:Y]+4*#Scale#)
Shape=Rectangle (1*#Scale#),(1*#Scale#),((256+18*2)*#Scale#),((64+18*2)*#Scale#) | StrokeWidth 0 | Fill Color 0,0,0,0
DynamicVariables=1
MouseOverAction=[!ShowMeter H#CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!HideMeter H#CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables "Design" "0" "#@#Settings.inc"][!RefreshApp]
[HiP_B01.01Z]
Meter=Shape
X=0r
Y=0r
Shape=Rectangle (1*#Scale#),(1*#Scale#),((256+18*2)*#Scale#),((64+18*2)*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#) | StrokeWidth (2*#Scale#) | Stroke Color #ThemeColor_BarBorder# | Fill Color 0,0,0,0
DynamicVariables=1
Hidden=1
[iP_B01.02Z]
Meter=Shape
X=(303*#Scale#)r
Y=0r
Shape=Rectangle (1*#Scale#),(1*#Scale#),((256+18*2)*#Scale#),((64+18*2)*#Scale#) | StrokeWidth 0 | Fill Color 0,0,0,0
DynamicVariables=1
MouseOverAction=[!ShowMeter H#CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!HideMeter H#CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables "Design" "1" "#@#Settings.inc"][!RefreshApp]
[HiP_B01.02Z]
Meter=Shape
X=0r
Y=0r
Shape=Rectangle (1*#Scale#),(1*#Scale#),((256+18*2)*#Scale#),((64+18*2)*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#) | StrokeWidth (2*#Scale#) | Stroke Color #ThemeColor_BarBorder# | Fill Color 0,0,0,0
DynamicVariables=1
Hidden=1
[iP_B01.01.I00]
Meter=Image
ImageName=#@#Bitmap\Design 0 (0)
X=([iP_B01.00:X]+22*#Scale#)
Y=([iP_B01.00:Y]+22*#Scale#)
ImageTint=#FontColor_General#
W=(256*#Scale#)
H=(64*#Scale#)
DynamicVariables=1
[iP_B01.01.I01]
Meter=Image
ImageName=#@#Bitmap\Design 0 (1[mDM])
X=0r
Y=0r
ImageTint=#ThemeColor_General#
W=(256*#Scale#)
H=(64*#Scale#)
DynamicVariables=1
[iP_B01.02.I00]
Meter=Image
ImageName=#@#Bitmap\Design 1 (0)
X=([iP_B01.00:X]+(22+303)*#Scale#)
Y=([iP_B01.00:Y]+(22)*#Scale#)
ImageTint=#FontColor_General#
W=(256*#Scale#)
H=(64*#Scale#)
DynamicVariables=1
[iP_B01.02.I01]
Meter=Image
ImageName=#@#Bitmap\Design 1 (1[mDM])
X=0r
Y=0r
ImageTint=#ThemeColor_General#
W=(256*#Scale#)
H=(64*#Scale#)
DynamicVariables=1
[iP_B01.0M]
Meter=Shape
X=([iP_B01.00:X]+(4+303*#Design#)*#Scale#)
Y=([iP_B01.00:Y]+4*#Scale#)
Shape=Rectangle (1*#Scale#),(1*#Scale#),((256+18*2)*#Scale#),((64+18*2)*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#) | StrokeWidth (2*#Scale#) | Stroke Color #ThemeColor_General# | Fill Color 0,0,0,0
DynamicVariables=1

[S_ZB]
X=(#BeginX#*#Scale#)
Y=([iP_B01.00:YH]+5*#Scale#)
[S_IB]
X=((#BeginX#+24)*#Scale#)
Y=([iP_B01.00:YH]+(28+5)*#Scale#)
[S_TB]
X=((#BeginX#+68)*#Scale#)
Y=([iP_B01.00:YH]+(40+5)*#Scale#)
[S_SIBiP]
X=((#BeginX#+605-9-24)*#Scale#)
Y=([iP_B01.00:YH]+(40-9+5)*#Scale#)
[S_TIB]
X=((#BeginX#+605-200-24)*#Scale#)
Y=([iP_B01.00:YH]+(40-20+5)*#Scale#)
[S_TIIB]
X=((#BeginX#+605-24-18-8)*#Scale#)
Y=([iP_B01.00:YH]+(40-20+10+5)*#Scale#)
[S_TITB]
X=((#BeginX#+605-200-16)*#Scale#)
Y=([iP_B01.00:YH]+(40-20+19+5)*#Scale#)
[S_CMTB]
X=(16*#Scale#)r
Y=(18*#Scale#)r
[S_SwcBX2]
X=((#BeginX#+300-48-16)*#Scale#)
Y=([iP_B01.00:YH]+(40-24+5)*#Scale#)
[S_SwcBX1]
X=((#BeginX#+605-48-16)*#Scale#)
Y=([iP_B01.00:YH]+(40-24+5)*#Scale#)

[iP_BO2]
Meter=Shape
MeterStyle=SBW|S_ZB
[iP_I02]
Meter=Image
MeterStyle=SIiP|S_IB
ImageName=#@#Bitmap\Invisible
[iP_T02]
Meter=String
MeterStyle=MeterOptionTextStyleTO|WT|S_TB
Text=#T.Always_Hide_the_Name_in_the_Shortcut#
[iP_B02S]
Meter=Image
MeterStyle=SSwc|S_SwcBX1

[iP_SL1]
Meter=String
MeterStyle=FontStyle_General|SSl
Y=([iP_BO2:YH]+16*#Scale#)
Text=#T.Blur_Settings#
MeasureName=iP_SL1M
LeftMouseUpAction=[!WriteKeyValue Variables SubPage 15 "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!Refresh]

@include2=#@#Pages\GlobalSettings_Global_Extras.inc
