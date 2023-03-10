[MeasureChooseInSkinSettings]
Measure=Plugin
Plugin=FileChoose
UseNewStyle=0
GetTarget=1
AllowNonstorageFolder=1
CopyLink=1
LinkCache=#@#LinkCache\
GetIcon=0
IconCache=#@#Icons\
IconSize=3
ReturnValue=Path
FileInitialDirectory=
ImageInitialDirectory=#@#Icons\
Command1=[!WriteKeyValue Variables "Path" "$Path$" "Settings.inc"][!Refresh]

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
LeftMouseUpAction=[!CommandMeasure MeasureChooseInSkinSettings "ChooseFolder 1"]

[MeterOption4]
Meter=Shape
MeterStyle=MeterSmallOption | MeterSmallOptionBehavior4
Hidden=#HideSettings#
LeftMouseUpAction=[!ShowMeter MeterOptionChoosen4][!CommandMeasure MeasureOption4.Feature1.Input "ExecuteBatch 1"]#GeneralAction12#

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
Text=#T.Referenced_folder#
Hidden=#HideSettings#

[MeterOptionTitle4]
Meter=String
MeterStyle=MeterSmallOptionTitle
Text=#T.Refresh_interval#*
Hidden=#HideSettings#
ToolTipText=#S.Global.7#

[MeterOptionText1]
Meter=String
MeterStyle=MeterSmallOptionText | MeterSmallOptionTextBegin
Text=#SkinW#x
Hidden=#HideSettings#

[MeterOptionText2]
Meter=String
MeterStyle=MeterSmallOptionText
Text=#SkinH#x
Hidden=#HideSettings#

[MeterOptionText3]
Meter=String
MeterStyle=MeterSmallOptionText
Text=#Path#
Hidden=#HideSettings#

[MeterOptionText4]
Meter=String
MeterStyle=MeterSmallOptionText
Text=#Update#s
Hidden=#HideSettings#

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
DefaultValue=#SkinW#
Command1=[!WriteKeyValue Variables "SkinW" "$UserInput$" "#CurrentPath#Settings.inc"][!Refresh]
OnDismissAction=#GeneralAction13#
DynamicVariables=1
InputNumber=1

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
DefaultValue=#SkinH#
Command1=[!WriteKeyValue Variables "SkinH" "$UserInput$" "#CurrentPath#Settings.inc"][!Refresh]
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
DefaultValue=#Update#
Command1=[!WriteKeyValue Variables "Update" "$UserInput$" "#CurrentPath#Settings.inc"][!Refresh]
OnDismissAction=#GeneralAction13#
DynamicVariables=1
InputNumber=1