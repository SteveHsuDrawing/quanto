[Variables]
;@include=#@#Settings_Panels\Panels\GlobalSettings_Global.inc
Gap=(84*#Scale#)
GapUnscaled=84
Gap2=(-140*#Scale#)

[MeterBar]
Meter=Shape
Shape=Rectangle (#Spacing#*#Scale#),(#Spacing#*#Scale#),((#SkinW#*64-#Spacing#*2)*#Scale#),((#SkinH#*64-#Spacing#*2)*#Scale#),(8*#Arched#*#Scale#),(8*#Arched#*#Scale#) | Fill Color #ThemeColor_Bar# | Stroke Color #ThemeColor_Shadow# 
Shape2=Rectangle (#Spacing#*#Scale#),0,((#SkinW#*64-#Spacing#*2)*#Scale#),(768*#Scale#),0,0
Shape3=Combine Shape | Exclude Shape2
Shape4=Rectangle (#Spacing#*#Scale#),(768*#Scale#),((#SkinW#*64-#Spacing#*2)*#Scale#),(1*#Scale#),0,0 | Fill Color #ThemeColor_BarBorder# | Stroke Color 0,0,0,0
DynamicVariables=1

[MeterSubtitle]
Meter=String
Text=#S.Widgets_Settings.Theme_color.1#
X=(26*#Scale#)
Y=(798*#Scale#)
FontFace=#FontFace_General#
FontColor=#FontColor_General#,128
FontSize=(10*#Scale#)
StringAlign=LeftCenter
AntiAlias=1
DynamicVariables=1
DynamicVariables=1

[MeterButton1]
Meter=Shape
X=(492*#Scale#)
Y=(782*#Scale#)
Shape=Rectangle 0,0,(128*#Scale#),(36*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color 0,0,0,0 | Stroke Color #ThemeColor_BarBorder#
Shape2=Rectangle 0,0,(128*#Scale#),(36*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_Option# | StrokeWidth 0
MouseOverAction=[!ShowMeter MeterButtonSelected1][!Redraw]
MouseLeaveAction=[!HideMeter MeterButtonSelected1][!Redraw]
LeftMouseDownAction=[!HideMeter MeterButtonSelected1][!Redraw]
LeftMouseUpAction=[!ShowMeter MeterButtonSelected1][!WriteKeyValue Variables Page Changelog "#ROOTCONFIGPATH#Extras\Welcome\10x13.ini"][!Refresh]
DynamicVariables=1

[MeterButtonText1]
Meter=String
Text=#T.Changelog#
X=(556*#Scale#)
Y=(788*#Scale#)
MeterStyle=MeterOptionTitleStyle
StringAlign=Center
DynamicVariables=1

[MeterButtonSelected1]
Meter=Shape
X=(492*#Scale#)
Y=(782*#Scale#)
Shape=Rectangle 0,0,(128*#Scale#),(36*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color 0,0,0,0 | Stroke Color #ThemeColor_General#
Shape2=Rectangle 0,0,(128*#Scale#),(36*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_General#,54 | StrokeWidth 0
DynamicVariables=1
Hidden=1

[MeterButtonSelected2]
Meter=Shape
X=(#Gap2#)r
Y=0r
Shape=Rectangle 0,0,(128*#Scale#),(36*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_General#,54 | Stroke Color #ThemeColor_General#
DynamicVariables=1
Hidden=1

; --------------------------- 選項背景 ---------------------------


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

[MeterOption4]
Meter=Shape
MeterStyle=MeterOptionStyle
MouseOverAction=[!ShowMeter MeterOptionSelected4][!Redraw]
MouseLeaveAction=[!HideMeter MeterOptionSelected4][!Redraw]

[MeterOption5]
Meter=Shape
MeterStyle=MeterOptionStyle
MouseOverAction=[!ShowMeter MeterOptionSelected5][!Redraw]
MouseLeaveAction=[!HideMeter MeterOptionSelected5][!Redraw]

[MeterOption6]
Meter=Shape
MeterStyle=MeterOptionStyle
MouseOverAction=[!ShowMeter MeterOptionSelected6][!Redraw]
MouseLeaveAction=[!HideMeter MeterOptionSelected6][!Redraw]




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

[MeterOptionSelected4]
Meter=Shape
MeterStyle=MeterOptionSelectedStyle

[MeterOptionSelected5]
Meter=Shape
MeterStyle=MeterOptionSelectedStyle

[MeterOptionSelected6]
Meter=Shape
MeterStyle=MeterOptionSelectedStyle



; --------------------------- 選項圖示 ---------------------------


[MeterIcon1]
Meter=Image
ImageName=#@#Bitmap\Scale.png
X=((#BeginX#+24)*#Scale#)
Y=((#BeginY#+28)*#Scale#)
MeterStyle=MeterIconStyle
DynamicVariables=1

[MeterIcon2]
Meter=Image
ImageName=#@#Bitmap\Time.png
X=0r
Y=((#Gap#))r
MeterStyle=MeterIconStyle
DynamicVariables=1

[MeterIcon3]
Meter=Image
ImageName=#@#Bitmap\Color Mode.png
X=0r
Y=((#Gap#))r
MeterStyle=MeterIconStyle
DynamicVariables=1

[MeterIcon4]
Meter=Image
ImageName=#@#Bitmap\Font.png
X=0r
Y=((#Gap#))r
MeterStyle=MeterIconStyle
DynamicVariables=1

[MeterIcon5]
Meter=Image
ImageName=#@#Bitmap\Color.png
X=0r
Y=((#Gap#))r
MeterStyle=MeterIconStyle
DynamicVariables=1

[MeterIcon6]
Meter=Image
ImageName=#@#Bitmap\Theme.png
X=0r
Y=((#Gap#))r
MeterStyle=MeterIconStyle
DynamicVariables=1

; --------------------------- 選項備註 ---------------------------

[MeterOptionText1]
Meter=String
Text=#T.Scaling##CRLF##S.Widgets_Settings.Scaling.1#
X=((#BeginX#+68)*#Scale#)
Y=((#BeginY#+40)*#Scale#)
MeterStyle=MeterOptionTextStyle
DynamicVariables=1
InlinePattern=#T.Scaling##CRLF#
InlinePattern2=#T.Scaling##CRLF#

[MeterOptionText2]
Meter=String
Text=#T.Time_format##CRLF##S.Widgets_Settings.Time_format.1#
MeterStyle=MeterOptionTextStyle
DynamicVariables=1
InlinePattern=#T.Time_format##CRLF#
InlinePattern2=#T.Time_format##CRLF#

[MeterOptionText3]
Meter=String
Text=#T.Color_mode##CRLF##S.Widgets_Settings.Color_mode.1#
MeterStyle=MeterOptionTextStyle
DynamicVariables=1
InlinePattern=#T.Color_mode##CRLF#
InlinePattern2=#T.Color_mode##CRLF#

[MeterOptionText4]
Meter=String
Text=#T.Font##CRLF##S.Widgets_Settings.Font.1#
MeterStyle=MeterOptionTextStyle
DynamicVariables=1
InlinePattern=#T.Font##CRLF#
InlinePattern2=#T.Font##CRLF#

[MeterOptionText5]
Meter=String
Text=#T.Theme_color##CRLF##S.Widgets_Settings.Theme_color.1#
MeterStyle=MeterOptionTextStyle
DynamicVariables=1
InlinePattern=#T.Theme_color##CRLF#
InlinePattern2=#T.Theme_color##CRLF#

[MeterOptionText6]
Meter=String
Text=#T.Default# #T.Layouts##CRLF##S.Widgets_Settings.Layouts.1#
MeterStyle=MeterOptionTextStyle
DynamicVariables=1
InlinePattern=#T.Default# #T.Layouts##CRLF#
InlinePattern2=#T.Default# #T.Layouts##CRLF#


; --------------------------- 選項特性 ---------------------------

;                             選項 1

[MeasureOption1.Feature1.TextDisplay]
Measure=Calc
Formula=#Scale_Actual#*100

[MeterOption1.Feature1.Display1]
Meter=Shape
X=((#BeginX#+404)*#Scale#)
Y=((#BeginY#+21)*#Scale#)
MeterStyle=MeterTextInputStyle
MouseOverAction=[!ShowMeter MeterOption1.Feature1.Display4][!Redraw]
MouseLeaveAction=[!HideMeter MeterOption1.Feature1.Display4][!Redraw]
LeftMouseDownAction=[!ToggleMouseActionGroup * MouseAction][!ShowMeterGroup "MeterOption1.Feature1"][!Redraw]

[MeterOption1.Feature1.Display2]
Meter=String
X=((8*#Scale#))r
Y=((6*#Scale#))r
Text=[MeasureOption1.Feature1.TextDisplay]%
MeterStyle=MeterOptionTitleStyle
DynamicVariables=1

[MeterOption1.Feature1.Display3]
Meter=Image
X=((160*#Scale#))r
Y=((4*#Scale#))r
ImageName=#@#Bitmap\Arrow Down.png
MeterStyle=MeterSmallIconStyle
DynamicVariables=1

[MeterOption1.Feature1.Display4]
Meter=Shape
X=((#BeginX#+404)*#Scale#)
Y=((#BeginY#+21)*#Scale#)
MeterStyle=MeterTextInputSelectedStyle

;                             選項 2

[MeasureOption2.Feature1.TextDisplay]
Measure=Calc
Formula=#TimeFormat_Global#=0 ? 1111 : 2222
Substitute="1111":"#T.12-hour#","2222":"#T.24-hour#"

[MeasureOption2.Feature1.TextNum]
Measure=String
String=#TimeFormat_Global#
DynamicVariables=1

[MeterOption2.Feature1.Display1]
Meter=Shape
X=((#BeginX#+404)*#Scale#)
Y=(((#BeginY#+21)+((#GapUnscaled#))*1)*#Scale#)
MeterStyle=MeterTextInputStyle
MouseOverAction=[!ShowMeter MeterOption2.Feature1.Display4][!Redraw]
MouseLeaveAction=[!HideMeter MeterOption2.Feature1.Display4][!Redraw]
LeftMouseDownAction=[!ToggleMouseActionGroup * MouseAction][!ShowMeterGroup "MeterOption2.Feature1"][!Redraw]

[MeterOption2.Feature1.Display2]
Meter=String
X=((8*#Scale#))r
Y=((6*#Scale#))r
Text=[MeasureOption2.Feature1.TextDisplay]
MeterStyle=MeterOptionTitleStyle
DynamicVariables=1

[MeterOption2.Feature1.Display3]
Meter=Image
X=((160*#Scale#))r
Y=((4*#Scale#))r
ImageName=#@#Bitmap\Arrow Down.png
MeterStyle=MeterSmallIconStyle
DynamicVariables=1

[MeterOption2.Feature1.Display4]
Meter=Shape
X=((#BeginX#+404)*#Scale#)
Y=(((#BeginY#+21)+((#GapUnscaled#))*1)*#Scale#)
MeterStyle=MeterTextInputSelectedStyle

;                             選項 3

[MeasureOption3.Feature1.TextDisplay]
Measure=String
String=#DarkMode#
Substitute="0":"#T.Bright#","1":"#T.Dark#"
DynamicVariables=1

[MeterOption3.Feature1.Display1]
Meter=Shape
X=((#BeginX#+404)*#Scale#)
Y=(((#BeginY#+21)+((#GapUnscaled#))*2)*#Scale#)
MeterStyle=MeterTextInputStyle
MouseOverAction=[!ShowMeter MeterOption3.Feature1.Display4][!Redraw]
MouseLeaveAction=[!HideMeter MeterOption3.Feature1.Display4][!Redraw]
LeftMouseDownAction=[!ToggleMouseActionGroup * MouseAction][!ShowMeterGroup "MeterOption3.Feature1"][!Redraw]

[MeterOption3.Feature1.Display2]
Meter=String
X=((8*#Scale#))r
Y=((6*#Scale#))r
Text=[MeasureOption3.Feature1.TextDisplay]
MeterStyle=MeterOptionTitleStyle
DynamicVariables=1

[MeterOption3.Feature1.Display3]
Meter=Image
X=((160*#Scale#))r
Y=((4*#Scale#))r
ImageName=#@#Bitmap\Arrow Down.png
MeterStyle=MeterSmallIconStyle
DynamicVariables=1

[MeterOption3.Feature1.Display4]
Meter=Shape
X=((#BeginX#+404)*#Scale#)
Y=(((#BeginY#+21)+((#GapUnscaled#))*2)*#Scale#)
MeterStyle=MeterTextInputSelectedStyle

;                             選項 4

[MeasureOption4.Feature1.Input]
Measure=Plugin
Plugin=InputText.dll
SolidColor=#ThemeColor_Option#
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(10*#Scale#)
AntiAlias=1
X=((#BeginX#+412)*#Scale#)
Y=(((#BeginY#+28)+((#GapUnscaled#))*3)*#Scale#)
W=(180*#Scale#)
H=(24*#Scale#)
FocusDismiss=1
DefaultValue=#FontFace_General#
Command1=[!WriteKeyValue Variables "FontFace_General" "$UserInput$" "#@#Settings.inc"][!RefreshApp]
DynamicVariables=1

[MeterOption4.Feature1.Display1]
Meter=Shape
X=((#BeginX#+404)*#Scale#)
Y=(((#BeginY#+21)+((#GapUnscaled#))*3)*#Scale#)
MeterStyle=MeterTextInputStyle | TextInputer
MouseOverAction=[!ShowMeter MeterOption4.Feature1.Display3][!Redraw]
MouseLeaveAction=[!HideMeter MeterOption4.Feature1.Display3][!Redraw]
LeftMouseDownAction=[!ShowMeter MeterOption4.Feature1.Display4][!CommandMeasure MeasureOption4.Feature1.Input "ExecuteBatch 1"]

[MeterOption4.Feature1.Display2]
Meter=String
X=((8*#Scale#))r
Y=((6*#Scale#))r
Text=#FontFace_General#
MeterStyle=MeterOptionTitleStyle
DynamicVariables=1

[MeterOption4.Feature1.Display3]
Meter=Shape
X=((#BeginX#+404)*#Scale#)
Y=(((#BeginY#+21)+((#GapUnscaled#))*3)*#Scale#)
MeterStyle=MeterTextInputSelectedStyle

[MeterOption4.Feature1.Display4]
Meter=Shape
X=((#BeginX#+404)*#Scale#)
Y=(((#BeginY#+21)+((#GapUnscaled#))*3)*#Scale#)
MeterStyle=MeterTextInputChoosenStyle
Group=Hover

;                             選項 5


[MeasureOption5.Feature1.Input1]
Measure=Plugin
Plugin=InputText.dll
SolidColor=#ThemeColor_TextInputer#
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(9*#Scale#)
StringAlign=Center
AntiAlias=1
X=((#BeginX#+404+4)*#Scale#)
Y=(((#BeginY#+28)+((#GapUnscaled#))*4)*#Scale#)
W=(46*#Scale#)
H=(24*#Scale#)
FocusDismiss=1
DefaultValue=#ThemeColor_General_R#
Command1=[!WriteKeyValue Variables "ThemeColor_General_R" "$UserInput$" "#@#Settings.inc"][!RefreshApp]
OnDismissAction=[!HideMeterGroup Hover][!Redraw]
InputNumber=1
DynamicVariables=1

[MeasureOption5.Feature1.Input2]
Measure=Plugin
Plugin=InputText.dll
SolidColor=#ThemeColor_TextInputer#
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(9*#Scale#)
StringAlign=Center
AntiAlias=1
X=((#BeginX#+404+4+58)*#Scale#)
Y=(((#BeginY#+28)+((#GapUnscaled#))*4)*#Scale#)
W=(46*#Scale#)
H=(24*#Scale#)
FocusDismiss=1
DefaultValue=#ThemeColor_General_G#
Command1=[!WriteKeyValue Variables "ThemeColor_General_G" "$UserInput$" "#@#Settings.inc"][!RefreshApp]
OnDismissAction=[!HideMeterGroup Hover][!Redraw]
InputNumber=1
DynamicVariables=1

[MeasureOption5.Feature1.Input3]
Measure=Plugin
Plugin=InputText.dll
SolidColor=#ThemeColor_TextInputer#
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(9*#Scale#)
StringAlign=Center
AntiAlias=1
X=((#BeginX#+404+4+58*2)*#Scale#)
Y=(((#BeginY#+28)+((#GapUnscaled#))*4)*#Scale#)
W=(46*#Scale#)
H=(24*#Scale#)
FocusDismiss=1
DefaultValue=#ThemeColor_General_B#
Command1=[!WriteKeyValue Variables "ThemeColor_General_B" "$UserInput$" "#@#Settings.inc"][!RefreshApp]
OnDismissAction=[!HideMeterGroup Hover][!Redraw]
InputNumber=1
DynamicVariables=1

[MeterSmallButtonStyle_Custom1]
X=((58*#Scale#))r
Y=0r
Shape=Rectangle 0,0,(54*#Scale#),(36*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color 0,0,0,0 | Stroke Color #ThemeColor_BarBorder#
Shape2=Rectangle 0,0,(54*#Scale#),(36*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_TextInputer# | StrokeWidth 0
DynamicVariables=1

[MeterOption5.Feature1.Display11]
Meter=Shape
X=((#BeginX#+404)*#Scale#)
Y=(((#BeginY#+21)+((#GapUnscaled#))*4)*#Scale#)
MeterStyle=MeterSmallButtonStyle_Custom1 | TextInputer
MouseOverAction=[!ShowMeter MeterOption5.Feature1.Display13][!Redraw]
MouseLeaveAction=[!HideMeter MeterOption5.Feature1.Display13][!Redraw]
LeftMouseDownAction=[!ShowMeter MeterOption5.Feature1.Display14][!CommandMeasure MeasureOption5.Feature1.Input1 "ExecuteBatch 1"]

[MeterOption5.Feature1.Display21]
Meter=Shape
MeterStyle=MeterSmallButtonStyle_Custom1 | TextInputer
MouseOverAction=[!ShowMeter MeterOption5.Feature1.Display23][!Redraw]
MouseLeaveAction=[!HideMeter MeterOption5.Feature1.Display23][!Redraw]
LeftMouseDownAction=[!ShowMeter MeterOption5.Feature1.Display24][!CommandMeasure MeasureOption5.Feature1.Input2 "ExecuteBatch 1"]

[MeterOption5.Feature1.Display31]
Meter=Shape
MeterStyle=MeterSmallButtonStyle_Custom1 | TextInputer
MouseOverAction=[!ShowMeter MeterOption5.Feature1.Display33][!Redraw]
MouseLeaveAction=[!HideMeter MeterOption5.Feature1.Display33][!Redraw]
LeftMouseDownAction=[!ShowMeter MeterOption5.Feature1.Display34][!CommandMeasure MeasureOption5.Feature1.Input3 "ExecuteBatch 1"]

[MeterOption5.Feature1.Display12]
Meter=String
X=((#BeginX#+404+26)*#Scale#)
Y=(((#BeginY#+21+18)+((#GapUnscaled#))*4)*#Scale#)
Text=#ThemeColor_General_R#
StringAlign=CenterCenter
MeterStyle=MeterOptionTitleStyle
DynamicVariables=1

[MeterOption5.Feature1.Display22]
Meter=String
X=((58*#Scale#))r
Y=0r
Text=#ThemeColor_General_G#
StringAlign=CenterCenter
MeterStyle=MeterOptionTitleStyle
DynamicVariables=1

[MeterOption5.Feature1.Display32]
Meter=String
X=((58*#Scale#))r
Y=0r
Text=#ThemeColor_General_B#
StringAlign=CenterCenter
MeterStyle=MeterOptionTitleStyle
DynamicVariables=1

[MeterSmallButtonSelectedStyle_Custom1]
X=((58*#Scale#))r
Y=0r
Shape=Rectangle 0,0,(54*#Scale#),(36*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_BackgroundSelected# | StrokeWidth 0
DynamicVariables=1
Hidden=1

[MeterOption5.Feature1.Display13]
Meter=Shape
X=((#BeginX#+404)*#Scale#)
Y=(((#BeginY#+21)+((#GapUnscaled#))*4)*#Scale#)
MeterStyle=MeterSmallButtonSelectedStyle_Custom1

[MeterOption5.Feature1.Display23]
Meter=Shape
MeterStyle=MeterSmallButtonSelectedStyle_Custom1

[MeterOption5.Feature1.Display33]
Meter=Shape
MeterStyle=MeterSmallButtonSelectedStyle_Custom1

[MeterOption5.Feature1.Display14]
Meter=Shape
X=((#BeginX#+404)*#Scale#)
Y=(((#BeginY#+21)+((#GapUnscaled#))*4)*#Scale#)
Shape=Rectangle 0,0,(54*#Scale#),(36*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_R# | StrokeWidth 0
Shape2=Rectangle 0,(-2*#Scale#),(54*#Scale#),(#Scale#*36),(4*#Scale#),(4*#Scale#)
Shape3=Combine Shape | Exclude Shape2
Group=Hover
DynamicVariables=1
Hidden=1

[MeterOption5.Feature1.Display24]
Meter=Shape
X=((58*#Scale#))r
Y=0r
Shape=Rectangle 0,0,(54*#Scale#),(#Scale#*36),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_G# | StrokeWidth 0
Shape2=Rectangle 0,(-2*#Scale#),(54*#Scale#),(#Scale#*36),(4*#Scale#),(4*#Scale#)
Shape3=Combine Shape | Exclude Shape2
Group=Hover
DynamicVariables=1
Hidden=1

[MeterOption5.Feature1.Display34]
Meter=Shape
X=((58*#Scale#))r
Y=0r
Shape=Rectangle 0,0,(54*#Scale#),(#Scale#*36),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_B# | StrokeWidth 0
Shape2=Rectangle 0,(-2*#Scale#),(54*#Scale#),(#Scale#*36),(4*#Scale#),(4*#Scale#)
Shape3=Combine Shape | Exclude Shape2
Group=Hover
DynamicVariables=1
Hidden=1

[MeterOption5.Feature1.Display41]
Meter=Shape
X=((58*#Scale#))r
Y=0r
Shape=Rectangle 0,0,(18*#Scale#),(36*#Scale#),(4*#Scale#),(4*#Scale#) | StrokeWidth 0 | Fill Color #ThemeColor_General_R#,#ThemeColor_General_G#,#ThemeColor_General_B#
Shape2=Rectangle 0,(6*#Scale#),(18*#Scale#),(24*#Scale#),(4*#Scale#),(4*#Scale#) | StrokeWidth 0 | Fill Color #ThemeColor_General#
DynamicVariables=1
ToolTipText=#S.Widgets_Settings.Theme_color.2#

[MeterOption5.Feature2.Display1]
Meter=Shape
X=((#BeginX#+404-40)*#Scale#)
Y=(((#BeginY#+21)+((#GapUnscaled#))*4)*#Scale#)
Shape=Rectangle 0,0,(36*#Scale#),(36*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color 0,0,0,0 | Stroke Color #ThemeColor_BarBorder#
Shape2=Rectangle 0,0,(36*#Scale#),(36*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_TextInputer# | StrokeWidth 0
MouseOverAction=[!ShowMeter MeterOption5.Feature2.Display2][!Redraw]
MouseLeaveAction=[!HideMeter MeterOption5.Feature2.Display2][!Redraw]
LeftMouseUpAction=[!ToggleMouseActionGroup * MouseAction][!ShowMeterGroup MeterOption5.Feature2][!Redraw]
DynamicVariables=1

[MeterOption5.Feature2.Display2]
Meter=Shape
X=0r
Y=0r
Shape=Rectangle 0,0,(36*#Scale#),(36*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_BackgroundSelected# | StrokeWidth 0
DynamicVariables=1
Hidden=1

[MeterOption5.Feature2.Display3]
Meter=Image
X=(9*#Scale#)r
Y=(9*#Scale#)r
W=(18*#Scale#)
H=(18*#Scale#)
ImageName=#@#Bitmap\Picker.png
ImageTint=#FontColor_General#
DynamicVariables=1

;                             選項 6

[MeterOption6.Feature1.Display1]
Meter=Shape
X=((#BeginX#+404)*#Scale#)
Y=(((#BeginY#+21)+((#GapUnscaled#))*5-20)*#Scale#)
MeterStyle=MeterSmallButtonStyle
MouseOverAction=[!ShowMeter MeterOption6.Feature1.Display3][!ShowMeterGroup MeterOption6.Feature7][!Redraw]
MouseLeaveAction=[!HideMeter MeterOption6.Feature1.Display3][!HideMeterGroup MeterOption6.Feature7][!Redraw]
LeftMouseUpAction=[!ShowMeter MeterOption6.Feature2.Display3][!LoadLayout "Quanto 1 #Scale_Actual#x"][!WriteKeyValue Variables Page Start "#ROOTCONFIGPATH#Extras\Welcome\10x13.ini"]

[MeterOption6.Feature2.Display1]
Meter=Shape
X=((98*#Scale#))r
Y=0r
MeterStyle=MeterSmallButtonStyle
MouseOverAction=[!ShowMeter MeterOption6.Feature2.Display3][!ShowMeterGroup MeterOption6.Feature8][!Redraw]
MouseLeaveAction=[!HideMeter MeterOption6.Feature2.Display3][!HideMeterGroup MeterOption6.Feature8][!Redraw]
LeftMouseUpAction=[!ShowMeter MeterOption6.Feature2.Display3][!LoadLayout "Quanto 2 #Scale_Actual#x"][!WriteKeyValue Variables Page Start "#ROOTCONFIGPATH#Extras\Welcome\10x13.ini"]

[MeterOption6.Feature1.Display2]
Meter=String
X=((#BeginX#+448)*#Scale#)
Y=(((#BeginY#+27)+((#GapUnscaled#))*5-20)*#Scale#)
Text=#T.Center#
MeterStyle=MeterOptionTitleStyle
StringAlign=Center
DynamicVariables=1

[MeterOption6.Feature2.Display2]
Meter=String
X=((98*#Scale#))r
Y=0r
Text=#T.Both_sides#
MeterStyle=MeterOptionTitleStyle
StringAlign=Center
DynamicVariables=1

[MeterOption6.Feature1.Display3]
Meter=Shape
X=((#BeginX#+404)*#Scale#)
Y=(((#BeginY#+21)+((#GapUnscaled#))*5-20)*#Scale#)
MeterStyle=MeterSmallButtonSelectedStyle
Hidden=1

[MeterOption6.Feature2.Display3]
Meter=Shape
X=((98*#Scale#))r
Y=0r
MeterStyle=MeterSmallButtonSelectedStyle
Hidden=1

[MeterOption6.Feature3.Display1]
Meter=Shape
X=((#BeginX#+404)*#Scale#)
Y=(((#BeginY#+21)+((#GapUnscaled#))*5+20)*#Scale#)
MeterStyle=MeterSmallButtonStyle
MouseOverAction=[!ShowMeter MeterOption6.Feature3.Display3][!Redraw][!ShowMeterGroup MeterOption6.Feature9][!Redraw]
MouseLeaveAction=[!HideMeter MeterOption6.Feature3.Display3][!Redraw][!HideMeterGroup MeterOption6.Feature9][!Redraw]
LeftMouseUpAction=[!ShowMeter MeterOption6.Feature3.Display3][!LoadLayout "Quanto 3 #Scale_Actual#x"][!WriteKeyValue Variables Page Start "#ROOTCONFIGPATH#Extras\Welcome\10x13.ini"]

[MeterOption6.Feature6.Display1]
Meter=Shape
X=((98*#Scale#))r
Y=0r
MeterStyle=MeterSmallButtonStyle
MouseOverAction=[!ShowMeter MeterOption6.Feature6.Display3][!Redraw]
MouseLeaveAction=[!HideMeter MeterOption6.Feature6.Display3][!Redraw]
LeftMouseUpAction=[!ShowMeter MeterOption6.Feature6.Display3][!LoadLayout "@Backup"][!WriteKeyValue Variables Page Start "#ROOTCONFIGPATH#Extras\Welcome\10x13.ini"]

[MeterOption6.Feature3.Display2]
Meter=String
X=((#BeginX#+448)*#Scale#)
Y=((6*#Scale#))r
Text=#T.Side_Bar#
MeterStyle=MeterOptionTitleStyle
StringAlign=Center
DynamicVariables=1

[MeterOption6.Feature6.Display2]
Meter=String
X=((98*#Scale#))r
Y=0r
Text=#T.Restore#
MeterStyle=MeterOptionTitleStyle
StringAlign=Center
DynamicVariables=1

[MeterOption6.Feature3.Display3]
Meter=Shape
X=((#BeginX#+404)*#Scale#)
Y=(((#BeginY#+21)+((#GapUnscaled#))*5+20)*#Scale#)
MeterStyle=MeterSmallButtonSelectedStyle
Hidden=1

[MeterOption6.Feature6.Display3]
Meter=Shape
X=((98*#Scale#))r
Y=0r
MeterStyle=MeterSmallButtonSelectedStyle
Hidden=1

[MeterOption6.Feature4.Display1]
Meter=Shape
X=((#BeginX#+404)*#Scale#)
Y=(((#BeginY#+21)+((#GapUnscaled#))*5+60)*#Scale#)
Shape=Rectangle 0,0,(192*#Scale#),(#Scale#*56*#Widgets_Settings_Text.29#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_Option# | Stroke Color #ThemeColor_BarBorder#
DynamicVariables=1
Group=MeterOption6.Feature4
Hidden=1

[MeterOption6.Feature4.Display2]
Meter=String
X=((8*#Scale#))r
Y=((6*#Scale#))r
W=(172*#Scale#)
ClipString=2
Text=#Widgets_Settings_Text.26#
MeterStyle=MeterOptionTitleStyle
DynamicVariables=1
Group=MeterOption6.Feature4
Hidden=1



[MeterOption6.Feature7.Display1]
Meter=Shape
X=((#BeginX#+404)*#Scale#)
Y=(((#BeginY#-138)+((#GapUnscaled#))*5+20)*#Scale#)
Shape=Rectangle 0,0,(192*#Scale#),(#Scale#*116),0,0 | Fill Color #ThemeColor_TextInputer# | Stroke Color #ThemeColor_BarBorder#
DynamicVariables=1
Group=MeterOption6.Feature7 | MeterOption6.Feature8 | MeterOption6.Feature9
Hidden=1

[CustomStyle1]
X=((#BeginX#+404+4)*#Scale#)
Y=(((#BeginY#-138)+((#GapUnscaled#))*5+24)*#Scale#)
W=(184*#Scale#)
H=(108*#Scale#)
DynamicVariables=1
Hidden=1

[MeterOption6.Feature7.Display2]
Meter=Image
ImageName=#@#Previews\#DarkMode#\Themes\Center.jpg
MeterStyle=CustomStyle1
Group=MeterOption6.Feature7

[MeterOption6.Feature8.Display4]
Meter=Image
ImageName=#@#Previews\#DarkMode#\Themes\Both Sides.jpg
MeterStyle=CustomStyle1
Group=MeterOption6.Feature8

[MeterOption6.Feature9.Display2]
Meter=Image
ImageName=#@#Previews\#DarkMode#\Themes\Side Bar.jpg
MeterStyle=CustomStyle1
Group=MeterOption6.Feature9










; --------------------------- 選項特性 (選單類) ---------------------------

[MeterOption1.Feature1.Function1]
Meter=Shape
X=((#BeginX#+404)*#Scale#)
Y=(((#BeginY#+22)-36*(#Scale_Actual#=1?0:(#Scale_Actual#=1.25?1:(#Scale_Actual#=1.5?2:(#Scale_Actual#=2?3:2)))))*#Scale#)
Shape=Rectangle 0,0,(192*#Scale#),(36*4*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_Option# | Stroke Color #ThemeColor_BarBorder#
Hidden=1
DynamicVariables=1
Group=MeterOption1.Feature1
MouseLeaveAction=[!ToggleMouseActionGroup * MouseAction][!HideMeterGroup Hover][!HideMeterGroup MeterOption1.Feature1][!Redraw]

[MeterOption1.Feature1.Function2]
Meter=String
X=((14*#Scale#))r
Y=((6*#Scale#))r
Text=100%
MeterStyle=MeterOptionTitleStyle
DynamicVariables=1
LeftMouseDownAction=[!WriteKeyValue Variables Scale_Actual 1 "#@#Settings.inc"][!Move ((#SCREENAREAWIDTH#/2)-((640*1.0/1.25)/2)) 60][!Refresh]
Hidden=1
Group=MeterOption1.Feature1

[MeterOption1.Feature1.Function3]
Meter=String
X=0r
Y=((36*#Scale#))r
Text=125%
MeterStyle=MeterOptionTitleStyle
DynamicVariables=1
LeftMouseDownAction=[!WriteKeyValue Variables Scale_Actual 1.25 "#@#Settings.inc"][!Move ((#SCREENAREAWIDTH#/2)-((640*1.25/1.25)/2)) 60][!Refresh]
Hidden=1
Group=MeterOption1.Feature1

[MeterOption1.Feature1.Function4]
Meter=String
X=0r
Y=((36*#Scale#))r
Text=150%
MeterStyle=MeterOptionTitleStyle
DynamicVariables=1
LeftMouseDownAction=[!WriteKeyValue Variables Scale_Actual 1.5 "#@#Settings.inc"][!Move ((#SCREENAREAWIDTH#/2)-((640*1.5/1.25)/2)) 60][!Refresh]
Hidden=1
Group=MeterOption1.Feature1

[MeterOption1.Feature1.Function5]
Meter=String
X=0r
Y=((36*#Scale#))r
Text=200%
MeterStyle=MeterOptionTitleStyle
DynamicVariables=1
LeftMouseDownAction=[!WriteKeyValue Variables Scale_Actual 2 "#@#Settings.inc"][!Move ((#SCREENAREAWIDTH#/2)-((640*2.0/1.25)/2)) 60][!Refresh]
Hidden=1
Group=MeterOption1.Feature1

[MeterOption1.Feature1.Function6]
Meter=Shape
X=((#BeginX#+412)*#Scale#)
Y=((#BeginY#+32)*#Scale#)
Shape=Rectangle 0,0,(3*#Scale#),(18*#Scale#),(1.5*#Scale#),(1.5*#Scale#) | Fill Color #ThemeColor_General# | Stroke Color 0,0,0,0
DynamicVariables=1
Hidden=1
Group=MeterOption1.Feature1

[MeterOption2.Feature1.Function1]
Meter=Shape
X=((#BeginX#+404)*#Scale#)
Y=(((#BeginY#+22)+#GapUnscaled#*1-36*[MeasureOption2.Feature1.TextNum])*#Scale#)
Shape=Rectangle 0,0,(192*#Scale#),(72*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_Option# | Stroke Color #ThemeColor_BarBorder#
Hidden=1
DynamicVariables=1
Group=MeterOption2.Feature1
MouseLeaveAction=[!ToggleMouseActionGroup * MouseAction][!HideMeterGroup Hover][!HideMeterGroup MeterOption2.Feature1][!Redraw]

[MeterOption2.Feature1.Function2]
Meter=String
X=((14*#Scale#))r
Y=((6*#Scale#))r
Text=#T.12-hour#
MeterStyle=MeterOptionTitleStyle
DynamicVariables=1
LeftMouseDownAction=[!WriteKeyValue Variables TimeFormat_Global 0 "#@#Settings.inc"][!RefreshApp]
Hidden=1
Group=MeterOption2.Feature1

[MeterOption2.Feature1.Function3]
Meter=String
X=0r
Y=((36*#Scale#))r
Text=#T.24-hour#
MeterStyle=MeterOptionTitleStyle
DynamicVariables=1
LeftMouseDownAction=[!WriteKeyValue Variables TimeFormat_Global 1 "#@#Settings.inc"][!RefreshApp]
Hidden=1
Group=MeterOption2.Feature1

[MeterOption2.Feature1.Function5]
Meter=Shape
X=((#BeginX#+412)*#Scale#)
Y=(((#BeginY#+32)+((#GapUnscaled#))*1)*#Scale#)
Shape=Rectangle 0,0,(3*#Scale#),(18*#Scale#),(1.5*#Scale#),(1.5*#Scale#) | Fill Color #ThemeColor_General# | Stroke Color 0,0,0,0
DynamicVariables=1
Hidden=1
Group=MeterOption2.Feature1

[MeterOption3.Feature1.Function1]
Meter=Shape
X=((#BeginX#+404)*#Scale#)
Y=(((#BeginY#+22)+#GapUnscaled#*2-36*#DarkMode#)*#Scale#)
Shape=Rectangle 0,0,(192*#Scale#),(72*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_Option# | Stroke Color #ThemeColor_BarBorder#
Hidden=1
DynamicVariables=1
Group=MeterOption3.Feature1
MouseLeaveAction=[!ToggleMouseActionGroup * MouseAction][!HideMeterGroup Hover][!HideMeterGroup MeterOption3.Feature1][!Redraw]

[MeterOption3.Feature1.Function2]
Meter=String
X=((14*#Scale#))r
Y=((6*#Scale#))r
Text=#T.Bright#
MeterStyle=MeterOptionTitleStyle
DynamicVariables=1
LeftMouseDownAction=[!WriteKeyValue Variables DarkMode 0 "#@#Settings.inc"][!RefreshApp]
Hidden=1
Group=MeterOption3.Feature1

[MeterOption3.Feature1.Function3]
Meter=String
X=0r
Y=((36*#Scale#))r
Text=#T.Dark#
MeterStyle=MeterOptionTitleStyle
DynamicVariables=1
LeftMouseDownAction=[!WriteKeyValue Variables DarkMode 1 "#@#Settings.inc"][!RefreshApp]
Hidden=1
Group=MeterOption3.Feature1

[MeterOption3.Feature1.Function4]
Meter=Shape
X=((#BeginX#+412)*#Scale#)
Y=(((#BeginY#+32)+((#GapUnscaled#))*2)*#Scale#)
Shape=Rectangle 0,0,(3*#Scale#),(18*#Scale#),(1.5*#Scale#),(1.5*#Scale#) | Fill Color #ThemeColor_General# | Stroke Color 0,0,0,0
DynamicVariables=1
Hidden=1
Group=MeterOption3.Feature1

[CustomStyle2]
X=((40*#Scale#))r
Y=0r
DynamicVariables=1
Group=MeterOption5.Feature2
Hidden=1

[MeterOption5.Feature1.Function00]
Meter=Shape
X=((#BeginX#+404-20-84)*#Scale#)
Y=(((#BeginY#+22)+16-84+((#GapUnscaled#))*4)*#Scale#)
Shape=Rectangle 0,0,(168*#Scale#),(168*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_Option# | Stroke Color #ThemeColor_BarBorder#
MeterStyle=CustomStyle2
MouseLeaveAction=[!ToggleMouseActionGroup * MouseAction][!HideMeterGroup Hover][!HideMeterGroup MeterOption5.Feature2][!Redraw]

[MeterOption5.Feature1.Function11]
Meter=Shape
X=((5*#Scale#))r
Y=((5*#Scale#))r
MeterStyle=CustomStyle2
Shape=Rectangle 0,0,(38*#Scale#),(38*#Scale#),(2*#Scale#),(2*#Scale#) | Fill Color 157,207,255 | StrokeWidth 0
LeftMouseUpAction=[!WriteKeyValue Variables "ThemeColor_General_R" 157 "#@#Settings.inc"][!WriteKeyValue Variables "ThemeColor_General_G" 207 "#@#Settings.inc"][!WriteKeyValue Variables "ThemeColor_General_B" 255 "#@#Settings.inc"][!RefreshApp]

[MeterOption5.Feature1.Function12]
Meter=Shape
MeterStyle=CustomStyle2
Shape=Rectangle 0,0,(38*#Scale#),(38*#Scale#),(2*#Scale#),(2*#Scale#) | Fill Color 64,153,224 | StrokeWidth 0 
LeftMouseUpAction=[!WriteKeyValue Variables "ThemeColor_General_R" 64 "#@#Settings.inc"][!WriteKeyValue Variables "ThemeColor_General_G" 153 "#@#Settings.inc"][!WriteKeyValue Variables "ThemeColor_General_B" 224 "#@#Settings.inc"][!RefreshApp]

[MeterOption5.Feature1.Function13]
Meter=Shape
MeterStyle=CustomStyle2
Shape=Rectangle 0,0,(38*#Scale#),(38*#Scale#),(2*#Scale#),(2*#Scale#) | Fill Color 0,120,212 | StrokeWidth 0
LeftMouseUpAction=[!WriteKeyValue Variables "ThemeColor_General_R" 0 "#@#Settings.inc"][!WriteKeyValue Variables "ThemeColor_General_G" 120 "#@#Settings.inc"][!WriteKeyValue Variables "ThemeColor_General_B" 212 "#@#Settings.inc"][!RefreshApp]

[MeterOption5.Feature1.Function14]
Meter=Shape
MeterStyle=CustomStyle2
Shape=Rectangle 0,0,(38*#Scale#),(38*#Scale#),(2*#Scale#),(2*#Scale#) | Fill Color 87,109,205 | StrokeWidth 0
LeftMouseUpAction=[!WriteKeyValue Variables "ThemeColor_General_R" 87 "#@#Settings.inc"][!WriteKeyValue Variables "ThemeColor_General_G" 109 "#@#Settings.inc"][!WriteKeyValue Variables "ThemeColor_General_B" 205 "#@#Settings.inc"][!RefreshApp]

[MeterOption5.Feature1.Function21]
Meter=Shape
X=((-120*#Scale#))r
Y=((40*#Scale#))r
MeterStyle=CustomStyle2
Shape=Rectangle 0,0,(38*#Scale#),(38*#Scale#),(2*#Scale#),(2*#Scale#) | Fill Color 64,178,204 | StrokeWidth 0
LeftMouseUpAction=[!WriteKeyValue Variables "ThemeColor_General_R" 64 "#@#Settings.inc"][!WriteKeyValue Variables "ThemeColor_General_G" 178 "#@#Settings.inc"][!WriteKeyValue Variables "ThemeColor_General_B" 204 "#@#Settings.inc"][!RefreshApp]

[MeterOption5.Feature1.Function22]
Meter=Shape
MeterStyle=CustomStyle2
Shape=Rectangle 0,0,(38*#Scale#),(38*#Scale#),(2*#Scale#),(2*#Scale#) | Fill Color 51,196,172 | StrokeWidth 0
LeftMouseUpAction=[!WriteKeyValue Variables "ThemeColor_General_R" 51 "#@#Settings.inc"][!WriteKeyValue Variables "ThemeColor_General_G" 196 "#@#Settings.inc"][!WriteKeyValue Variables "ThemeColor_General_B" 172 "#@#Settings.inc"][!RefreshApp]

[MeterOption5.Feature1.Function23]
Meter=Shape
MeterStyle=CustomStyle2
Shape=Rectangle 0,0,(38*#Scale#),(38*#Scale#),(2*#Scale#),(2*#Scale#) | Fill Color 64,193,127 | StrokeWidth 0
LeftMouseUpAction=[!WriteKeyValue Variables "ThemeColor_General_R" 64 "#@#Settings.inc"][!WriteKeyValue Variables "ThemeColor_General_G" 193 "#@#Settings.inc"][!WriteKeyValue Variables "ThemeColor_General_B" 127 "#@#Settings.inc"][!RefreshApp]

[MeterOption5.Feature1.Function24]
Meter=Shape
MeterStyle=CustomStyle2
Shape=Rectangle 0,0,(38*#Scale#),(38*#Scale#),(2*#Scale#),(2*#Scale#) | Fill Color 154,203,63 | StrokeWidth 0
LeftMouseUpAction=[!WriteKeyValue Variables "ThemeColor_General_R" 154 "#@#Settings.inc"][!WriteKeyValue Variables "ThemeColor_General_G" 203 "#@#Settings.inc"][!WriteKeyValue Variables "ThemeColor_General_B" 63 "#@#Settings.inc"][!RefreshApp]

[MeterOption5.Feature1.Function31]
Meter=Shape
X=((-120*#Scale#))r
Y=((40*#Scale#))r
MeterStyle=CustomStyle2
Shape=Rectangle 0,0,(38*#Scale#),(38*#Scale#),(2*#Scale#),(2*#Scale#) | Fill Color 252,232,64 | StrokeWidth 0
LeftMouseUpAction=[!WriteKeyValue Variables "ThemeColor_General_R" 252 "#@#Settings.inc"][!WriteKeyValue Variables "ThemeColor_General_G" 232 "#@#Settings.inc"][!WriteKeyValue Variables "ThemeColor_General_B" 64 "#@#Settings.inc"][!RefreshApp]

[MeterOption5.Feature1.Function32]
Meter=Shape
MeterStyle=CustomStyle2
Shape=Rectangle 0,0,(38*#Scale#),(38*#Scale#),(2*#Scale#),(2*#Scale#) | Fill Color 248,137,72 | StrokeWidth 0
LeftMouseUpAction=[!WriteKeyValue Variables "ThemeColor_General_R" 248 "#@#Settings.inc"][!WriteKeyValue Variables "ThemeColor_General_G" 137 "#@#Settings.inc"][!WriteKeyValue Variables "ThemeColor_General_B" 72 "#@#Settings.inc"][!RefreshApp]

[MeterOption5.Feature1.Function33]
Meter=Shape
MeterStyle=CustomStyle2
Shape=Rectangle 0,0,(38*#Scale#),(38*#Scale#),(2*#Scale#),(2*#Scale#) | Fill Color 224,103,106 | StrokeWidth 0
LeftMouseUpAction=[!WriteKeyValue Variables "ThemeColor_General_R" 224 "#@#Settings.inc"][!WriteKeyValue Variables "ThemeColor_General_G" 103 "#@#Settings.inc"][!WriteKeyValue Variables "ThemeColor_General_B" 106 "#@#Settings.inc"][!RefreshApp]

[MeterOption5.Feature1.Function34]
Meter=Shape
MeterStyle=CustomStyle2
Shape=Rectangle 0,0,(38*#Scale#),(38*#Scale#),(2*#Scale#),(2*#Scale#) | Fill Color 237,76,89 | StrokeWidth 0
LeftMouseUpAction=[!WriteKeyValue Variables "ThemeColor_General_R" 237 "#@#Settings.inc"][!WriteKeyValue Variables "ThemeColor_General_G" 76 "#@#Settings.inc"][!WriteKeyValue Variables "ThemeColor_General_B" 89 "#@#Settings.inc"][!RefreshApp]

[MeterOption5.Feature1.Function41]
Meter=Shape
X=((-120*#Scale#))r
Y=((40*#Scale#))r
MeterStyle=CustomStyle2
Shape=Rectangle 0,0,(38*#Scale#),(38*#Scale#),(2*#Scale#),(2*#Scale#) | Fill Color 238,64,133 | StrokeWidth 0
LeftMouseUpAction=[!WriteKeyValue Variables "ThemeColor_General_R" 238 "#@#Settings.inc"][!WriteKeyValue Variables "ThemeColor_General_G" 64 "#@#Settings.inc"][!WriteKeyValue Variables "ThemeColor_General_B" 133 "#@#Settings.inc"][!RefreshApp]

[MeterOption5.Feature1.Function42]
Meter=Shape
MeterStyle=CustomStyle2
Shape=Rectangle 0,0,(38*#Scale#),(38*#Scale#),(2*#Scale#),(2*#Scale#) | Fill Color 188,59,139 | StrokeWidth 0
LeftMouseUpAction=[!WriteKeyValue Variables "ThemeColor_General_R" 188 "#@#Settings.inc"][!WriteKeyValue Variables "ThemeColor_General_G" 59 "#@#Settings.inc"][!WriteKeyValue Variables "ThemeColor_General_B" 139 "#@#Settings.inc"][!RefreshApp]

[MeterOption5.Feature1.Function43]
Meter=Shape
MeterStyle=CustomStyle2
Shape=Rectangle 0,0,(38*#Scale#),(38*#Scale#),(2*#Scale#),(2*#Scale#) | Fill Color 125,115,165 | StrokeWidth 0
LeftMouseUpAction=[!WriteKeyValue Variables "ThemeColor_General_R" 125 "#@#Settings.inc"][!WriteKeyValue Variables "ThemeColor_General_G" 115 "#@#Settings.inc"][!WriteKeyValue Variables "ThemeColor_General_B" 165 "#@#Settings.inc"][!RefreshApp]

[MeterOption5.Feature1.Function44]
Meter=Shape
MeterStyle=CustomStyle2
Shape=Rectangle 0,0,(38*#Scale#),(38*#Scale#),(2*#Scale#),(2*#Scale#) | Fill Color 135,145,136 | StrokeWidth 0
LeftMouseUpAction=[!WriteKeyValue Variables "ThemeColor_General_R" 135 "#@#Settings.inc"][!WriteKeyValue Variables "ThemeColor_General_G" 145 "#@#Settings.inc"][!WriteKeyValue Variables "ThemeColor_General_B" 136 "#@#Settings.inc"][!RefreshApp]
