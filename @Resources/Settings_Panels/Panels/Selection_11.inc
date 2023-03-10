[Variables]
Gap=(84*#Scale#)
GapUnscaled=84
Gap2=(140*#Scale#)

;[MeterBar]
;Meter=Shape
;Shape=Rectangle (4*#Scale#),(4*#Scale#),[MeasureW],[MeasureH],(8*#Arched#*#Scale#),(8*#Arched#*#Scale#) | Fill Color #ThemeColor_Bar# | Stroke Color #ThemeColor_Shadow# 
;Shape2=Rectangle (4*#Scale#),0,[MeasureW],(768*#Scale#),0,0
;Shape3=Combine Shape | Exclude Shape2
;Shape4=Rectangle (4*#Scale#),(768*#Scale#),[MeasureW],(1*#Scale#),0,0 | Fill Color #ThemeColor_BarBorder# | Stroke Color 0,0,0,0
;DynamicVariables=1

;[MeterSubtitle]
;Meter=String
;Text=#S.Widgets_Settings.Theme_color.1#
;X=(26*#Scale#)
;Y=(788*#Scale#)
;MeterStyle=MeterOptionTextStyle
;DynamicVariables=1

; --------------------------- 選項背景 ---------------------------

[MeterOptionStyle]
X=0r
Y=((#Gap#))r
Shape=Rectangle 0,(1*#Scale#),(610*#Scale#),(80*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_Shadow# | Stroke Color #ThemeColor_Shadow#
Shape2=Rectangle 0,0,(610*#Scale#),(80*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_Background# | Stroke Color 0,0,0,0
DynamicVariables=1

[MeterOptionSelectedStyle]
X=0r
Y=((#Gap#))r
Shape=Rectangle 0,0,(610*#Scale#),(80*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_BackgroundSelectedLight# | Stroke Color 0,0,0,0
DynamicVariables=1
Hidden=1

[MeterOption1]
Meter=Shape
X=(#BeginX#*#Scale#)
Y=(#BeginY#*#Scale#)
MeterStyle=MeterOptionStyle
MouseOverAction=[!ShowMeter MeterOptionSelected1][!Redraw]
MouseLeaveAction=[!HideMeter MeterOptionSelected1][!Redraw]
LeftMouseUpAction=[!SetOption MeterBackButton ImageTint "#FontColor_General#"][!WriteKeyValue Variables Page GlobalSettings "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!Refresh]

[MeterOption2]
Meter=Shape
MeterStyle=MeterOptionStyle
MouseOverAction=[!ShowMeter MeterOptionSelected2][!Redraw]
MouseLeaveAction=[!HideMeter MeterOptionSelected2][!Redraw]
LeftMouseUpAction=[!SetOption MeterBackButton ImageTint "#FontColor_General#"][!WriteKeyValue Variables Page AddSkins_11 "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!Refresh]

[MeterOption3]
Meter=Shape
MeterStyle=MeterOptionStyle
MouseOverAction=[!ShowMeter MeterOptionSelected3][!Redraw]
MouseLeaveAction=[!HideMeter MeterOptionSelected3][!Redraw]
LeftMouseUpAction=[!SetOption MeterBackButton ImageTint "#FontColor_General#"][!WriteKeyValue Variables Page About "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!Refresh]



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

; --------------------------- 選項圖示 ---------------------------

[MeterIconStyle]
H=(24*#Scale#)
W=(24*#Scale#)
ImageTint=#FontColor_General#,255

[MeterIcon1]
Meter=Image
ImageName=#@#Bitmap\Setting (Large).png
X=((#BeginX#+24)*#Scale#)
Y=((#BeginY#+28)*#Scale#)
MeterStyle=MeterIconStyle
DynamicVariables=1

[MeterIcon2]
Meter=Image
ImageName=#@#Bitmap\Add.png
X=0r
Y=((#Gap#))r
MeterStyle=MeterIconStyle
DynamicVariables=1

[MeterIcon3]
Meter=Image
ImageName=#@#Bitmap\Information.png
X=0r
Y=((#Gap#))r
MeterStyle=MeterIconStyle
DynamicVariables=1

; --------------------------- 選項標題 ---------------------------

[MeterOptionTitleStyle]
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(12*#Scale#)
AntiAlias=1

[MeterOptionTitle1]
Meter=String
Text=#T.Global_Settings#
X=((#BeginX#+68)*#Scale#)
Y=((#BeginY#+20)*#Scale#)
MeterStyle=MeterOptionTitleStyle
DynamicVariables=1

[MeterOptionTitle2]
Meter=String
Text=#T.Add_Skinss#
X=0r
Y=((#Gap#))r
MeterStyle=MeterOptionTitleStyle
DynamicVariables=1

[MeterOptionTitle3]
Meter=String
Text=#T.About#
X=0r
Y=((#Gap#))r
MeterStyle=MeterOptionTitleStyle
DynamicVariables=1

; --------------------------- 選項備註 ---------------------------

[MeterOptionTextStyle]
FontFace=#FontFace_General#
FontColor=#FontColor_General#,128
FontSize=(10*#Scale#)
AntiAlias=1

[MeterOptionText1]
Meter=String
X=0r
Y=((#BeginY#+40)*#Scale#)
MeterStyle=MeterOptionTextStyle
DynamicVariables=1

[MeterOptionText2]
Meter=String
X=0r
Y=((#Gap#))r
MeterStyle=MeterOptionTextStyle
DynamicVariables=1

[MeterOptionText3]
Meter=String
X=0r
Y=((#Gap#))r
MeterStyle=MeterOptionTextStyle
DynamicVariables=1

; --------------------------- 選項特性 ---------------------------

[MeterSmallIconStyle]
H=(16*#Scale#)
W=(16*#Scale#)
ImageTint=#FontColor_General#,255

[MeterOption1.Feature1.Display1]
Meter=Image
X=((#BeginX#+574)*#Scale#)
Y=(((#BeginY#+32)+((#GapUnscaled#))*0)*#Scale#)
ImageName=#@#Bitmap\Arrow Right.png
MeterStyle=MeterSmallIconStyle
DynamicVariables=1

[MeterOption2.Feature1.Display1]
Meter=Image
X=((#BeginX#+574)*#Scale#)
Y=(((#BeginY#+32)+((#GapUnscaled#))*1)*#Scale#)
ImageName=#@#Bitmap\Arrow Right.png
MeterStyle=MeterSmallIconStyle
DynamicVariables=1

[MeterOption3.Feature1.Display1]
Meter=Image
X=((#BeginX#+574)*#Scale#)
Y=(((#BeginY#+32)+((#GapUnscaled#))*2)*#Scale#)
ImageName=#@#Bitmap\Arrow Right.png
MeterStyle=MeterSmallIconStyle
DynamicVariables=1