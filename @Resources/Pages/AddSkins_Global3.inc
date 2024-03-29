[Variables]
TextInputBoxW=392

[FontStyle_Custom2]
W=(592*#Scale#)
ClipString=2
StringAlign=LeftTop
Text=[#S.Widgets_Settings.38][#CRLF][#S.Widgets_Settings.13][#CRLF][#CRLF][#S.Widgets_Settings.9][#CRLF][#S.Widgets_Settings.10]
InlineSetting=Color | #FontColor_General#,128
InlinePattern="[#S.Widgets_Settings.9]"
InlineSetting2=Color | #FontColor_General#,128
InlinePattern2="[#S.Widgets_Settings.10]"

[MeterGroupStyle1]
Group=InputText
Hidden=1

[MeterWindowShadow]
Meter=Shape
MeterStyle=MeterSquareDarkerStyle | MeterGroupStyle1

[MeterInputerTipTextShadow]
Meter=String
MeterStyle=FontStyle_General | FontStyle_Custom2 | MeterGroupStyle1
X=((#BeginX#+0)*#Scale#)
Y=((#BeginY#+72)*#Scale#)
Solidcolor=#ThemeColor_BarBorderLight#
Padding=(11*#Scale#),(65*#Scale#),(11*#Scale#),(11*#Scale#)

[MeterInputerTipText]
Meter=String
MeterStyle=FontStyle_General | FontStyle_Custom2 | MeterGroupStyle1
X=((1*#Scale#))r
Y=((1*#Scale#))r
Solidcolor=#ThemeColor_Option#
Padding=(10*#Scale#),(64*#Scale#),(10*#Scale#),(10*#Scale#)

[MeterInputBox]
Meter=Shape
X=((9*#Scale#))r
Y=((9*#Scale#))r
Shape=Rectangle 0,0,(#TextInputBoxW#*#Scale#),(36*#Scale#),(2*#Scale#),(2*#Scale#) | Stroke Color #ThemeColor_BarBorder# | Fill Color #ThemeColor_BarBorder#
Shape2=Rectangle 0,0,(#TextInputBoxW#*#Scale#),(36*#Scale#),(2*#Scale#),(2*#Scale#) | StrokeWidth 0 | Fill Color #ThemeColor_TextInputerAlpha#
DynamicVariables=1
MeterStyle=MeterGroupStyle1
MouseOverAction=[!ShowMeter MeterInputBoxSelected][!Redraw]
MouseLeaveAction=[!HideMeter MeterInputBoxSelected][!Redraw]
LeftMouseUpAction=[!CommandMeasure MeasureInputGlobal "ExecuteBatch 1"][!ShowMeter MeterInputBoxChoosen][!Redraw]
MouseActionCursor=1
MouseActionCursorName=TEXT

[MeterInputBoxSelected]
Meter=Shape
X=0r
Y=0r
Shape=Rectangle 0,0,(#TextInputBoxW#*#Scale#),(36*#Scale#),(2*#Scale#),(2*#Scale#) | StrokeWidth 0 | Fill Color #ThemeColor_BackgroundSelected#
DynamicVariables=1
Hidden=1

[MeterInputBoxChoosen]
Meter=Shape
X=0r
Y=0r
Shape=Rectangle 0,0,(#TextInputBoxW#*#Scale#),(36*#Scale#),(2*#Scale#),(2*#Scale#) | StrokeWidth 0 | Fill Color #ThemeColor_General#
Shape2=Rectangle 0,(-2*#Scale#),(#TextInputBoxW#*#Scale#),(36*#Scale#),(2*#Scale#),(2*#Scale#)
Shape3=Combine Shape | Exclude Shape2
DynamicVariables=1
MeterStyle=MeterGroupStyle1

[MeterInputBoxText]
Meter=String
X=((8*#Scale#))r
Y=((18*#Scale#))r
MeterStyle=FontStyle_General | MeterGroupStyle1
StringAlign=LeftCenter
FontSize=(11*#Scale#)
W=((#TextInputBoxW#-16)*#Scale#)
ClipString=1
Text=[#QuickSetting.[#TextInput2].[#TextInput3]]

[MeasureInputGlobal]
Measure=Plugin
Plugin=InputText.dll
DynamicVariables=1
SolidColor=#ThemeColor_TextInputerAlpha#
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(9*#Scale#)
StringAlign=Left
AntiAlias=1
X=((#BeginX#+0+16)*#Scale#)
Y=((#BeginY#+72+16)*#Scale#)
W=((#TextInputBoxW#-16)*#Scale#)
H=(24*#Scale#)
DefaultValue=[#QuickSetting.[#TextInput2].[#TextInput3]]
Command1=[!WriteKeyValue Variables "QuickSetting.#TextInput2#.#TextInput3#" "$UserInput$" "#@##TextInput1#"][!RefreshApp][!Delay 16][!ShowMeterGroup InputText][!Redraw][!CommandMeasure MeasureInputGlobal "ExecuteBatch 1"]
OnDismissAction=[!HideMeter MeterInputBoxChoosen][!Redraw]

[MeterButtonStyle4]
X=((100*#Scale#))r
Y=0r
Shape=Rectangle 0,0,(96*#Scale#),(36*#Scale#),(2*#Scale#),(2*#Scale#) | Stroke Color #ThemeColor_BarBorder# | Fill Color #ThemeColor_BarBorder#
Shape2=Rectangle 0,0,(96*#Scale#),(36*#Scale#),(2*#Scale#),(2*#Scale#) | StrokeWidth 0 | Fill Color #ThemeColor_TextInputerAlpha#
DynamicVariables=1

[MeterButtonStyle5]
X=((100*#Scale#))r
Y=0r
Shape=Rectangle 0,0,(96*#Scale#),(36*#Scale#),(2*#Scale#),(2*#Scale#) | StrokeWidth 0 | Fill Color #ThemeColor_BackgroundSelected#
DynamicVariables=1
Hidden=1

[MeterButtonStyle6]
X=((100*#Scale#))r
Y=0r
StringAlign=CenterCenter
DynamicVariables=1

[MeterButton51]
Meter=Shape
X=((#BeginX#+14+#TextInputBoxW#)*#Scale#)
Y=((#BeginY#+82)*#Scale#)
MeterStyle=MeterButtonStyle4 | MeterGroupStyle1
MouseOverAction=[!ShowMeter MeterButton52][!Redraw]
MouseLeaveAction=[!HideMeter MeterButton52][!Redraw]
LeftMouseUpAction=[[#QuickSetting.[#TextInput2].[#TextInput3]]]

[MeterButton61]
Meter=Shape
MeterStyle=MeterButtonStyle4 | MeterGroupStyle1
MouseOverAction=[!ShowMeter MeterButton62][!Redraw]
MouseLeaveAction=[!HideMeter MeterButton62][!Redraw]
LeftMouseUpAction=[!Refresh]

[MeterButton52]
Meter=Shape
X=((#BeginX#+14+#TextInputBoxW#)*#Scale#)
Y=((#BeginY#+82)*#Scale#)
MeterStyle=MeterButtonStyle5

[MeterButton62]
Meter=Shape
MeterStyle=MeterButtonStyle5

[MeterButton53]
Meter=String
Text=#T.Test#
X=((#BeginX#+10+48+4+#TextInputBoxW#)*#Scale#)
Y=((#BeginY#+82+18)*#Scale#)
MeterStyle=FontStyle_General | MeterButtonStyle6 | MeterGroupStyle1

[MeterButton63]
Meter=String
Text=#T.Back#
MeterStyle=FontStyle_General | MeterButtonStyle6 | MeterGroupStyle1