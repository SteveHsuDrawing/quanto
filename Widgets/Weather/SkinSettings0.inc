[Variables]
@Include=#@#Global.inc
@Include2=#CurrentPath#Settings.inc
Category=Widgets

[MeterOption4.Feature1.Measure1]
Measure=String
String=#Units#
Substitute="C":"#T.Celsius#","F":"#T.Fahrenheit#"

[MeterOption4.Feature1.Measure2]
Measure=String
String=#Units#
Substitute="C":"0","F":"1"

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
LeftMouseUpAction=["#P.Widgets_Weather.2#"][!Redraw]
Hidden=#HideSettings#

[MeterOption4]
Meter=Shape
MeterStyle=MeterSmallOption | MeterSmallOptionBehavior4
LeftMouseUpAction=[!ShowMeterGroup MeterOption4.Feature2][!Redraw]
Hidden=#HideSettings#

[MeterOption5]
Meter=Shape
MeterStyle=MeterSmallOption | MeterSmallOptionBehavior5
LeftMouseUpAction=[!ShowMeter MeterOptionChoosen5][!CommandMeasure MeasureOption5.Feature1.Input "ExecuteBatch 1"]#GeneralAction12#
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
Text=#T.Latitude#
Hidden=#HideSettings#

[MeterOptionTitle2]
Meter=String
MeterStyle=MeterSmallOptionTitle
Text=#T.Longitude#
Hidden=#HideSettings#

[MeterOptionTitle3]
Meter=String
MeterStyle=MeterSmallOptionTitle
Text=#T.Find_your_latitude_and_longitude#
ToolTipText=#P.Widgets_Weather.2#
Hidden=#HideSettings#

[MeterOptionTitle4]
Meter=String
MeterStyle=MeterSmallOptionTitle
Text=#T.Unit#
Hidden=#HideSettings#

[MeterOptionTitle5]
Meter=String
MeterStyle=MeterSmallOptionTitle
Text=#T.Refresh_interval#*
Hidden=#HideSettings#
ToolTipText=#S.Global.7#

[MeterOptionText1]
Meter=String
MeterStyle=MeterSmallOptionText | MeterSmallOptionTextBegin
Text=#Latitude#
Hidden=#HideSettings#

[MeterOptionText2]
Meter=String
MeterStyle=MeterSmallOptionText
Text=#Longitude#
Hidden=#HideSettings#

[MeterOptionText3]
Meter=String
MeterStyle=MeterSmallOptionText
Hidden=1

[MeterOptionText4]
Meter=String
MeterStyle=MeterSmallOptionText
Text=[MeterOption4.Feature1.Measure1]
Hidden=#HideSettings#

[MeasureOption5.Feature1.Display1]
Measure=Calc
Formula=#Gap#/60

[MeterOptionText5]
Meter=String
MeterStyle=MeterSmallOptionText
Text=#Gap#s / [MeasureOption5.Feature1.Display1]min(s)
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
DefaultValue=#Latitude#
Command1=[!WriteKeyValue Variables "Latitude" "$UserInput$" "#CurrentPath#Settings.inc"][!Refresh]
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
DefaultValue=#Longitude#
Command1=[!WriteKeyValue Variables "Longitude" "$UserInput$" "#CurrentPath#Settings.inc"][!Refresh]
OnDismissAction=#GeneralAction13#
DynamicVariables=1
InputNumber=1

[MeterOption3.Feature1.Display1]
Meter=Image
X=((#BeginX#+224-26*0)*#Scale#)
Y=((#BeginY#+16+34*2)*#Scale#)
MeterStyle=MeterSkinSettingOptionIconStyle
ImageName=#@#Bitmap\Open (Small)
ImageTint=#FontColor_General#,128
DynamicVariables=1
Group=SkinSettings
Hidden=#HideSettings#

[MeterOption4.Feature2.Display1]
Meter=Shape
X=((#BeginX#+6)*#Scale#)
Y=((#BeginY#+10+34*3)*#Scale#)
Shape=Rectangle 0,0,(242*#Scale#),((24*2+4)*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_BackgroundNoAlpha# | Stroke Color #ThemeColor_BarBorder#
DynamicVariables=1
Hidden=1
Group=MeterOption4.Feature2 | Contexts
MouseLeaveAction=[!HideMeterGroup Contexts][!Redraw]

[MeterOption4.Feature2.Display2]
Meter=String
Text=#T.Celsius#
MeterStyle=MeterSmallOptionTitle | MeterSkinSettingMenuTextStyle | MeterSkinSettingMenuTextBeginStyle
Hidden=1
Group=MeterOption4.Feature2 | Contexts
LeftMouseUpAction=[!WriteKeyValue Variables Units C "Settings.inc"][!Refresh]

[MeterOption4.Feature2.Display3]
Meter=String
Text=#T.Fahrenheit#
MeterStyle=MeterSmallOptionTitle | MeterSkinSettingMenuTextStyle
Hidden=1
Group=MeterOption4.Feature2 | Contexts
LeftMouseUpAction=[!WriteKeyValue Variables Units F "Settings.inc"][!Refresh]

[MeterOption4.Feature2.Display4]
Meter=Shape
X=((#BeginX#+6+6)*#Scale#)
Y=((#BeginY#+16+34*3+24*[MeterOption4.Feature1.Measure2])*#Scale#)
MeterStyle=MeterSkinSettingMenuIndicatorStyle
DynamicVariables=1
Hidden=1
Group=MeterOption4.Feature2 | Contexts

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
DefaultValue=#Gap#
Command1=[!WriteKeyValue Variables "Gap" "$UserInput$" "#CurrentPath#Settings.inc"][!Refresh]
OnDismissAction=#GeneralAction13#
DynamicVariables=1
InputNumber=1