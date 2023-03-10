[Variables]
@include=#@#Settings_Panels\Panels\GlobalSettings_Global.inc
GapUnscaled=85
Gap=(#GapUnscaled#*#Scale#)
Gap2=(140*#Scale#)

[MeterPageSwitchButtonZone]
Meter=Shape
X=((#BeginX#+570)*#Scale#)
Y=((#BeginY#-54)*#Scale#)
Shape=Rectangle 0,0,(40*#Scale#),(40*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_BarBorder# | Stroke Color #ThemeColor_BarBorder#
Shape2=Rectangle 0,0,(40*#Scale#),(40*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_Option# | StrokeWidth 0
DynamicVariables=1
MouseOverAction=[!ShowMeter MeterPageSwitchButtonSelected][!Redraw]
MouseLeaveAction=[!HideMeter MeterPageSwitchButtonSelected][!Redraw]
LeftMouseDownAction=[!SetOption MeterPageSwitchButton ImageTint #FontColor_General#,128][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables "Over_MeterOption2.Feature3" "1"][!WriteKeyValue Variables SubPage 11 "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!Redraw][!Refresh]

[MeterPageSwitchButtonSelected]
Meter=Shape
X=((#BeginX#+570)*#Scale#)
Y=((#BeginY#-54)*#Scale#)
Shape=Rectangle 0,0,(40*#Scale#),(40*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_BackgroundSelectedLight# | Stroke Color 0,0,0,0
DynamicVariables=1
Hidden=1

[MeterPageSwitchButton]
Meter=Image
X=((10*#Scale#))r
Y=((10*#Scale#))r
W=(18*#Scale#)
H=(18*#Scale#)
ImageName=#@#Bitmap\Arrow Left
ImageTint=#FontColor_General#
DynamicVariables=1

[MeterPageText]
Meter=String
Text=2/2
MeterStyle=FontStyle_General
StringAlign=Right
X=((-24*#Scale#))r
Y=0r

[MeterOption1]
Meter=Shape
X=(#BeginX#*#Scale#)
Y=(#BeginY#*#Scale#)
MeterStyle=MeterOptionStyle
MouseOverAction=[!ShowMeter MeterOptionSelected1][!Redraw]
MouseLeaveAction=[!HideMeter MeterOptionSelected1][!Redraw]

[MeterOption2]
Meter=Shape
MeterStyle=MeterOptionStyle
MouseOverAction=[!ShowMeter MeterOptionSelected2][!Redraw]
MouseLeaveAction=[!HideMeter MeterOptionSelected2][!Redraw]

[MeterOption3]
Meter=Shape
MeterStyle=MeterOptionStyle
MouseOverAction=[!ShowMeter MeterOptionSelected3][!Redraw]
MouseLeaveAction=[!HideMeter MeterOptionSelected3][!Redraw]

[MeterOptionSelected1]
Meter=Shape
X=(#BeginX#*#Scale#)
Y=(#BeginY#*#Scale#)
MeterStyle=MeterOptionSelectedStyle

[MeterOptionSelected2]
Meter=Shape
MeterStyle=MeterOptionSelectedStyle

[MeterOptionSelected3]
Meter=Shape
MeterStyle=MeterOptionSelectedStyle

[MeterIcon1]
Meter=Image
ImageName=#@#Bitmap\User.png
X=((#BeginX#+24)*#Scale#)
Y=((#BeginY#+28)*#Scale#)
MeterStyle=MeterIconStyle
DynamicVariables=1

[MeterIcon2]
Meter=Image
ImageName=#@#Bitmap\Blur.png
MeterStyle=MeterIconStyle

[MeterIcon3]
Meter=Image
ImageName=#@#Bitmap\Blur.png
MeterStyle=MeterIconStyle

[MeterOptionText1]
Meter=String
X=((#BeginX#+68)*#Scale#)
Y=((#BeginY#+40)*#Scale#)
Text=#T.Your_name#
MeterStyle=MeterOptionTextStyle
;InlinePattern=#T.Your_name##CRLF#
;InlinePattern2=#T.Your_name##CRLF#

[MeterOptionText2]
Meter=String
Text=#T.Blur_effect##CRLF##S.Widgets_Settings.Blur_effect.1#
MeterStyle=MeterOptionTextStyle
InlinePattern=#T.Blur_effect##CRLF#
InlinePattern2=#T.Blur_effect##CRLF#

[MeterOptionText3]
Meter=String
Text=#T.Global_Blur_Effect##CRLF##S.Widgets_Settings.Global_Blur_Effect.1#
MeterStyle=MeterOptionTextStyle
InlinePattern=#T.Global_Blur_Effect##CRLF#
InlinePattern2=#T.Global_Blur_Effect##CRLF#

[MeasureOption1.Feature1.Input]
Measure=Plugin
Plugin=InputText.dll
SolidColor=#ThemeColor_TextInputer#
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(9*#Scale#)
AntiAlias=1
X=((#BeginX#+412)*#Scale#)
Y=(((#BeginY#+28)+((#GapUnscaled#))*0)*#Scale#)
W=(180*#Scale#)
H=(24*#Scale#)
FocusDismiss=1
DefaultValue=#UserName#
Command1=[!WriteKeyValue Variables "UserName" "$UserInput$" "#@#Settings.inc"][!RefreshApp]
OnDismissAction=[!HideMeterGroup Hover][!Redraw]
DynamicVariables=1

[MeterOption1.Feature1.Display1]
Meter=Shape
X=((#BeginX#+404)*#Scale#)
Y=(((#BeginY#+21)+((#GapUnscaled#))*0)*#Scale#)
MeterStyle=MeterTextInputStyle | TextInputer
MouseOverAction=[!ShowMeter MeterOption1.Feature1.Display3][!Redraw]
MouseLeaveAction=[!HideMeter MeterOption1.Feature1.Display3][!Redraw]
LeftMouseDownAction=[!ShowMeter MeterOption1.Feature1.Display4][!CommandMeasure MeasureOption1.Feature1.Input "ExecuteBatch 1"]

[MeterOption1.Feature1.Display2]
Meter=String
X=((8*#Scale#))r
Y=((6*#Scale#))r
Text=#UserName#
MeterStyle=MeterOptionTitleStyle
DynamicVariables=1

[MeterOption1.Feature1.Display3]
Meter=Shape
X=((#BeginX#+404)*#Scale#)
Y=(((#BeginY#+21)+((#GapUnscaled#))*0)*#Scale#)
MeterStyle=MeterTextInputSelectedStyle

[MeterOption1.Feature1.Display4]
Meter=Shape
X=((#BeginX#+404)*#Scale#)
Y=(((#BeginY#+21)+((#GapUnscaled#))*0)*#Scale#)
MeterStyle=MeterTextInputChoosenStyle
Group=Hover

[MeasureOption2.Feature1.DisplayAvailability]
Measure=Calc
Formula=(#DisableMica# = 0) ? 128 : 255
DynamicVariables=1

[MeasureOption2.Feature1.Action]
Measure=Calc
Formula=(#DisableMica# = 0) ? 128 : 255
Substitute="128":"[]","255":"[!ShowMeterGroup MeterOption2.Feature1][!Redraw]"

[MeasureOption2.Feature1.TextDisplay]
Measure=String
String=#Blur_Display#
Substitute="0":"#T.OFF#","1":"#T.Aero_Global#","2":"#T.Acrylic_BGs#"
DynamicVariables=1

[MeasureOption2.Feature1.TextNum]
Measure=String
String=#Blur#
DynamicVariables=1

[MeterOption2.Feature1.Display1]
Meter=Shape
X=((#BeginX#+404)*#Scale#)
Y=(((#BeginY#+21)+((#GapUnscaled#))*1)*#Scale#)
MeterStyle=MeterTextInputStyle
MouseOverAction=[!ShowMeter MeterOption2.Feature1.Display4][!Redraw]
MouseLeaveAction=[!HideMeter MeterOption2.Feature1.Display4][!Redraw]
LeftMouseDownAction=[MeasureOption2.Feature1.Action]

[MeterOption2.Feature1.Display2]
Meter=String
X=((8*#Scale#))r
Y=((6*#Scale#))r
Text=[MeasureOption2.Feature1.TextDisplay]
MeterStyle=MeterOptionTitleStyle
FontColor=#FontColor_General#,[MeasureOption2.Feature1.DisplayAvailability]
DynamicVariables=1

[MeterOption2.Feature1.Display3]
Meter=Image
X=((160*#Scale#))r
Y=((4*#Scale#))r
ImageName=#@#Bitmap\Arrow Down.png
MeterStyle=MeterSmallIconStyle
ImageTint=#FontColor_General#,[MeasureOption2.Feature1.DisplayAvailability]
DynamicVariables=1

[MeterOption2.Feature1.Display4]
Meter=Shape
X=((#BeginX#+404)*#Scale#)
Y=(((#BeginY#+21)+((#GapUnscaled#))*1)*#Scale#)
MeterStyle=MeterTextInputSelectedStyle

[MeasureOption3.Feature1.Display]
Measure=String
String=#Blur_Global#
Substitute="0":"OFF","1":"ON"
DynamicVariables=1

[MeasureOption3.Feature1.DisplayColor]
Measure=String
String=#Blur_Global#
Substitute="0":"#FontColor_General#","1":"#ThemeColor_General#"
DynamicVariables=1

[MeasureOption3.Feature1.DisplayAvailability]
Measure=Calc
Formula=(MeasureAeroBlurIndex2 <> 2) ? 128 : 255
DynamicVariables=1

[MeasureOption3.Feature1.ActionAvailability]
Measure=Calc
Formula=(MeasureAeroBlurIndex2 <> 2) ? 128 : 255
Substitute="128":"[]","255":"[!ShowMeterGroup MeterOption3.Feature2]"

[MeasureOption3.Feature1.Action]
Measure=String
String=#Blur_Global#
Substitute="0":"[MeasureOption3.Feature1.ActionAvailability][!Redraw]","1":'[!WriteKeyValue Variables Blur_Global (1-#Blur_Global#) "#@#Settings.inc"][!RefreshApp]'
DynamicVariables=1

[MeterOption3.Feature1.Display3]
Meter=Image
X=((#BeginX#+540)*#Scale#)
Y=(((#BeginY#+16)+((#GapUnscaled#))*2)*#Scale#)
ImageName=#@#Bitmap\[MeasureOption3.Feature1.Display].png
ImageTint=[MeasureOption3.Feature1.DisplayColor],[MeasureOption3.Feature1.DisplayAvailability]
MeterStyle=MeterSwitcherIconStyle
DynamicVariables=1
LeftMouseUpAction=[MeasureOption3.Feature1.Action]

[MeterOption2.Feature1.Function1]
Meter=Shape
X=((#BeginX#+404)*#Scale#)
Y=(((#BeginY#+22)+#GapUnscaled#*1-36*[MeasureOption2.Feature1.TextNum])*#Scale#)
Shape=Rectangle 0,0,(192*#Scale#),(108*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_TextInputer# | Stroke Color #ThemeColor_BarBorder#
Hidden=1
DynamicVariables=1
Group=MeterOption2.Feature1
MouseLeaveAction=[!HideMeterGroup MeterOption2.Feature1][!Redraw]

[MeterOption2.Feature1.Function2]
Meter=String
X=((14*#Scale#))r
Y=((6*#Scale#))r
Text=#T.OFF#
MeterStyle=MeterOptionTitleStyle
DynamicVariables=1
LeftMouseDownAction=[!WriteKeyValue Variables Blur 0 "#@#Settings.inc"][!WriteKeyValue Variables Blur_Global 0 "#@#Settings.inc"][!RefreshApp]
Hidden=1
Group=MeterOption2.Feature1

[MeterOption2.Feature1.Function3]
Meter=String
X=0r
Y=((36*#Scale#))r
Text=#T.Aero_Global#
MeterStyle=MeterOptionTitleStyle
DynamicVariables=1
LeftMouseDownAction=[!WriteKeyValue Variables Blur 1 "#@#Settings.inc"][!WriteKeyValue Variables Blur_Global 0 "#@#Settings.inc"][!RefreshApp]
Hidden=1
Group=MeterOption2.Feature1

[MeterOption2.Feature1.Function4]
Meter=String
X=0r
Y=((36*#Scale#))r
Text=#T.Acrylic_BGs#
MeterStyle=MeterOptionTitleStyle
DynamicVariables=1
LeftMouseDownAction=[!WriteKeyValue Variables Blur 2 "#@#Settings.inc"][!WriteKeyValue Variables Blur_Global 0 "#@#Settings.inc"][!RefreshApp]
Hidden=1
Group=MeterOption2.Feature1

[MeterOption2.Feature1.Function5]
Meter=Shape
X=((#BeginX#+412)*#Scale#)
Y=(((#BeginY#+32)+#GapUnscaled#*1)*#Scale#)
Shape=Rectangle 0,0,(3*#Scale#),(18*#Scale#),(1.5*#Scale#),(1.5*#Scale#) | Fill Color #ThemeColor_General# | Stroke Color 0,0,0,0
DynamicVariables=1
Hidden=1
Group=MeterOption2.Feature1

[MeterOption3.Feature2.Display3]
Meter=String
Text=#T.Warning##CRLF##S.Widgets_Settings.4#
X=((#BeginX#+340+16)*#Scale#)
Y=((#BeginY#+((#GapUnscaled#))*2)*#Scale#)
W=(224*#Scale#)
ClipString=2
MeterStyle=FontStyle_General
DynamicVariables=1
Group=MeterOption3.Feature2
Hidden=1
InlinePattern="#T.Warning#"
InlineSetting=Size | (16*#Scale#)
InlinePattern2="#T.Warning#"
InlineSetting2=Weight | 700
SolidColor=#ThemeColor_TextInputer#
Padding=(10*#Scale#),(10*#Scale#),(10*#Scale#),(48*#Scale#)
BevelType=1
BevelColor=#ThemeColor_BarBorder#
BevelColor2=#ThemeColor_BarBorder#

[MeterOption3.Feature2.Display4]
Meter=String
Text=#T.OK#
X=((#BeginX#+580)*#Scale#)
Y=(-36*#Scale#)R
W=(224*#Scale#)
ClipString=2
StringAlign=Right
FontFace=#FontFace_General#
FontColor=#FontColor_General#,128
FontSize=(12*#Scale#)
AntiAlias=1
DynamicVariables=1
Group=MeterOption3.Feature2
Hidden=1
LeftMouseUpAction=[!WriteKeyValue Variables Blur_Global (1-#Blur_Global#) "#@#Settings.inc"][!RefreshApp]

[MeterOption3.Feature2.Display5]
Meter=String
Text=#T.Cancel#
X=((-48*#Scale#))r
Y=0r
W=(224*#Scale#)
ClipString=2
StringAlign=Right
FontFace=#FontFace_General#
FontColor=#ThemeColor_General#
FontSize=(12*#Scale#)
AntiAlias=1
DynamicVariables=1
Group=MeterOption3.Feature2
Hidden=1
LeftMouseUpAction=[!HideMeterGroup MeterOption3.Feature2][!Redraw]