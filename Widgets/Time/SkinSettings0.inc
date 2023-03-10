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

[MeterOptionSelected1]
Meter=Shape
MeterStyle=MeterSmallOptionSelected | MeterSmallOptionBegin
Hidden=1

[MeterOptionTitle1]
Meter=String
MeterStyle=MeterSmallOptionTitle | MeterSmallOptionTitleBegin
Text=#T.Hide# #T.Seconds#
Hidden=#HideSettings#

[MeterOption1.Feature1.Display1]
Meter=Image
X=((#BeginX#+224-22*0)*#Scale#)
Y=((#BeginY#+18+34*0)*#Scale#)
MeterStyle=MeterSkinSettingOptionIconStyle
ImageName=#@#Bitmap\Check Box (#HideSecond#)
ImageTint=[#ThemeColor_CheckBox_[#HideSecond]]
DynamicVariables=1
Group=SkinSettings
Hidden=#HideSettings#
LeftMouseUpAction=[!WriteKeyValue Variables HideSecond (1-#HideSecond#) "Settings.inc"][!Refresh]
