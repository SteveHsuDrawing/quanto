[Variables]
PreviewPathPrefix=#@#Previews\0\
OptionW=303
OptionH=72
OptionGapX=#OptionW#+6
OptionGapY=#OptionH#+4

Category=Widgets

OptionHidden11=0
OptionHidden21=0
OptionHidden31=0
OptionHidden41=0
OptionHidden51=0
OptionHidden61=0
OptionHidden71=0
OptionHidden81=0
OptionHidden91=0
OptionHidden12=0
OptionHidden22=0
OptionHidden32=0
OptionHidden42=0
OptionHidden52=0
OptionHidden62=0
OptionHidden72=0
OptionHidden82=0
OptionHidden92=0

OptionName11=Battery
OptionName21=Calculator
OptionName31=Calendar
OptionName41=Control
OptionName51=COVID
OptionName61=CPU
OptionName71=CPUDetailed
OptionName81=Desktop
OptionName91=Driver
OptionName12=FansSpeed
OptionName22=Gallery
OptionName32=GPU
OptionName42=MediaControl
OptionName52=Network
OptionName62=Note
OptionName72=RAM
OptionName82=RSS
OptionName92=Search

Option11=#Category#\#OptionName11#
Option21=#Category#\#OptionName21#
Option31=#Category#\#OptionName31#
Option41=#Category#\#OptionName41#
Option51=#Category#\#OptionName51#
Option61=#Category#\#OptionName61#
Option71=#Category#\#OptionName71#
Option81=#Category#\#OptionName81#
Option91=#Category#\#OptionName91#
Option12=#Category#\#OptionName12#
Option22=#Category#\#OptionName22#
Option32=#Category#\#OptionName32#
Option42=#Category#\#OptionName42#
Option52=#Category#\#OptionName52#
Option62=#Category#\#OptionName62#
Option72=#Category#\#OptionName72#
Option82=#Category#\#OptionName82#
Option92=#Category#\#OptionName92#

OptionTitleOffset11=0
OptionTitleOffset21=0
OptionTitleOffset31=0
OptionTitleOffset41=0
OptionTitleOffset51=0
OptionTitleOffset61=0
OptionTitleOffset71=0
OptionTitleOffset81=0
OptionTitleOffset91=0
OptionTitleOffset12=0
OptionTitleOffset22=1
OptionTitleOffset32=1
OptionTitleOffset42=0
OptionTitleOffset52=0
OptionTitleOffset62=1
OptionTitleOffset72=0
OptionTitleOffset82=1
OptionTitleOffset92=0

OptionTitleToolTipText11=
OptionTitleToolTipText21=
OptionTitleToolTipText31=
OptionTitleToolTipText41=
OptionTitleToolTipText51=
OptionTitleToolTipText61=
OptionTitleToolTipText71=
OptionTitleToolTipText81=
OptionTitleToolTipText91=
OptionTitleToolTipText12=
OptionTitleToolTipText22=
OptionTitleToolTipText32=
OptionTitleToolTipText42=
OptionTitleToolTipText52=
OptionTitleToolTipText62=
OptionTitleToolTipText72=
OptionTitleToolTipText82=
OptionTitleToolTipText92=

[MeterBorderYStyle]
X=0r
Y=((#GapY#*2))r
Shape=Rectangle 0,0,[MeasureW],(1*#Scale#),0,0 | Fill Color #ThemeColor_BarBorder# | Stroke Color 0,0,0,0
Container=MeterSquareZone


[MeterText21]
Meter=String
Text=#T.Page# 1
X=((#BeginX#+#GapXUnscaled#)*#Scale#)
Y=((#BeginY#+39)*#Scale#)
StringAlign=Center
MeterStyle=FontStyle_General

[MeterText22]
Meter=String
Text=#T.Page# 2
X=((#GapX#*2))r
Y=0r
StringAlign=Center
MeterStyle=FontStyle_General
LeftMouseUpAction=[!WriteKeyValue Variables SubPage 22 "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!Refresh]

[MeterSelectionDisplay2]
Meter=Shape
X=((#BeginX#+#GapXUnscaled#*0)*#Scale#)
Y=((#BeginY#+35*1)*#Scale#)
Shape=Rectangle (58*#Scale#),(29*#Scale#),(12*#Scale#),(3*#Scale#),(1.5*#Scale#),(1.5*#Scale#) | Fill Color #FontColor_General#,64 | Stroke Color 0,0,0,0
DynamicVariables=1

@Include=#@#Settings_Panels\Panels\AddSkins_Global1.inc


[MeterSmallIcon11]
[MeterSmallIcon21]
[MeterSmallIcon31]
[MeterSmallIcon41]
[MeterSmallIcon51]
[MeterSmallIcon61]
[MeterSmallIcon71]
[MeterSmallIcon81]
[MeterSmallIcon91]
ImageName=#@#Bitmap\Arrow Right.png
LeftMouseUpAction=[!ShowMeterGroup MeterOptionDriverSelection][!Redraw]
[MeterSmallIcon12]
ImageName=#@#Bitmap\Arrow Right.png
LeftMouseUpAction=[!ShowMeterGroup MeterOptionFansSelection][!Redraw]
[MeterSmallIcon22]
[MeterSmallIcon32]
ImageName=#@#Bitmap\Arrow Right.png
LeftMouseUpAction=[!ShowMeterGroup MeterOptionGPUSelection][!Redraw]
[MeterSmallIcon42]
[MeterSmallIcon52]
[MeterSmallIcon62]
ImageName=#@#Bitmap\Arrow Right.png
LeftMouseUpAction=[!ShowMeterGroup MeterOptionNoteSelection][!Redraw]
[MeterSmallIcon72]
[MeterSmallIcon82]
[MeterSmallIcon92]

[MeterRainmeterIcon11]
[MeterRainmeterIcon21]
[MeterRainmeterIcon31]
[MeterRainmeterIcon41]
[MeterRainmeterIcon51]
[MeterRainmeterIcon61]
[MeterRainmeterIcon71]
[MeterRainmeterIcon81]
[MeterRainmeterIcon91]
Hidden=1
[MeterRainmeterIcon12]
Hidden=1
[MeterRainmeterIcon22]
[MeterRainmeterIcon32]
Hidden=1
[MeterRainmeterIcon42]
[MeterRainmeterIcon52]
[MeterRainmeterIcon62]
Hidden=1
[MeterRainmeterIcon72]
[MeterRainmeterIcon82]
[MeterRainmeterIcon92]


[MeterOptionDriverSelectionTextStyle]
X=0r
Y=((35*#Scale#))r
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(12*#Scale#)
AntiAlias=1
DynamicVariables=1
Hidden=1
Group=MeterOptionDriverSelection
[MeterOptionDriverSelectionLocateStyle]
X=0r
Y=((35*#Scale#))r
ImageName=#@#Bitmap\Arrow Right Up
W=(16*#Scale#)
H=(16*#Scale#)
ImageTint=#FontColor_General#
AntiAlias=1
DynamicVariables=1
Hidden=1
Group=MeterOptionDriverSelection

[MeterOptionDriverSelectionSquare]
Meter=Shape
X=((#BeginX#+#OptionW#-14)*#Scale#)
Y=((#BeginY#+80+((#OptionGapY#))*3-4)*#Scale#)
Shape=Rectangle 0,0,(150*#Scale#),(((#OptionGapY#)*6)*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color 0,0,0,0 | Stroke Color #ThemeColor_BarBorder#
Shape2=Rectangle 0,0,(150*#Scale#),(((#OptionGapY#)*6)*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_TextInputer# | StrokeWidth 0
Shape3=Rectangle (75*#Scale#),(6*#Scale#),(1*#Scale#),((((#OptionGapY#)*6)-12)*#Scale#),0,0 | Fill Color #ThemeColor_BarBorder# | StrokeWidth 0
DynamicVariables=1
MouseLeaveAction=[!HideMeterGroup MeterOptionDriverSelection][!Redraw]
Hidden=1
Group=MeterOptionDriverSelection

[MeterOptionDriverSelectionText0101]
Meter=String
X=((12*#Scale#))r
Y=((6*#Scale#))r
Text=A:\
MeterStyle=MeterOptionDriverSelectionTextStyle
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Widgets\Driver\A"]

[MeterOptionDriverSelectionText0201]
Meter=String
Text=B:\
MeterStyle=MeterOptionDriverSelectionTextStyle
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Widgets\Driver\B"]

[MeterOptionDriverSelectionText0301]
Meter=String
Text=C:\
MeterStyle=MeterOptionDriverSelectionTextStyle
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Widgets\Driver\C"]

[MeterOptionDriverSelectionText0401]
Meter=String
Text=D:\
MeterStyle=MeterOptionDriverSelectionTextStyle
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Widgets\Driver\D"]

[MeterOptionDriverSelectionText0501]
Meter=String
Text=E:\
MeterStyle=MeterOptionDriverSelectionTextStyle
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Widgets\Driver\E"]

[MeterOptionDriverSelectionText0601]
Meter=String
Text=F:\
MeterStyle=MeterOptionDriverSelectionTextStyle
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Widgets\Driver\F"]

[MeterOptionDriverSelectionText0701]
Meter=String
Text=G:\
MeterStyle=MeterOptionDriverSelectionTextStyle
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Widgets\Driver\G"]

[MeterOptionDriverSelectionText0801]
Meter=String
Text=H:\
MeterStyle=MeterOptionDriverSelectionTextStyle
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Widgets\Driver\H"]

[MeterOptionDriverSelectionText0901]
Meter=String
Text=I:\
MeterStyle=MeterOptionDriverSelectionTextStyle
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Widgets\Driver\I"]

[MeterOptionDriverSelectionText1001]
Meter=String
Text=J:\
MeterStyle=MeterOptionDriverSelectionTextStyle
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Widgets\Driver\J"]

[MeterOptionDriverSelectionText1101]
Meter=String
Text=K:\
MeterStyle=MeterOptionDriverSelectionTextStyle
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Widgets\Driver\K"]

[MeterOptionDriverSelectionText1201]
Meter=String
Text=L:\
MeterStyle=MeterOptionDriverSelectionTextStyle
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Widgets\Driver\L"]

[MeterOptionDriverSelectionText1301]
Meter=String
Text=M:\
MeterStyle=MeterOptionDriverSelectionTextStyle
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Widgets\Driver\M"]

[MeterOptionDriverSelectionText0102]
Meter=String
X=(((#BeginX#+2+#OptionW#)+12+60)*#Scale#)
Y=(((#BeginY#+80+((#OptionGapY#))*3)+6-4)*#Scale#)
Text=N:\
MeterStyle=MeterOptionDriverSelectionTextStyle
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Widgets\Driver\N"]

[MeterOptionDriverSelectionText0202]
Meter=String
Text=O:\
MeterStyle=MeterOptionDriverSelectionTextStyle
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Widgets\Driver\O"]

[MeterOptionDriverSelectionText0302]
Meter=String
Text=P:\
MeterStyle=MeterOptionDriverSelectionTextStyle
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Widgets\Driver\P"]

[MeterOptionDriverSelectionText0402]
Meter=String
Text=Q:\
MeterStyle=MeterOptionDriverSelectionTextStyle
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Widgets\Driver\Q"]

[MeterOptionDriverSelectionText0502]
Meter=String
Text=R:\
MeterStyle=MeterOptionDriverSelectionTextStyle
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Widgets\Driver\R"]

[MeterOptionDriverSelectionText0602]
Meter=String
Text=S:\
MeterStyle=MeterOptionDriverSelectionTextStyle
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Widgets\Driver\S"]

[MeterOptionDriverSelectionText0702]
Meter=String
Text=T:\
MeterStyle=MeterOptionDriverSelectionTextStyle
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Widgets\Driver\T"]

[MeterOptionDriverSelectionText0802]
Meter=String
Text=U:\
MeterStyle=MeterOptionDriverSelectionTextStyle
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Widgets\Driver\U"]

[MeterOptionDriverSelectionText0902]
Meter=String
Text=V:\
MeterStyle=MeterOptionDriverSelectionTextStyle
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Widgets\Driver\V"]

[MeterOptionDriverSelectionText1002]
Meter=String
Text=W:\
MeterStyle=MeterOptionDriverSelectionTextStyle
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Widgets\Driver\W"]

[MeterOptionDriverSelectionText1102]
Meter=String
Text=X:\
MeterStyle=MeterOptionDriverSelectionTextStyle
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Widgets\Driver\X"]

[MeterOptionDriverSelectionText1202]
Meter=String
Text=Y:\
MeterStyle=MeterOptionDriverSelectionTextStyle
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Widgets\Driver\Y"]

[MeterOptionDriverSelectionText1302]
Meter=String
Text=Z:\
MeterStyle=MeterOptionDriverSelectionTextStyle
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Widgets\Driver\Z"]

[MeterOptionDriverSelectionLocate0101]
Meter=Image
X=((#BeginX#+#OptionW#-14+12+36)*#Scale#)
Y=((#BeginY#+80+((#OptionGapY#))*3-4+10)*#Scale#)
MeterStyle=MeterOptionDriverSelectionLocateStyle
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\Widgets\Driver\A"]
[MeterOptionDriverSelectionLocate0201]
Meter=Image
MeterStyle=MeterOptionDriverSelectionLocateStyle
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\Widgets\Driver\B"]
[MeterOptionDriverSelectionLocate0301]
Meter=Image
MeterStyle=MeterOptionDriverSelectionLocateStyle
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\Widgets\Driver\C"]
[MeterOptionDriverSelectionLocate0401]
Meter=Image
MeterStyle=MeterOptionDriverSelectionLocateStyle
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\Widgets\Driver\D"]
[MeterOptionDriverSelectionLocate0501]
Meter=Image
MeterStyle=MeterOptionDriverSelectionLocateStyle
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\Widgets\Driver\E"]
[MeterOptionDriverSelectionLocate0601]
Meter=Image
MeterStyle=MeterOptionDriverSelectionLocateStyle
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\Widgets\Driver\F"]
[MeterOptionDriverSelectionLocate0701]
Meter=Image
MeterStyle=MeterOptionDriverSelectionLocateStyle
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\Widgets\Driver\G"]
[MeterOptionDriverSelectionLocate0801]
Meter=Image
MeterStyle=MeterOptionDriverSelectionLocateStyle
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\Widgets\Driver\H"]
[MeterOptionDriverSelectionLocate0901]
Meter=Image
MeterStyle=MeterOptionDriverSelectionLocateStyle
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\Widgets\Driver\I"]
[MeterOptionDriverSelectionLocate1001]
Meter=Image
MeterStyle=MeterOptionDriverSelectionLocateStyle
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\Widgets\Driver\J"]
[MeterOptionDriverSelectionLocate1101]
Meter=Image
MeterStyle=MeterOptionDriverSelectionLocateStyle
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\Widgets\Driver\K"]
[MeterOptionDriverSelectionLocate1201]
Meter=Image
MeterStyle=MeterOptionDriverSelectionLocateStyle
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\Widgets\Driver\L"]
[MeterOptionDriverSelectionLocate1301]
Meter=Image
MeterStyle=MeterOptionDriverSelectionLocateStyle
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\Widgets\Driver\M"]
[MeterOptionDriverSelectionLocate0102]
Meter=Image
MeterStyle=MeterOptionDriverSelectionLocateStyle
X=(((#BeginX#+2+#OptionW#)+12+36+60)*#Scale#)
Y=(((#BeginY#+80+((#OptionGapY#))*3)+6-10+10)*#Scale#)
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\Widgets\Driver\N"]
[MeterOptionDriverSelectionLocate0202]
Meter=Image
MeterStyle=MeterOptionDriverSelectionLocateStyle
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\Widgets\Driver\O"]
[MeterOptionDriverSelectionLocate0302]
Meter=Image
MeterStyle=MeterOptionDriverSelectionLocateStyle
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\Widgets\Driver\P"]
[MeterOptionDriverSelectionLocate0402]
Meter=Image
MeterStyle=MeterOptionDriverSelectionLocateStyle
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\Widgets\Driver\Q"]
[MeterOptionDriverSelectionLocate0502]
Meter=Image
MeterStyle=MeterOptionDriverSelectionLocateStyle
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\Widgets\Driver\R"]
[MeterOptionDriverSelectionLocate0602]
Meter=Image
MeterStyle=MeterOptionDriverSelectionLocateStyle
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\Widgets\Driver\S"]
[MeterOptionDriverSelectionLocate0702]
Meter=Image
MeterStyle=MeterOptionDriverSelectionLocateStyle
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\Widgets\Driver\T"]
[MeterOptionDriverSelectionLocate0802]
Meter=Image
MeterStyle=MeterOptionDriverSelectionLocateStyle
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\Widgets\Driver\U"]
[MeterOptionDriverSelectionLocate0902]
Meter=Image
MeterStyle=MeterOptionDriverSelectionLocateStyle
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\Widgets\Driver\V"]
[MeterOptionDriverSelectionLocate1002]
Meter=Image
MeterStyle=MeterOptionDriverSelectionLocateStyle
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\Widgets\Driver\W"]
[MeterOptionDriverSelectionLocate1102]
Meter=Image
MeterStyle=MeterOptionDriverSelectionLocateStyle
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\Widgets\Driver\X"]
[MeterOptionDriverSelectionLocate1202]
Meter=Image
MeterStyle=MeterOptionDriverSelectionLocateStyle
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\Widgets\Driver\Y"]
[MeterOptionDriverSelectionLocate1302]
Meter=Image
MeterStyle=MeterOptionDriverSelectionLocateStyle
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\Widgets\Driver\Z"]

[MeterOptionGPUSelectionTextStyle]
X=0r
Y=((35*#Scale#))r
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(12*#Scale#)
AntiAlias=1
DynamicVariables=1
Hidden=1
Group=MeterOptionGPUSelection
[MeterOptionGPUSelectionLocateStyle]
X=0r
Y=((35*#Scale#))r
ImageName=#@#Bitmap\Arrow Right Up
W=(16*#Scale#)
H=(16*#Scale#)
ImageTint=#FontColor_General#
AntiAlias=1
DynamicVariables=1
Hidden=1
Group=MeterOptionGPUSelection

[MeterOptionGPUSelectionSquare]
Meter=Shape
X=((#BeginX#+535)*#Scale#)
Y=((#BeginY#+80+((#OptionGapY#))*2)*#Scale#)
Shape=Rectangle 0,0,(80*#Scale#),(((#OptionGapY#)*3.7)*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color 0,0,0,0 | Stroke Color #ThemeColor_BarBorder#
Shape2=Rectangle 0,0,(80*#Scale#),(((#OptionGapY#)*3.7)*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_TextInputer# | StrokeWidth 0
DynamicVariables=1
MouseLeaveAction=[!HideMeterGroup MeterOptionGPUSelection][!Redraw]
Hidden=1
Group=MeterOptionGPUSelection

[MeterOptionGPUSelectionText0101]
Meter=String
X=((12*#Scale#))r
Y=((6*#Scale#))r
Text=#T.No# 1
MeterStyle=MeterOptionGPUSelectionTextStyle
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Widgets\GPU\1"]

[MeterOptionGPUSelectionText0201]
Meter=String
Text=#T.No# 2
MeterStyle=MeterOptionGPUSelectionTextStyle
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Widgets\GPU\2"]

[MeterOptionGPUSelectionText0301]
Meter=String
Text=#T.No# 3
MeterStyle=MeterOptionGPUSelectionTextStyle
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Widgets\GPU\3"]

[MeterOptionGPUSelectionText0401]
Meter=String
Text=#T.No# 4
MeterStyle=MeterOptionGPUSelectionTextStyle
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Widgets\GPU\4"]

[MeterOptionGPUSelectionText0501]
Meter=String
Text=#T.No# 5
MeterStyle=MeterOptionGPUSelectionTextStyle
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Widgets\GPU\5"]

[MeterOptionGPUSelectionText0601]
Meter=String
Text=#T.No# 6
MeterStyle=MeterOptionGPUSelectionTextStyle
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Widgets\GPU\6"]

[MeterOptionGPUSelectionText0701]
Meter=String
Text=#T.No# 7
MeterStyle=MeterOptionGPUSelectionTextStyle
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Widgets\GPU\7"]

[MeterOptionGPUSelectionText0801]
Meter=String
Text=#T.No# 8
MeterStyle=MeterOptionGPUSelectionTextStyle
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Widgets\GPU\8"]


[MeterOptionGPUSelectionLocate0101]
Meter=Image
X=((#BeginX#+535+54)*#Scale#)
Y=((#BeginY#+80+((#OptionGapY#))*2+10)*#Scale#)
MeterStyle=MeterOptionGPUSelectionLocateStyle
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\Widgets\GPU\1"]
[MeterOptionGPUSelectionLocate0201]
Meter=Image
MeterStyle=MeterOptionGPUSelectionLocateStyle
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\Widgets\GPU\2"]
[MeterOptionGPUSelectionLocate0301]
Meter=Image
MeterStyle=MeterOptionGPUSelectionLocateStyle
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\Widgets\GPU\3"]
[MeterOptionGPUSelectionLocate0401]
Meter=Image
MeterStyle=MeterOptionGPUSelectionLocateStyle
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\Widgets\GPU\4"]
[MeterOptionGPUSelectionLocate0501]
Meter=Image
MeterStyle=MeterOptionGPUSelectionLocateStyle
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\Widgets\GPU\5"]
[MeterOptionGPUSelectionLocate0601]
Meter=Image
MeterStyle=MeterOptionGPUSelectionLocateStyle
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\Widgets\GPU\6"]
[MeterOptionGPUSelectionLocate0701]
Meter=Image
MeterStyle=MeterOptionGPUSelectionLocateStyle
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\Widgets\GPU\7"]
[MeterOptionGPUSelectionLocate0801]
Meter=Image
MeterStyle=MeterOptionGPUSelectionLocateStyle
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\Widgets\GPU\8"]

[MeterOptionNoteSelectionTextStyle]
X=0r
Y=((35*#Scale#))r
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(12*#Scale#)
AntiAlias=1
DynamicVariables=1
Hidden=1
Group=MeterOptionNoteSelection
[MeterOptionNoteSelectionLocateStyle]
X=0r
Y=((35*#Scale#))r
ImageName=#@#Bitmap\Arrow Right Up
W=(16*#Scale#)
H=(16*#Scale#)
ImageTint=#FontColor_General#
AntiAlias=1
DynamicVariables=1
Hidden=1
Group=MeterOptionNoteSelection

[MeterOptionNoteSelectionSquare]
Meter=Shape
X=((#BeginX#+535)*#Scale#)
Y=((#BeginY#+80+((#OptionGapY#))*5)*#Scale#)
Shape=Rectangle 0,0,(80*#Scale#),(((#OptionGapY#)*2-12)*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color 0,0,0,0 | Stroke Color #ThemeColor_BarBorder#
Shape2=Rectangle 0,0,(80*#Scale#),(((#OptionGapY#)*2-12)*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_TextInputer# | StrokeWidth 0
DynamicVariables=1
MouseLeaveAction=[!HideMeterGroup MeterOptionNoteSelection][!Redraw]
Hidden=1
Group=MeterOptionNoteSelection

[MeterOptionNoteSelectionText0101]
Meter=String
X=((12*#Scale#))r
Y=((6*#Scale#))r
Text=#T.No# 1
MeterStyle=MeterOptionNoteSelectionTextStyle
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Widgets\Note\1"]

[MeterOptionNoteSelectionText0102]
Meter=String
Text=#T.No# 2
MeterStyle=MeterOptionNoteSelectionTextStyle
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Widgets\Note\2"]

[MeterOptionNoteSelectionText0103]
Meter=String
Text=#T.No# 3
MeterStyle=MeterOptionNoteSelectionTextStyle
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Widgets\Note\3"]

[MeterOptionNoteSelectionText0104]
Meter=String
Text=#T.No# 4
MeterStyle=MeterOptionNoteSelectionTextStyle
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Widgets\Note\4"]

[MeterOptionNoteSelectionLocate0101]
Meter=Image
X=((#BeginX#+535+54)*#Scale#)
Y=((#BeginY#+80+((#OptionGapY#))*5+10)*#Scale#)
MeterStyle=MeterOptionNoteSelectionLocateStyle
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\Widgets\Note\1"]
[MeterOptionNoteSelectionLocate0201]
Meter=Image
MeterStyle=MeterOptionNoteSelectionLocateStyle
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\Widgets\Note\2"]
[MeterOptionNoteSelectionLocate0301]
Meter=Image
MeterStyle=MeterOptionNoteSelectionLocateStyle
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\Widgets\Note\3"]
[MeterOptionNoteSelectionLocate0401]
Meter=Image
MeterStyle=MeterOptionNoteSelectionLocateStyle
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\Widgets\Note\4"]

[MeterOptionFansSelectionTextStyle]
X=0r
Y=((35*#Scale#))r
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(12*#Scale#)
AntiAlias=1
DynamicVariables=1
Hidden=1
Group=MeterOptionFansSelection
[MeterOptionFansSelectionLocateStyle]
X=0r
Y=((35*#Scale#))r
ImageName=#@#Bitmap\Arrow Right Up
W=(16*#Scale#)
H=(16*#Scale#)
ImageTint=#FontColor_General#
AntiAlias=1
DynamicVariables=1
Hidden=1
Group=MeterOptionFansSelection

[MeterOptionFansSelectionSquare]
Meter=Shape
X=((#BeginX#+535)*#Scale#)
Y=((#BeginY#+80+((#OptionGapY#))*0)*#Scale#)
Shape=Rectangle 0,0,(80*#Scale#),(((#OptionGapY#)*2-12)*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color 0,0,0,0 | Stroke Color #ThemeColor_BarBorder#
Shape2=Rectangle 0,0,(80*#Scale#),(((#OptionGapY#)*2-12)*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_TextInputer# | StrokeWidth 0
DynamicVariables=1
MouseLeaveAction=[!HideMeterGroup MeterOptionFansSelection][!Redraw]
Hidden=1
Group=MeterOptionFansSelection

[MeterOptionFansSelectionText0101]
Meter=String
X=((12*#Scale#))r
Y=((6*#Scale#))r
Text=#T.No# 1
MeterStyle=MeterOptionFansSelectionTextStyle
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Widgets\FansSpeed\1"]

[MeterOptionFansSelectionText0102]
Meter=String
Text=#T.No# 2
MeterStyle=MeterOptionFansSelectionTextStyle
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Widgets\FansSpeed\2"]

[MeterOptionFansSelectionText0103]
Meter=String
Text=#T.No# 3
MeterStyle=MeterOptionFansSelectionTextStyle
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Widgets\FansSpeed\3"]

[MeterOptionFansSelectionText0104]
Meter=String
Text=#T.No# 4
MeterStyle=MeterOptionFansSelectionTextStyle
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Widgets\FansSpeed\4"]

[MeterOptionFansSelectionLocate0101]
Meter=Image
X=((#BeginX#+535+54)*#Scale#)
Y=((#BeginY#+80+((#OptionGapY#))*0+10)*#Scale#)
MeterStyle=MeterOptionFansSelectionLocateStyle
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\Widgets\FansSpeed\1"]
[MeterOptionFansSelectionLocate0201]
Meter=Image
MeterStyle=MeterOptionFansSelectionLocateStyle
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\Widgets\FansSpeed\2"]
[MeterOptionFansSelectionLocate0301]
Meter=Image
MeterStyle=MeterOptionFansSelectionLocateStyle
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\Widgets\FansSpeed\3"]
[MeterOptionFansSelectionLocate0401]
Meter=Image
MeterStyle=MeterOptionFansSelectionLocateStyle
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\Widgets\FansSpeed\4"]
