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
LeftMouseUpAction=[!ShowMeter MeterOptionChoosen3][!CommandMeasure MeasureOption3.Feature1.Input "ExecuteBatch 1"]#GeneralAction12#

[MeterOption4]
Meter=Shape
MeterStyle=MeterSmallOption | MeterSmallOptionBehavior4
Hidden=#HideSettings#
LeftMouseUpAction=[!ShowMeter MeterOptionChoosen4][!CommandMeasure MeasureOption4.Feature1.Input "ExecuteBatch 1"]#GeneralAction12#

[MeterOption5]
Meter=Shape
MeterStyle=MeterSmallOption | MeterSmallOptionBehavior5
Hidden=#HideSettings#
LeftMouseUpAction=[!ShowMeter MeterOptionChoosen5][!CommandMeasure MeasureOption5.Feature1.Input "ExecuteBatch 1"]#GeneralAction12#

[MeterOption6]
Meter=Shape
MeterStyle=MeterSmallOption | MeterSmallOptionBehavior6
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

[MeterOptionSelected6]
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

[MeterOptionChoosen6]
Meter=Shape
MeterStyle=MeterSmallOptionChoosen
Hidden=1

[MeterOptionTitle1]
Meter=String
MeterStyle=MeterSmallOptionTitle | MeterSmallOptionTitleBegin
Text=#T.Color_and_opacity_of_bands#
Hidden=#HideSettings#

[MeterOptionTitle2]
Meter=String
MeterStyle=MeterSmallOptionTitle
Text=#T.Width_of_bands#
Hidden=#HideSettings#

[MeterOptionTitle3]
Meter=String
MeterStyle=MeterSmallOptionTitle
Text=#T.Height_of_bands#
Hidden=#HideSettings#

[MeterOptionTitle4]
Meter=String
MeterStyle=MeterSmallOptionTitle
Text=#T.Spacing_of_bands#
Hidden=#HideSettings#

[MeterOptionTitle5]
Meter=String
MeterStyle=MeterSmallOptionTitle
Text=#T.Quantity_of_bands# (1~64)
Hidden=#HideSettings#

[MeterOptionTitle6]
Meter=String
MeterStyle=MeterSmallOptionTitle
Text=#T.High# #T.Sensitivity#
Hidden=#HideSettings#

[MeterOptionText1]
Meter=String
MeterStyle=MeterSmallOptionText | MeterSmallOptionTextBegin
Text=#ImageTint#
Hidden=#HideSettings#

[MeterOptionText2]
Meter=String
MeterStyle=MeterSmallOptionText
Text=#W#px
Hidden=#HideSettings#

[MeterOptionText3]
Meter=String
MeterStyle=MeterSmallOptionText
Text=#H#px
Hidden=#HideSettings#

[MeterOptionText4]
Meter=String
MeterStyle=MeterSmallOptionText
Text=#GapXUnscaled#px
Hidden=#HideSettings#

[MeterOptionText5]
Meter=String
MeterStyle=MeterSmallOptionText
Text=#Bands#
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
DefaultValue=#ImageTint#
Command1=[!WriteKeyValue Variables "ImageTint" "$UserInput$" "#CurrentPath#Settings.inc"][!Refresh]
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
DefaultValue=#W#
Command1=[!WriteKeyValue Variables "W" "$UserInput$" "#CurrentPath#Settings.inc"][!Refresh]
OnDismissAction=#GeneralAction13#
DynamicVariables=1
InputNumber=1

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
DefaultValue=#H#
Command1=[!WriteKeyValue Variables "H" "$UserInput$" "#CurrentPath#Settings.inc"][!Refresh]
OnDismissAction=#GeneralAction13#
DynamicVariables=1
InputNumber=1

[MeasureOption4.Feature1.Input]
Measure=Plugin
Plugin=InputText.dll
X=((#BeginX#+12)*#Scale#)
Y=((#BeginY#+16+34*3)*#Scale#)
W=(234*#Scale#)
H=(20*#Scale#)
SolidColor=#ThemeColor_BackgroundNoAlpha#
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(8*#Scale#)
AntiAlias=1
FocusDismiss=1
DefaultValue=#GapXUnscaled#
Command1=[!WriteKeyValue Variables "GapXUnscaled" "$UserInput$" "#CurrentPath#Settings.inc"][!Refresh]
OnDismissAction=#GeneralAction13#
DynamicVariables=1
InputNumber=1

[MeasureOption5.Feature1.Input]
Measure=Plugin
Plugin=InputText.dll
X=((#BeginX#+12)*#Scale#)
Y=((#BeginY#+16+34*4)*#Scale#)
W=(234*#Scale#)
H=(20*#Scale#)
SolidColor=#ThemeColor_BackgroundNoAlpha#
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(8*#Scale#)
AntiAlias=1
FocusDismiss=1
DefaultValue=#Bands#
Command1=[!WriteKeyValue Variables "Bands" "$UserInput$" "#CurrentPath#Settings.inc"][!Refresh]
OnDismissAction=#GeneralAction13#
DynamicVariables=1
InputNumber=1

[MeterOption6.Feature1.Display1]
Meter=Image
X=((#BeginX#+224-22*0)*#Scale#)
Y=((#BeginY#+16+34*5)*#Scale#)
MeterStyle=MeterSkinSettingOptionIconStyle
ImageName=#@#Bitmap\Check Box (#HighSensitivity#)
ImageTint=[#ThemeColor_CheckBox_[#HighSensitivity]]
DynamicVariables=1
Group=SkinSettings
Hidden=#HideSettings#
LeftMouseUpAction=[!WriteKeyValue Variables HighSensitivity (1-#HighSensitivity#) "Settings.inc"][!Refresh]