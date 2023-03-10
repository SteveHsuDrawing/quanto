[Variables]
@Include=#@#Global.inc
@Include2=#CurrentPath#Settings.inc
Category=Widgets

[MeterSettingZone]
Meter=Shape
MeterStyle=MeterSettingZoneStyle
Hidden=#HideSettings#

[MeterSettingTitle]
Meter=String
MeterStyle=MeterSettingTitleStyle
Hidden=#HideSettings#

[MeterSkinSettingButtonZone1]
Meter=Shape
MeterStyle=MeterSmallButtonZone | MeterSmallButtonZoneBegin
Hidden=1

[MeterSkinSettingButtonIcon1]
Meter=Image
MeterStyle=MeterSmallButtonIcon | MeterSmallButtonIcon1
Hidden=#HideSettings#

[MeterOption1]
Meter=Shape
MeterStyle=MeterSmallOption | MeterSmallOptionBehavior1
Hidden=#HideSettings#
LeftMouseUpAction=[!ShowMeterGroup MeterOption1.Feature2][!Redraw]

[MeterOption2]
Meter=Shape
MeterStyle=MeterSmallOption | MeterSmallOptionBehavior2
Hidden=#HideSettings#
LeftMouseUpAction=[!WriteKeyValue Variables Page HelpCenter "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!WriteKeyValue Variables SubPage 407 "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!ActivateConfig "#ROOTCONFIG#\Widgets\Settings" "16x14.ini"][!Refresh "#ROOTCONFIG#\Widgets\Settings" "16x14.ini"]

[MeterOptionSelected1]
Meter=Shape
MeterStyle=MeterSmallOptionSelected | MeterSmallOptionBegin
Hidden=1

[MeterOptionSelected2]
Meter=Shape
MeterStyle=MeterSmallOptionSelected
Hidden=1

[MeterOptionTitle1]
Meter=String
MeterStyle=MeterSmallOptionTitle | MeterSmallOptionTitleBegin
Text=#T.Mode#
Hidden=#HideSettings#

[MeterOptionTitle2]
Meter=String
MeterStyle=MeterSmallOptionTitle
Text=#S.Global.4#
Hidden=#HideSettings#

[MeterOption1.Feature1.Measure1]
Measure=String
String=#PlayerName#
Substitute="AIMP":"0","CAD":"1","iTunes":"2","Winamp":"3","WMP":"4","Spotify":"5","WLM":"6"

[MeterOptionText1]
Meter=String
MeterStyle=MeterSmallOptionText | MeterSmallOptionTextBegin
Text=#PlayerName#
Hidden=#HideSettings#

[MeterOption2.Feature1.Display1]
Meter=Image
X=((#BeginX#+224-22*0)*#Scale#)
Y=((#BeginY#+16+34*1)*#Scale#)
MeterStyle=MeterSkinSettingOptionIconStyle
ImageName=#@#Bitmap\Open (Small)
ImageTint=#FontColor_General#
DynamicVariables=1
Group=SkinSettings
Hidden=#HideSettings#

[MeterOption1.Feature2.Display1]
Meter=Shape
X=((#BeginX#+6)*#Scale#)
Y=((#BeginY#+10)*#Scale#)
Shape=Rectangle 0,0,(242*#Scale#),((24*7+4)*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_BackgroundNoAlpha# | Stroke Color #ThemeColor_BarBorder#
DynamicVariables=1
Hidden=1
Group=MeterOption1.Feature2 | Contexts
MouseLeaveAction=[!HideMeterGroup Contexts][!Redraw]

[MeterOption1.Feature2.Display2]
Meter=String
Text=AIMP
MeterStyle=MeterSmallOptionTitle | MeterSkinSettingMenuTextStyle | MeterSkinSettingMenuTextBeginStyle
Hidden=1
Group=MeterOption1.Feature2 | Contexts
LeftMouseUpAction=[!WriteKeyValue Variables PlayerName AIMP "Settings.inc"][!Refresh]

[MeterOption1.Feature2.Display3]
Meter=String
Text=CAD
MeterStyle=MeterSmallOptionTitle | MeterSkinSettingMenuTextStyle
Hidden=1
Group=MeterOption1.Feature2 | Contexts
LeftMouseUpAction=[!WriteKeyValue Variables PlayerName CAD "Settings.inc"][!Refresh]

[MeterOption1.Feature2.Display4]
Meter=String
Text=iTunes
MeterStyle=MeterSmallOptionTitle | MeterSkinSettingMenuTextStyle
Hidden=1
Group=MeterOption1.Feature2 | Contexts
LeftMouseUpAction=[!WriteKeyValue Variables PlayerName iTunes "Settings.inc"][!Refresh]

[MeterOption1.Feature2.Display5]
Meter=String
Text=Winamp
MeterStyle=MeterSmallOptionTitle | MeterSkinSettingMenuTextStyle
Hidden=1
Group=MeterOption1.Feature2 | Contexts
LeftMouseUpAction=[!WriteKeyValue Variables PlayerName Winamp "Settings.inc"][!Refresh]

[MeterOption1.Feature2.Display6]
Meter=String
Text=WMP
MeterStyle=MeterSmallOptionTitle | MeterSkinSettingMenuTextStyle
Hidden=1
Group=MeterOption1.Feature2 | Contexts
LeftMouseUpAction=[!WriteKeyValue Variables PlayerName WMP "Settings.inc"][!Refresh]

[MeterOption1.Feature2.Display7]
Meter=String
Text=Spotify
MeterStyle=MeterSmallOptionTitle | MeterSkinSettingMenuTextStyle
Hidden=1
Group=MeterOption1.Feature2 | Contexts
LeftMouseUpAction=[!WriteKeyValue Variables PlayerName Spotify "Settings.inc"][!Refresh]

[MeterOption1.Feature2.Display8]
Meter=String
Text=WLM
MeterStyle=MeterSmallOptionTitle | MeterSkinSettingMenuTextStyle
Hidden=1
Group=MeterOption1.Feature2 | Contexts
LeftMouseUpAction=[!WriteKeyValue Variables PlayerName WLM "Settings.inc"][!Refresh]

[MeterOption1.Feature2.Display9]
Meter=Shape
X=((#BeginX#+6+6)*#Scale#)
Y=((#BeginY#+10+6+24*[MeterOption1.Feature1.Measure1])*#Scale#)
MeterStyle=MeterSkinSettingMenuIndicatorStyle
DynamicVariables=1
Hidden=1
Group=MeterOption1.Feature2 | Contexts