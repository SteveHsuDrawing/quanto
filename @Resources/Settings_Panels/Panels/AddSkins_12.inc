[Variables]
ExtraTip=#S.Widgets_Settings.19#
Category=Shortcuts\Customs

OptionHidden11=0
OptionHidden21=0
OptionHidden31=0
OptionHidden41=0
OptionHidden51=0
OptionHidden61=0
OptionHidden71=0
OptionHidden81=0
OptionHidden91=1
OptionHidden12=0
OptionHidden22=0
OptionHidden32=0
OptionHidden42=0
OptionHidden52=0
OptionHidden62=0
OptionHidden72=0
OptionHidden82=0
OptionHidden92=1

OptionName11=Custom_01
OptionName21=Custom_02
OptionName31=Custom_03
OptionName41=Custom_04
OptionName51=Custom_05
OptionName61=Custom_06
OptionName71=Custom_07
OptionName81=Custom_08
OptionName91=
OptionName12=Custom_09
OptionName22=Custom_10
OptionName32=Custom_11
OptionName42=Custom_12
OptionName52=Custom_13
OptionName62=Custom_14
OptionName72=Custom_15
OptionName82=Custom_16
OptionName92=

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

OptionTitleOffset11=1
OptionTitleOffset21=1
OptionTitleOffset31=1
OptionTitleOffset41=1
OptionTitleOffset51=1
OptionTitleOffset61=1
OptionTitleOffset71=1
OptionTitleOffset81=1
OptionTitleOffset91=1
OptionTitleOffset12=1
OptionTitleOffset22=1
OptionTitleOffset32=1
OptionTitleOffset42=1
OptionTitleOffset52=1
OptionTitleOffset62=1
OptionTitleOffset72=1
OptionTitleOffset82=1
OptionTitleOffset92=1

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
X=((#BeginX#+#GapXUnscaled#*2)*#Scale#)
Y=((#BeginY#+35*1)*#Scale#)
Shape=Rectangle (58*#Scale#),(29*#Scale#),(12*#Scale#),(3*#Scale#),(1.5*#Scale#),(1.5*#Scale#) | Fill Color #FontColor_General#,64 | Stroke Color 0,0,0,0
DynamicVariables=1






[MeterOption11]
Meter=Shape
MeterStyle=MeterOptionStyle1 | MeterOptionX1Begin
Hidden=#OptionHidden11#
;RightMouseUpAction=[!WriteKeyValue Variables "TextInput1" "Resources.inc" "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!WriteKeyValue Variables "TextInput3" "Custom_01" "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!Refresh][!Delay 150][!ShowMeterGroup CustomIconsMenu][!Redraw]

[MeterOption21]
Meter=Shape
MeterStyle=MeterOptionStyle1
Hidden=#OptionHidden21#
;RightMouseUpAction=[!WriteKeyValue Variables "TextInput1" "Resources.inc" "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!WriteKeyValue Variables "TextInput3" "Custom_02" "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!Refresh][!Delay 150][!ShowMeterGroup CustomIconsMenu][!Redraw]

[MeterOption31]
Meter=Shape
MeterStyle=MeterOptionStyle1
Hidden=#OptionHidden31#
;RightMouseUpAction=[!WriteKeyValue Variables "TextInput1" "Resources.inc" "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!WriteKeyValue Variables "TextInput3" "Custom_03" "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!Refresh][!Delay 150][!ShowMeterGroup CustomIconsMenu][!Redraw]

[MeterOption41]
Meter=Shape
MeterStyle=MeterOptionStyle1
Hidden=#OptionHidden41#
;RightMouseUpAction=[!WriteKeyValue Variables "TextInput1" "Resources.inc" "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!WriteKeyValue Variables "TextInput3" "Custom_04" "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!Refresh][!Delay 150][!ShowMeterGroup CustomIconsMenu][!Redraw]

[MeterOption51]
Meter=Shape
MeterStyle=MeterOptionStyle1
Hidden=#OptionHidden51#
;RightMouseUpAction=[!WriteKeyValue Variables "TextInput1" "Resources.inc" "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!WriteKeyValue Variables "TextInput3" "Custom_05" "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!Refresh][!Delay 150][!ShowMeterGroup CustomIconsMenu][!Redraw]

[MeterOption61]
Meter=Shape
MeterStyle=MeterOptionStyle1
Hidden=#OptionHidden61#
;RightMouseUpAction=[!WriteKeyValue Variables "TextInput1" "Resources.inc" "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!WriteKeyValue Variables "TextInput3" "Custom_06" "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!Refresh][!Delay 150][!ShowMeterGroup CustomIconsMenu][!Redraw]

[MeterOption71]
Meter=Shape
MeterStyle=MeterOptionStyle1
Hidden=#OptionHidden71#
;RightMouseUpAction=[!WriteKeyValue Variables "TextInput1" "Resources.inc" "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!WriteKeyValue Variables "TextInput3" "Custom_07" "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!Refresh][!Delay 150][!ShowMeterGroup CustomIconsMenu][!Redraw]

[MeterOption81]
Meter=Shape
MeterStyle=MeterOptionStyle1
Hidden=#OptionHidden81#
;RightMouseUpAction=[!WriteKeyValue Variables "TextInput1" "Resources.inc" "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!WriteKeyValue Variables "TextInput3" "Custom_08" "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!Refresh][!Delay 150][!ShowMeterGroup CustomIconsMenu][!Redraw]

[MeterOption91]
Meter=Shape
MeterStyle=MeterOptionStyle1
Hidden=#OptionHidden91#

[MeterOption12]
Meter=Shape
MeterStyle=MeterOptionStyle1 | MeterOptionX2Begin
Hidden=#OptionHidden12#
;RightMouseUpAction=[!WriteKeyValue Variables "TextInput1" "Resources.inc" "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!WriteKeyValue Variables "TextInput3" "Custom_09" "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!Refresh][!Delay 150][!ShowMeterGroup CustomIconsMenu][!Redraw]

[MeterOption22]
Meter=Shape
MeterStyle=MeterOptionStyle1
Hidden=#OptionHidden22#
;RightMouseUpAction=[!WriteKeyValue Variables "TextInput1" "Resources.inc" "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!WriteKeyValue Variables "TextInput3" "Custom_10" "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!Refresh][!Delay 150][!ShowMeterGroup CustomIconsMenu][!Redraw]

[MeterOption32]
Meter=Shape
MeterStyle=MeterOptionStyle1
Hidden=#OptionHidden32#
;RightMouseUpAction=[!WriteKeyValue Variables "TextInput1" "Resources.inc" "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!WriteKeyValue Variables "TextInput3" "Custom_11" "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!Refresh][!Delay 150][!ShowMeterGroup CustomIconsMenu][!Redraw]

[MeterOption42]
Meter=Shape
MeterStyle=MeterOptionStyle1
Hidden=#OptionHidden42#
;RightMouseUpAction=[!WriteKeyValue Variables "TextInput1" "Resources.inc" "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!WriteKeyValue Variables "TextInput3" "Custom_12" "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!Refresh][!Delay 150][!ShowMeterGroup CustomIconsMenu][!Redraw]

[MeterOption52]
Meter=Shape
MeterStyle=MeterOptionStyle1
Hidden=#OptionHidden52#
;RightMouseUpAction=[!WriteKeyValue Variables "TextInput1" "Resources.inc" "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!WriteKeyValue Variables "TextInput3" "Custom_13" "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!Refresh][!Delay 150][!ShowMeterGroup CustomIconsMenu][!Redraw]

[MeterOption62]
Meter=Shape
MeterStyle=MeterOptionStyle1
Hidden=#OptionHidden62#
;RightMouseUpAction=[!WriteKeyValue Variables "TextInput1" "Resources.inc" "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!WriteKeyValue Variables "TextInput3" "Custom_14" "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!Refresh][!Delay 150][!ShowMeterGroup CustomIconsMenu][!Redraw]

[MeterOption72]
Meter=Shape
MeterStyle=MeterOptionStyle1
Hidden=#OptionHidden72#
;RightMouseUpAction=[!WriteKeyValue Variables "TextInput1" "Resources.inc" "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!WriteKeyValue Variables "TextInput3" "Custom_15" "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!Refresh][!Delay 150][!ShowMeterGroup CustomIconsMenu][!Redraw]

[MeterOption82]
Meter=Shape
MeterStyle=MeterOptionStyle1
Hidden=#OptionHidden82#
;RightMouseUpAction=[!WriteKeyValue Variables "TextInput1" "Resources.inc" "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!WriteKeyValue Variables "TextInput3" "Custom_16" "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!Refresh][!Delay 150][!ShowMeterGroup CustomIconsMenu][!Redraw]

[MeterOption92]
Meter=Shape
MeterStyle=MeterOptionStyle1
Hidden=#OptionHidden92#

@Include=#@#Settings_Panels\Panels\AddSkins_Global1.inc
@Include2=#@#Resources.inc

[MeterIconStyle_1]
X=0r
Y=((((#OptionGapY#))*#Scale#))r
W=(24*#Scale#)
H=(24*#Scale#)
DynamicVariables=1

[MeterIcon11]
Meter=Image
X=((#BeginX#+22)*#Scale#)
Y=((#BeginY#+104)*#Scale#)
ImageName=[#QuickSetting.Icon.Custom_01]
MeterStyle=MeterIconStyle_1
Hidden=#OptionHidden11#

[MeterIcon21]
Meter=Image
ImageName=[#QuickSetting.Icon.Custom_02]
MeterStyle=MeterIconStyle_1
Hidden=#OptionHidden21#

[MeterIcon31]
Meter=Image
ImageName=[#QuickSetting.Icon.Custom_03]
MeterStyle=MeterIconStyle_1
Hidden=#OptionHidden31#

[MeterIcon41]
Meter=Image
ImageName=[#QuickSetting.Icon.Custom_04]
MeterStyle=MeterIconStyle_1
Hidden=#OptionHidden41#

[MeterIcon51]
Meter=Image
ImageName=[#QuickSetting.Icon.Custom_05]
MeterStyle=MeterIconStyle_1
Hidden=#OptionHidden51#

[MeterIcon61]
Meter=Image
ImageName=[#QuickSetting.Icon.Custom_06]
MeterStyle=MeterIconStyle_1
Hidden=#OptionHidden61#

[MeterIcon71]
Meter=Image
ImageName=[#QuickSetting.Icon.Custom_07]
MeterStyle=MeterIconStyle_1
Hidden=#OptionHidden71#

[MeterIcon81]
Meter=Image
ImageName=[#QuickSetting.Icon.Custom_08]
MeterStyle=MeterIconStyle_1
Hidden=#OptionHidden81#

[MeterIcon91]
Meter=Image
ImageName=
MeterStyle=MeterIconStyle_1
Hidden=#OptionHidden91#



[MeterIcon12]
Meter=Image
X=(((#OptionGapX#)*#Scale#))r
Y=((#BeginY#+104)*#Scale#)
ImageName=[#QuickSetting.Icon.Custom_09]
MeterStyle=MeterIconStyle_1
Hidden=#OptionHidden12#

[MeterIcon22]
Meter=Image
ImageName=[#QuickSetting.Icon.Custom_10]
MeterStyle=MeterIconStyle_1
Hidden=#OptionHidden22#

[MeterIcon32]
Meter=Image
ImageName=[#QuickSetting.Icon.Custom_11]
MeterStyle=MeterIconStyle_1
Hidden=#OptionHidden32#

[MeterIcon42]
Meter=Image
ImageName=[#QuickSetting.Icon.Custom_12]
MeterStyle=MeterIconStyle_1
Hidden=#OptionHidden42#

[MeterIcon52]
Meter=Image
ImageName=[#QuickSetting.Icon.Custom_13]
MeterStyle=MeterIconStyle_1
Hidden=#OptionHidden52#

[MeterIcon62]
Meter=Image
ImageName=[#QuickSetting.Icon.Custom_14]
MeterStyle=MeterIconStyle_1
Hidden=#OptionHidden62#

[MeterIcon72]
Meter=Image
ImageName=[#QuickSetting.Icon.Custom_15]
MeterStyle=MeterIconStyle_1
Hidden=#OptionHidden72#

[MeterIcon82]
Meter=Image
ImageName=[#QuickSetting.Icon.Custom_16]
MeterStyle=MeterIconStyle_1
Hidden=#OptionHidden82#

[MeterIcon92]
Meter=Image
ImageName=
MeterStyle=MeterIconStyle_1
Hidden=#OptionHidden92#

[FontStyle_Custom3]
W=(592*#Scale#)
ClipString=2
StringAlign=LeftTop
Text=[#S.Widgets_Settings.11]

[MeterGroupStyle2]
Group=CustomIconsMenu
Hidden=1

[MeterWindowShadow2]
Meter=Shape
MeterStyle=MeterSquareDarkerStyle | MeterGroupStyle2

[MeterInputerTipTextShadow2]
Meter=String
MeterStyle=FontStyle_General | FontStyle_Custom3 | MeterGroupStyle2
X=((#BeginX#+0)*#Scale#)
Y=((#BeginY#+72)*#Scale#)
Solidcolor=#ThemeColor_BarBorderLight#
Padding=(11*#Scale#),(65*#Scale#),(11*#Scale#),(11*#Scale#)

[MeterInputerTipText2]
Meter=String
MeterStyle=FontStyle_General | FontStyle_Custom3 | MeterGroupStyle2
X=((1*#Scale#))r
Y=((1*#Scale#))r
Solidcolor=#ThemeColor_BackgroundNoAlpha#
Padding=(10*#Scale#),(64*#Scale#),(10*#Scale#),(10*#Scale#)

[MeterButtonStyle1]
X=((149*#Scale#))r
Y=0r
Shape=Rectangle 0,0,(145*#Scale#),(36*#Scale#),(2*#Scale#),(2*#Scale#) | Stroke Color #ThemeColor_BarBorder# | Fill Color #ThemeColor_BarBorder#
Shape2=Rectangle 0,0,(145*#Scale#),(36*#Scale#),(2*#Scale#),(2*#Scale#) | StrokeWidth 0 | Fill Color #ThemeColor_TextInputer#
DynamicVariables=1

[MeterButtonStyle2]
X=((149*#Scale#))r
Y=0r
Shape=Rectangle 0,0,(145*#Scale#),(36*#Scale#),(2*#Scale#),(2*#Scale#) | StrokeWidth 0 | Fill Color #ThemeColor_BackgroundSelected#
DynamicVariables=1
Hidden=1

[MeterButtonStyle3]
X=((149*#Scale#))r
Y=0r
StringAlign=CenterCenter
DynamicVariables=1

[MeterButton11]
Meter=Shape
X=((9*#Scale#))r
Y=((9*#Scale#))r
MeterStyle=MeterButtonStyle1 | MeterGroupStyle2
MouseOverAction=[!ShowMeter MeterButton12][!Redraw]
MouseLeaveAction=[!HideMeter MeterButton12][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables "TextInput2" "Action" "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!Refresh][!Delay 150][!ShowMeterGroup InputText][!CommandMeasure MeasureInputGlobal "ExecuteBatch 1"][!Redraw]

[MeterButton21]
Meter=Shape
MeterStyle=MeterButtonStyle1 | MeterGroupStyle2
MouseOverAction=[!ShowMeter MeterButton22][!Redraw]
MouseLeaveAction=[!HideMeter MeterButton22][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables "TextInput2" "Icon" "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!Refresh][!Delay 150][!ShowMeterGroup InputText][!CommandMeasure MeasureInputGlobal "ExecuteBatch 1"][!Redraw]

[MeterButton31]
Meter=Shape
MeterStyle=MeterButtonStyle1 | MeterGroupStyle2
MouseOverAction=[!ShowMeter MeterButton32][!Redraw]
MouseLeaveAction=[!HideMeter MeterButton32][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables "TextInput2" "Text" "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!Refresh][!Delay 150][!ShowMeterGroup InputText][!CommandMeasure MeasureInputGlobal "ExecuteBatch 1"][!Redraw]

[MeterButton41]
Meter=Shape
MeterStyle=MeterButtonStyle1 | MeterGroupStyle2
MouseOverAction=[!ShowMeter MeterButton42][!Redraw]
MouseLeaveAction=[!HideMeter MeterButton42][!Redraw]
LeftMouseUpAction=[!HideMeterGroup CustomIconsMenu]

[MeterButton12]
Meter=Shape
X=((#BeginX#+10)*#Scale#)
Y=((#BeginY#+82)*#Scale#)
MeterStyle=MeterButtonStyle2

[MeterButton22]
Meter=Shape
MeterStyle=MeterButtonStyle2

[MeterButton32]
Meter=Shape
MeterStyle=MeterButtonStyle2

[MeterButton42]
Meter=Shape
MeterStyle=MeterButtonStyle2

[MeterButton13]
Meter=String
Text=#T.Modify# #T.Target#
X=((#BeginX#+10+72)*#Scale#)
Y=((#BeginY#+82+18)*#Scale#)
MeterStyle=FontStyle_General | MeterButtonStyle3 | MeterGroupStyle2

[MeterButton23]
Meter=String
Text=#T.Modify# #T.Icon#
MeterStyle=FontStyle_General | MeterButtonStyle3 | MeterGroupStyle2

[MeterButton33]
Meter=String
Text=#T.Modify# #T.Title#
MeterStyle=FontStyle_General | MeterButtonStyle3 | MeterGroupStyle2

[MeterButton43]
Meter=String
Text=#T.Cancel#
MeterStyle=FontStyle_General | MeterButtonStyle3 | MeterGroupStyle2



[MeterEditIconStyle]
X=0r
Y=((((#OptionGapY#))*#Scale#))r
ImageName=#@#Bitmap\Edit.png
W=(16*#Scale#)
H=(16*#Scale#)
ImageTint=#FontColor_General#
Group=Contents
DynamicVariables=1

[MeterEditIconX1Begin]
X=((#BeginX#+#OptionW#-60)*#Scale#)
Y=((#BeginY#+#OptionH#+22)*#Scale#)

[MeterEditIconX2Begin]
X=(((#OptionGapX#)*#Scale#))r
Y=((#BeginY#+#OptionH#+22)*#Scale#)

[MeterEditIcon11]
Meter=Image
MeterStyle=MeterEditIconStyle | MeterEditIconX1Begin
Hidden=#OptionHidden11#
LeftMouseUpAction=[!WriteKeyValue Variables Edit "Custom_01" "#ROOTCONFIGPATH#Widgets\Settings\CustomShortcutSettings\Settings.inc"][!ActivateConfig "#ROOTCONFIG#\Widgets\Settings\CustomShortcutSettings" "9x9.ini"][!Move (#CURRENTCONFIGX#+16*#Scale#) (#CURRENTCONFIGY#+16*#Scale#) "#ROOTCONFIG#\Widgets\Settings\CustomShortcutSettings"]

[MeterEditIcon21]
Meter=Image
MeterStyle=MeterEditIconStyle
Hidden=#OptionHidden21#
LeftMouseUpAction=[!WriteKeyValue Variables Edit "Custom_02" "#ROOTCONFIGPATH#Widgets\Settings\CustomShortcutSettings\Settings.inc"][!ActivateConfig "#ROOTCONFIG#\Widgets\Settings\CustomShortcutSettings" "9x9.ini"][!Move (#CURRENTCONFIGX#+16*#Scale#) (#CURRENTCONFIGY#+16*#Scale#) "#ROOTCONFIG#\Widgets\Settings\CustomShortcutSettings"]

[MeterEditIcon31]
Meter=Image
MeterStyle=MeterEditIconStyle
Hidden=#OptionHidden31#
LeftMouseUpAction=[!WriteKeyValue Variables Edit "Custom_03" "#ROOTCONFIGPATH#Widgets\Settings\CustomShortcutSettings\Settings.inc"][!ActivateConfig "#ROOTCONFIG#\Widgets\Settings\CustomShortcutSettings" "9x9.ini"][!Move (#CURRENTCONFIGX#+16*#Scale#) (#CURRENTCONFIGY#+16*#Scale#) "#ROOTCONFIG#\Widgets\Settings\CustomShortcutSettings"]

[MeterEditIcon41]
Meter=Image
MeterStyle=MeterEditIconStyle
Hidden=#OptionHidden41#
LeftMouseUpAction=[!WriteKeyValue Variables Edit "Custom_04" "#ROOTCONFIGPATH#Widgets\Settings\CustomShortcutSettings\Settings.inc"][!ActivateConfig "#ROOTCONFIG#\Widgets\Settings\CustomShortcutSettings" "9x9.ini"][!Move (#CURRENTCONFIGX#+16*#Scale#) (#CURRENTCONFIGY#+16*#Scale#) "#ROOTCONFIG#\Widgets\Settings\CustomShortcutSettings"]

[MeterEditIcon51]
Meter=Image
MeterStyle=MeterEditIconStyle
Hidden=#OptionHidden51#
LeftMouseUpAction=[!WriteKeyValue Variables Edit "Custom_05" "#ROOTCONFIGPATH#Widgets\Settings\CustomShortcutSettings\Settings.inc"][!ActivateConfig "#ROOTCONFIG#\Widgets\Settings\CustomShortcutSettings" "9x9.ini"][!Move (#CURRENTCONFIGX#+16*#Scale#) (#CURRENTCONFIGY#+16*#Scale#) "#ROOTCONFIG#\Widgets\Settings\CustomShortcutSettings"]

[MeterEditIcon61]
Meter=Image
MeterStyle=MeterEditIconStyle
Hidden=#OptionHidden61#
LeftMouseUpAction=[!WriteKeyValue Variables Edit "Custom_06" "#ROOTCONFIGPATH#Widgets\Settings\CustomShortcutSettings\Settings.inc"][!ActivateConfig "#ROOTCONFIG#\Widgets\Settings\CustomShortcutSettings" "9x9.ini"][!Move (#CURRENTCONFIGX#+16*#Scale#) (#CURRENTCONFIGY#+16*#Scale#) "#ROOTCONFIG#\Widgets\Settings\CustomShortcutSettings"]

[MeterEditIcon71]
Meter=Image
MeterStyle=MeterEditIconStyle
Hidden=#OptionHidden71#
LeftMouseUpAction=[!WriteKeyValue Variables Edit "Custom_07" "#ROOTCONFIGPATH#Widgets\Settings\CustomShortcutSettings\Settings.inc"][!ActivateConfig "#ROOTCONFIG#\Widgets\Settings\CustomShortcutSettings" "9x9.ini"][!Move (#CURRENTCONFIGX#+16*#Scale#) (#CURRENTCONFIGY#+16*#Scale#) "#ROOTCONFIG#\Widgets\Settings\CustomShortcutSettings"]

[MeterEditIcon81]
Meter=Image
MeterStyle=MeterEditIconStyle
Hidden=#OptionHidden81#
LeftMouseUpAction=[!WriteKeyValue Variables Edit "Custom_08" "#ROOTCONFIGPATH#Widgets\Settings\CustomShortcutSettings\Settings.inc"][!ActivateConfig "#ROOTCONFIG#\Widgets\Settings\CustomShortcutSettings" "9x9.ini"][!Move (#CURRENTCONFIGX#+16*#Scale#) (#CURRENTCONFIGY#+16*#Scale#) "#ROOTCONFIG#\Widgets\Settings\CustomShortcutSettings"]

[MeterEditIcon91]
Meter=Image
MeterStyle=MeterEditIconStyle
Hidden=#OptionHidden91#
;LeftMouseUpAction=[!WriteKeyValue Variables Edit "Custom_09" "#ROOTCONFIGPATH#Widgets\Settings\CustomShortcutSettings\Settings.inc"][!ActivateConfig "#ROOTCONFIG#\Widgets\Settings\CustomShortcutSettings" "9x9.ini"][!Move (#CURRENTCONFIGX#+16*#Scale#) (#CURRENTCONFIGY#+16*#Scale#) "#ROOTCONFIG#\Widgets\Settings\CustomShortcutSettings"]

[MeterEditIcon12]
Meter=Image
MeterStyle=MeterEditIconStyle | MeterEditIconX2Begin
Hidden=#OptionHidden12#
LeftMouseUpAction=[!WriteKeyValue Variables Edit "Custom_09" "#ROOTCONFIGPATH#Widgets\Settings\CustomShortcutSettings\Settings.inc"][!ActivateConfig "#ROOTCONFIG#\Widgets\Settings\CustomShortcutSettings" "9x9.ini"][!Move (#CURRENTCONFIGX#+16*#Scale#) (#CURRENTCONFIGY#+16*#Scale#) "#ROOTCONFIG#\Widgets\Settings\CustomShortcutSettings"]

[MeterEditIcon22]
Meter=Image
MeterStyle=MeterEditIconStyle
Hidden=#OptionHidden22#
LeftMouseUpAction=[!WriteKeyValue Variables Edit "Custom_10" "#ROOTCONFIGPATH#Widgets\Settings\CustomShortcutSettings\Settings.inc"][!ActivateConfig "#ROOTCONFIG#\Widgets\Settings\CustomShortcutSettings" "9x9.ini"][!Move (#CURRENTCONFIGX#+16*#Scale#) (#CURRENTCONFIGY#+16*#Scale#) "#ROOTCONFIG#\Widgets\Settings\CustomShortcutSettings"]

[MeterEditIcon32]
Meter=Image
MeterStyle=MeterEditIconStyle
Hidden=#OptionHidden32#
LeftMouseUpAction=[!WriteKeyValue Variables Edit "Custom_11" "#ROOTCONFIGPATH#Widgets\Settings\CustomShortcutSettings\Settings.inc"][!ActivateConfig "#ROOTCONFIG#\Widgets\Settings\CustomShortcutSettings" "9x9.ini"][!Move (#CURRENTCONFIGX#+16*#Scale#) (#CURRENTCONFIGY#+16*#Scale#) "#ROOTCONFIG#\Widgets\Settings\CustomShortcutSettings"]

[MeterEditIcon42]
Meter=Image
MeterStyle=MeterEditIconStyle
Hidden=#OptionHidden42#
LeftMouseUpAction=[!WriteKeyValue Variables Edit "Custom_12" "#ROOTCONFIGPATH#Widgets\Settings\CustomShortcutSettings\Settings.inc"][!ActivateConfig "#ROOTCONFIG#\Widgets\Settings\CustomShortcutSettings" "9x9.ini"][!Move (#CURRENTCONFIGX#+16*#Scale#) (#CURRENTCONFIGY#+16*#Scale#) "#ROOTCONFIG#\Widgets\Settings\CustomShortcutSettings"]

[MeterEditIcon52]
Meter=Image
MeterStyle=MeterEditIconStyle
Hidden=#OptionHidden52#
LeftMouseUpAction=[!WriteKeyValue Variables Edit "Custom_13" "#ROOTCONFIGPATH#Widgets\Settings\CustomShortcutSettings\Settings.inc"][!ActivateConfig "#ROOTCONFIG#\Widgets\Settings\CustomShortcutSettings" "9x9.ini"][!Move (#CURRENTCONFIGX#+16*#Scale#) (#CURRENTCONFIGY#+16*#Scale#) "#ROOTCONFIG#\Widgets\Settings\CustomShortcutSettings"]

[MeterEditIcon62]
Meter=Image
MeterStyle=MeterEditIconStyle
Hidden=#OptionHidden62#
LeftMouseUpAction=[!WriteKeyValue Variables Edit "Custom_14" "#ROOTCONFIGPATH#Widgets\Settings\CustomShortcutSettings\Settings.inc"][!ActivateConfig "#ROOTCONFIG#\Widgets\Settings\CustomShortcutSettings" "9x9.ini"][!Move (#CURRENTCONFIGX#+16*#Scale#) (#CURRENTCONFIGY#+16*#Scale#) "#ROOTCONFIG#\Widgets\Settings\CustomShortcutSettings"]

[MeterEditIcon72]
Meter=Image
MeterStyle=MeterEditIconStyle
Hidden=#OptionHidden72#
LeftMouseUpAction=[!WriteKeyValue Variables Edit "Custom_15" "#ROOTCONFIGPATH#Widgets\Settings\CustomShortcutSettings\Settings.inc"][!ActivateConfig "#ROOTCONFIG#\Widgets\Settings\CustomShortcutSettings" "9x9.ini"][!Move (#CURRENTCONFIGX#+16*#Scale#) (#CURRENTCONFIGY#+16*#Scale#) "#ROOTCONFIG#\Widgets\Settings\CustomShortcutSettings"]

[MeterEditIcon82]
Meter=Image
MeterStyle=MeterEditIconStyle
Hidden=#OptionHidden82#
LeftMouseUpAction=[!WriteKeyValue Variables Edit "Custom_16" "#ROOTCONFIGPATH#Widgets\Settings\CustomShortcutSettings\Settings.inc"][!ActivateConfig "#ROOTCONFIG#\Widgets\Settings\CustomShortcutSettings" "9x9.ini"][!Move (#CURRENTCONFIGX#+16*#Scale#) (#CURRENTCONFIGY#+16*#Scale#) "#ROOTCONFIG#\Widgets\Settings\CustomShortcutSettings"]

[MeterEditIcon92]
Meter=Image
MeterStyle=MeterEditIconStyle
Hidden=#OptionHidden92#
;LeftMouseUpAction=[!WriteKeyValue Variables Edit "Custom_01" "#ROOTCONFIGPATH#Widgets\Settings\CustomShortcutSettings\Settings.inc"][!ActivateConfig "#ROOTCONFIG#\Widgets\Settings\CustomShortcutSettings" "9x9.ini"][!Move (#CURRENTCONFIGX#+16*#Scale#) (#CURRENTCONFIGY#+16*#Scale#) "#ROOTCONFIG#\Widgets\Settings\CustomShortcutSettings"]

@include3=AddSkins_Global2.inc
