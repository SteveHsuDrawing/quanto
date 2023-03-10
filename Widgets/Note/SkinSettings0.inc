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
LeftMouseUpAction=[!ShowMeterGroup MeterOption3.Feature2][!Redraw]

[MeterOption4]
Meter=Shape
MeterStyle=MeterSmallOption | MeterSmallOptionBehavior4
Hidden=#HideSettings#
LeftMouseUpAction=[!WriteKeyValue Variables HideTBar (1-#HideTBar#) "Settings.inc"][!Refresh]

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
Text=#T.Color#
Hidden=#HideSettings#

[MeterOptionTitle4]
Meter=String
MeterStyle=MeterSmallOptionTitle
Text=#T.Hide# #T.Title#
Hidden=#HideSettings#

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

[MeasureOption3.Feature1.Function1]
Measure=Calc
Formula=#Color#+6

[MeterOptionText3]
Meter=String
MeterStyle=MeterSmallOptionText
Text=
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

[MeterOption4.Feature1.Display1]
Meter=Image
X=((#BeginX#+224-22*0)*#Scale#)
Y=((#BeginY#+16+34*3)*#Scale#)
MeterStyle=MeterSkinSettingOptionIconStyle
ImageName=#@#Bitmap\Check Box (#HideTBar#)
ImageTint=[#ThemeColor_CheckBox_[#HideTBar]]
DynamicVariables=1
Group=SkinSettings
Hidden=#HideSettings#



[MeterOption3.Feature2.Display1]
Meter=Shape
X=((#BeginX#+6)*#Scale#)
Y=((#BeginY#+10+34*2-19-48)*#Scale#)
Shape=Rectangle 0,0,(242*#Scale#),((24*8+4)*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_BackgroundNoAlpha# | Stroke Color #ThemeColor_BarBorder#
DynamicVariables=1
Hidden=1
Group=MeterOption3.Feature2 | Contexts
MouseLeaveAction=[!HideMeterGroup Contexts][!Redraw]

[MeterOption3.Feature2.Display2]
Meter=String
Text=#T.Default#
MeterStyle=MeterSmallOptionTitle | MeterSkinSettingMenuTextStyle | MeterSkinSettingMenuTextBeginStyle
Hidden=1
Group=MeterOption3.Feature2 | Contexts
LeftMouseDownAction=[!WriteKeyValue Variables Color 0 "Settings.inc"][!Refresh]

[MeterOption3.Feature2.Display3]
Meter=String
Text=#T.Yellow#
MeterStyle=MeterSmallOptionTitle | MeterSkinSettingMenuTextStyle
Hidden=1
Group=MeterOption3.Feature2 | Contexts
LeftMouseDownAction=[!WriteKeyValue Variables Color 1 "Settings.inc"][!Refresh]

[MeterOption3.Feature2.Display4]
Meter=String
Text=#T.Green#
MeterStyle=MeterSmallOptionTitle | MeterSkinSettingMenuTextStyle
Hidden=1
Group=MeterOption3.Feature2 | Contexts
LeftMouseDownAction=[!WriteKeyValue Variables Color 2 "Settings.inc"][!Refresh]

[MeterOption3.Feature2.Display5]
Meter=String
Text=#T.Pink#
MeterStyle=MeterSmallOptionTitle | MeterSkinSettingMenuTextStyle
Hidden=1
Group=MeterOption3.Feature2 | Contexts
LeftMouseDownAction=[!WriteKeyValue Variables Color 3 "Settings.inc"][!Refresh]

[MeterOption3.Feature2.Display6]
Meter=String
Text=#T.Purple#
MeterStyle=MeterSmallOptionTitle | MeterSkinSettingMenuTextStyle
Hidden=1
Group=MeterOption3.Feature2 | Contexts
LeftMouseDownAction=[!WriteKeyValue Variables Color 4 "Settings.inc"][!Refresh]

[MeterOption3.Feature2.Display7]
Meter=String
Text=#T.Blue#
MeterStyle=MeterSmallOptionTitle | MeterSkinSettingMenuTextStyle
Hidden=1
Group=MeterOption3.Feature2 | Contexts
LeftMouseDownAction=[!WriteKeyValue Variables Color 5 "Settings.inc"][!Refresh]

[MeterOption3.Feature2.Display8]
Meter=String
Text=#T.Light_grey#
MeterStyle=MeterSmallOptionTitle | MeterSkinSettingMenuTextStyle
Hidden=1
Group=MeterOption3.Feature2 | Contexts
LeftMouseDownAction=[!WriteKeyValue Variables Color 6 "Settings.inc"][!Refresh]

[MeterOption3.Feature2.Display9]
Meter=String
Text=#T.Grey#
MeterStyle=MeterSmallOptionTitle | MeterSkinSettingMenuTextStyle
Hidden=1
Group=MeterOption3.Feature2 | Contexts
LeftMouseDownAction=[!WriteKeyValue Variables Color 7 "Settings.inc"][!Refresh]

[MeterOption3.Feature2.Display10]
Meter=Shape
X=((#BeginX#+6+6)*#Scale#)
Y=((#BeginY#+10+34*2+6+24*#Color#-19-48)*#Scale#)
MeterStyle=MeterSkinSettingMenuIndicatorStyle
DynamicVariables=1
Hidden=1
Group=MeterOption3.Feature2 | Contexts