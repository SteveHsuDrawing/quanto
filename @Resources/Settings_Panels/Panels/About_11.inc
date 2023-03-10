[Variables]
Gap=(84*#Scale#)
GapUnscaled=84
Gap2=(140*#Scale#)

; --------------------------- 選項背景 ---------------------------

[MeterOptionStyle]
X=0r
Y=((#Gap#))r
Shape=Rectangle 0,0,(610*#Scale#),(#Scale#*80),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_BarBorder# | Stroke Color #ThemeColor_BarBorder#
Shape2=Rectangle 0,0,(610*#Scale#),(#Scale#*80),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_Option# | Stroke Color 0,0,0,0
DynamicVariables=1

[MeterOptionSelectedStyle]
X=0r
Y=((#Gap#))r
Shape=Rectangle 0,0,(610*#Scale#),(#Scale#*80),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_BackgroundSelectedLight# | Stroke Color 0,0,0,0
DynamicVariables=1
Hidden=1

[MeterOption1]
Meter=Shape
X=(#BeginX#*#Scale#)
Y=(#BeginY#*#Scale#)
Shape=Rectangle 0,0,(610*#Scale#),(#Scale#*(80+#GapUnscaled#*2)),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_BarBorder# | Stroke Color #ThemeColor_BarBorder#
Shape2=Rectangle 0,0,(610*#Scale#),(#Scale#*(80+#GapUnscaled#*2)),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_Option# | Stroke Color 0,0,0,0
Shape3=Rectangle 0,(80*#Scale#),(#Scale#*610),(1*#Scale#),0,0 | Fill Color #ThemeColor_BarBorder# | Stroke Color 0,0,0,0
DynamicVariables=1

[MeterOption2]
Meter=Shape
MeterStyle=MeterOptionStyle
Y=((#Gap#*3))r
MouseOverAction=[!ShowMeter MeterOptionSelected2][!Redraw]
MouseLeaveAction=[!HideMeter MeterOptionSelected2][!Redraw]
LeftMouseUpAction=["#About.Link.1#"][!Refresh]
Hidden=#About.Hidden.1#

[MeterOption3]
Meter=Shape
MeterStyle=MeterOptionStyle
MouseOverAction=[!ShowMeter MeterOptionSelected3][!Redraw]
MouseLeaveAction=[!HideMeter MeterOptionSelected3][!Redraw]
LeftMouseUpAction=["#About.Link.2#"][!Refresh]
Hidden=#About.Hidden.2#

[MeterOption4]
Meter=Shape
MeterStyle=MeterOptionStyle
MouseOverAction=[!ShowMeter MeterOptionSelected4][!Redraw]
MouseLeaveAction=[!HideMeter MeterOptionSelected4][!Redraw]
LeftMouseUpAction=["#About.Link.3#"][!Refresh]
Hidden=#About.Hidden.3#

[MeterOption5]
Meter=Shape
MeterStyle=MeterOptionStyle
MouseOverAction=[!ShowMeter MeterOptionSelected5][!Redraw]
MouseLeaveAction=[!HideMeter MeterOptionSelected5][!Redraw]
LeftMouseUpAction=["#About.Link.4#"][!Refresh]
Hidden=#About.Hidden.4#

[MeterOption6]
Meter=Shape
MeterStyle=MeterOptionStyle
MouseOverAction=[!ShowMeter MeterOptionSelected6][!Redraw]
MouseLeaveAction=[!HideMeter MeterOptionSelected6][!Redraw]
LeftMouseUpAction=["#About.Link.5#"][!Refresh]
Hidden=#About.Hidden.5#



[MeterOptionSelected1]
Meter=Shape
X=(#BeginX#*#Scale#)
Y=(#BeginY#*#Scale#)
MeterStyle=MeterOptionSelectedStyle

[MeterOptionSelected2]
Meter=Shape
MeterStyle=MeterOptionSelectedStyle
Y=((#Gap#*3))r

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

[MeterIcon2]
Meter=Image
ImageName=#@#Bitmap\#About.Icon.1#.png
MeterStyle=MeterIconStyle
Y=((#Gap#*3))r
Hidden=#About.Hidden.1#

[MeterIcon3]
Meter=Image
ImageName=#@#Bitmap\#About.Icon.2#.png
MeterStyle=MeterIconStyle
Hidden=#About.Hidden.2#

[MeterIcon4]
Meter=Image
ImageName=#@#Bitmap\#About.Icon.3#.png
MeterStyle=MeterIconStyle
Hidden=#About.Hidden.3#

[MeterIcon5]
Meter=Image
ImageName=#@#Bitmap\#About.Icon.4#.png
MeterStyle=MeterIconStyle
Hidden=#About.Hidden.4#

[MeterIcon6]
Meter=Image
ImageName=#@#Bitmap\#About.Icon.5#.png
MeterStyle=MeterIconStyle
Hidden=#About.Hidden.5#

; --------------------------- 選項標題 ---------------------------

[MeterOptionTitleStyle]
X=0r
Y=((#Gap#))r
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(12*#Scale#)
AntiAlias=1
DynamicVariables=1

[MeterOptionTitle1]
Meter=String
Text=#T.Information#
X=((#BeginX#+68)*#Scale#)
Y=((#BeginY#+20)*#Scale#)
MeterStyle=MeterOptionTitleStyle
DynamicVariables=1

[MeterOptionTitle2]
Meter=String
Text=#About.Title.1#
MeterStyle=MeterOptionTitleStyle
Y=((#Gap#*3))r
Hidden=#About.Hidden.1#

[MeterOptionTitle3]
Meter=String
Text=#About.Title.2#
MeterStyle=MeterOptionTitleStyle
Hidden=#About.Hidden.2#

[MeterOptionTitle4]
Meter=String
Text=#About.Title.3#
MeterStyle=MeterOptionTitleStyle
Hidden=#About.Hidden.3#

[MeterOptionTitle5]
Meter=String
Text=#About.Title.4#
MeterStyle=MeterOptionTitleStyle
Hidden=#About.Hidden.4#

[MeterOptionTitle6]
Meter=String
Text=#About.Title.5#
MeterStyle=MeterOptionTitleStyle
Hidden=#About.Hidden.5#

; --------------------------- 選項備註 ---------------------------

[MeterOptionTextStyle]
X=0r
Y=((#Gap#))r
FontFace=#FontFace_General#
FontColor=#FontColor_General#,128
FontSize=(10*#Scale#)
AntiAlias=1
DynamicVariables=1

[MeterOptionText1]
Meter=String
Text=Simple & Freedom.
X=0r
Y=((#BeginY#+40)*#Scale#)
MeterStyle=MeterOptionTextStyle
DynamicVariables=1

[MeterOptionText2]
Meter=String
Text=#About.Description.1#
MeterStyle=MeterOptionTextStyle
Y=((#Gap#*3))r
Hidden=#About.Hidden.1#

[MeterOptionText3]
Meter=String
Text=#About.Description.2#
MeterStyle=MeterOptionTextStyle
Hidden=#About.Hidden.2#

[MeterOptionText4]
Meter=String
Text=#About.Description.3#
MeterStyle=MeterOptionTextStyle
Hidden=#About.Hidden.3#

[MeterOptionText5]
Meter=String
Text=#About.Description.4#
MeterStyle=MeterOptionTextStyle
Hidden=#About.Hidden.4#

[MeterOptionText6]
Meter=String
Text=#About.Description.5#
MeterStyle=MeterOptionTextStyle
Hidden=#About.Hidden.5#

; --------------------------- 選項特性 ---------------------------

[MeterSmallIconStyle]
H=(16*#Scale#)
W=(16*#Scale#)
ImageTint=#FontColor_General#,255

[MeterSmallButtonStyle]
X=(((98)*#Scale#))r
Y=0r
Shape=Rectangle 0,0,(100*#Scale#),(36*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color 0,0,0,0 | Stroke Color #ThemeColor_BarBorder#
Shape2=Rectangle 0,0,(100*#Scale#),(36*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_TextInputer# | StrokeWidth 0
DynamicVariables=1

[MeterSmallButtonSelectedStyle]
X=(((98)*#Scale#))r
Y=0r
Shape=Rectangle 0,0,(100*#Scale#),(36*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_BackgroundSelected# | StrokeWidth 0
DynamicVariables=1
Hidden=1




[MeterOption1.Feature2.Display1]
Meter=Shape
X=((#BeginX#+484)*#Scale#)
Y=(((#BeginY#+21)+((#GapUnscaled#))*0)*#Scale#)
MeterStyle=MeterSmallButtonStyle
MouseOverAction=[!ShowMeter MeterOption8.Feature1.Display3][!Redraw]
MouseLeaveAction=[!HideMeter MeterOption8.Feature1.Display3][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables SubPage 12 "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!Refresh]

[MeterOption1.Feature2.Display2]
Meter=String
X=((#BeginX#+484+50)*#Scale#)
Y=(((#BeginY#+27)+((#GapUnscaled#))*0)*#Scale#)
Text=#T.Changelog#
MeterStyle=MeterOptionTitleStyle
StringAlign=Center
DynamicVariables=1

[MeterOption8.Feature1.Display3]
Meter=Shape
X=((#BeginX#+484)*#Scale#)
Y=(((#BeginY#+21)+((#GapUnscaled#))*0)*#Scale#)
MeterStyle=MeterSmallButtonSelectedStyle

[MeterOption1.Feature1.DisplayStyle1]
X=0r
Y=((26*#Scale#))r
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(12*#Scale#)
AntiAlias=1
DynamicVariables=1

[MeterOption1.Feature1.Display11]
Meter=String
Text=#T.Main_Author#
X=((#BeginX#+68)*#Scale#)
Y=(((#BeginY#+10)+((#GapUnscaled#))*1)*#Scale#)
MeterStyle=MeterOption1.Feature1.DisplayStyle1

[MeterOption1.Feature1.Display21]
Meter=String
Text=#T.Version#
MeterStyle=MeterOption1.Feature1.DisplayStyle1

[MeterOption1.Feature1.Display31]
Meter=String
Text=#T.License#
MeterStyle=MeterOption1.Feature1.DisplayStyle1

[MeterOption1.Feature1.Display41]
Meter=String
Text=#T.Special_Thanks#
MeterStyle=MeterOption1.Feature1.DisplayStyle1



[MeterOption1.Feature1.DisplayStyle2]
X=0r
Y=((26*#Scale#))r
W=(396*#Scale#)
ClipString=2
FontFace=#FontFace_General#
FontColor=#FontColor_General#,160
FontSize=(12*#Scale#)
AntiAlias=1
DynamicVariables=1

[MeterOption1.Feature1.Display12]
Meter=String
Text=#MainAuthor#
X=((#BeginX#+68+120)*#Scale#)
Y=(((#BeginY#+10)+((#GapUnscaled#))*1)*#Scale#)
MeterStyle=MeterOption1.Feature1.DisplayStyle2

[MeterOption1.Feature1.Display22]
Meter=String
Text=#Version#
MeterStyle=MeterOption1.Feature1.DisplayStyle2

[MeterOption1.Feature1.Display32]
Meter=String
Text=#License#
MeterStyle=MeterOption1.Feature1.DisplayStyle2

[MeterOption1.Feature1.Display42]
Meter=String
Text=#ThanksTo#
MeterStyle=MeterOption1.Feature1.DisplayStyle2




[MeterOption2.Feature1.Display1]
Meter=Image
X=((#BeginX#+574)*#Scale#)
Y=(((#BeginY#+32)+((#GapUnscaled#))*3)*#Scale#)
ImageName=#@#Bitmap\Open.png
MeterStyle=MeterSmallIconStyle
DynamicVariables=1
Hidden=#About.Hidden.1#

[MeterOption3.Feature1.Display1]
Meter=Image
X=((#BeginX#+574)*#Scale#)
Y=(((#BeginY#+32)+((#GapUnscaled#))*4)*#Scale#)
ImageName=#@#Bitmap\Open.png
MeterStyle=MeterSmallIconStyle
DynamicVariables=1
Hidden=#About.Hidden.2#

[MeterOption4.Feature1.Display1]
Meter=Image
X=((#BeginX#+574)*#Scale#)
Y=(((#BeginY#+32)+((#GapUnscaled#))*5)*#Scale#)
ImageName=#@#Bitmap\Open.png
MeterStyle=MeterSmallIconStyle
DynamicVariables=1
Hidden=#About.Hidden.3#

[MeterOption5.Feature1.Display1]
Meter=Image
X=((#BeginX#+574)*#Scale#)
Y=(((#BeginY#+32)+((#GapUnscaled#))*6)*#Scale#)
ImageName=#@#Bitmap\Open.png
MeterStyle=MeterSmallIconStyle
DynamicVariables=1
Hidden=#About.Hidden.4#

[MeterOption6.Feature1.Display1]
Meter=Image
X=((#BeginX#+574)*#Scale#)
Y=(((#BeginY#+32)+((#GapUnscaled#))*7)*#Scale#)
ImageName=#@#Bitmap\Open.png
MeterStyle=MeterSmallIconStyle
DynamicVariables=1
Hidden=#About.Hidden.5#










[MeterRUDEZone]
Meter=Shape
X=(#SXB#*#Scale#)
Y=((#SYB#+50*6)*#Scale#)
Shape=Rectangle 0,0,(332*#Scale#),(44*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color 0,0,0,0 | Stroke Color 0,0,0,0
DynamicVariables=1
MouseOverAction=[!ShowMeter MeterRUDEButtonZone][!Redraw]
MouseLeaveAction=[!HideMeter MeterRUDEButtonZone][!Redraw]
LeftMouseUpAction=[!ShowMeterGroup RUDE][!Redraw]

[MeterRUDEButtonZone]
Meter=Shape
X=(#SXB#*#Scale#)
Y=((#SYB#+50*6)*#Scale#)
Shape=Rectangle 0,0,(332*#Scale#),(44*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_BackgroundSelectedLight# | Stroke Color 0,0,0,0
DynamicVariables=1
Group=RUDE
Hidden=1

[MeterRUDEStyle]
AntiAlias=1
DynamicVariables=1
LeftMouseUpAction=[!ActivateConfig #ROOTCONFIG#\Extras\RUDE]
Hidden=1
Group=RUDE

[MeterRUDEIcon]
Meter=Image
X=((12+#SXB#)*#Scale#)
Y=((10+#SYB#+50*6)*#Scale#)
H=(24*#Scale#)
W=(24*#Scale#)
ImageName=#@#Bitmap\RUDE
ImageTint=255,255,255,128
MeterStyle=MeterRUDEStyle

[MeterRUDETextSmallIcon]
Meter=Image
X=((306+#SXB#)*#Scale#)
Y=((14+#SYB#+50*6)*#Scale#)
ImageName=#@#Bitmap\Open
ImageTint=#FontColor_General#,128
H=(16*#Scale#)
W=(16*#Scale#)
MeterStyle=MeterRUDEStyle

[MeterRUDEText]
Meter=String
Text="ABOUT.INI"
X=((44+#SXB#)*#Scale#)
Y=((22+#SYB#+50*6)*#Scale#)
FontFace=#FontFace_General#
FontColor=#FontColor_General#,128
FontSize=(#FontSize_General#*#Scale#)
StringAlign=LeftCenter
MeterStyle=MeterRUDEStyle