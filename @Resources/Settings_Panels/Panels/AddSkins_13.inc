[Variables]
ExtraTip=#S.Widgets_Settings.19#
Category=Shortcuts\Customs

OptionHidden11=0
OptionHidden21=0
OptionHidden31=1
OptionHidden41=1
OptionHidden51=1
OptionHidden61=1
OptionHidden71=1
OptionHidden81=1
OptionHidden91=1
OptionHidden12=0
OptionHidden22=0
OptionHidden32=1
OptionHidden42=1
OptionHidden52=1
OptionHidden62=1
OptionHidden72=1
OptionHidden82=1
OptionHidden92=1

OptionName11=4in1_1
OptionName21=4in1_2
OptionName31=NA
OptionName41=NA
OptionName51=NA
OptionName61=NA
OptionName71=NA
OptionName81=NA
OptionName91=NA
OptionName12=4in1_3
OptionName22=4in1_4
OptionName32=NA
OptionName42=NA
OptionName52=NA
OptionName62=NA
OptionName72=NA
OptionName82=NA
OptionName92=NA

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
OptionTitleOffset22=0
OptionTitleOffset32=0
OptionTitleOffset42=0
OptionTitleOffset52=0
OptionTitleOffset62=0
OptionTitleOffset72=0
OptionTitleOffset82=0
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

[MeterText21]
Meter=String
Text=#T.Page# 1
X=((#BeginX#+#GapXUnscaled#)*#Scale#)
Y=((#BeginY#+39)*#Scale#)
StringAlign=Center
MeterStyle=FontStyle_General
LeftMouseUpAction=[!WriteKeyValue Variables SubPage 11 "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!Refresh]

[MeterText22]
Meter=String
Text=#T.Page# 2
X=((#GapX#*2))r
Y=0r
StringAlign=Center
MeterStyle=FontStyle_General
LeftMouseUpAction=[!WriteKeyValue Variables SubPage 12 "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!Refresh]

[MeterText23]
Meter=String
Text=#T.Page# 3
X=((#GapX#*2))r
Y=0r
StringAlign=Center
MeterStyle=FontStyle_General
LeftMouseUpAction=[!WriteKeyValue Variables SubPage 13 "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!Refresh]


[MeterSelectionDisplay2]
Meter=Shape
X=((#BeginX#+#GapXUnscaled#*4)*#Scale#)
Y=((#BeginY#+35*1)*#Scale#)
Shape=Rectangle (58*#Scale#),(29*#Scale#),(12*#Scale#),(3*#Scale#),(1.5*#Scale#),(1.5*#Scale#) | Fill Color #FontColor_General#,64 | Stroke Color 0,0,0,0
DynamicVariables=1







@Include=#@#Settings_Panels\Panels\AddSkins_Global1.inc