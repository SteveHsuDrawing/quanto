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

[MeterSettingTitleTip]
Meter=String
MeterStyle=MeterSettingTitleTipStyle
Hidden=1

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
LeftMouseUpAction=[!ShowMeter MeterOptionChoosen1][!CommandMeasure MeasureOption1.Feature1.Input "ExecuteBatch 1"]#GeneralAction12#

[MeterOption2]
Meter=Shape
MeterStyle=MeterSmallOption | MeterSmallOptionBehavior2
Hidden=#HideSettings#
LeftMouseUpAction=[!ShowMeter MeterOptionChoosen2][!CommandMeasure MeasureOption2.Feature1.Input "ExecuteBatch 1"]#GeneralAction12#

[MeterOption3]
Meter=Shape
MeterStyle=MeterSmallOption | MeterSmallOptionBehavior3
Hidden=#HideSettings#
LeftMouseUpAction=[!WriteKeyValue Variables Page HelpCenter "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!WriteKeyValue Variables SubPage 405 "#ROOTCONFIGPATh#widgets\settings\16x14.ini"][!ActivateConfig "#ROOTCONFIG#\Widgets\Settings" "16x14.ini"][!Refresh "#ROOTCONFIG#\Widgets\Settings" "16x14.ini"]

[MeterOption4]
Meter=Shape
MeterStyle=MeterSmallOption | MeterSmallOptionBehavior4
Hidden=#HideSettings#
LeftMouseUpAction=[!WriteKeyValue Variables Page HelpCenter "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!WriteKeyValue Variables SubPage 409 "#ROOTCONFIGPATh#widgets\settings\16x14.ini"][!ActivateConfig "#ROOTCONFIG#\Widgets\Settings" "16x14.ini"][!Refresh "#ROOTCONFIG#\Widgets\Settings" "16x14.ini"]

[MeterOptionSelected1]
Meter=Shape
MeterStyle=MeterSmallOptionSelected | MeterSmallOptionBegin
Hidden=1

[MeterOptionSelected2]
Meter=Shape
MeterStyle=MeterSmallOptionSelected
Hidden=1

[MeterOptionSelected3]
Meter=Shape
MeterStyle=MeterSmallOptionSelected
Hidden=1

[MeterOptionSelected4]
Meter=Shape
MeterStyle=MeterSmallOptionSelected
Hidden=1

[MeterOptionChoosen1]
Meter=Shape
MeterStyle=MeterSmallOptionChoosen | MeterSmallOptionBegin
Hidden=1

[MeterOptionChoosen2]
Meter=Shape
MeterStyle=MeterSmallOptionChoosen
Hidden=1

[MeterOptionTitle1]
Meter=String
MeterStyle=MeterSmallOptionTitle | MeterSmallOptionTitleBegin
Text=#T.Registry_Key_of_Fan_speed#
Hidden=#HideSettings#

[MeterOptionTitle2]
Meter=String
MeterStyle=MeterSmallOptionTitle
Text=#T.Maximum_fan_speed#
Hidden=#HideSettings#

[MeterOptionTitle3]
Meter=String
MeterStyle=MeterSmallOptionTitle
Text=#S.Global.5#
Hidden=#HideSettings#

[MeterOptionTitle4]
Meter=String
MeterStyle=MeterSmallOptionTitle
Text=#S.Global.4#
Hidden=#HideSettings#

[MeterOptionText1]
Meter=String
MeterStyle=MeterSmallOptionText | MeterSmallOptionTextBegin
Text=#RKFan#
Hidden=#HideSettings#

[MeterOptionText2]
Meter=String
MeterStyle=MeterSmallOptionText
Text=#Max# RPM
Hidden=#HideSettings#

[MeasureOption1.Feature1.Input]
Measure=Plugin
Plugin=InputText.dll
X=((#BeginX#+12)*#Scale#)
Y=((#BeginY#+16+34*0)*#Scale#)
W=(234*#Scale#)
H=(20*#Scale#)
SolidColor=#ThemeColor_BackgroundNoAlpha#
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(8*#Scale#)
AntiAlias=1
FocusDismiss=1
DefaultValue=#RKFan#
Command1=[!WriteKeyValue Variables "RKFan" "$UserInput$" "#CurrentPath#Settings.inc"][!Refresh]
OnDismissAction=#GeneralAction13#
DynamicVariables=1

[MeasureOption2.Feature1.Input]
Measure=Plugin
Plugin=InputText.dll
X=((#BeginX#+12)*#Scale#)
Y=((#BeginY#+16+34*1)*#Scale#)
W=(234*#Scale#)
H=(20*#Scale#)
SolidColor=#ThemeColor_BackgroundNoAlpha#
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(8*#Scale#)
AntiAlias=1
FocusDismiss=1
DefaultValue=#Max#
Command1=[!WriteKeyValue Variables "Max" "$UserInput$" "#CurrentPath#Settings.inc"][!Refresh]
OnDismissAction=#GeneralAction13#
DynamicVariables=1

[MeterOption3.Feature1.Display1]
Meter=Image
X=((#BeginX#+224-22*0)*#Scale#)
Y=((#BeginY#+16+34*2)*#Scale#)
MeterStyle=MeterSkinSettingOptionIconStyle
ImageName=#@#Bitmap\Open (Small)
ImageTint=#FontColor_General#
DynamicVariables=1
Group=SkinSettings
Hidden=#HideSettings#

[MeterOption4.Feature1.Display1]
Meter=Image
X=((#BeginX#+224-22*0)*#Scale#)
Y=((#BeginY#+16+34*3)*#Scale#)
MeterStyle=MeterSkinSettingOptionIconStyle
ImageName=#@#Bitmap\Open (Small)
ImageTint=#FontColor_General#
DynamicVariables=1
Group=SkinSettings
Hidden=#HideSettings#