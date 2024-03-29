[Variables]
@include=#@#Pages\GlobalSettings_Global.inc

Grade=1
DisplayPage=1/4
HidePrvsB=1
HideNextB=0

T.TimeFormat_Global.0=#T.12-hour#
T.TimeFormat_Global.1=#T.24-hour#
T.Imperial.0=#T.Metric#
T.Imperial.1=#T.Imperial#
S.Imperial.0=#S.Widgets_Settings.39#
S.Imperial.1=#S.Widgets_Settings.40#

[MeterTitle]
Text=#T.Region_Settings#

[MeterTitleButtonZone]
Meter=Shape
MeterStyle=MeterTitleButtonZoneStyle

[MeterTitleButton]
Meter=Image
MeterStyle=MeterTitleButtonStyle

[MeterTitleButtonSelected]
Meter=Shape
MeterStyle=MeterTitleButtonSelectedStyle

[iP_BO1]
Meter=Shape
MeterStyle=SBW|ZB
[iP_BO2]
Meter=Shape
MeterStyle=SBW|Next
[iP_BO3]
Meter=Shape
MeterStyle=SBW|NextB
[iP_BO4]
Meter=Shape
MeterStyle=SBW|Next
[iP_BO5]
Meter=Shape
MeterStyle=SBW|Next

[iP_I01]
Meter=Image
MeterStyle=SIiP|IB
ImageName=#@#Bitmap\Language
[iP_I02]
Meter=Image
MeterStyle=SIiP|Next
ImageName=#@#Bitmap\Clock
[iP_I03]
Meter=Image
MeterStyle=SIiP|NextB
ImageName=#@#Bitmap\Location
[iP_I04]
Meter=Image
MeterStyle=SIiP|Next
ImageName=#@#Bitmap\Units
[iP_I05]
Meter=Image
MeterStyle=SIiP|Next
ImageName=#@#Bitmap\Key

[iP_T01]
Meter=String
MeterStyle=MeterOptionTextStyleTO|WT|TB
Text=#T.Language#
[iP_T02]
Meter=String
MeterStyle=MeterOptionTextStyle|WT|Next
Text=#T.Time_Format##CRLF##S.Widgets_Settings.Time_format.1#
InlinePattern=#T.Time_Format##CRLF#
InlinePattern2=#T.Time_Format##CRLF#
[iP_T03]
Meter=String
MeterStyle=MeterOptionTextStyle|WT|NextB
Text=#T.Location##CRLF##S.Widgets_Settings.34#
InlinePattern=#T.Location##CRLF#
InlinePattern2=#T.Location##CRLF#
W=(264*#Scale#)
[iP_T04]
Meter=String
MeterStyle=MeterOptionTextStyle|WT|Next
Text=#T.Units##CRLF#[#S.Imperial.[#Imperial]]
InlinePattern=#T.Units##CRLF#
InlinePattern2=#T.Units##CRLF#
[iP_T05]
Meter=String
MeterStyle=MeterOptionTextStyleTO|WT|Next
Text=#T.API_Key#

[iP_ST1]
Meter=String
MeterStyle=FontStyle_General|SST
Y=((#BeginY#+32*1+#OptionH#*2)*#Scale#)
Text=#T.Weather_Services_Settings#

[iP_SL1]
Meter=String
MeterStyle=FontStyle_General|SSl
Y=((#BeginY#+32*2+16+#OptionH#*5)*#Scale#)
Text=#S.Widgets_Settings.35#
LeftMouseUpAction=[#P.Widgets_Weather.2#]
[iP_SL2]
Meter=String
MeterStyle=FontStyle_General|SSl|SSlN
Text=#S.Widgets_Settings.28#
LeftMouseUpAction=[https://github.com/SteveHsuDrawing/quanto/wiki/Troubleshooting#advanced-what-is-a-weather-api-key-and-why-how-do-i-get-my-own-one]

[iP_OI.01]
Meter=Shape
MeterStyle=STI|TIB|SOIA_CM
[iP_OI.02]
Meter=Shape
MeterStyle=STI|Next|SOIA_CM
[iP_OI.03]
Meter=Shape
MeterStyle=STI|NextB|SOIA_TI
[iP_OI.04]
Meter=Shape
MeterStyle=STI|Next|SOIA_CM
[iP_OI.05]
Meter=Shape
MeterStyle=STI|Next|SOIA_TI
LeftMouseUpAction=[!CommandMeasure TI#CURRENTSECTION# "ExecuteBatch 1" ][!ShowMeter C#CURRENTSECTION#][!ShowMeterGroup GiP_OI.05.01][!Redraw]

[HiP_OI.01]
Meter=Shape
MeterStyle=STIH|TIB
[HiP_OI.02]
Meter=Shape
MeterStyle=STIH|Next
[HiP_OI.03]
Meter=Shape
MeterStyle=STIH|NextB
[HiP_OI.04]
Meter=Shape
MeterStyle=STIH|Next
[HiP_OI.05]
Meter=Shape
MeterStyle=STIH|Next

[iP_OI.I01]
Meter=Image
MeterStyle=STIIA|TIIB
[iP_OI.I02]
Meter=Image
MeterStyle=STIIA|Next
[iP_OI.I03]
Meter=Image
MeterStyle=STIIE|NextB
[iP_OI.I04]
Meter=Image
MeterStyle=STIIA|Next
[iP_OI.I05]
Meter=Image
MeterStyle=STIIE|Next

[iP_OI.T01]
Meter=String
Text=[#[#Language]]
MeterStyle=STIT|TITB
[iP_OI.T02]
Meter=String
Text=[#T.TimeFormat_Global.[#TimeFormat_Global]]
MeterStyle=STIT|Next
[iP_OI.T03]
Meter=String
Text=[#LocationName]
MeterStyle=STIT|NextB
[iP_OI.T04]
Meter=String
Text=[#T.Imperial.[#Imperial]]
MeterStyle=STIT|Next
[iP_OI.T05M]
Measure=String
String=#T.Modify#
[iP_OI.T05]
Meter=String
Text=[#T.Click_to_1]
MeasureName=#CURRENTSECTION#M
MeterStyle=STIT|Next

[iP_OIS.03.B01]
Meter=Shape
X=([iP_OI.03:X]-(40+4)*#Scale#)
Y=[iP_OI.03:Y]
MeterStyle=STISq
LeftMouseUpAction=[!ShowMeterGroup G#CURRENTSECTION#][!Update][!Redraw]
[HiP_OIS.03.B01]
Meter=Shape
MeterStyle=STISqH
[HiP_OIS.03.B02]
Meter=Image
MeterStyle=STISqI
ImageName=#@#Bitmap\More


@include2=#@#Pages\GlobalSettings_Global_Extras.inc


[GiP_OI.01]
Group=GiP_OI.01
Hidden=1

[iP_OIS.01.00]
Meter=Shape
X=[iP_OI.01:X]
Y=(Max(0,([iP_OI.01:Y]-40*#Scale#*[#T.Language.[#Language]])))
Shape=Rectangle 0,0,(200*#Scale#),(40*3*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_TextInputer#
Shape2=Rectangle 0,0,(200*#Scale#),(40*3*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape3=Rectangle (1*#Scale#),(1*#Scale#),(198*#Scale#),((40*3-2)*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape4=Combine Shape2 | Exclude Shape3
DynamicVariables=1
MeterStyle=GiP_OI.01
MouseLeaveAction=[!HideMeterGroup GiP_OI.01][!Redraw]

[iP_OIS.01.01]
Meter=String
Text=#en-us#
ToolTipText=#en-us##CRLF#en-us
MeterStyle=SCMT|CMTB|GiP_OI.01
LeftMouseUpAction=[!WriteKeyValue Variables Language en-us "#@#Settings.inc"][!RefreshApp]
[iP_OIS.01.02]
Meter=String
Text=#zh-cn#
ToolTipText=#zh-cn##CRLF#zh-cn
MeterStyle=SCMT|NextT|GiP_OI.01
LeftMouseUpAction=[!WriteKeyValue Variables Language zh-cn "#@#Settings.inc"][!RefreshApp]
[iP_OIS.01.03]
Meter=String
Text=#zh-tw#
ToolTipText=#zh-tw##CRLF#zh-tw
MeterStyle=SCMT|NextT|GiP_OI.01
LeftMouseUpAction=[!WriteKeyValue Variables Language zh-tw "#@#Settings.inc"][!RefreshApp]

[iP_OIS.01.M]
Meter=Shape
X=[iP_OIS.01.00:X]
Y=([iP_OIS.01.00:Y]+40*#Scale#*[#T.Language.[#Language]])
MeterStyle=SCMM|GiP_OI.01

[GiP_OI.02]
Group=GiP_OI.02
Hidden=1

[iP_OIS.02.00]
Meter=Shape
X=[iP_OI.02:X]
Y=([iP_OI.02:Y]-40*#Scale#*[#TimeFormat_Global])
Shape=Rectangle 0,0,(200*#Scale#),(40*2*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_TextInputer#
Shape2=Rectangle 0,0,(200*#Scale#),(40*2*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape3=Rectangle (1*#Scale#),(1*#Scale#),(198*#Scale#),((40*2-2)*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape4=Combine Shape2 | Exclude Shape3
DynamicVariables=1
MeterStyle=GiP_OI.02
MouseLeaveAction=[!HideMeterGroup GiP_OI.02][!Redraw]

[iP_OIS.02.01]
Meter=String
Text=[#T.12-hour]
MeterStyle=SCMT|CMTB|GiP_OI.02
LeftMouseUpAction=[!WriteKeyValue Variables TimeFormat_Global 0 "#@#Settings.inc"][!RefreshApp]
[iP_OIS.02.02]
Meter=String
Text=[#T.24-hour]
MeterStyle=SCMT|NextT|GiP_OI.02
LeftMouseUpAction=[!WriteKeyValue Variables TimeFormat_Global 1 "#@#Settings.inc"][!RefreshApp]

[iP_OIS.02.M]
Meter=Shape
X=[iP_OI.02:X]
Y=[iP_OI.02:Y]
MeterStyle=SCMM|GiP_OI.02

[GiP_OI.04]
Group=GiP_OI.04
Hidden=1

[iP_OIS.04.00]
Meter=Shape
X=[iP_OI.04:X]
Y=([iP_OI.04:Y]-40*#Scale#*[#Imperial])
Shape=Rectangle 0,0,(200*#Scale#),(40*2*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_TextInputer#
Shape2=Rectangle 0,0,(200*#Scale#),(40*2*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape3=Rectangle (1*#Scale#),(1*#Scale#),(198*#Scale#),((40*2-2)*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape4=Combine Shape2 | Exclude Shape3
DynamicVariables=1
MeterStyle=GiP_OI.04
MouseLeaveAction=[!HideMeterGroup GiP_OI.04][!Redraw]

[iP_OIS.04.01]
Meter=String
Text=[#T.Metric]
MeterStyle=SCMT|CMTB|GiP_OI.04
LeftMouseUpAction=[!WriteKeyValue Variables Imperial 0 "#@#Settings.inc"][!RefreshApp]
[iP_OIS.04.02]
Meter=String
Text=[#T.Imperial]
MeterStyle=SCMT|NextT|GiP_OI.04
LeftMouseUpAction=[!WriteKeyValue Variables Imperial 1 "#@#Settings.inc"][!RefreshApp]

[iP_OIS.04.M]
Meter=Shape
X=[iP_OI.04:X]
Y=[iP_OI.04:Y]
MeterStyle=SCMM|GiP_OI.04

[MseWebMain]
Measure=WebParser
URL=https://api.openweathermap.org/geo/1.0/direct?limit=1&appid=#OWMAPIKey#&q=#LocationName#
RegExp=(?siU)"lat":(.*),.*"lon":(.*),.*
FinishAction=[!Update][!Delay 16][!WriteKeyValue Variables Latitude ([Latitude]) "#@#Settings.inc"][!WriteKeyValue Variables Longitude ([Longitude]) "#@#Settings.inc"][!RefreshApp]
OnRegExpErrorAction=[!HideMeterGroup GiP_OI.03.00][!ShowMeterGroup GiP_OI.03.01][!Update][!Update][!Redraw]
OnConnectErrorAction=[!HideMeterGroup GiP_OI.03.00][!ShowMeterGroup GiP_OI.03.01][!Update][!Update][!Redraw]
Disabled=1
[Latitude]
Measure=WebParser
URL=[MseWebMain]
StringIndex=1
[Longitude]
Measure=WebParser
URL=[MseWebMain]
StringIndex=2

[TIiP_OI.03]
Measure=Plugin
Plugin=InputText
X=([iP_OI.03:X]+4*#Scale#)
Y=([iP_OI.03:Y]+10*#Scale#)
W=((200-8)*#Scale#)
H=(20*#Scale#)
SolidColor=#ThemeColor_TextInputer#
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(8*#Scale#)
AntiAlias=1
FocusDismiss=1
DefaultValue=[#LocationName]
Command1=[!WriteKeyValue Variables "LocationName" "$UserInput$" "#@#Settings.inc"][!Refresh][!Delay 16][!EnableMeasure MseWebMain][!ShowMeterGroup GiP_OI.03.00][!Update][!Redraw]
OnDismissAction=[!HideMeter CiP_OI.03][!Redraw]
DynamicVariables=1

[TIiP_OI.05]
Measure=Plugin
Plugin=InputText
X=([iP_OI.05:X]-100*#Scale#)
Y=([iP_OI.05:Y]+10*#Scale#)
W=(300*#Scale#)
H=(20*#Scale#)
SolidColor=#ThemeColor_TextInputer#
FontFace=Consolas
FontColor=#FontColor_General#
FontSize=(8*#Scale#)
AntiAlias=1
FocusDismiss=1
DefaultValue=
Command1=[!WriteKeyValue Variables "OWMAPIKey" "$UserInput$" "#@#Settings.inc"][!RefreshApp]
OnDismissAction=[!HideMeter CiP_OI.05][!HideMeterGroup GiP_OI.05.01][!Redraw]
DynamicVariables=1
Password=1

[GiP_OIS.03.B01]
Group=GiP_OIS.03.B01
Hidden=1

[iP_OIS.03.B01.00Z]
Meter=Shape
X=([iP_OIS.03.B01:X]+[iP_OIS.03.B01:W]/2-(200/2)*#Scale#)
Y=([iP_OIS.03.B01:Y]+[iP_OIS.03.B01:H]/2-40*#Scale#)
Shape=Rectangle (-2*#Scale#),(-2*#Scale#),((200+2*2)*#Scale#),((80+2*2)*#Scale#) | StrokeWidth 0 | Fill Color 0,0,0,0
Shape2=Rectangle 0,0,(200*#Scale#),(80*#Scale#)
Shape3=Combine Shape | Exclude Shape2
DynamicVariables=1
MeterStyle=GiP_OIS.03.B01
MouseLeaveAction=[!HideMeterGroup GiP_OIS.03.B01][!Redraw]

[iP_OIS.03.B01.00]
Meter=Shape
X=([iP_OIS.03.B01:X]+[iP_OIS.03.B01:W]/2-(200/2)*#Scale#)
Y=([iP_OIS.03.B01:Y]+[iP_OIS.03.B01:H]/2-40*#Scale#)
Shape=Rectangle 0,0,(200*#Scale#),(80*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_TextInputer#
Shape2=Rectangle 0,0,(200*#Scale#),(80*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape3=Rectangle (1*#Scale#),(1*#Scale#),((200-2)*#Scale#),((80-2)*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape4=Combine Shape2 | Exclude Shape3
Shape5=Rectangle (1*#Scale#),(39.5*#Scale#),((200-2)*#Scale#),(1*#Scale#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
DynamicVariables=1
MeterStyle=GiP_OIS.03.B01

[iP_OIS.03.B01.01Z]
Meter=Shape
X=([iP_OIS.03.B01.00:X])
Y=([iP_OIS.03.B01.00:Y])
Shape=Rectangle 0,0,(200*#Scale#),(40*#Scale#) | StrokeWidth 0 | Fill Color 0,0,0,0
DynamicVariables=1
MouseOverAction=[!ShowMeter H#CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!HideMeter H#CURRENTSECTION#][!Redraw]
MeterStyle=SOIA_TI|GiP_OIS.03.B01
[iP_OIS.03.B01.02Z]
Meter=Shape
X=0r
Y=(40*#Scale#)r
Shape=Rectangle 0,0,(200*#Scale#),(40*#Scale#) | StrokeWidth 0 | Fill Color 0,0,0,0
DynamicVariables=1
MouseOverAction=[!ShowMeter H#CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!HideMeter H#CURRENTSECTION#][!Redraw]
MeterStyle=SOIA_TI|GiP_OIS.03.B01
[iP_OIS.03.B01.01T]
Meter=String
Text=#T.Latitude#
MeterStyle=FontStyle_General|GiP_OIS.03.B01
StringAlign=LeftCenter
X=([iP_OIS.03.B01.00:X]+8*#Scale#)
Y=([iP_OIS.03.B01.00:Y]+20*#Scale#)
[iP_OIS.03.B01.02T]
Meter=String
Text=#T.Longitude#
MeterStyle=FontStyle_General|GiP_OIS.03.B01
StringAlign=LeftCenter
X=0r
Y=(40*#Scale#)r
[iP_OIS.03.B01.01C]
Meter=String
Text=#Latitude#
MeterStyle=FontStyle_General|GiP_OIS.03.B01
StringAlign=RightCenter
X=([iP_OIS.03.B01.00:XW]-(8+18+8)*#Scale#)
Y=([iP_OIS.03.B01.00:Y]+20*#Scale#)
FontColor=#FontColor_General#,128
[iP_OIS.03.B01.02C]
Meter=String
Text=#Longitude#
MeterStyle=FontStyle_General|GiP_OIS.03.B01
StringAlign=RightCenter
X=0r
Y=(40*#Scale#)r
FontColor=#FontColor_General#,128
[iP_OIS.03.B01.01I]
Meter=Image
X=([iP_OIS.03.B01.00:XW]-(18+8)*#Scale#)
Y=([iP_OIS.03.B01.00:Y]+(20-9)*#Scale#)
MeterStyle=STIIE|GiP_OIS.03.B01
[iP_OIS.03.B01.02I]
Meter=Image
X=0r
Y=(40*#Scale#)r
MeterStyle=STIIE|GiP_OIS.03.B01
[HiP_OIS.03.B01.01Z]
Meter=Shape
X=([iP_OIS.03.B01.00:X])
Y=([iP_OIS.03.B01.00:Y])
Shape=Rectangle 0,0,(200*#Scale#),(80*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BackgroundSelectedLight#
Shape2=Rectangle 0,0,(200*#Scale#),(40*#Scale#)
Shape3=Combine Shape | Intersect Shape2
DynamicVariables=1
Hidden=1
[HiP_OIS.03.B01.02Z]
Meter=Shape
X=([iP_OIS.03.B01.00:X])
Y=([iP_OIS.03.B01.00:Y])
Shape=Rectangle 0,0,(200*#Scale#),(80*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BackgroundSelectedLight#
Shape2=Rectangle 0,(40*#Scale#),(200*#Scale#),(40*#Scale#)
Shape3=Combine Shape | Intersect Shape2
DynamicVariables=1
Hidden=1
[CiP_OIS.03.B01.01Z]
Meter=Shape
X=([iP_OIS.03.B01.00:X])
Y=([iP_OIS.03.B01.00:Y])
MeterStyle=STIC
[CiP_OIS.03.B01.02Z]
Meter=Shape
X=0r
Y=(40*#Scale#)r
MeterStyle=STIC

[TIiP_OIS.03.B01.01Z]
Measure=Plugin
Plugin=InputText
X=([iP_OIS.03.B01.01Z:X]+4*#Scale#)
Y=([iP_OIS.03.B01.01Z:Y]+10*#Scale#)
W=((200-8)*#Scale#)
H=(20*#Scale#)
SolidColor=#ThemeColor_TextInputer#
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(8*#Scale#)
AntiAlias=1
FocusDismiss=1
DefaultValue=[#Latitude]
Command1=[!WriteKeyValue Variables "Latitude" "$UserInput$" "#@#Settings.inc"][!RefreshApp]
OnDismissAction=[!HideMeter CiP_OIS.03.B01.01Z][!Redraw]
DynamicVariables=1
InputNumber=1
[TIiP_OIS.03.B01.02Z]
Measure=Plugin
Plugin=InputText
X=([iP_OIS.03.B01.02Z:X]+4*#Scale#)
Y=([iP_OIS.03.B01.02Z:Y]+10*#Scale#)
W=((200-8)*#Scale#)
H=(20*#Scale#)
SolidColor=#ThemeColor_TextInputer#
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(8*#Scale#)
AntiAlias=1
FocusDismiss=1
DefaultValue=[#Longitude]
Command1=[!WriteKeyValue Variables "Longitude" "$UserInput$" "#@#Settings.inc"][!RefreshApp]
OnDismissAction=[!HideMeter CiP_OIS.03.B01.02Z][!Redraw]
DynamicVariables=1
InputNumber=1

[GiP_OI.03.00]
Group=GiP_OI.03.00
Hidden=1
[iP_OI.03.00.00]
Meter=Shape
Shape=Rectangle (1*#Scale#),(1*#Scale#),((285-2)*#Scale#),((80-2)*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_Option#
X=([iP_BO3:XW]-285*#Scale#)
Y=([iP_BO3:Y])
DynamicVariables=1
MeterStyle=GiP_OI.03.00
[iP_OI.03.00.01]
Meter=String
Text=#T.Please_Wait#
MeterStyle=FontStyle_General|GiP_OI.03.00
X=([iP_OI.03.00.00:X]+[iP_OI.03.00.00:W]/2+1*#Scale#)
Y=([iP_OI.03.00.00:Y]+[iP_OI.03.00.00:H]/2+1*#Scale#)
StringAlign=CenterCenter


[GiP_OI.03.01]
Group=GiP_OI.03.01
Hidden=1
[iP_OI.03.01.00]
Meter=Shape
X=([iP_BO3:XW]-285*#Scale#)
Y=([iP_BO3:Y])
Shape=Rectangle 0,0,(285*#Scale#),([iP_OI.03.01.01:H]+(16*2+40+16*2)*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_TextInputer#
Shape2=Rectangle 0,0,(285*#Scale#),([iP_OI.03.01.01:H]+(16*2+40+16*2)*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape3=Rectangle (1*#Scale#),(1*#Scale#),((285-2)*#Scale#),([iP_OI.03.01.01:H]+(16*2+40+16*2-2)*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape4=Combine Shape2 | Exclude Shape3
Shape5=Rectangle 0,0,(285*#Scale#),([iP_OI.03.01.01:H]+(16*2+40+16*2)*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_Bar#
Shape6=Rectangle 0,(([iP_OI.03.01.01:H]+16*2)*#Scale#),(285*#Scale#),((16*2+40)*#Scale#)
Shape7=Combine Shape5 | Intersect Shape6
Shape8=Rectangle 0,(([iP_OI.03.01.01:H]+16*2)*#Scale#),(285*#Scale#),(1*#Scale#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder# 
DynamicVariables=1
MeterStyle=GiP_OI.03.01
[iP_OI.03.01.01]
Meter=String
MeterStyle=FontStyle_General|GiP_OI.03.01
Text=#S.Global.8#
X=([iP_OI.03.01.00:X]+16*#Scale#)
Y=([iP_OI.03.01.00:Y]+16*#Scale#)
W=((285-16*2)*#Scale#)
ClipString=2
MeterStyle=GiP_OI.03.01
[iP_OI.03.01.02.00]
Meter=Shape
X=([iP_OI.03.01.00:X]+16*#Scale#)
Y=([iP_OI.03.01.00:YH]-(40+16)*#Scale#)
Shape=Rectangle 0,0,((285-16*2)*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_TextInputer#
Shape2=Rectangle 0,0,((285-16*2)*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape3=Rectangle (1*#Scale#),(1*#Scale#),((285-16*2-2)*#Scale#),(38*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape4=Combine Shape2 | Exclude Shape3
DynamicVariables=1
MouseOverAction=[!ShowMeter H#CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!HideMeter H#CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!HideMeterGroup GiP_OI.03.01][!Redraw]
MeterStyle=GiP_OI.03.01
[HiP_OI.03.01.02.00]
Meter=Shape
X=0r
Y=0r
Shape=Rectangle 0,0,((285-16*2)*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BackgroundSelectedLight#
DynamicVariables=1
Hidden=1
[iP_OI.03.01.02.01]
Meter=String
Text=#T.OK#
MeterStyle=FontStyle_General|GiP_OI.03.01
X=([iP_OI.03.01.02.00:X]+[iP_OI.03.01.02.00:W]/2)
Y=([iP_OI.03.01.02.00:Y]+[iP_OI.03.01.02.00:H]/2)
StringAlign=CenterCenter

[CiP_OI.01]
Meter=Shape
MeterStyle=STIC|TIB
[CiP_OI.02]
Meter=Shape
MeterStyle=STIC|Next
[CiP_OI.03]
Meter=Shape
MeterStyle=STIC|NextB
[CiP_OI.04]
Meter=Shape
MeterStyle=STIC|Next
[CiP_OI.05]
Meter=Shape
MeterStyle=STIC|Next
X=([iP_OI.05:X]-100*#Scale#)
Y=([iP_OI.05:Y])
Shape=Rectangle (-4*#Scale#),(-4*#Scale#),((300+8)*#Scale#),((48+8*2)*#Scale#+[iP_OI.05.01.01:H]+[iP_OI.05.01.02:H]),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_TextInputer#
Shape2=Rectangle (-4*#Scale#),(-4*#Scale#),((300+8)*#Scale#),((48+8*2)*#Scale#+[iP_OI.05.01.01:H]+[iP_OI.05.01.02:H]),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape3=Rectangle ((-4+1)*#Scale#),((-4+1)*#Scale#),(((300+8)-2)*#Scale#),((48-2+8*2)*#Scale#+[iP_OI.05.01.01:H]+[iP_OI.05.01.02:H]),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#)
Shape4=Combine Shape2 | Exclude Shape3
Shape5=Rectangle 0,0,(300*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_TextInputer#
Shape6=Rectangle 0,0,(300*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape7=Rectangle (1*#Scale#),(1*#Scale#),((300-2)*#Scale#),(38*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape8=Combine Shape6 | Exclude Shape7
Shape9=Rectangle 0,0,(300*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_General#
Shape10=Rectangle 0,(-2*#Scale#),(300*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#)
Shape11=Combine Shape9 | Exclude Shape10
DynamicVariables=1

[GiP_OI.05.01]
Group=GiP_OI.05.01
Hidden=1
[iP_OI.05.01.01]
Meter=String
MeterStyle=GiP_OI.05.01|FontStyle_General
X=([CiP_OI.05:X]+8*#Scale#)
Y=([CiP_OI.05:Y]+(40+8)*#Scale#)
Text=#S.Widgets_Settings.44#
W=((300-8*2)*#Scale#)
ClipString=2
StringStyle=BOLD
[iP_OI.05.01.02]
Meter=String
X=0r
Y=0R
MeterStyle=GiP_OI.05.01|FontStyle_General
Text=#S.Widgets_Settings.45#
W=((300-8*2)*#Scale#)
ClipString=2
