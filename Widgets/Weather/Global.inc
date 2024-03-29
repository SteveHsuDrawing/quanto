[Variables]
Disabled=0

ImageTint0=255,255,255
ImageTint1=#FontColor_General#

MGBX=0
MGBY=145
GapX=(62+2*#Design#)
GapY=64

MaxTep=(Max([temp_1h],Max([temp_2h],Max([temp_3h],Max([temp_4h],Max([temp_5h],Max([temp_6h],Max([temp_7h],[temp_8h]))))))))
MinTep=(Min([temp_1h],Min([temp_2h],Min([temp_3h],Min([temp_4h],Min([temp_5h],Min([temp_6h],Min([temp_7h],[temp_8h]))))))))
DltTep=(#MaxTep#-#MinTep#)

DTep1=([temp_1h]-#MinTep#)
DTep2=([temp_2h]-#MinTep#)
DTep3=([temp_3h]-#MinTep#)
DTep4=([temp_4h]-#MinTep#)
DTep5=([temp_5h]-#MinTep#)
DTep6=([temp_6h]-#MinTep#)
DTep7=([temp_7h]-#MinTep#)
DTep8=([temp_8h]-#MinTep#)

PTep1=(1-Clamp(((#DTep1#+2)/(#DltTep#+2)),0,1))
PTep2=(1-Clamp(((#DTep2#+2)/(#DltTep#+2)),0,1))
PTep3=(1-Clamp(((#DTep3#+2)/(#DltTep#+2)),0,1))
PTep4=(1-Clamp(((#DTep4#+2)/(#DltTep#+2)),0,1))
PTep5=(1-Clamp(((#DTep5#+2)/(#DltTep#+2)),0,1))
PTep6=(1-Clamp(((#DTep6#+2)/(#DltTep#+2)),0,1))
PTep7=(1-Clamp(((#DTep7#+2)/(#DltTep#+2)),0,1))
PTep8=(1-Clamp(((#DTep8#+2)/(#DltTep#+2)),0,1))

HR=255
HG=160
HB=96
MR=96
MG=160
MB=96
LR=96
LG=96
LB=255

CHTep1=((Clamp((1-#PTep1#),1/2,1)-1/2)*2)
CHTep2=((Clamp((1-#PTep2#),1/2,1)-1/2)*2)
CHTep3=((Clamp((1-#PTep3#),1/2,1)-1/2)*2)
CHTep4=((Clamp((1-#PTep4#),1/2,1)-1/2)*2)
CHTep5=((Clamp((1-#PTep5#),1/2,1)-1/2)*2)
CHTep6=((Clamp((1-#PTep6#),1/2,1)-1/2)*2)
CHTep7=((Clamp((1-#PTep7#),1/2,1)-1/2)*2)
CHTep8=((Clamp((1-#PTep8#),1/2,1)-1/2)*2)

CMTep1=(((1-#PTep1#)-(Clamp((1-#PTep1#),1/2,1)-1/2)*2)*2)
CMTep2=(((1-#PTep2#)-(Clamp((1-#PTep2#),1/2,1)-1/2)*2)*2)
CMTep3=(((1-#PTep3#)-(Clamp((1-#PTep3#),1/2,1)-1/2)*2)*2)
CMTep4=(((1-#PTep4#)-(Clamp((1-#PTep4#),1/2,1)-1/2)*2)*2)
CMTep5=(((1-#PTep5#)-(Clamp((1-#PTep5#),1/2,1)-1/2)*2)*2)
CMTep6=(((1-#PTep6#)-(Clamp((1-#PTep6#),1/2,1)-1/2)*2)*2)
CMTep7=(((1-#PTep7#)-(Clamp((1-#PTep7#),1/2,1)-1/2)*2)*2)
CMTep8=(((1-#PTep8#)-(Clamp((1-#PTep8#),1/2,1)-1/2)*2)*2)

CLTep1=((Clamp(#PTep1#,1/2,1)-1/2)*2)
CLTep2=((Clamp(#PTep2#,1/2,1)-1/2)*2)
CLTep3=((Clamp(#PTep3#,1/2,1)-1/2)*2)
CLTep4=((Clamp(#PTep4#,1/2,1)-1/2)*2)
CLTep5=((Clamp(#PTep5#,1/2,1)-1/2)*2)
CLTep6=((Clamp(#PTep6#,1/2,1)-1/2)*2)
CLTep7=((Clamp(#PTep7#,1/2,1)-1/2)*2)
CLTep8=((Clamp(#PTep8#,1/2,1)-1/2)*2)

CTep1=(#HR#*#CHTep1#+#MR#*#CMTep1#+#LR#*#CLTep1#),(#HG#*#CHTep1#+#MG#*#CMTep1#+#LG#*#CLTep1#),(#HB#*#CHTep1#+#MB#*#CMTep1#+#LB#*#CLTep1#)
CTep2=(#HR#*#CHTep2#+#MR#*#CMTep2#+#LR#*#CLTep2#),(#HG#*#CHTep2#+#MG#*#CMTep2#+#LG#*#CLTep2#),(#HB#*#CHTep2#+#MB#*#CMTep2#+#LB#*#CLTep2#)
CTep3=(#HR#*#CHTep3#+#MR#*#CMTep3#+#LR#*#CLTep3#),(#HG#*#CHTep3#+#MG#*#CMTep3#+#LG#*#CLTep3#),(#HB#*#CHTep3#+#MB#*#CMTep3#+#LB#*#CLTep3#)
CTep4=(#HR#*#CHTep4#+#MR#*#CMTep4#+#LR#*#CLTep4#),(#HG#*#CHTep4#+#MG#*#CMTep4#+#LG#*#CLTep4#),(#HB#*#CHTep4#+#MB#*#CMTep4#+#LB#*#CLTep4#)
CTep5=(#HR#*#CHTep5#+#MR#*#CMTep5#+#LR#*#CLTep5#),(#HG#*#CHTep5#+#MG#*#CMTep5#+#LG#*#CLTep5#),(#HB#*#CHTep5#+#MB#*#CMTep5#+#LB#*#CLTep5#)
CTep6=(#HR#*#CHTep6#+#MR#*#CMTep6#+#LR#*#CLTep6#),(#HG#*#CHTep6#+#MG#*#CMTep6#+#LG#*#CLTep6#),(#HB#*#CHTep6#+#MB#*#CMTep6#+#LB#*#CLTep6#)
CTep7=(#HR#*#CHTep7#+#MR#*#CMTep7#+#LR#*#CLTep7#),(#HG#*#CHTep7#+#MG#*#CMTep7#+#LG#*#CLTep7#),(#HB#*#CHTep7#+#MB#*#CMTep7#+#LB#*#CLTep7#)
CTep8=(#HR#*#CHTep8#+#MR#*#CMTep8#+#LR#*#CLTep8#),(#HG#*#CHTep8#+#MG#*#CMTep8#+#LG#*#CLTep8#),(#HB#*#CHTep8#+#MB#*#CMTep8#+#LB#*#CLTep8#)

StrokeColor0=#ThemeColor_General#,255
StrokeColor1=255,255,255,128

[Rainmeter]
RightMouseUpAction=[!SkinCustomMenu]
ContextTitle=#OT.Alternative#
ContextTitle2=#OT.Skin_Settings#
ContextTitle3=#OT.GlobalSettings#
ContextTitle4=-
ContextTitle5=#OT.Refresh#
ContextTitle6=#OT.Unload#
ContextTitle7=#OT.More#

ContextAction=#GeneralAction18#
ContextAction2=#GeneralAction11#
ContextAction3=#GeneralAction4#
ContextAction4=[]
ContextAction5=#GeneralAction5#
ContextAction6=#GeneralAction6#[!CommandMeasure "RunCommand" "Run"]
ContextAction7=#GeneralAction7#

MiddleMouseUpAction=#GeneralAction18#

[Main]
Measure=WebParser
URL=https://api.openweathermap.org/data/2.5/onecall?lat=#Latitude#&lon=#Longitude#&exclude=minutely&lang=#languageCodeOWM#&units=[#Imperial.[#Imperial]]&appid=#OWMAPIKey#
RegExp=(?siU)"current":{"dt":(.*),.*"temp":(.*),.*"feels_like":(.*),.*"pressure":(.*),.*"humidity":(.*),.*"dew_point":(.*),.*"uvi":(.*),.*"clouds":(.*),.*"visibility":(.*),.*"wind_speed":(.*),.*"wind_deg":(.*),.*"description":"(.*)".*"icon":"(.*)".*"dt":(.*),.*"temp":(.*),.*"humidity":(.*),.*"description":"(.*)".*"icon":"(.*)"}].*"dt":(.*),.*"temp":(.*),.*"humidity":(.*),.*"description":"(.*)".*"icon":"(.*)"}].*"dt":(.*),.*"temp":(.*),.*"humidity":(.*),.*"description":"(.*)".*"icon":"(.*)"}].*"dt":(.*),.*"temp":(.*),.*"humidity":(.*),.*"description":"(.*)".*"icon":"(.*)"}].*"dt":(.*),.*"temp":(.*),.*"humidity":(.*),.*"description":"(.*)".*"icon":"(.*)"}].*"dt":(.*),.*"temp":(.*),.*"humidity":(.*),.*"description":"(.*)".*"icon":"(.*)"}].*"dt":(.*),.*"temp":(.*),.*"humidity":(.*),.*"description":"(.*)".*"icon":"(.*)"}].*"dt":(.*),.*"temp":(.*),.*"humidity":(.*),.*"description":"(.*)".*"icon":"(.*)"}].*{"dt":(.*),.*"min":(.*),.*"max":(.*),.*"humidity":(.*),.*"description":"(.*)".*"icon":"(.*)"}].*"dt":(.*),.*"min":(.*),.*"max":(.*),.*"humidity":(.*),.*"description":"(.*)".*"icon":"(.*)"}].*"dt":(.*),.*"min":(.*),.*"max":(.*),.*"humidity":(.*),.*"description":"(.*)".*"icon":"(.*)"}].*"dt":(.*),.*"min":(.*),.*"max":(.*),.*"humidity":(.*),.*"description":"(.*)".*"icon":"(.*)"}].*
UpdateRate=(#UpdateRate#*60)
FinishAction=[!ShowMeterGroup Global][!ShowMeterGroup Global#Design#][!EnableMouseAction MeterSquare "MouseOverAction|MouseLeaveAction"][!HideMeter LDT][!HideMeter FI][!Update][!Redraw][!Delay 16][!EnableMeasure Alert]
OnConnectErrorAction=[!Delay 16][!HideMeterGroup Global][!HideMeterGroup Global#Design#][!DisableMouseAction MeterSquare "MouseOverAction|MouseLeaveAction"][!HideMeter LDT][!ShowMeter FI][!SetOption FI "ToolTipTitle" "#T.Connection_failed#"][!SetOption FI "ToolTipText" "#S.Global.6#"][!SetOption FI "LeftMouseUpAction" "[!Refresh]"][!Update][!Redraw]
OnRegExpErrorAction=[!Delay 16][!HideMeterGroup Global][!HideMeterGroup Global#Design#][!DisableMouseAction MeterSquare "MouseOverAction|MouseLeaveAction"][!HideMeter LDT][!ShowMeter FI][!SetOption FI "ToolTipTitle" "#T.Incorrect_format#"][!SetOption FI "ToolTipText" "#S.Widgets_Weather.2#"][!SetOption FI "LeftMouseUpAction" "[https://openweathermap.org/faq]"][!Update][!Redraw][!Delay 16][!EnableMeasure Error]
Disabled=#Disabled#
Debug=2

[M]
Measure=Script
ScriptFile=convertTime.lua

[Global]
Group=Global
Hidden=1
[Global0]
Group=Global0
Hidden=1
[Global1]
Group=Global1
Hidden=1
[AlertG]
Group=Alert
Hidden=1

[dt_0h]
Measure=WebParser
URL=[Main]
StringIndex=1
Substitute="":"0"

[temp_0h]
Measure=WebParser
URL=[Main]
StringIndex=2
Substitute="":"0"

[feels_like_0h]
Measure=WebParser
URL=[Main]
StringIndex=3
Substitute="":"0"

[pressure_0h]
Measure=WebParser
URL=[Main]
StringIndex=4
Substitute="":"0"

[humidity_0h]
Measure=WebParser
URL=[Main]
StringIndex=5
Substitute="":"0"

[dew_point_0h]
Measure=WebParser
URL=[Main]
StringIndex=6
Substitute="":"0"

[uvi_0h]
Measure=WebParser
URL=[Main]
StringIndex=7
Substitute="":"0"

[clouds_0h]
Measure=WebParser
URL=[Main]
StringIndex=8
Substitute="":"0"

[visibility_0h]
Measure=WebParser
URL=[Main]
StringIndex=9
Substitute="":"0"

[wind_speed_0h]
Measure=WebParser
URL=[Main]
StringIndex=10
Substitute="":"0"

[wind_deg_0h]
Measure=WebParser
URL=[Main]
StringIndex=11
Substitute="":"0"

[description_0h]
Measure=WebParser
URL=[Main]
StringIndex=12
Substitute="":"0"

[icon_0h]
Measure=WebParser
URL=[Main]
StringIndex=13
Substitute="":"0"

[dt_1h]
Measure=WebParser
URL=[Main]
StringIndex=14
Substitute="":"0"

[temp_1h]
Measure=WebParser
URL=[Main]
StringIndex=15
Substitute="":"0"

[humidity_1h]
Measure=WebParser
URL=[Main]
StringIndex=16
Substitute="":"0"

[description_1h]
Measure=WebParser
URL=[Main]
StringIndex=17
Substitute="":"0"

[icon_1h]
Measure=WebParser
URL=[Main]
StringIndex=18
Substitute="":"0"

[dt_2h]
Measure=WebParser
URL=[Main]
StringIndex=19
Substitute="":"0"

[temp_2h]
Measure=WebParser
URL=[Main]
StringIndex=20
Substitute="":"0"

[humidity_2h]
Measure=WebParser
URL=[Main]
StringIndex=21
Substitute="":"0"

[description_2h]
Measure=WebParser
URL=[Main]
StringIndex=22
Substitute="":"0"

[icon_2h]
Measure=WebParser
URL=[Main]
StringIndex=23
Substitute="":"0"

[dt_3h]
Measure=WebParser
URL=[Main]
StringIndex=24
Substitute="":"0"

[temp_3h]
Measure=WebParser
URL=[Main]
StringIndex=25
Substitute="":"0"

[humidity_3h]
Measure=WebParser
URL=[Main]
StringIndex=26
Substitute="":"0"

[description_3h]
Measure=WebParser
URL=[Main]
StringIndex=27
Substitute="":"0"

[icon_3h]
Measure=WebParser
URL=[Main]
StringIndex=28
Substitute="":"0"

[dt_4h]
Measure=WebParser
URL=[Main]
StringIndex=29
Substitute="":"0"

[temp_4h]
Measure=WebParser
URL=[Main]
StringIndex=30
Substitute="":"0"

[humidity_4h]
Measure=WebParser
URL=[Main]
StringIndex=31
Substitute="":"0"

[description_4h]
Measure=WebParser
URL=[Main]
StringIndex=32
Substitute="":"0"

[icon_4h]
Measure=WebParser
URL=[Main]
StringIndex=33
Substitute="":"0"

[dt_5h]
Measure=WebParser
URL=[Main]
StringIndex=34
Substitute="":"0"

[temp_5h]
Measure=WebParser
URL=[Main]
StringIndex=35
Substitute="":"0"

[humidity_5h]
Measure=WebParser
URL=[Main]
StringIndex=36
Substitute="":"0"

[description_5h]
Measure=WebParser
URL=[Main]
StringIndex=37
Substitute="":"0"

[icon_5h]
Measure=WebParser
URL=[Main]
StringIndex=38
Substitute="":"0"

[dt_6h]
Measure=WebParser
URL=[Main]
StringIndex=39
Substitute="":"0"

[temp_6h]
Measure=WebParser
URL=[Main]
StringIndex=40
Substitute="":"0"

[humidity_6h]
Measure=WebParser
URL=[Main]
StringIndex=41
Substitute="":"0"

[description_6h]
Measure=WebParser
URL=[Main]
StringIndex=42
Substitute="":"0"

[icon_6h]
Measure=WebParser
URL=[Main]
StringIndex=43
Substitute="":"0"

[dt_7h]
Measure=WebParser
URL=[Main]
StringIndex=44
Substitute="":"0"

[temp_7h]
Measure=WebParser
URL=[Main]
StringIndex=45
Substitute="":"0"

[humidity_7h]
Measure=WebParser
URL=[Main]
StringIndex=46
Substitute="":"0"

[description_7h]
Measure=WebParser
URL=[Main]
StringIndex=47
Substitute="":"0"

[icon_7h]
Measure=WebParser
URL=[Main]
StringIndex=48
Substitute="":"0"

[dt_8h]
Measure=WebParser
URL=[Main]
StringIndex=49
Substitute="":"0"

[temp_8h]
Measure=WebParser
URL=[Main]
StringIndex=50
Substitute="":"0"

[humidity_8h]
Measure=WebParser
URL=[Main]
StringIndex=51
Substitute="":"0"

[description_8h]
Measure=WebParser
URL=[Main]
StringIndex=52
Substitute="":"0"

[icon_8h]
Measure=WebParser
URL=[Main]
StringIndex=53
Substitute="":"0"

[dt_0d]
Measure=WebParser
URL=[Main]
StringIndex=54
Substitute="":"0"

[mintemp_0d]
Measure=WebParser
URL=[Main]
StringIndex=55
Substitute="":"0"

[maxtemp_0d]
Measure=WebParser
URL=[Main]
StringIndex=56
Substitute="":"0"

[humidity_0d]
Measure=WebParser
URL=[Main]
StringIndex=57
Substitute="":"0"

[description_0d]
Measure=WebParser
URL=[Main]
StringIndex=58
Substitute="":"0"

[icon_0d]
Measure=WebParser
URL=[Main]
StringIndex=59
Substitute="":"0"

[dt_1d]
Measure=WebParser
URL=[Main]
StringIndex=60
Substitute="":"0"

[mintemp_1d]
Measure=WebParser
URL=[Main]
StringIndex=61
Substitute="":"0"

[maxtemp_1d]
Measure=WebParser
URL=[Main]
StringIndex=62
Substitute="":"0"

[humidity_1d]
Measure=WebParser
URL=[Main]
StringIndex=63
Substitute="":"0"

[description_1d]
Measure=WebParser
URL=[Main]
StringIndex=64
Substitute="":"0"

[icon_1d]
Measure=WebParser
URL=[Main]
StringIndex=65
Substitute="":"0"

[dt_2d]
Measure=WebParser
URL=[Main]
StringIndex=66
Substitute="":"0"

[mintemp_2d]
Measure=WebParser
URL=[Main]
StringIndex=67
Substitute="":"0"

[maxtemp_2d]
Measure=WebParser
URL=[Main]
StringIndex=68
Substitute="":"0"

[humidity_2d]
Measure=WebParser
URL=[Main]
StringIndex=69
Substitute="":"0"

[description_2d]
Measure=WebParser
URL=[Main]
StringIndex=70
Substitute="":"0"

[icon_2d]
Measure=WebParser
URL=[Main]
StringIndex=71
Substitute="":"0"

[dt_3d]
Measure=WebParser
URL=[Main]
StringIndex=72
Substitute="":"0"

[mintemp_3d]
Measure=WebParser
URL=[Main]
StringIndex=73
Substitute="":"0"

[maxtemp_3d]
Measure=WebParser
URL=[Main]
StringIndex=74
Substitute="":"0"

[humidity_3d]
Measure=WebParser
URL=[Main]
StringIndex=75
Substitute="":"0"

[description_3d]
Measure=WebParser
URL=[Main]
StringIndex=76
Substitute="":"0"

[icon_3d]
Measure=WebParser
URL=[Main]
StringIndex=77
Substitute="":"0"

[twind_deg_0h]
Measure=Calc
Formula=[wind_deg_0h]<22.5?1000:([wind_deg_0h]<67.5?2000:([wind_deg_0h]<112.5?3000:([wind_deg_0h]<157.5?4000:([wind_deg_0h]<202.5?5000:([wind_deg_0h]<247.5?6000:([wind_deg_0h]<292.5?7000:([wind_deg_0h]<337.5?8000:([wind_deg_0h]<360?1000:1000))))))))
Substitute="1000":"#T.N#","2000":"#T.NE#","3000":"#T.E#","4000":"#T.SE#","5000":"#T.S#","6000":"#T.SW#","7000":"#T.W#","8000":"#T.NW#"
DynamicVariables=1

[t_0h]
Measure=String
String=Z[&M:HA[#TimeFormat_Global]([&d[#CURRENTSECTION]])]
Substitute="Z0":"","Z":""
DynamicVariables=1

[t_1h]
Measure=String
String=Z[&M:H[#TimeFormat_Global]([&d[#CURRENTSECTION]])]
Substitute="Z0":"","Z":""
DynamicVariables=1

[t_2h]
Measure=String
String=Z[&M:H[#TimeFormat_Global]([&d[#CURRENTSECTION]])]
Substitute="Z0":"","Z":""
DynamicVariables=1

[t_3h]
Measure=String
String=Z[&M:H[#TimeFormat_Global]([&d[#CURRENTSECTION]])]
Substitute="Z0":"","Z":""
DynamicVariables=1

[t_4h]
Measure=String
String=Z[&M:H[#TimeFormat_Global]([&d[#CURRENTSECTION]])]
Substitute="Z0":"","Z":""
DynamicVariables=1

[t_5h]
Measure=String
String=Z[&M:H[#TimeFormat_Global]([&d[#CURRENTSECTION]])]
Substitute="Z0":"","Z":""
DynamicVariables=1

[t_6h]
Measure=String
String=Z[&M:H[#TimeFormat_Global]([&d[#CURRENTSECTION]])]
Substitute="Z0":"","Z":""
DynamicVariables=1

[t_7h]
Measure=String
String=Z[&M:H[#TimeFormat_Global]([&d[#CURRENTSECTION]])]
Substitute="Z0":"","Z":""
DynamicVariables=1

[t_8h]
Measure=String
String=Z[&M:H[#TimeFormat_Global]([&d[#CURRENTSECTION]])]
Substitute="Z0":"","Z":""
DynamicVariables=1

[t_0d]
Measure=String
String=#T.Today#

[t_1d]
Measure=String
String=[&M:W([&d[#CURRENTSECTION]])]
Substitute="Sun":"#T.Sun#","Mon":"#T.Mon#","Tue":"#T.Tue#","Wed":"#T.Wed#","Thu":"#T.Thu#","Fri":"#T.Fri#","Sat":"#T.Sat#"
DynamicVariables=1

[t_2d]
Measure=String
String=[&M:W([&d[#CURRENTSECTION]])]
Substitute="Sun":"#T.Sun#","Mon":"#T.Mon#","Tue":"#T.Tue#","Wed":"#T.Wed#","Thu":"#T.Thu#","Fri":"#T.Fri#","Sat":"#T.Sat#"
DynamicVariables=1

[t_3d]
Measure=String
String=[&M:W([&d[#CURRENTSECTION]])]
Substitute="Sun":"#T.Sun#","Mon":"#T.Mon#","Tue":"#T.Tue#","Wed":"#T.Wed#","Thu":"#T.Thu#","Fri":"#T.Fri#","Sat":"#T.Sat#"
DynamicVariables=1

[Alert]
Measure=WebParser
URL=file://#CURRENTPATH#WebParserDump.txt
UpdateRate=(#UpdateRate#*60)
RegExp=(?siU)"sender_name":"(.*)".*"event":"(.*)".*"start":(.*),.*"end":(.*),.*"description":"(.*)".*
FinishAction=[!Delay 16][!SetOption "MeterText0" "X" "(32*#Scale#)"][!ShowMeterGroup Alert][!Update][!Redraw]
OnConnectErrorAction=[!Delay 32][!SetOption "MeterText0" "X" "(14*#Scale#)"][!HideMeterGroup Alert][!Update][!Redraw]
OnDownloadErrorAction=[!Delay 32][!SetOption "MeterText0" "X" "(14*#Scale#)"][!HideMeterGroup Alert][!Update][!Redraw]
OnRegExpErrorAction=[!Delay 32][!SetOption "MeterText0" "X" "(14*#Scale#)"][!HideMeterGroup Alert][!Update][!Redraw]
Disabled=1
DynamicVariables=1

[Alertsender_name]
Measure=WebParser
URL=[Alert]
StringIndex=1

[Alertevent]
Measure=WebParser
URL=[Alert]
StringIndex=2

[dtAlertstart]
Measure=WebParser
URL=[Alert]
StringIndex=3

[dtAlertend]
Measure=WebParser
URL=[Alert]
StringIndex=4

[Alertdescription]
Measure=WebParser
URL=[Alert]
StringIndex=5
Substitute="\n":"#CRLF#"


[tAlertstart]
Measure=String
String=[&M:C([&d[#CURRENTSECTION]])]
DynamicVariables=1

[tAlertend]
Measure=String
String=[&M:C([&d[#CURRENTSECTION]])]
DynamicVariables=1


[ptemp_0h]
Measure=Calc
Formula=([temp_0h]-[mintemp_0d])/([maxtemp_0d]-[mintemp_0d])
MinValue=0
MaxValue=1
DynamicVariables=1

[Error]
Measure=WebParser
URL=file://#CURRENTPATH#WebParserDump.txt
UpdateRate=(#UpdateRate#*60)
RegExp=(?siU)"cod":(.*),.*"message": "(.*)".*
FinishAction=[!Delay 16][!SetOption FI "ToolTipText" "#S.Widgets_Weather.2#"][!Update][!Redraw]
Disabled=1
DynamicVariables=1

[cod]
Measure=WebParser
URL=[Error]
StringIndex=1

[message]
Measure=WebParser
URL=[Error]
StringIndex=2

[RunCommand]
Measure=Plugin
Plugin=RunCommand
Program=cmd.exe /u /c
Parameter=del /f /s /q /a #CURRENTPATH#WebParserDump.txt

[XN]
X=((58+4*#Design#)*#Scale#)r
Y=0r

[XN2]
X=(-20*#Scale#)r
Y=0r

[XN3]
X=(#GapX#*2*#Scale#)r
Y=0r

[YN]
X=0r
Y=(32*#Scale#)r

[SC_0]
Shape=Rectangle 0,0,(56*#Scale#),(122*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_OptionAlpha#
Shape2=Rectangle 0,0,(56*#Scale#),(122*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape3=Rectangle (1*#Scale#),(1*#Scale#),((56-2)*#Scale#),((122-2)*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#)
Shape4=Combine Shape2 | Exclude Shape3
DynamicVariables=1

[SC_1]
StringAlign=CenterCenter
FontSize=(9*#Scale#)
InlinePattern="💧 "
InlineSetting=Size | (7*#Scale#)

[SC_2]
W=(24*#Scale#)
H=(24*#Scale#)
ImageTint=[#ImageTint[#IconPack]]
DynamicVariables=1

[SC_3]
StringAlign=CenterCenter
FontSize=(9*#Scale#)
FontColor=#FontColor_General#,128
InlinePattern="💧 "
InlineSetting=Size | (7*#Scale#)

[SC_4]
StringAlign=CenterCenter
FontSize=(9*#Scale#)
FontColor=#FontColor_General#,128
InlinePattern="💧 "
InlineSetting=Size | (7*#Scale#)

[SC_5]
ImageTint=#FontColor_General#
W=(12*#Scale#)
H=(12*#Scale#)
DynamicVariables=1
MouseOverAction=[!ShowMeter H#CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!HideMeter H#CURRENTSECTION#][!Redraw]

[SC_6]
Shape=Rectangle 0,0,(20*#Scale#),(20*#Scale#),(2*#Scale#*#Arched#),(2*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BackgroundSelected#
DynamicVariables=1
Hidden=1

[SC_7]
StringAlign=LeftCenter
FontSize=(9*#Scale#)
FontColor=#FontColor_General#,196
InlinePattern="💧 "
InlineSetting=Size | (7*#Scale#)

[SC_8]
X=0r
Y=(20*#Scale#)r
StringAlign=LeftCenter
FontSize=(9*#Scale#)
FontColor=#FontColor_General#
InlinePattern="💧 "
InlineSetting=Size | (7*#Scale#)

[SC_9]
Shape=Rectangle (8*#Scale#*(1-#Design#)),0,((256-4-8*2*(1-#Design#))*#Scale#),(1*#Scale#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
DynamicVariables=1

[SC_10]
W=(18*#Scale#)
H=(18*#Scale#)
ImageTint=[#ImageTint[#IconPack]]
DynamicVariables=1

[SC_11]
StringAlign=LeftCenter
FontSize=(9*#Scale#)
FontColor=#FontColor_General#
InlinePattern="💧 "
InlineSetting=Size | (7*#Scale#)

[SC_12]
StringAlign=RightCenter
FontSize=(9*#Scale#)
FontColor=#FontColor_General#,128
InlinePattern="💧 "
InlineSetting=Size | (7*#Scale#)

[SC_13]
X=(#GapX#*#Scale#)r
Y=(([#MGBY]+[#P[#CURRENTSECTION]]*[#GapY]-16)*[#Scale])
StringAlign=CenterCenter

[SC_14]
X=(#GapX#*#Scale#)r
Y=0r
StringAlign=CenterCenter
FontSize=(9*#Scale#)
FontColor=#FontColor_General#,192
InlinePattern="💧 "
InlineSetting=Size | (7*#Scale#)

[SC_15]
X=(#GapX#*#Scale#)r
Y=0r
W=(24*#Scale#)
H=(24*#Scale#)
ImageTint=[#ImageTint[#IconPack]]
DynamicVariables=1

[SC_16]
X=(#GapX#*#Scale#)r
Y=0r
StringAlign=CenterCenter
FontSize=(9*#Scale#)
FontColor=#FontColor_General#,128
InlinePattern="💧 "
InlineSetting=Size | (7*#Scale#)

[SC_17]
StringAlign=LeftCenter
FontColor=#FontColor_General#
InlinePattern="💧 "
InlineSetting=Size | (9*#Scale#)

[SC_18]
StringAlign=LeftCenter
FontColor=#FontColor_General#,192
InlinePattern="💧 "
InlineSetting=Size | (9*#Scale#)

[SC_19]
StringAlign=LeftCenter
FontSize=(9*#Scale#)
FontColor=#FontColor_General#,128
InlinePattern="💧 "
InlineSetting=Size | (7*#Scale#)

[SC_20]
Text=#T.Loading#
X=(#CURRENTCONFIGWIDTH#/2)
Y=(#CURRENTCONFIGHEIGHT#/2)
W=(#CURRENTCONFIGWIDTH#-16*#Scale#)
ClipString=2
StringAlign=CenterCenter
FontSize=(18*#Scale#)

[SC_21]
ImageName=#@#Bitmap\Warning
ImageTint=#FontColor_General#
X=(#CURRENTCONFIGWIDTH#/2-32/2*#Scale#)
Y=(#CURRENTCONFIGHEIGHT#/2-32/2*#Scale#)
W=(32*#Scale#)
H=(32*#Scale#)
DynamicVariables=1
Hidden=1

[SC_22]
X=(6*#Scale#)
Y=(6*#Scale#)
Shape=Rectangle 0,0,(20*#Scale#),(20*#Scale#),(2*#Scale#*#Arched#),(2*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color 255,0,0,32

[SC_23]
ImageName=#@#Bitmap\Warning
ImageTint=(192+64*[mDM]),(64*[mDM]),(64*[mDM])
X=(4*#Scale#)r
Y=(4*#Scale#)r
W=(12*#Scale#)
H=(12*#Scale#)
DynamicVariables=1
ToolTipTitle=[Alertevent]
ToolTipText=[tAlertstart] - [tAlertend]#CRLF#[Alertdescription]#CRLF##CRLF#[Alertsender_name]