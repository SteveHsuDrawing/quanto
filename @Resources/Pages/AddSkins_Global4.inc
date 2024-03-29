[Variables]
ExtraTip=
Fix=1
BeginX=384
BeginY=108
TitleButtonAction=[!WriteKeyValue Variables Mode 0 "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!WriteKeyValue Variables SubPage 00 "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!Refresh]
TitleButtonImageName=#@#Bitmap\Back Button.png
AS.TL.0=#ProjectName#
AS.TL.1=[#AO_Inf.[#AddonName].Name]
AS.IN.0=#@#PreviewIcon\
AS.IN.1=#ROOTCONFIGPATH#Addons\#AddonName#\@\PreviewIcon\
AS.AS.0=[#ROOTCONFIG]\[#P[&MP]X.Folder]
AS.AS.1=[#ROOTCONFIG]\Addons\[#AddonName]\[#P[&MP]X.Folder]

CM_S11=Rectangle 0,0,(150*
CM_S12=*#Scale#),(40*
CM_S13=*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_TextInputer#
CM_S21=Rectangle 0,0,(150*
CM_S22=*#Scale#),(40*
CM_S23=*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
CM_S31=Rectangle (1*#Scale#),(1*#Scale#),((150*
CM_S32=-2)*#Scale#),((40*
CM_S33=-2)*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
CM_S41=Combine Shape2 | Exclude Shape3
CM_S51=Rectangle (149.5*#Scale#),0,(1*#Scale#),(40*
CM_S52=*#Scale#) | StrokeWidth 0 | Fill Color #FontColor_General#

[MP]
Measure=Calc
Formula=Trunc(#SubPage#/10)
DynamicVariables=1
[SP]
Measure=Calc
Formula=(10*Frac(#SubPage#/10))
DynamicVariables=1

[MeterTitle]
Meter=String
Text=#T.Add_Skins# - [#AS.TL.[#Mode]]
MeterStyle=FontStyle_Title
W=(605*#Scale#)
ClipString=1

[AddonInformationIcon]
Meter=Image
X=((#BeginX#+605-16)*#Scale#)
Y=((#BeginY#-32-8)*#Scale#)
ImageName=#@#Bitmap\Information (Small)
H=(16*#Scale#)
W=(16*#Scale#)
ImageTint=#FontColor_General#,255
DynamicVariables=1
ToolTipTitle=[#AO_Inf.[#AddonName].Name]
ToolTipText=#T.Version#:#CRLF#   [#AO_Inf.[#AddonName].Version]#CRLF##T.Supported_Version#:#CRLF#   [#AO_Inf.[#AddonName].ApplyTo]#CRLF##T.Author#:#CRLF#   [#AO_Inf.[#AddonName].Author]#CRLF##T.License#:#CRLF#   [#AO_Inf.[#AddonName].License]#CRLF##CRLF##T.Click_for_details#
Hidden=(1-#Mode#)
LeftMouseUpAction=["[#AO_Inf.[#AddonName].Website]"]

[MeterTitleButtonZone]
Meter=Shape
MeterStyle=MeterTitleButtonZoneStyle

[MeterTitleButton]
Meter=Image
MeterStyle=MeterTitleButtonStyle

[MeterTitleButtonSelected]
Meter=Shape
MeterStyle=MeterTitleButtonSelectedStyle

[THY1B]
X=(#BeginX#*#Scale#)
Y=(#BeginY#*#Scale#)
[THY2B]
X=(#BeginX#*#Scale#)
Y=((#BeginY#+40)*#Scale#)
[TY1B]
X=((#BeginX#+60)*#Scale#)
Y=((#BeginY#+16)*#Scale#)
[TY2B]
X=((#BeginX#+60)*#Scale#)
Y=((#BeginY#+16+40)*#Scale#)
[TXN]
X=(121*#Scale#)r
Y=0r

[SC_0]
Text=[#[#CURRENTSECTION].Name]
W=(121*#Scale#)
H=(32*#Scale#)
StringAlign=CenterCenter
Hidden=[#[#CURRENTSECTION].Hidden]
MouseOverAction=[!ShowMeter H#CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!HideMeter H#CURRENTSECTION#][!Redraw]
[SC_1]
MeasureName=M#CURRENTSECTION#

[MIPH1]
Shape=Rectangle (55*#Scale#),(32*#Scale#),(11*#Scale#),(4*#Scale#),(2*#Scale#*#Arched#),(2*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_General#,96
DynamicVariables=1
Hidden=1
[MIPH2]
Shape=Rectangle (55*#Scale#),(32*#Scale#),(11*#Scale#),(4*#Scale#),(2*#Scale#*#Arched#),(2*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #FontColor_General#,32
DynamicVariables=1
Hidden=1

[P1X]
Meter=String
MeterStyle=FontStyle_General|SC_0|TY1B
LeftMouseUpAction=[!WriteKeyValue Variables SubPage 11 "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!Refresh]
[P2X]
Meter=String
MeterStyle=FontStyle_General|SC_0|TXN
LeftMouseUpAction=[!WriteKeyValue Variables SubPage 21 "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!Refresh]
[P3X]
Meter=String
MeterStyle=FontStyle_General|SC_0|TXN
LeftMouseUpAction=[!WriteKeyValue Variables SubPage 31 "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!Refresh]
[P4X]
Meter=String
MeterStyle=FontStyle_General|SC_0|TXN
LeftMouseUpAction=[!WriteKeyValue Variables SubPage 41 "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!Refresh]
[P5X]
Meter=String
MeterStyle=FontStyle_General|SC_0|TXN
LeftMouseUpAction=[!WriteKeyValue Variables SubPage 51 "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!Refresh]

[HP1X]
Meter=Shape
MeterStyle=MIPH1|THY1B
[HP2X]
Meter=Shape
MeterStyle=MIPH1|TXN
[HP3X]
Meter=Shape
MeterStyle=MIPH1|TXN
[HP4X]
Meter=Shape
MeterStyle=MIPH1|TXN
[HP5X]
Meter=Shape
MeterStyle=MIPH1|TXN

[MPX1]
Measure=String
String=1
[MPX2]
Measure=String
String=2
[MPX3]
Measure=String
String=3
[MPX4]
Measure=String
String=4
[MPX5]
Measure=String
String=5
[PX1]
Meter=String
Text=[#P[&MP]1.Name]
MeterStyle=FontStyle_General|SC_0|SC_1|TY2B
LeftMouseUpAction=[!WriteKeyValue Variables SubPage "[&MP]1" "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!Refresh]
Hidden=[#P[&MP]1.Hidden]
[PX2]
Meter=String
Text=[#P[&MP]2.Name]
MeterStyle=FontStyle_General|SC_0|SC_1|TXN
LeftMouseUpAction=[!WriteKeyValue Variables SubPage "[&MP]2" "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!Refresh]
Hidden=[#P[&MP]2.Hidden]
[PX3]
Meter=String
Text=[#P[&MP]3.Name]
MeterStyle=FontStyle_General|SC_0|SC_1|TXN
LeftMouseUpAction=[!WriteKeyValue Variables SubPage "[&MP]3" "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!Refresh]
Hidden=[#P[&MP]3.Hidden]
[PX4]
Meter=String
Text=[#P[&MP]4.Name]
MeterStyle=FontStyle_General|SC_0|SC_1|TXN
LeftMouseUpAction=[!WriteKeyValue Variables SubPage "[&MP]4" "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!Refresh]
Hidden=[#P[&MP]4.Hidden]
[PX5]
Meter=String
Text=[#P[&MP]5.Name]
MeterStyle=FontStyle_General|SC_0|SC_1|TXN
LeftMouseUpAction=[!WriteKeyValue Variables SubPage "[&MP]5" "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!Refresh]
Hidden=[#P[&MP]5.Hidden]

[HPX1]
Meter=Shape
MeterStyle=MIPH2|THY2B
[HPX2]
Meter=Shape
MeterStyle=MIPH2|TXN
[HPX3]
Meter=Shape
MeterStyle=MIPH2|TXN
[HPX4]
Meter=Shape
MeterStyle=MIPH2|TXN
[HPX5]
Meter=Shape
MeterStyle=MIPH2|TXN

[MIP1]
Meter=Shape
X=((#BeginX#+121*([MP]-1))*#Scale#)
Y=(#BeginY#*#Scale#)
Shape=Rectangle (55*#Scale#),(32*#Scale#),(11*#Scale#),(4*#Scale#),(2*#Scale#*#Arched#),(2*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_General#
DynamicVariables=1
[MIP2]
Meter=Shape
X=((#BeginX#+121*([SP]-1))*#Scale#)
Y=((#BeginY#+40)*#Scale#)
Shape=Rectangle (55*#Scale#),(32*#Scale#),(11*#Scale#),(4*#Scale#),(2*#Scale#*#Arched#),(2*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #FontColor_General#,64
DynamicVariables=1

[OX1B]
X=(#BeginX#*#Scale#)
[OX2B]
X=((#BeginX#+305)*#Scale#)
[OYB]
Y=((#BeginY#+80)*#Scale#)
[OXN]
X=(305*#Scale#)r
Y=0r
[OYN]
X=0r
Y=(85*#Scale#)r

[OS]
Hidden=[#-------[#CURRENTSECTION].Hidden]
Shape=Rectangle 0,0,(300*#Scale#),(80*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_OptionAlpha#
Shape2=Rectangle 0,0,(300*#Scale#),(80*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape3=Rectangle (1*#Scale#),(1*#Scale#),((300-2)*#Scale#),((80-2)*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#)
Shape4=Combine Shape2 | Exclude Shape3
DynamicVariables=1

[O11]
Meter=Shape
MeterStyle=OS|OX1B|OYB
[O12]
Meter=Shape
MeterStyle=OS|OYN
[O13]
Meter=Shape
MeterStyle=OS|OYN
[O14]
Meter=Shape
MeterStyle=OS|OYN
[O15]
Meter=Shape
MeterStyle=OS|OYN
[O16]
Meter=Shape
MeterStyle=OS|OYN
[O17]
Meter=Shape
MeterStyle=OS|OYN
[O18]
Meter=Shape
MeterStyle=OS|OYN

[O21]
Meter=Shape
MeterStyle=OS|OX2B|OYB
[O22]
Meter=Shape
MeterStyle=OS|OYN
[O23]
Meter=Shape
MeterStyle=OS|OYN
[O24]
Meter=Shape
MeterStyle=OS|OYN
[O25]
Meter=Shape
MeterStyle=OS|OYN
[O26]
Meter=Shape
MeterStyle=OS|OYN
[O27]
Meter=Shape
MeterStyle=OS|OYN
[O28]
Meter=Shape
MeterStyle=OS|OYN



[IX1B]
X=((#BeginX#+20)*#Scale#)
[IX2B]
X=((#BeginX#+305+20)*#Scale#)
[IYB]
Y=((#BeginY#+80+28)*#Scale#)
[IS]
Hidden=[#------[#CURRENTSECTION].Hidden]
ImageName=[#AS.IN.[#Mode]][#AddonName].[#P[&MP]X.Folder]_[#------[#CURRENTSECTION].Name].png
W=(24*#Scale#)
H=(24*#Scale#)
ImageTint=#FontColor_General#
DynamicVariables=1

[-O11]
Meter=Image
MeterStyle=IS|IX1B|IYB
[-O12]
Meter=Image
MeterStyle=IS|OYN
[-O13]
Meter=Image
MeterStyle=IS|OYN
[-O14]
Meter=Image
MeterStyle=IS|OYN
[-O15]
Meter=Image
MeterStyle=IS|OYN
[-O16]
Meter=Image
MeterStyle=IS|OYN
[-O17]
Meter=Image
MeterStyle=IS|OYN
[-O18]
Meter=Image
MeterStyle=IS|OYN

[-O21]
Meter=Image
MeterStyle=IS|IX2B|IYB
[-O22]
Meter=Image
MeterStyle=IS|OYN
[-O23]
Meter=Image
MeterStyle=IS|OYN
[-O24]
Meter=Image
MeterStyle=IS|OYN
[-O25]
Meter=Image
MeterStyle=IS|OYN
[-O26]
Meter=Image
MeterStyle=IS|OYN
[-O27]
Meter=Image
MeterStyle=IS|OYN
[-O28]
Meter=Image
MeterStyle=IS|OYN

[TX1B]
X=((#BeginX#+64)*#Scale#)
[TX2B]
X=((#BeginX#+305+64)*#Scale#)
[TYB]
Y=((#BeginY#+80+40)*#Scale#)
[TS]
Hidden=[#-----[#CURRENTSECTION].Hidden]
Text=[#[#AddonName].[#P[&MP]X.Folder]_[#-----[#CURRENTSECTION].Name].Name][#CRLF][#[#AddonName].[#P[&MP]X.Folder]_[#-----[#CURRENTSECTION].Name].Styles]
W=(190*#Scale#)
H=(80*#Scale#)
ClipString=2
StringAlign=LeftCenter
FontColor=#FontColor_General#,128
FontSize=(10*#Scale#)
InlinePattern=[#[#AddonName].[#P[&MP]X.Folder]_[#-----[#CURRENTSECTION].Name].Name][#CRLF]
InlinePattern2=[#[#AddonName].[#P[&MP]X.Folder]_[#-----[#CURRENTSECTION].Name].Name][#CRLF]
InlineSetting=Size | (12*#Scale#)
InlineSetting2=Color | #FontColor_General#

[--O11]
Meter=String
MeterStyle=FontStyle_General|TS|TX1B|TYB
[--O12]
Meter=String
MeterStyle=FontStyle_General|TS|OYN
[--O13]
Meter=String
MeterStyle=FontStyle_General|TS|OYN
[--O14]
Meter=String
MeterStyle=FontStyle_General|TS|OYN
[--O15]
Meter=String
MeterStyle=FontStyle_General|TS|OYN
[--O16]
Meter=String
MeterStyle=FontStyle_General|TS|OYN
[--O17]
Meter=String
MeterStyle=FontStyle_General|TS|OYN
[--O18]
Meter=String
MeterStyle=FontStyle_General|TS|OYN

[--O21]
Meter=String
MeterStyle=FontStyle_General|TS|TX2B|TYB
[--O22]
Meter=String
MeterStyle=FontStyle_General|TS|OYN
[--O23]
Meter=String
MeterStyle=FontStyle_General|TS|OYN
[--O24]
Meter=String
MeterStyle=FontStyle_General|TS|OYN
[--O25]
Meter=String
MeterStyle=FontStyle_General|TS|OYN
[--O26]
Meter=String
MeterStyle=FontStyle_General|TS|OYN
[--O27]
Meter=String
MeterStyle=FontStyle_General|TS|OYN
[--O28]
Meter=String
MeterStyle=FontStyle_General|TS|OYN


[AX1B]
X=((#BeginX#+270)*#Scale#)
[AX2B]
X=((#BeginX#+305+270)*#Scale#)
[AYB]
Y=((#BeginY#+80+16)*#Scale#)
[AS]
Hidden=[#----[#CURRENTSECTION].Hidden]
ImageName=#@#Bitmap\Add
H=(16*#Scale#)
W=(16*#Scale#)
ImageTint=#FontColor_General#,255
DynamicVariables=1
MouseOverAction=[!ShowMeter H#CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!HideMeter H#CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!ActivateConfig "[#AS.AS.[#Mode]]\[#----[#CURRENTSECTION].Name]"]
[SMG]
ImageName=#@#Bitmap\Arrow Right
LeftMouseUpAction=[!ShowMeterGroup G#CURRENTSECTION#][!Redraw]

[---O11]
Meter=Image
MeterStyle=AS|AX1B|AYB
[---O12]
Meter=Image
MeterStyle=AS|OYN
[---O13]
Meter=Image
MeterStyle=AS|OYN
[---O14]
Meter=Image
MeterStyle=AS|OYN
[---O15]
Meter=Image
MeterStyle=AS|OYN
[---O16]
Meter=Image
MeterStyle=AS|OYN
[---O17]
Meter=Image
MeterStyle=AS|OYN
[---O18]
Meter=Image
MeterStyle=AS|OYN

[---O21]
Meter=Image
MeterStyle=AS|AX2B|AYB
[---O22]
Meter=Image
MeterStyle=AS|OYN
[---O23]
Meter=Image
MeterStyle=AS|OYN
[---O24]
Meter=Image
MeterStyle=AS|OYN
[---O25]
Meter=Image
MeterStyle=AS|OYN
[---O26]
Meter=Image
MeterStyle=AS|OYN
[---O27]
Meter=Image
MeterStyle=AS|OYN
[---O28]
Meter=Image
MeterStyle=AS|OYN

[AHX1B]
X=((#BeginX#+270-4)*#Scale#)
[AHX2B]
X=((#BeginX#+305+270-4)*#Scale#)
[AHYB]
Y=((#BeginY#+80+16-4)*#Scale#)
[AHS]
Hidden=1
Shape=Rectangle 0,0,(24*#Scale#),(24*#Scale#),(4*#Scale#),(4*#Scale#) | StrokeWidth 0 | Fill Color #ThemeColor_BackgroundSelected#
DynamicVariables=1

[H---O11]
Meter=Shape
MeterStyle=AHS|AHX1B|AHYB
[H---O12]
Meter=Shape
MeterStyle=AHS|OYN
[H---O13]
Meter=Shape
MeterStyle=AHS|OYN
[H---O14]
Meter=Shape
MeterStyle=AHS|OYN
[H---O15]
Meter=Shape
MeterStyle=AHS|OYN
[H---O16]
Meter=Shape
MeterStyle=AHS|OYN
[H---O17]
Meter=Shape
MeterStyle=AHS|OYN
[H---O18]
Meter=Shape
MeterStyle=AHS|OYN

[H---O21]
Meter=Shape
MeterStyle=AHS|AHX2B|AHYB
[H---O22]
Meter=Shape
MeterStyle=AHS|OYN
[H---O23]
Meter=Shape
MeterStyle=AHS|OYN
[H---O24]
Meter=Shape
MeterStyle=AHS|OYN
[H---O25]
Meter=Shape
MeterStyle=AHS|OYN
[H---O26]
Meter=Shape
MeterStyle=AHS|OYN
[H---O27]
Meter=Shape
MeterStyle=AHS|OYN
[H---O28]
Meter=Shape
MeterStyle=AHS|OYN

[MX1B]
X=((#BeginX#+270)*#Scale#)
[MX2B]
X=((#BeginX#+305+270)*#Scale#)
[MYB]
Y=((#BeginY#+80+48)*#Scale#)
[MS]
Hidden=[#---[#CURRENTSECTION].Hidden]
ImageName=#@#Bitmap\Arrow Right Up
H=(16*#Scale#)
W=(16*#Scale#)
ImageTint=#FontColor_General#,255
DynamicVariables=1
MouseOverAction=[!ShowMeter H#CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!HideMeter H#CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "[#AS.AS.[#Mode]]\[#---[#CURRENTSECTION].Name]"]

[----O11]
Meter=Image
MeterStyle=MS|MX1B|MYB
[----O12]
Meter=Image
MeterStyle=MS|OYN
[----O13]
Meter=Image
MeterStyle=MS|OYN
[----O14]
Meter=Image
MeterStyle=MS|OYN
[----O15]
Meter=Image
MeterStyle=MS|OYN
[----O16]
Meter=Image
MeterStyle=MS|OYN
[----O17]
Meter=Image
MeterStyle=MS|OYN
[----O18]
Meter=Image
MeterStyle=MS|OYN

[----O21]
Meter=Image
MeterStyle=MS|MX2B|MYB
[----O22]
Meter=Image
MeterStyle=MS|OYN
[----O23]
Meter=Image
MeterStyle=MS|OYN
[----O24]
Meter=Image
MeterStyle=MS|OYN
[----O25]
Meter=Image
MeterStyle=MS|OYN
[----O26]
Meter=Image
MeterStyle=MS|OYN
[----O27]
Meter=Image
MeterStyle=MS|OYN
[----O28]
Meter=Image
MeterStyle=MS|OYN

[MoveIconHYB]
Y=((#BeginY#+80+48-4)*#Scale#)

[H----O11]
Meter=Shape
MeterStyle=AHS|AHX1B|MoveIconHYB
[H----O12]
Meter=Shape
MeterStyle=AHS|OYN
[H----O13]
Meter=Shape
MeterStyle=AHS|OYN
[H----O14]
Meter=Shape
MeterStyle=AHS|OYN
[H----O15]
Meter=Shape
MeterStyle=AHS|OYN
[H----O16]
Meter=Shape
MeterStyle=AHS|OYN
[H----O17]
Meter=Shape
MeterStyle=AHS|OYN
[H----O18]
Meter=Shape
MeterStyle=AHS|OYN

[H----O21]
Meter=Shape
MeterStyle=AHS|AHX2B|MoveIconHYB
[H----O22]
Meter=Shape
MeterStyle=AHS|OYN
[H----O23]
Meter=Shape
MeterStyle=AHS|OYN
[H----O24]
Meter=Shape
MeterStyle=AHS|OYN
[H----O25]
Meter=Shape
MeterStyle=AHS|OYN
[H----O26]
Meter=Shape
MeterStyle=AHS|OYN
[H----O27]
Meter=Shape
MeterStyle=AHS|OYN
[H----O28]
Meter=Shape
MeterStyle=AHS|OYN


[CMTB]
X=(12*#Scale#)r
Y=(20*#Scale#)r
[NextT]
X=0r
Y=(40*#Scale#)r

[CMT]
StringAlign=LeftCenter
Text=#CURRENTSECTION#
LeftMouseUpAction=[!ActivateConfig "[#AS.AS.[#Mode]]\[#CURRENTSECTION]"]
[CMMI]
ImageName=#@#Bitmap\Arrow Right Up
W=(16*#Scale#)
H=(16*#Scale#)
ImageTint=#FontColor_General#
AntiAlias=1
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "[#AS.AS.[#Mode]]#CURRENTSECTION#"]

[CMZ]
Shape=#CM_S11#[#[#CURRENTSECTION].W]#CM_S12#[#[#CURRENTSECTION].H]#CM_S13#
Shape2=#CM_S21#[#[#CURRENTSECTION].W]#CM_S22#[#[#CURRENTSECTION].H]#CM_S23#
Shape3=#CM_S31#[#[#CURRENTSECTION].W]#CM_S32#[#[#CURRENTSECTION].H]#CM_S33#
Shape4=#CM_S41#
Shape5=#CM_S51#[#[#CURRENTSECTION].H]#CM_S52#,(32*([#[#CURRENTSECTION].W]=2?1:0))
DynamicVariables=1

[Tip.Zone]
Meter=Shape
X=(24*#Scale#)
Y=((897-15*2-34)*#Scale#-[Tip.Text:H])
Shape=Rectangle 0,0,(335*#Scale#),([Tip.Text:H]+15*2*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_OptionAlpha#
Shape2=Rectangle 0,0,(335*#Scale#),([Tip.Text:H]+15*2*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape3=Rectangle (1*#Scale#),(1*#Scale#),((335-2)*#Scale#),([Tip.Text:H]+(15*2-2)*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#)
Shape4=Combine Shape2 | Exclude Shape3
DynamicVariables=1
[Tip.Text]
Meter=String
MeterStyle=FontStyle_General
Text=#S.Widgets_Settings.14#
X=((24+15)*#Scale#)
Y=((863-15)*#Scale#)
W=((335-15*2)*#Scale#)
ClipString=2
StringAlign=LeftBottom