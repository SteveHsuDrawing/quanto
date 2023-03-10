[Variables]
Gap=(84*#Scale#)
GapUnscaled=84
Gap2=(140*#Scale#)

; --------------------------- 選項背景 ---------------------------

[MeterOptionStyle]
X=0r
Y=((#Gap#))r
Shape=Rectangle 0,(1*#Scale#),(610*#Scale#),(#Scale#*80),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_Shadow# | Stroke Color #ThemeColor_Shadow#
Shape2=Rectangle 0,0,(610*#Scale#),(#Scale#*80),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_Option# | Stroke Color 0,0,0,0
DynamicVariables=1

[MeterOptionSelectedStyle]
X=0r
Y=((#Gap#))r
Shape=Rectangle 0,0,(610*#Scale#),(#Scale#*80),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_BackgroundSelectedLight# | Stroke Color 0,0,0,0
DynamicVariables=1
Hidden=1

[FontStyle_Custom1]
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(12*#Scale#)
AntiAlias=1
W=(524*#Scale#)
ClipString=2
DynamicVariables=1
ClipString=2
Text=#S.Changelog#

[MeterOption1.Feature1.Display1]
Meter=String
X=((#BeginX#-1)*#Scale#)
Y=((#BeginY#+80)*#Scale#)
MeterStyle=FontStyle_Custom1
Solidcolor=#ThemeColor_BarBorderLight#
Padding=(68*#Scale#),(16*#Scale#),(20*#Scale#),(16*#Scale#)

[MeterOption1.Feature1.Display2]
Meter=String
X=((1*#Scale#))r
Y=((1*#Scale#))r
MeterStyle=FontStyle_Custom1
Solidcolor=#ThemeColor_Option#
Padding=(67*#Scale#),(15*#Scale#),(19*#Scale#),(15*#Scale#)


[MeterOption1]
Meter=Shape
X=(#BeginX#*#Scale#)
Y=(#BeginY#*#Scale#)
Shape=Rectangle 0,0,(610*#Scale#),(84*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_BarBorder# | Stroke Color #ThemeColor_BarBorder#
Shape2=Rectangle 0,0,(610*#Scale#),(84*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_Option# | Stroke Color 0,0,0,0
Shape3=Rectangle 0,(80*#Scale#),(#Scale#*610),(4*#Scale#),0,0
Shape4=Combine Shape | Exclude Shape3
Shape5=Combine Shape2 | Exclude Shape3
DynamicVariables=1

; --------------------------- 選項圖示 ---------------------------

[MeterIconStyle]
H=(24*#Scale#)
W=(24*#Scale#)
X=0r
Y=((#Gap#))r
ImageTint=#FontColor_General#,255
DynamicVariables=1

[MeterIcon1]
Meter=Image
ImageName=#@#Bitmap\Information.png
X=((#BeginX#+24)*#Scale#)
Y=((#BeginY#+28)*#Scale#)
MeterStyle=MeterIconStyle
DynamicVariables=1

[MeterOptionTextStyle]
X=0r
Y=((#Gap#))r
FontFace=#FontFace_General#
FontColor=#FontColor_General#,128
FontSize=(10*#Scale#)
StringAlign=LeftCenter
AntiAlias=1
DynamicVariables=1
InlineSetting=Size | (12*#Scale#)
InlineSetting2=Color | #FontColor_General#

[MeterOptionText1]
Meter=String
Text=#T.Changelog_of_Version##CRLF##S.Widgets_Settings.3#
X=((#BeginX#+68)*#Scale#)
Y=((#BeginY#+40)*#Scale#)
MeterStyle=MeterOptionTextStyle
InlinePattern=#T.Changelog_of_Version##CRLF#
InlinePattern2=#T.Changelog_of_Version##CRLF#