[MeterTitle]
Meter=String
Text=#T.About#
MeterStyle=FontStyle_Title
DynamicVariables=1

[MeterTitleButtonZone]
Meter=Shape
MeterStyle=MeterTitleButtonZoneStyle

[MeterTitleButtonSelected]
Meter=Shape
MeterStyle=MeterTitleButtonSelectedStyle

[Variables]
Fix=0
BeginX=384
BeginY=108
TitleButtonAction=[]
TitleButtonImageName=#@#Bitmap\NA
HelpButtonAction=[!WriteKeyValue Variables Mode 0 "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!WriteKeyValue Variables Page HelpCenter "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!WriteKeyValue Variables SubPage 00 "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!Refresh]
Gap=(84*#Scale#)
GapUnscaled=84
Gap2=(140*#Scale#)

; --------------------------- 選項背景 ---------------------------

[MeterOptionStyle]
X=0r
Y=((#Gap#))r
Shape=Rectangle 0,0,(605*#Scale#),(80*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_OptionAlpha#
Shape2=Rectangle 0,0,(605*#Scale#),(80*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape3=Rectangle (1*#Scale#),(1*#Scale#),((605-2)*#Scale#),((80-2)*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#)
Shape4=Combine Shape2 | Exclude Shape3
DynamicVariables=1

[MeterOptionSelectedStyle]
X=0r
Y=((#Gap#))r
Shape=Rectangle 0,0,(610*#Scale#),(#Scale#*80),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | Fill Color #ThemeColor_BackgroundSelectedLight# | Stroke Color 0,0,0,0
DynamicVariables=1
Hidden=1

[MeterOption1]
Meter=Shape
X=(#BeginX#*#Scale#)
Y=(#BeginY#*#Scale#)
Shape=Rectangle 0,0,(605*#Scale#),([MeterOption1.Feature1.Display42:YH]-(#BeginY#-8)*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_OptionAlpha#
Shape2=Rectangle 0,0,(605*#Scale#),([MeterOption1.Feature1.Display42:YH]-(#BeginY#-8)*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape3=Rectangle (1*#Scale#),(1*#Scale#),((605-2)*#Scale#),([MeterOption1.Feature1.Display42:YH]-(#BeginY#-8-2)*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#)
Shape4=Combine Shape2 | Exclude Shape3
Shape5=Rectangle 0,(80*#Scale#),(#Scale#*605),(1*#Scale#),0,0 | Fill Color #ThemeColor_BarBorder# | Stroke Color 0,0,0,0
DynamicVariables=1


; --------------------------- 選項圖示 ---------------------------

[MeterIconStyle]
H=(24*#Scale#)
W=(24*#Scale#)
X=0r
Y=((#Gap#))r
ImageTint=#FontColor_General#,255
DynamicVariables=1

[MeterIcon1]
Meter=Image
ImageName=#@#Bitmap\Information.png
X=((#BeginX#+24)*#Scale#)
Y=((#BeginY#+28)*#Scale#)
MeterStyle=MeterIconStyle
DynamicVariables=1

; --------------------------- 選項標題 ---------------------------

[MeterOptionTitleStyle]
X=0r
Y=((#Gap#))r
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(12*#Scale#)
AntiAlias=1
DynamicVariables=1

[MeterOptionTitle1]
Meter=String
Text=#T.Information#
X=((#BeginX#+68)*#Scale#)
Y=((#BeginY#+20)*#Scale#)
MeterStyle=MeterOptionTitleStyle
DynamicVariables=1

; --------------------------- 選項備註 ---------------------------

[MeterOptionTextStyle]
X=0r
Y=((#Gap#))r
FontFace=#FontFace_General#
FontColor=#FontColor_General#,128
FontSize=(10*#Scale#)
AntiAlias=1
DynamicVariables=1

[MeterOptionText1]
Meter=String
Text=¿Quanto? ¡Mucho!
X=0r
Y=((#BeginY#+40)*#Scale#)
MeterStyle=MeterOptionTextStyle
DynamicVariables=1


; --------------------------- 選項特性 ---------------------------

[MeterSmallIconStyle]
H=(16*#Scale#)
W=(16*#Scale#)
ImageTint=#FontColor_General#,255

[MeterSmallButtonStyle]
X=(((98)*#Scale#))r
Y=0r
Shape=Rectangle 0,0,(100*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_TextInputerAlpha#
Shape2=Rectangle 0,0,(100*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape3=Rectangle (1*#Scale#),(1*#Scale#),((100-2)*#Scale#),((40-2)*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape4=Combine Shape2 | Exclude Shape3
DynamicVariables=1

[MeterSmallButtonSelectedStyle]
X=(((98)*#Scale#))r
Y=0r
Shape=Rectangle 0,0,(100*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | Fill Color #ThemeColor_BackgroundSelected# | StrokeWidth 0
DynamicVariables=1
Hidden=1




[MeterOption1.Feature2.Display1]
Meter=Shape
X=((#BeginX#+484)*#Scale#)
Y=(((#BeginY#+20)+((#GapUnscaled#))*0)*#Scale#)
MeterStyle=MeterSmallButtonStyle
MouseOverAction=[!ShowMeter MeterOption8.Feature1.Display3][!Redraw]
MouseLeaveAction=[!HideMeter MeterOption8.Feature1.Display3][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables SubPage 12 "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!Refresh]

[MeterOption1.Feature2.Display2]
Meter=String
X=([MeterOption1.Feature2.Display1:X]+[MeterOption1.Feature2.Display1:W]/2)
Y=([MeterOption1.Feature2.Display1:Y]+[MeterOption1.Feature2.Display1:H]/2)
Text=#T.Changelog#
MeterStyle=MeterOptionTitleStyle
StringAlign=CenterCenter
DynamicVariables=1

[MeterOption8.Feature1.Display3]
Meter=Shape
X=[MeterOption1.Feature2.Display1:X]
Y=[MeterOption1.Feature2.Display1:Y]
MeterStyle=MeterSmallButtonSelectedStyle

[MeterOption1.Feature1.DisplayStyle1]
X=0r
Y=((26*#Scale#))r
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(12*#Scale#)
AntiAlias=1
DynamicVariables=1

[MeterOption1.Feature1.Display11]
Meter=String
Text=#T.Main_Author#
X=((#BeginX#+68)*#Scale#)
Y=(((#BeginY#+10)+((#GapUnscaled#))*1)*#Scale#)
MeterStyle=MeterOption1.Feature1.DisplayStyle1

[MeterOption1.Feature1.Display21]
Meter=String
Text=#T.Version#
MeterStyle=MeterOption1.Feature1.DisplayStyle1

[MeterOption1.Feature1.Display31]
Meter=String
Text=#T.License#
MeterStyle=MeterOption1.Feature1.DisplayStyle1

[MeterOption1.Feature1.Display41]
Meter=String
Text=#T.Special_Thanks#
MeterStyle=MeterOption1.Feature1.DisplayStyle1



[MeterOption1.Feature1.DisplayStyle2]
X=0r
Y=((26*#Scale#))r
W=((516-16-(Max([MeterOption1.Feature1.Display11:W],Max([MeterOption1.Feature1.Display21:W],Max([MeterOption1.Feature1.Display31:W],[MeterOption1.Feature1.Display41:W])))))*#Scale#)
ClipString=2
FontFace=#FontFace_General#
FontColor=#FontColor_General#,160
FontSize=(12*#Scale#)
AntiAlias=1
DynamicVariables=1

[MeterOption1.Feature1.Display12]
Meter=String
Text=#MainAuthor#
X=((#BeginX#+68+16+(Max([MeterOption1.Feature1.Display11:W],Max([MeterOption1.Feature1.Display21:W],Max([MeterOption1.Feature1.Display31:W],[MeterOption1.Feature1.Display41:W])))))*#Scale#)
Y=(((#BeginY#+10)+((#GapUnscaled#))*1)*#Scale#)
MeterStyle=MeterOption1.Feature1.DisplayStyle2

[MeterOption1.Feature1.Display22]
Meter=String
Text=#Version#
MeterStyle=MeterOption1.Feature1.DisplayStyle2

[MeterOption1.Feature1.Display32]
Meter=String
Text=#License#
MeterStyle=MeterOption1.Feature1.DisplayStyle2

[MeterOption1.Feature1.Display42]
Meter=String
Text=#ThanksTo#
MeterStyle=MeterOption1.Feature1.DisplayStyle2


[iP_SSO]
Shape=Rectangle 0,0,(300*#Scale#),(80*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_OptionAlpha#
Shape2=Rectangle 0,0,(300*#Scale#),(80*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape3=Rectangle (1*#Scale#),(1*#Scale#),((300-2)*#Scale#),((80-2)*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape4=Combine Shape2 | Exclude Shape3
DynamicVariables=1
MouseOverAction=[!ShowMeter H#CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!HideMeter H#CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[#About[#CURRENTSECTION].Link]
Hidden=[#About[#CURRENTSECTION].Hidden]

[iP_SSOH]
Shape=Rectangle 0,0,(300*#Scale#),(80*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | Fill Color #ThemeColor_BackgroundSelectedLight# | StrokeWidth 0
DynamicVariables=1
Hidden=1
Group=Hover

[iP_SOXN]
X=(305*#Scale#)r
Y=0r

[iP_SOYN]
X=0r
Y=(85*#Scale#)r

[iP_SSOBX]
X=(#BeginX#*#Scale#)

[iP_SSOBY]
Y=([MeterOption1.Feature1.Display42:YH]+13*#Scale#)

[.1]
Meter=Shape
Shape=Rectangle 0,0,((300+305*#About.2.Hidden#)*#Scale#),(80*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_OptionAlpha#
Shape2=Rectangle 0,0,((300+305*#About.2.Hidden#)*#Scale#),(80*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape3=Rectangle (1*#Scale#),(1*#Scale#),(((300+305*#About.2.Hidden#)-2)*#Scale#),((80-2)*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape4=Combine Shape2 | Exclude Shape3
DynamicVariables=1
MeterStyle=iP_SSO|iP_SSOBX|iP_SSOBY
[.3]
Meter=Shape
MeterStyle=iP_SSO|iP_SOYN
[.5]
Meter=Shape
MeterStyle=iP_SSO|iP_SOYN
[.2]
Meter=Shape
MeterStyle=iP_SSO|iP_SOXN|iP_SSOBY
LeftMouseUpAction=[!ShowMeterGroup DD][!Update][!Redraw]
[.4]
Meter=Shape
MeterStyle=iP_SSO|iP_SOYN
[.6]
Meter=Shape
MeterStyle=iP_SSO|iP_SOYN
[H.1]
Meter=Shape
Shape=Rectangle 0,0,((300+305*#About.2.Hidden#)*#Scale#),(80*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | Fill Color #ThemeColor_BackgroundSelectedLight# | StrokeWidth 0
MeterStyle=iP_SSOH|iP_SSOBX|iP_SSOBY
[H.3]
Meter=Shape
MeterStyle=iP_SSOH|iP_SOYN
[H.5]
Meter=Shape
MeterStyle=iP_SSOH|iP_SOYN
[H.2]
Meter=Shape
MeterStyle=iP_SSOH|iP_SOXN|iP_SSOBY
[H.4]
Meter=Shape
MeterStyle=iP_SSOH|iP_SOYN
[H.6]
Meter=Shape
MeterStyle=iP_SSOH|iP_SOYN


[iP_SSOI]
W=(24*#Scale#)
H=(24*#Scale#)
ImageTint=#FontColor_General#
AntiAlias=1
DynamicVariables=1
ImageName=#@#\Bitmap\[#Abou[#CURRENTSECTION].Icon]
Hidden=[#Abou[#CURRENTSECTION].Hidden]

[iP_SSOIBX]
X=((#BeginX#+20)*#Scale#)
[iP_SSOIBY]
Y=([MeterOption1.Feature1.Display42:YH]+(13+28)*#Scale#)

[t.1]
Meter=Image
MeterStyle=iP_SSOI|iP_SSOIBX|iP_SSOIBY
[t.3]
Meter=Image
MeterStyle=iP_SSOI|iP_SOYN
[t.5]
Meter=Image
MeterStyle=iP_SSOI|iP_SOYN
[t.2]
Meter=Image
MeterStyle=iP_SSOI|iP_SOXN|iP_SSOIBY
[t.4]
Meter=Image
MeterStyle=iP_SSOI|iP_SOYN
[t.6]
Meter=Image
MeterStyle=iP_SSOI|iP_SOYN

[iP_SSOT]
Text=[#Abo[#CURRENTSECTION].Title]#CRLF#[#Abo[#CURRENTSECTION].Description]
W=(186*#Scale#)
ClipString=2
FontFace=#FontFace_General#
FontColor=#FontColor_General#,128
FontSize=(10*#Scale#)
StringAlign=LeftCenter
AntiAlias=1
DynamicVariables=1
InlinePattern=[#Abo[#CURRENTSECTION].Title]
InlinePattern2=[#Abo[#CURRENTSECTION].Title]
InlineSetting=Size | (12*#Scale#)
InlineSetting2=Color | #FontColor_General#
Hidden=[#Abo[#CURRENTSECTION].Hidden]

[iP_SSOTBX]
X=((#BeginX#+40+24)*#Scale#)
[iP_SSOTBY]
Y=([MeterOption1.Feature1.Display42:YH]+(13+40)*#Scale#)

[ut.1]
Meter=String
MeterStyle=iP_SSOT|iP_SSOTBX|iP_SSOTBY
[ut.3]
Meter=String
MeterStyle=iP_SSOT|iP_SOYN
[ut.5]
Meter=String
MeterStyle=iP_SSOT|iP_SOYN
[ut.2]
Meter=String
MeterStyle=iP_SSOT|iP_SOXN|iP_SSOTBY
[ut.4]
Meter=String
MeterStyle=iP_SSOT|iP_SOYN
[ut.6]
Meter=String
MeterStyle=iP_SSOT|iP_SOYN

[iP_SSOIO]
W=(16*#Scale#)
H=(16*#Scale#)
ImageTint=#FontColor_General#
AntiAlias=1
DynamicVariables=1
ImageName=#@#\Bitmap\Open
Hidden=[#Ab[#CURRENTSECTION].Hidden]

[iP_SSOIOBX]
X=((#BeginX#+305-40)*#Scale#)
[iP_SSOIOBY]
Y=([MeterOption1.Feature1.Display42:YH]+(13+40-8)*#Scale#)

[out.1]
Meter=Image
MeterStyle=iP_SSOIO|iP_SSOIOBX|iP_SSOIOBY
X=((#BeginX#+305+305*#About.2.Hidden#-40)*#Scale#)
[out.3]
Meter=Image
X=((#BeginX#+305-40)*#Scale#)
MeterStyle=iP_SSOIO|iP_SOYN
[out.5]
Meter=Image
MeterStyle=iP_SSOIO|iP_SOYN
[out.2]
Meter=Image
MeterStyle=iP_SSOIO|iP_SOXN|iP_SSOIOBY
[out.4]
Meter=Image
MeterStyle=iP_SSOIO|iP_SOYN
[out.6]
Meter=Image
MeterStyle=iP_SSOIO|iP_SOYN

[MeterRUDEZone]
Meter=Shape
X=(#SXB#*#Scale#)
Y=((#SYB#+50*6)*#Scale#)
Shape=Rectangle 0,0,(332*#Scale#),(44*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | Fill Color 0,0,0,0 | Stroke Color 0,0,0,0
DynamicVariables=1
MouseOverAction=[!ShowMeter MeterRUDEButtonZone][!Redraw]
MouseLeaveAction=[!HideMeter MeterRUDEButtonZone][!Redraw]
LeftMouseUpAction=[!ShowMeterGroup RUDE][!Redraw]

[MeterRUDEButtonZone]
Meter=Shape
X=(#SXB#*#Scale#)
Y=((#SYB#+50*6)*#Scale#)
Shape=Rectangle 0,0,(332*#Scale#),(44*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | Fill Color #ThemeColor_BackgroundSelectedLight# | Stroke Color 0,0,0,0
DynamicVariables=1
Group=RUDE
Hidden=1

[MeterRUDEStyle]
AntiAlias=1
DynamicVariables=1
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Extras\RUDE"]
Hidden=1
Group=RUDE

[MeterRUDEIcon]
Meter=Image
X=((12+#SXB#)*#Scale#)
Y=((10+#SYB#+50*6)*#Scale#)
H=(24*#Scale#)
W=(24*#Scale#)
ImageName=#@#Bitmap\RUDE
ImageTint=255,255,255,128
MeterStyle=MeterRUDEStyle

[MeterRUDETextSmallIcon]
Meter=Image
X=((306+#SXB#)*#Scale#)
Y=((14+#SYB#+50*6)*#Scale#)
ImageName=#@#Bitmap\Open
ImageTint=#FontColor_General#,128
H=(16*#Scale#)
W=(16*#Scale#)
MeterStyle=MeterRUDEStyle

[MeterRUDEText]
Meter=String
Text="ABOUT.INI"
X=((44+#SXB#)*#Scale#)
Y=((22+#SYB#+50*6)*#Scale#)
FontFace=#FontFace_General#
FontColor=#FontColor_General#,128
FontSize=(12*#Scale#)
StringAlign=LeftCenter
MeterStyle=MeterRUDEStyle


[DD]
Group=DD
Hidden=1

[iP_DDB]
Meter=Shape
X=((#BeginX#+305)*#Scale#)
Y=([MeterOption1.Feature1.Display42:YH]+13*#Scale#)
Shape=Rectangle 0,0,(300*#Scale#),([iP_DDTt:H]+[iP_DDTx:H]+(40+56)*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_TextInputer#
Shape2=Rectangle 0,0,(300*#Scale#),([iP_DDTt:H]+[iP_DDTx:H]+(40+56)*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape3=Rectangle (1*#Scale#),(1*#Scale#),((300-2)*#Scale#),([iP_DDTt:H]+[iP_DDTx:H]+(40+56-2)*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape4=Combine Shape2 | Exclude Shape3
Shape5=Rectangle 0,([iP_DDTt:H]+[iP_DDTx:H]+(40-8)*#Scale#),(300*#Scale#),((56+16)*#Scale#),0,0 | Fill Color #ThemeColor_Bar# | StrokeWidth 0
Shape6=Rectangle 0,0,(300*#Scale#),([iP_DDTt:H]+[iP_DDTx:H]+(40+56)*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#)
Shape7=Combine Shape5 | Intersect Shape6
Shape8=Rectangle 0,([iP_DDTt:H]+[iP_DDTx:H]+32*#Scale#),(300*#Scale#),(1*#Scale#),0,0 | Fill Color #ThemeColor_BarBorder# | StrokeWidth 0
DynamicVariables=1
MeterStyle=DD
[iP_DDTt]
Meter=String
MeterStyle=FontStyle_General|DD
X=(15*#Scale#)r
Y=(15*#Scale#)r
W=((300-30)*#Scale#)
ClipString=2
Text=#T.Disclaimer#
FontFace=[#FontFace_General]
FontWeight=400
FontSize=(18*#Scale#)
[iP_DDTx]
Meter=String
MeterStyle=FontStyle_General|DD
X=0r
Y=(8*#Scale#)R
W=((300-30)*#Scale#)
ClipString=2
Text=#S.Widgets_Settings.26#
[iP_BB_Cancel]
Meter=Shape
X=([iP_DDB:X]+15*#Scale#)
Y=([iP_DDB:YH]-(44+8)*#Scale#)
Shape=Rectangle 0,0,(130*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_TextInputerAlpha#
Shape2=Rectangle 0,0,(130*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape3=Rectangle (1*#Scale#),(1*#Scale#),((130-2)*#Scale#),(38*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape4=Combine Shape2 | Exclude Shape3
DynamicVariables=1
MouseOverAction=[!ShowMeter iP_BB_CancelH][!Redraw]
MouseLeaveAction=[!HideMeter iP_BB_CancelH][!Redraw]
LeftMouseUpAction=[!HideMeterGroup DD][!HideMeter iP_BB_CancelH][!Redraw]
MeterStyle=DD
[iP_BB_CancelH]
Meter=Shape
X=0r
Y=0r
Shape=Rectangle 0,0,(130*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | Fill Color #ThemeColor_BackgroundSelectedLight# | StrokeWidth 0
DynamicVariables=1
Hidden=1
[iP_BB_Continue]
Meter=Shape
X=([iP_BB_Cancel:XW]+10*#Scale#)
Y=0r
Shape=Rectangle 0,0,(130*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_TextInputerAlpha#
Shape2=Rectangle 0,0,(130*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape3=Rectangle (1*#Scale#),(1*#Scale#),((130-2)*#Scale#),(38*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape4=Combine Shape2 | Exclude Shape3
DynamicVariables=1
MouseOverAction=[!ShowMeter iP_BB_ContinueH][!Redraw]
MouseLeaveAction=[!HideMeter iP_BB_ContinueH][!Redraw]
LeftMouseUpAction=[#About.2.Link#][!HideMeterGroup DD][!HideMeter iP_BB_ContinueH][!Redraw]
MeterStyle=DD
[iP_BB_ContinueH]
Meter=Shape
X=0r
Y=0r
Shape=Rectangle 0,0,(130*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | Fill Color #ThemeColor_BackgroundSelectedLight# | StrokeWidth 0
DynamicVariables=1
Hidden=1
[iP_BT_Cancel]
Meter=String
MeterStyle=FontStyle_General|DD
X=([iP_BB_Cancel:X]+[iP_BB_Cancel:W]/2)
Y=([iP_BB_Cancel:Y]+[iP_BB_Cancel:H]/2)
Text=#T.Cancel#
StringAlign=CenterCenter
[iP_BT_Continue]
Meter=String
MeterStyle=FontStyle_General|DD
X=([iP_BB_Continue:X]+[iP_BB_Continue:W]/2)
Y=([iP_BB_Continue:Y]+[iP_BB_Continue:H]/2)
Text=#T.Continue#
StringAlign=CenterCenter



[Option1]
Meter=String
Text=#T.Disclaimer#
MeterStyle=FontStyle_General
FontColor=#FontColor_General#,128
X=([.5:X])
Y=([.5:YH]+16*#Scale#)
InlinePattern=.*
InlineSetting=None
W=(600*#Scale#)
ClipString=2
LeftMouseUpAction=[!WriteKeyValue Variables SubPage 13 "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!Refresh]
MouseActionCursor=1
MouseActionCursorName=HAND
MouseOverAction=[!SetOption #CURRENTSECTION# InlineSetting "Underline"][!Update][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# InlineSetting "None"][!Update][!Redraw]