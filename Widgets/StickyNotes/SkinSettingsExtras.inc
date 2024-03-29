[Variables]
CM_1.Y=3
CM_1.Q=2
CM_1.V=Color

[CM_1.S]
Hidden=1
Group=MSSSSO3CM
DynamicVariables=1

[CM_1.0]
MeterStyle=CM_1.S
Meter=Shape
X=#CM_X#
Y=(#CM_1.Y#*#CM_Y#)
Shape=Rectangle (1*#Scale#),0,((256-2)*#Scale#),(64*#Scale#) | StrokeWidth 0 | Fill Color #ThemeColor_TextInputer#
Shape2=Rectangle (1*#Scale#),(-2*#Scale#),((256-2)*#Scale#),(2*#Scale#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape3=Rectangle (1*#Scale#),(31*#Scale#),((256-2)*#Scale#),(1*#Scale#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape4=Rectangle (1*#Scale#),(64*#Scale#),((256-2)*#Scale#),(2*#Scale#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
MouseLeaveAction=[!HideMeterGroup MSSSSO3CM][!Redraw]

[NextO]
X=(32*#Scale#)r
Y=0r
[MSS.S.CMIB]
X=[CM_1.0:X]
Y=([CM_1.0:Y]+32*#Scale#)
[MSS.SC_0]
MouseOverAction=[!ShowMeter H#CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!HideMeter H#CURRENTSECTION#][!Redraw]

[CM_1.1]
MeterStyle=CM_1.S||MSS.S.CMIB|MSS.SC_0
Meter=Shape
Shape=Rectangle 0,0,(32*#Scale#),(32*#Scale#) | StrokeWidth 0 | Fill Color 0,0,0,0
Shape2=Ellipse (16*#Scale#),(16*#Scale#),(10*#Scale#) | StrokeWidth 0 | Fill Color #FontColor_General#,64
Shape3=Ellipse (16*#Scale#),(16*#Scale#),(8*#Scale#)
Shape4=Rectangle (6*#Scale#),(15*#Scale#),(20*#Scale#),(2*#Scale#) | Rotate 45
Shape5=Combine Shape2 | Exclude Shape3 | Union Shape4
LeftMouseUpAction=#CM_A1# "#CM_1.V#" "0" #CM_A2#
[CM_1.2]
MeterStyle=CM_1.S||NextO|MSS.SC_0
Meter=Shape
Shape=Rectangle 0,0,(32*#Scale#),(32*#Scale#) | StrokeWidth 0 | Fill Color [#ColorTBar_[&mDM]_1]
LeftMouseUpAction=#CM_A1# "#CM_1.V#" "1" #CM_A2#
[CM_1.3]
MeterStyle=CM_1.S||NextO|MSS.SC_0
Meter=Shape
Shape=Rectangle 0,0,(32*#Scale#),(32*#Scale#) | StrokeWidth 0 | Fill Color [#ColorTBar_[&mDM]_2]
LeftMouseUpAction=#CM_A1# "#CM_1.V#" "2" #CM_A2#
[CM_1.4]
MeterStyle=CM_1.S||NextO|MSS.SC_0
Meter=Shape
Shape=Rectangle 0,0,(32*#Scale#),(32*#Scale#) | StrokeWidth 0 | Fill Color [#ColorTBar_[&mDM]_3]
LeftMouseUpAction=#CM_A1# "#CM_1.V#" "3" #CM_A2#
[CM_1.5]
MeterStyle=CM_1.S||NextO|MSS.SC_0
Meter=Shape
Shape=Rectangle 0,0,(32*#Scale#),(32*#Scale#) | StrokeWidth 0 | Fill Color [#ColorTBar_[&mDM]_4]
LeftMouseUpAction=#CM_A1# "#CM_1.V#" "4" #CM_A2#
[CM_1.6]
MeterStyle=CM_1.S||NextO|MSS.SC_0
Meter=Shape
Shape=Rectangle 0,0,(32*#Scale#),(32*#Scale#) | StrokeWidth 0 | Fill Color [#ColorTBar_[&mDM]_5]
LeftMouseUpAction=#CM_A1# "#CM_1.V#" "5" #CM_A2#
[CM_1.7]
MeterStyle=CM_1.S||NextO|MSS.SC_0
Meter=Shape
Shape=Rectangle 0,0,(32*#Scale#),(32*#Scale#) | StrokeWidth 0 | Fill Color [#ColorTBar_[&mDM]_6]
LeftMouseUpAction=#CM_A1# "#CM_1.V#" "6" #CM_A2#
[CM_1.8]
MeterStyle=CM_1.S||NextO|MSS.SC_0
Meter=Shape
Shape=Rectangle 0,0,(32*#Scale#),(32*#Scale#) | StrokeWidth 0 | Fill Color [#ColorTBar_[&mDM]_7]
LeftMouseUpAction=#CM_A1# "#CM_1.V#" "7" #CM_A2#

[HCM_1.1]
Meter=Shape
MeterStyle=MSS.S.CMIB
Shape=Rectangle (1*#Scale#),(1*#Scale#),(30*#Scale#),(30*#Scale#) | StrokeWidth (2*#Scale#) | Fill Color 0,0,0,0 | Stroke Color #FontColor_General#
Hidden=1
[HCM_1.2]
Meter=Shape
MeterStyle=NextO
Shape=Rectangle (1*#Scale#),(1*#Scale#),(30*#Scale#),(30*#Scale#) | StrokeWidth (2*#Scale#) | Fill Color 0,0,0,0 | Stroke Color #FontColor_General#
Hidden=1
[HCM_1.3]
Meter=Shape
MeterStyle=NextO
Shape=Rectangle (1*#Scale#),(1*#Scale#),(30*#Scale#),(30*#Scale#) | StrokeWidth (2*#Scale#) | Fill Color 0,0,0,0 | Stroke Color #FontColor_General#
Hidden=1
[HCM_1.4]
Meter=Shape
MeterStyle=NextO
Shape=Rectangle (1*#Scale#),(1*#Scale#),(30*#Scale#),(30*#Scale#) | StrokeWidth (2*#Scale#) | Fill Color 0,0,0,0 | Stroke Color #FontColor_General#
Hidden=1
[HCM_1.5]
Meter=Shape
MeterStyle=NextO
Shape=Rectangle (1*#Scale#),(1*#Scale#),(30*#Scale#),(30*#Scale#) | StrokeWidth (2*#Scale#) | Fill Color 0,0,0,0 | Stroke Color #FontColor_General#
Hidden=1
[HCM_1.6]
Meter=Shape
MeterStyle=NextO
Shape=Rectangle (1*#Scale#),(1*#Scale#),(30*#Scale#),(30*#Scale#) | StrokeWidth (2*#Scale#) | Fill Color 0,0,0,0 | Stroke Color #FontColor_General#
Hidden=1
[HCM_1.7]
Meter=Shape
MeterStyle=NextO
Shape=Rectangle (1*#Scale#),(1*#Scale#),(30*#Scale#),(30*#Scale#) | StrokeWidth (2*#Scale#) | Fill Color 0,0,0,0 | Stroke Color #FontColor_General#
Hidden=1
[HCM_1.8]
Meter=Shape
MeterStyle=NextO
Shape=Rectangle (1*#Scale#),(1*#Scale#),(30*#Scale#),(30*#Scale#) | StrokeWidth (2*#Scale#) | Fill Color 0,0,0,0 | Stroke Color #FontColor_General#
Hidden=1


[HCM_1.T]
Meter=String
MeterStyle=CM_1.S|FontStyle_General
X=([CM_1.0:X]+8*#Scale#)
Y=([CM_1.0:Y]+16*#Scale#)
Text=[#MSSSSO3N]
FontSize=(9*#Scale#)
StringAlign=LeftCenter
W=(180*#Scale#)
ClipString=1

[HCM_1.D]
Meter=String
MeterStyle=CM_1.S|FontStyle_General
X=([CM_1.0:XW]-31*#Scale#)
Y=([CM_1.0:Y]+16*#Scale#)
Text=[#MSSSSO3D]
FontSize=(9*#Scale#)
StringAlign=RightCenter
W=(180*#Scale#)
ClipString=1
FontColor=#FontColor_General#,128

[HCM_1.SI]
Meter=Image
MeterStyle=CM_1.S
X=([CM_1.0:XW]+(-31+8)*#Scale#)
Y=([CM_1.0:Y]+8*#Scale#)
W=(16*#Scale#)
H=(16*#Scale#)
DynamicVariables=1
ImageTint=#FontColor_General#
ImageName=#@#Bitmap\Arrow Up
LeftMouseUpAction=[!HideMeterGroup MSSSSO3CM][!Redraw]

[CM_1.I]
MeterStyle=CM_1.S
Meter=Shape
X=([CM_1.0:X]+[#[#CM_1.V]]*32*#Scale#)
Y=([CM_1.0:Y]+32*#Scale#)
Shape=Rectangle 0,0,(32*#Scale#),(32*#Scale#) | StrokeWidth 0 | Fill Color #FontColor_General#,64
Shape2=Rectangle (1*#Scale#),(1*#Scale#),(30*#Scale#),(30*#Scale#)
Shape3=Combine Shape | Exclude Shape2
DynamicVariables=1