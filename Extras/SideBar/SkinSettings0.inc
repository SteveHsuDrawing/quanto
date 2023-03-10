[Variables]
@Include=#@#Global.inc
@Include2=#CurrentPath#Settings.inc
Category=Widgets

[MeterOption2.Feature1.Measure1]
Measure=String
String=#H#
Substitute="A":"#T.Work_area#","B":"#T.Screen#"

[MeterOption2.Feature1.Measure2]
Measure=String
String=#H#
Substitute="A":"0","B":"1"

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
LeftMouseUpAction=[!HideMeterGroup SkinSettings][!Redraw][!WriteKeyValue Variables HideSettings 1][!Refresh][!ZPos -2]

[MeterOption1]
Meter=Shape
MeterStyle=MeterSmallOption | MeterSmallOptionBehavior1
Hidden=#HideSettings#
LeftMouseUpAction=[!ShowMeter MeterOptionChoosen1][!CommandMeasure MeasureOption1.Feature1.Input "ExecuteBatch 1"]#GeneralAction12#

[MeterOption2]
Meter=Shape
MeterStyle=MeterSmallOption | MeterSmallOptionBehavior2
Hidden=#HideSettings#
LeftMouseUpAction=[!ShowMeterGroup MeterOption2.Feature2][!Redraw]

[MeterOption3]
Meter=Shape
MeterStyle=MeterSmallOption | MeterSmallOptionBehavior3
Hidden=#HideSettings#
LeftMouseUpAction=[!ShowMeter MeterOptionChoosen3][!CommandMeasure MeasureOption3.Feature1.Input "ExecuteBatch 1"]#GeneralAction12#

[MeterOption4]
Meter=Shape
MeterStyle=MeterSmallOption | MeterSmallOptionBehavior4
Hidden=#HideSettings#

[MeterOption5]
Meter=Shape
MeterStyle=MeterSmallOption | MeterSmallOptionBehavior5
Hidden=#HideSettings#

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

[MeterOptionSelected5]
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

[MeterOptionChoosen3]
Meter=Shape
MeterStyle=MeterSmallOptionChoosen
Hidden=1

[MeterOptionChoosen4]
Meter=Shape
MeterStyle=MeterSmallOptionChoosen
Hidden=1

[MeterOptionChoosen5]
Meter=Shape
MeterStyle=MeterSmallOptionChoosen
Hidden=1

[MeterOptionTitle1]
Meter=String
MeterStyle=MeterSmallOptionTitle | MeterSmallOptionTitleBegin
Text=#T.Width#
Hidden=#HideSettings#

[MeterOptionTitle2]
Meter=String
MeterStyle=MeterSmallOptionTitle
Text=#T.Height#
Hidden=#HideSettings#

[MeterOptionTitle3]
Meter=String
MeterStyle=MeterSmallOptionTitle
Text=#T.Opacity#
Hidden=#HideSettings#

[MeterOptionTitle4]
Meter=String
MeterStyle=MeterSmallOptionTitle
Text=#T.Fix#
Hidden=#HideSettings#

[MeterOptionTitle5]
Meter=String
MeterStyle=MeterSmallOptionTitle
Text=#T.Crop#
Hidden=#HideSettings#

[MeterOptionText1]
Meter=String
MeterStyle=MeterSmallOptionText | MeterSmallOptionTextBegin
Text=#W#x
Hidden=#HideSettings#

[MeterOptionText2]
Meter=String
MeterStyle=MeterSmallOptionText
Text=[MeterOption2.Feature1.Measure1]
Hidden=#HideSettings#

[MeterOptionText3]
Meter=String
MeterStyle=MeterSmallOptionText
Text=#Alpha_Background#x
Hidden=#HideSettings#

[MeterOptionText4]
Meter=String
MeterStyle=MeterSmallOptionText
Text=
Hidden=#HideSettings#

[MeterOptionText5]
Meter=String
MeterStyle=MeterSmallOptionText
Text=
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
DefaultValue=#W#
Command1=[!WriteKeyValue Variables "W" "$UserInput$" "#CurrentPath#Settings.inc"][!Refresh][!Delay 1000][!ZPos 1]
OnDismissAction=#GeneralAction13#
DynamicVariables=1
InputNumber=1

[MeterOption2.Feature2.Display1]
Meter=Shape
X=((#BeginX#+6)*#Scale#)
Y=((#BeginY#+10+34*1)*#Scale#)
Shape=Rectangle 0,0,(242*#Scale#),((24*2+4)*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_BackgroundNoAlpha# | Stroke Color #ThemeColor_BarBorder#
DynamicVariables=1
Hidden=1
Group=MeterOption2.Feature2

[MeterOption2.Feature2.Display2]
Meter=String
Text=#T.Work_area#
MeterStyle=MeterSmallOptionTitle | MeterSkinSettingMenuTextStyle | MeterSkinSettingMenuTextBeginStyle
Hidden=1
Group=MeterOption2.Feature2
LeftMouseUpAction=[!WriteKeyValue Variables H A "Settings.inc"][!Refresh][!Delay 1000][!ZPos 1]

[MeterOption2.Feature2.Display3]
Meter=String
Text=#T.Screen#
MeterStyle=MeterSmallOptionTitle | MeterSkinSettingMenuTextStyle
Hidden=1
Group=MeterOption2.Feature2
LeftMouseUpAction=[!WriteKeyValue Variables H B "Settings.inc"][!Refresh][!Delay 1000][!ZPos 1]

[MeterOption4.Feature2.Display4]
Meter=Shape
X=((#BeginX#+6+6)*#Scale#)
Y=((#BeginY#+16+34*1+24*[MeterOption2.Feature1.Measure2])*#Scale#)
MeterStyle=MeterSkinSettingMenuIndicatorStyle
DynamicVariables=1
Hidden=1
Group=MeterOption2.Feature2

[MeasureOption3.Feature1.Input]
Measure=Plugin
Plugin=InputText.dll
X=((#BeginX#+12)*#Scale#)
Y=((#BeginY#+16+34*2)*#Scale#)
W=(234*#Scale#)
H=(20*#Scale#)
SolidColor=#ThemeColor_BackgroundNoAlpha#
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(8*#Scale#)
AntiAlias=1
FocusDismiss=1
DefaultValue=#Alpha_Background#
Command1=[!WriteKeyValue Variables "Alpha_Background" "$UserInput$" "#CurrentPath#Settings.inc"][!Refresh][!Delay 1000][!ZPos 1]
OnDismissAction=#GeneralAction13#
DynamicVariables=1
InputNumber=1

[MeterOption4.Feature1.Display1]
Meter=Image
X=((#BeginX#+224-22*0)*#Scale#)
Y=((#BeginY#+16+34*3)*#Scale#)
MeterStyle=MeterSkinSettingOptionIconStyle
ImageName=#@#Bitmap\Check Box (#Fix#)
ImageTint=[#ThemeColor_CheckBox_[#Fix]]
DynamicVariables=1
Group=SkinSettings
Hidden=#HideSettings#
LeftMouseUpAction=[!WriteKeyValue Variables Fix (1-#Fix#) "Settings.inc"][!Refresh][!Delay 1000][!ZPos 1]

[MeterOption5.Feature1.Display1]
Meter=Image
X=((#BeginX#+224-22*0)*#Scale#)
Y=((#BeginY#+16+34*4)*#Scale#)
MeterStyle=MeterSkinSettingOptionIconStyle
ImageName=#@#Bitmap\Check Box (#Crop#)
ImageTint=[#ThemeColor_CheckBox_[#Crop]]
DynamicVariables=1
Group=SkinSettings
Hidden=#HideSettings#
LeftMouseUpAction=[!WriteKeyValue Variables Crop (1-#Crop#) "Settings.inc"][!Refresh][!Delay 1000][!ZPos 1]
