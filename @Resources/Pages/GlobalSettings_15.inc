[Variables]
@include=#@#Pages\GlobalSettings_Global.inc

Grade=1
DisplayPage=4/4
HidePrvsB=0
HideNextB=1

iP_B01S_Swc=EnergySaving
iP_B02S_Swc=EnergySaving
iP_B03S_Swc=EnergySaving
iP_B04S_0_Swc=Global.Blur
iP_B05S_0_Swc=Global.Blur
iP_B06S_0_Swc=Global.Blur
iP_B04S_1_Swc=Global.Blur
iP_B05S_1_Swc=Global.Blur
iP_B06S_1_Swc=Global.Blur
iP_B04S_2_Swc=EnergySaving
iP_B05S_2_Swc=EnergySaving
iP_B06S_2_Swc=Global.Blur

T.Blur.0=#T.OFF#
T.Blur.1=Aero
T.Blur.2=Plugin

T.Blur_Coverage.0=#T.All#
T.Blur_Coverage.1=#T.Panel#

T.Blur_Type.0=Blur
T.Blur_Type.1=Acrylic

T.Blur_Borders.0=#T.None#
T.Blur_Borders.1=All
T.Blur_Borders.2=Round
T.Blur_Borders.3=RoundSmall

;H.[#Blur]X
H.01=1
H.11=0
H.21=1
H.02=1
H.12=1
H.22=0

[MeterTitle]
Text=#T.Experimental_Settings#

[MeterTitleButtonZone]
Meter=Shape
MeterStyle=MeterTitleButtonZoneStyle

[MeterTitleButton]
Meter=Image
MeterStyle=MeterTitleButtonStyle

[MeterTitleButtonSelected]
Meter=Shape
MeterStyle=MeterTitleButtonSelectedStyle

[iP_B00.00]
Meter=Shape
X=(#BeginX#*#Scale#)
Y=(#BeginY#*#Scale#)
Shape=Rectangle 0,0,(605*#Scale#),([iP_B00.02:H]+32*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_R#,32
Shape2=Rectangle 0,0,(605*#Scale#),([iP_B00.02:H]+32*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_R#,64
Shape3=Rectangle (1*#Scale#),(1*#Scale#),((605-2)*#Scale#),([iP_B00.02:H]+(32-2)*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#)
Shape4=Combine Shape2 | Exclude Shape3
DynamicVariables=1

[iP_B00.01]
Meter=Image
ImageName=#@#Bitmap\Warning
X=(16*#Scale#)r
Y=(16*#Scale#)r
W=(20*#Scale#)
H=(20*#Scale#)
ImageTint=(192+64*[mDM]),(64*[mDM]),(64*[mDM])
DynamicVariables=1

[iP_B00.02]
Meter=String
Text=#S.Widgets_Settings.37#
MeterStyle=FontStyle_General
X=(16*#Scale#)R
Y=0r
W=((605-16*2-20-16)*#Scale#)
ClipString=2

[ZB]
X=(#BeginX#*#Scale#)
Y=([iP_B00.00:YH]+5*#Scale#)
[IB]
X=((#BeginX#+24)*#Scale#)
Y=([iP_B00.00:YH]+(28+5)*#Scale#)
[TB]
X=((#BeginX#+68)*#Scale#)
Y=([iP_B00.00:YH]+(40+5)*#Scale#)
[SIBiP]
X=((#BeginX#+605-9-24)*#Scale#)
Y=([iP_B00.00:YH]+(40-9+5)*#Scale#)
[TIB]
X=((#BeginX#+605-200-24)*#Scale#)
Y=([iP_B00.00:YH]+(40-20+5)*#Scale#)
[TIIB]
X=((#BeginX#+605-24-18-8)*#Scale#)
Y=([iP_B00.00:YH]+(40-20+10+5)*#Scale#)
[TITB]
X=((#BeginX#+605-200-16)*#Scale#)
Y=([iP_B00.00:YH]+(40-20+19+5)*#Scale#)
[CMTB]
X=(16*#Scale#)r
Y=(18*#Scale#)r
[SwcBX2]
X=((#BeginX#+300-48-20)*#Scale#)
Y=([iP_B00.00:YH]+(40-24+5)*#Scale#)
[SwcBX1]
X=((#BeginX#+605-48-20)*#Scale#)
Y=([iP_B00.00:YH]+(40-24+5)*#Scale#)


[iP_BO1]
Meter=Shape
MeterStyle=SBW|ZB
[iP_BO2]
Meter=Shape
MeterStyle=SBW|Next
[iP_BO3]
Meter=Shape
MeterStyle=SBW|NextB
[iP_BO4_2]
Meter=Shape
MeterStyle=SBW|Next
Hidden=([#Blur]>0?0:1)
[iP_BO5_2]
Meter=Shape
MeterStyle=SBW|Next
Hidden=([#Blur]>1?0:1)
[iP_BO6_2]
Meter=Shape
MeterStyle=SBW|Next
Hidden=([#Blur]>1?0:1)

[iP_T01]
Meter=String
MeterStyle=MeterOptionTextStyle|WT|TB
Text=#T.Energy-saving_Mode##CRLF##S.Widgets_Settings.Energy-saving_Mode.1#
InlinePattern=#T.Energy-saving_Mode##CRLF#
InlinePattern2=#T.Energy-saving_Mode##CRLF#
W=(454*#Scale#)
[iP_T02]
Meter=String
MeterStyle=MeterOptionTextStyle|WT|Next
Text=#T.Scaling##CRLF##S.Widgets_Settings.Scaling.1##CRLF##S.Widgets_Settings.Scaling.2#
InlinePattern=#T.Scaling##CRLF#
InlinePattern2=#T.Scaling##CRLF#
[iP_T03]
Meter=String
MeterStyle=MeterOptionTextStyleTO|WT|NextB
Text=#T.Mode#
[iP_T04_2]
Meter=String
MeterStyle=MeterOptionTextStyleTO|WT|Next
Text=#T.Type#
Hidden=[#H.[#Blur]2]
[iP_T05_2]
Meter=String
MeterStyle=MeterOptionTextStyleTO|WT|Next
Text=#T.Borders#
Hidden=[#H.[#Blur]2]
[iP_T06_2]
Meter=String
MeterStyle=MeterOptionTextStyle|WT|Next
Text=#T.Global_Blur_Effect##CRLF##S.Widgets_Settings.Global_Blur_Effect.1#
InlinePattern=#T.Global_Blur_Effect##CRLF#
InlinePattern2=#T.Global_Blur_Effect##CRLF#
Hidden=[#H.[#Blur]2]
[iP_T04_1]
Meter=String
X=[iP_T04_2:X]
Y=([iP_T04_2:Y]+11*#Scale#)
MeterStyle=MeterOptionTextStyle|WT
Text=#T.Global_Blur_Effect##CRLF##S.Widgets_Settings.Global_Blur_Effect.1#
InlinePattern=#T.Global_Blur_Effect##CRLF#
InlinePattern2=#T.Global_Blur_Effect##CRLF#
Hidden=[#H.[#Blur]1]

[iP_I01]
Meter=Image
MeterStyle=SIiP|IB
ImageName=#@#Bitmap\Saving
[iP_I02]
Meter=Image
MeterStyle=SIiP|Next
ImageName=#@#Bitmap\Scale
[iP_I03]
Meter=Image
MeterStyle=SIiP|NextB
ImageName=#@#Bitmap\Blur
[iP_I04]
Meter=Image
MeterStyle=SIiP|Next
ImageName=#@#Bitmap\Setting
Hidden=([#Blur]>0?0:1)
[iP_I05]
Meter=Image
MeterStyle=SIiP|Next
ImageName=#@#Bitmap\Setting
Hidden=([#Blur]>1?0:1)
[iP_I06]
Meter=Image
MeterStyle=SIiP|Next
ImageName=#@#Bitmap\Setting
Hidden=([#Blur]>1?0:1)

[iP_B01S]
Meter=Image
MeterStyle=SSwc|SwcBX1
[iP_B02S]
Meter=Image
MeterStyle=SSwc|Next
Hidden=1
[iP_B03S]
Meter=Image
MeterStyle=SSwc|NextB
Hidden=1
[iP_B04S_2]
Meter=Image
MeterStyle=SSwc|Next
Hidden=1
[iP_B05S_2]
Meter=Image
MeterStyle=SSwc|Next
Hidden=1
[iP_B06S_2]
Meter=Image
MeterStyle=SSwc|Next
Hidden=[#H.[#Blur]2]
[iP_B04S_1]
Meter=Image
X=[iP_B04S_2:X]
Y=[iP_B04S_2:Y]
MeterStyle=SSwc
Hidden=[#H.[#Blur]1]

[iP_OI.01]
Meter=Shape
MeterStyle=STI|TIB
Hidden=1
[iP_OI.02]
Meter=Shape
MeterStyle=STI|Next|SOIA_CM
[iP_OI.03]
Meter=Shape
MeterStyle=STI|NextB|SOIA_CM
[iP_OI.04_2]
Meter=Shape
MeterStyle=STI|Next|SOIA_CM
Hidden=[#H.[#Blur]2]
[iP_OI.05_2]
Meter=Shape
MeterStyle=STI|Next|SOIA_CM
Hidden=[#H.[#Blur]2]

[HiP_OI.01]
Meter=Shape
MeterStyle=STIH|TIB
[HiP_OI.02]
Meter=Shape
MeterStyle=STIH|Next
[HiP_OI.03]
Meter=Shape
MeterStyle=STIH|NextB
[HiP_OI.04_2]
Meter=Shape
MeterStyle=STIH|Next
[HiP_OI.05_2]
Meter=Shape
MeterStyle=STIH|Next

[iP_OI.I01]
Meter=Image
MeterStyle=STIIA|TIIB
Hidden=1
[iP_OI.I02]
Meter=Image
MeterStyle=STIIA|Next
[iP_OI.I03]
Meter=Image
MeterStyle=STIIA|NextB
[iP_OI.I04_2]
Meter=Image
MeterStyle=STIIA|Next
Hidden=[#H.[#Blur]2]
[iP_OI.I05_2]
Meter=Image
MeterStyle=STIIA|Next
Hidden=[#H.[#Blur]2]

[iP_OI.T01]
Meter=String
MeterStyle=STIT|TITB
Hidden=1
[iP_OI.T02]
Meter=String
Text=[#Scale_Actual]x
MeterStyle=STIT|Next
[iP_OI.T03]
Meter=String
Text=[#T.Blur.[#Blur]]
MeterStyle=STIT|NextB
[iP_OI.T04_2]
Meter=String
Text=[#T.Blur_Type.[#Blur_Type]]
MeterStyle=STIT|Next
Hidden=[#H.[#Blur]2]
[iP_OI.T05_2]
Meter=String
Text=[#T.Blur_Borders.[#Blur_Borders]]
MeterStyle=STIT|Next
Hidden=[#H.[#Blur]2]

[iP_ST1]
Meter=String
MeterStyle=FontStyle_General|SST
Y=([iP_BO2:YH]+30*#Scale#)
Text=#T.Blur_Settings#
MeasureName=iP_ST1M


[GiP_OI.02.00]
Group=GiP_OI.02
Hidden=1

[iP_OIS.02.00.00]
Meter=Shape
X=[iP_OI.02:X]
Y=([iP_OI.02:Y]-40*#Scale#*(#Scale_Actual#=1?0:(#Scale_Actual#=1.25?1:(#Scale_Actual#=1.5?2:(#Scale_Actual#=2?3:4)))))
Shape=Rectangle 0,0,(200*#Scale#),(40*5*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_TextInputer#
Shape2=Rectangle 0,0,(200*#Scale#),(40*5*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape3=Rectangle (1*#Scale#),(1*#Scale#),(198*#Scale#),((40*5-2)*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape4=Combine Shape2 | Exclude Shape3
DynamicVariables=1
MeterStyle=GiP_OI.02.00
MouseLeaveAction=[!HideMeterGroup GiP_OI.02][!Redraw]

[iP_OIS.02.00.01]
Meter=String
Text=1x
MeterStyle=SCMT|CMTB|GiP_OI.02.00
LeftMouseUpAction=[!WriteKeyValue Variables ReadyScale 1][!Refresh][!Delay 16][!ShowMeterGroup GiP_OI.02.01][!Update][!Update][!Redraw]
[iP_OIS.02.00.02]
Meter=String
Text=1.25x
MeterStyle=SCMT|NextT|GiP_OI.02.00
LeftMouseUpAction=[!WriteKeyValue Variables ReadyScale 1.25][!Refresh][!Delay 16][!ShowMeterGroup GiP_OI.02.01][!Update][!Update][!Redraw]
[iP_OIS.02.00.03]
Meter=String
Text=1.5x
MeterStyle=SCMT|NextT|GiP_OI.02.00
LeftMouseUpAction=[!WriteKeyValue Variables ReadyScale 1.5][!Refresh][!Delay 16][!ShowMeterGroup GiP_OI.02.01][!Update][!Update][!Redraw]
[iP_OIS.02.00.04]
Meter=String
Text=2x
MeterStyle=SCMT|NextT|GiP_OI.02.00
LeftMouseUpAction=[!WriteKeyValue Variables ReadyScale 2][!Refresh][!Delay 16][!ShowMeterGroup GiP_OI.02.01][!Update][!Update][!Redraw]
[iP_OIS.02.00.05]
Meter=String
Text=#T.Customize#...
MeterStyle=SCMT|NextT|GiP_OI.02.00
LeftMouseUpAction=[!CommandMeasure TIiP_OI.02 "ExecuteBatch 1" ][!ShowMeter CiP_OI.02][!HideMeterGroup GiP_OI.02][!Redraw]

[iP_OIS.02.00.M]
Meter=Shape
X=[iP_OI.02:X]
Y=[iP_OI.02:Y]
MeterStyle=SCMM|GiP_OI.02.00



[GiP_OI.02.01]
Group=GiP_OI.02.01
Hidden=1

[iP_OI.02.01.00]
Meter=Shape
X=([iP_BO2:XW]-(320+16*2)*#Scale#)
Y=[iP_BO2:Y]
Shape=Rectangle 0,0,((320+16*2)*#Scale#),([iP_OI.02.01.01:H]+[iP_OI.02.01.02.00:H]+[iP_OI.02.01.02.05.00:H]+(16*2+8)*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_TextInputer#
Shape2=Rectangle 0,0,((320+16*2)*#Scale#),([iP_OI.02.01.01:H]+[iP_OI.02.01.02.00:H]+[iP_OI.02.01.02.05.00:H]+(16*2+8)*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape3=Rectangle (1*#Scale#),(1*#Scale#),(((320+16*2)-2)*#Scale#),([iP_OI.02.01.01:H]+[iP_OI.02.01.02.00:H]+[iP_OI.02.01.02.05.00:H]+(16*2+8-2)*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape4=Combine Shape2 | Exclude Shape3
DynamicVariables=1
MeterStyle=GiP_OI.02.01

[iP_OI.02.01.01M]
Measure=Calc
Formula=(#ReadyScale#>#Scale_Actual#)?0:1
Substitute="0":"#T.be_zoomed#","1":"#T.be_scaled_down#"
[iP_OI.02.01.01]
Meter=String
Text=#S.Widgets_Settings.5#
MeterStyle=FontStyle_General|GiP_OI.02.01
X=(16*#Scale#)r
Y=(16*#Scale#)r
W=(320*#Scale#)
ClipString=2

[iP_OI.02.01.02.00]
Meter=Shape
X=0r
Y=(8*#Scale#)R
Shape=Rectangle 0,0,(320*#Scale#),(180*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape2=Rectangle (1*#Scale#),(1*#Scale#),((320-2)*#Scale#),((180-2)*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape3=Combine Shape | Exclude Shape2
DynamicVariables=1
MeterStyle=GiP_OI.02.01
[iP_OI.02.01.02.01]
Meter=Shape
X=0r
Y=0r
Shape=Rectangle 0,0,(320*#Scale#),(180*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0
DynamicVariables=1
MeterStyle=GiP_OI.02.01
[iP_OI.02.01.02.02]
Meter=Image
ImageName=#@#Bitmap\Default Wallpaper
ImageTint=#ThemeColor_General#
W=(320*#Scale#)
H=(180*#Scale#)
DynamicVariables=1
Container=iP_OI.02.01.02.01
[iP_OI.02.01.02.03M]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=Control Panel\Desktop
RegValue=WallPaper
[iP_OI.02.01.02.03]
Meter=Image
MeasureName=#CURRENTSECTION#M
W=(320*#Scale#)
H=(180*#Scale#)
PreserveAspectRatio=2
DynamicVariables=1
Container=iP_OI.02.01.02.01
[iP_OI.02.01.02.04.S01]
X=(8*#Scale#)
Y=(8*#Scale#)
H=(256*#Scale#**2/#SCREENAREAHEIGHT#*512)
PreserveAspectRatio=1
DynamicVariables=1
Container=iP_OI.02.01.02.01
[iP_OI.02.01.02.04.00]
Meter=Shape
Shape=Rectangle (-1*#Scale#),(-1*#Scale#),(256*#Scale#**2/#SCREENAREAHEIGHT#*512*#ReadyScale#/#Scale_Actual#+1*#Scale#),(256*#Scale#**2/#SCREENAREAHEIGHT#*512*#ReadyScale#/#Scale_Actual#+1*#Scale#) | StrokeWidth (2*#Scale#) | Stroke Color #ThemeColor_General#,(255*((#ReadyScale#>#Scale_Actual#)?1:0)) | Fill Color #ThemeColor_General#,(64*((#ReadyScale#>#Scale_Actual#)?1:0))
MeterStyle=GiP_OI.02.01|iP_OI.02.01.02.04.S01
[iP_OI.02.01.02.04.01]
Meter=Image
ImageName=#@#Bitmap\Scaling Preview 0
ImageTint=#ThemeColor_Background#
MeterStyle=GiP_OI.02.01|iP_OI.02.01.02.04.S01
[iP_OI.02.01.02.04.02]
Meter=Image
ImageName=#@#Bitmap\Scaling Preview 1
ImageTint=#FontColor_General#
MeterStyle=GiP_OI.02.01|iP_OI.02.01.02.04.S01
[iP_OI.02.01.02.04.03]
Meter=Image
ImageName=#@#Bitmap\Scaling Preview 2
ImageTint=#ThemeColor_General#
MeterStyle=GiP_OI.02.01|iP_OI.02.01.02.04.S01
[iP_OI.02.01.02.04.04]
Meter=Shape
Shape=Rectangle (-1*#Scale#),(-1*#Scale#),(256*#Scale#**2/#SCREENAREAHEIGHT#*512*#ReadyScale#/#Scale_Actual#+1*#Scale#),(256*#Scale#**2/#SCREENAREAHEIGHT#*512*#ReadyScale#/#Scale_Actual#+1*#Scale#) | StrokeWidth (2*#Scale#) | Stroke Color #ThemeColor_General#,(255*((#ReadyScale#>#Scale_Actual#)?0:1)) | Fill Color #ThemeColor_General#,(64*((#ReadyScale#>#Scale_Actual#)?0:1))
MeterStyle=GiP_OI.02.01|iP_OI.02.01.02.04.S01
[iP_OI.02.01.02.05.00]
Meter=Shape
X=([iP_OI.02.01.00:X])
Y=([iP_OI.02.01.02.01:YH]+16*#Scale#)
Shape=Rectangle 0,0,([iP_OI.02.01.00:W]),((40+16*2)*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_Bar#
Shape2=Rectangle 0,0,([iP_OI.02.01.00:W]),(4*#Scale#)
Shape3=Combine Shape | Union Shape2
Shape4=Rectangle 0,0,([iP_OI.02.01.00:W]),(1*#Scale#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
DynamicVariables=1
MeterStyle=GiP_OI.02.01
LeftMouseUpAction=[!WriteKeyValue Variables "UndoScale" "#Scale_Actual#"][!WriteKeyValue Variables "Scale_Actual" "#ReadyScale#" "#@#Settings.inc"][!RefreshApp][!Delay 16][!ShowMeterGroup GiP_OI.02.02][!Update][!Update][!Redraw]
[iP_OI.02.01.02.05.01.00]
Meter=Shape
X=([iP_OI.02.01.02.05.00:X]+16*#Scale#)
Y=([iP_OI.02.01.02.05.00:Y]+16*#Scale#)
Shape=Rectangle 0,0,(156*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_TextInputerAlpha#
Shape2=Rectangle 0,0,(156*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape3=Rectangle (1*#Scale#),(1*#Scale#),((156-2)*#Scale#),(38*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape4=Combine Shape2 | Exclude Shape3
MeterStyle=GiP_OI.02.01|STI
LeftMouseUpAction=[!HideMeterGroup GiP_OI.02.01][!Redraw]
[iP_OI.02.01.02.05.02.00]
Meter=Shape
X=((160+4)*#Scale#)r
Y=0r
Shape=Rectangle 0,0,(156*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_TextInputerAlpha#
Shape2=Rectangle 0,0,(156*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape3=Rectangle (1*#Scale#),(1*#Scale#),((156-2)*#Scale#),(38*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape4=Combine Shape2 | Exclude Shape3
MeterStyle=GiP_OI.02.01|STI
[HiP_OI.02.01.02.05.01.00]
Meter=Shape
X=([iP_OI.02.01.02.05.01.00:X])
Y=([iP_OI.02.01.02.05.01.00:Y])
Shape=Rectangle 0,0,(156*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BackgroundSelectedLight#
MeterStyle=STIH
[HiP_OI.02.01.02.05.02.00]
Meter=Shape
X=((160+4)*#Scale#)r
Y=0r
Shape=Rectangle 0,0,(156*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BackgroundSelectedLight#
MeterStyle=STIH
[iP_OI.02.01.02.05.01.01]
Meter=String
Text=#T.Cancel#
MeterStyle=FontStyle_General|GiP_OI.02.01
X=([iP_OI.02.01.02.05.01.00:X]+[iP_OI.02.01.02.05.01.00:W]/2)
Y=([iP_OI.02.01.02.05.01.00:Y]+[iP_OI.02.01.02.05.01.00:H]/2)
StringAlign=CenterCenter
[iP_OI.02.01.02.05.02.01]
Meter=String
Text=#T.Yes#
MeterStyle=FontStyle_General|GiP_OI.02.01
X=([iP_OI.02.01.02.05.02.00:X]+[iP_OI.02.01.02.05.02.00:W]/2)
Y=([iP_OI.02.01.02.05.02.00:Y]+[iP_OI.02.01.02.05.02.00:H]/2)
StringAlign=CenterCenter

[GiP_OI.02.02]
Group=GiP_OI.02.02
Hidden=1
[iP_OI.02.02.00]
Meter=Shape
X=(12*#UndoScale#/1.25)
Y=(12*#UndoScale#/1.25)
Shape=Rectangle 0,0,((320+16*2)*#UndoScale#/1.25),([iP_OI.02.02.02.00:H]+(16*2+44)*#UndoScale#/1.25),(4*#UndoScale#/1.25*#Arched#),(4*#UndoScale#/1.25*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_TextInputer#
Shape2=Rectangle 0,0,((320+16*2)*#UndoScale#/1.25),([iP_OI.02.02.02.00:H]+(16*2+44)*#UndoScale#/1.25),(4*#UndoScale#/1.25*#Arched#),(4*#UndoScale#/1.25*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape3=Rectangle (1*#UndoScale#/1.25),(1*#UndoScale#/1.25),((320+16*2-2)*#UndoScale#/1.25),([iP_OI.02.02.02.00:H]+(16*2+44-2)*#UndoScale#/1.25),(3*#UndoScale#/1.25*#Arched#),(3*#UndoScale#/1.25*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape4=Combine Shape2 | Exclude Shape3
DynamicVariables=1
MeterStyle=GiP_OI.02.02
[iP_OI.02.02.01]
Meter=String
MeterStyle=FontStyle_General|GiP_OI.02.02
Text=#S.Widgets_Settings.22#
FontSize=(12*#UndoScale#/1.25)
X=(16*#UndoScale#/1.25)r
Y=(16*#UndoScale#/1.25)r
W=(320*#UndoScale#/1.25)
ClipString=2
[iP_OI.02.02.02.00]
Meter=Shape
X=([iP_OI.02.02.00:X])
Y=([iP_OI.02.02.01:YH]+16*#UndoScale#/1.25)
Shape=Rectangle 0,0,([iP_OI.02.02.00:W]),((40+16*2)*#UndoScale#/1.25),(4*#UndoScale#/1.25*#Arched#),(4*#UndoScale#/1.25*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_Bar#
Shape2=Rectangle 0,0,([iP_OI.02.02.00:W]),(4*#UndoScale#/1.25)
Shape3=Combine Shape | Union Shape2
Shape4=Rectangle 0,0,([iP_OI.02.02.00:W]),(1*#UndoScale#/1.25) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
DynamicVariables=1
MeterStyle=GiP_OI.02.02
[iP_OI.02.02.02.01.00]
Meter=Shape
X=([iP_OI.02.02.02.00:X]+16*#UndoScale#/1.25)
Y=([iP_OI.02.02.02.00:Y]+16*#UndoScale#/1.25)
Shape=Rectangle 0,0,(156*#UndoScale#/1.25),(40*#UndoScale#/1.25),(4*#UndoScale#/1.25*#Arched#),(4*#UndoScale#/1.25*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_TextInputerAlpha#
Shape2=Rectangle 0,0,(156*#UndoScale#/1.25),(40*#UndoScale#/1.25),(4*#UndoScale#/1.25*#Arched#),(4*#UndoScale#/1.25*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape3=Rectangle (1*#UndoScale#/1.25),(1*#UndoScale#/1.25),((156-2)*#UndoScale#/1.25),(38*#UndoScale#/1.25),(3*#UndoScale#/1.25*#Arched#),(3*#UndoScale#/1.25*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape4=Combine Shape2 | Exclude Shape3
MeterStyle=GiP_OI.02.02|STI
LeftMouseUpAction=[!WriteKeyValue Variables "Scale_Actual" "#UndoScale#" "#@#Settings.inc"][!RefreshApp]
[iP_OI.02.02.02.02.00]
Meter=Shape
X=((160+4)*#UndoScale#/1.25)r
Y=0r
Shape=Rectangle 0,0,(156*#UndoScale#/1.25),(40*#UndoScale#/1.25),(4*#UndoScale#/1.25*#Arched#),(4*#UndoScale#/1.25*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_TextInputerAlpha#
Shape2=Rectangle 0,0,(156*#UndoScale#/1.25),(40*#UndoScale#/1.25),(4*#UndoScale#/1.25*#Arched#),(4*#UndoScale#/1.25*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape3=Rectangle (1*#UndoScale#/1.25),(1*#UndoScale#/1.25),((156-2)*#UndoScale#/1.25),(38*#UndoScale#/1.25),(3*#UndoScale#/1.25*#Arched#),(3*#UndoScale#/1.25*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape4=Combine Shape2 | Exclude Shape3
MeterStyle=GiP_OI.02.02|STI
LeftMouseUpAction=[!HideMeterGroup GiP_OI.02.02][!Redraw]
[HiP_OI.02.02.02.01.00]
Meter=Shape
X=([iP_OI.02.02.02.01.00:X])
Y=([iP_OI.02.02.02.01.00:Y])
Shape=Rectangle 0,0,(156*#UndoScale#/1.25),(40*#UndoScale#/1.25),(4*#UndoScale#/1.25*#Arched#),(4*#UndoScale#/1.25*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BackgroundSelectedLight#
MeterStyle=STIH
[HiP_OI.02.02.02.02.00]
Meter=Shape
X=((160+4)*#UndoScale#/1.25)r
Y=0r
Shape=Rectangle 0,0,(156*#UndoScale#/1.25),(40*#UndoScale#/1.25),(4*#UndoScale#/1.25*#Arched#),(4*#UndoScale#/1.25*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BackgroundSelectedLight#
MeterStyle=STIH
[iP_OI.02.02.02.01.01]
Meter=String
Text=#T.Undo#
MeterStyle=FontStyle_General|GiP_OI.02.02
FontSize=(12*#UndoScale#/1.25)
X=([iP_OI.02.02.02.01.00:X]+[iP_OI.02.02.02.01.00:W]/2)
Y=([iP_OI.02.02.02.01.00:Y]+[iP_OI.02.02.02.01.00:H]/2)
StringAlign=CenterCenter
[iP_OI.02.02.02.02.01]
Meter=String
Text=#T.Keep_my_setting#
MeterStyle=FontStyle_General|GiP_OI.02.02
FontSize=(12*#UndoScale#/1.25)
X=((160+4)*#UndoScale#/1.25)r
Y=0r
StringAlign=CenterCenter


[TIiP_OI.02]
Measure=Plugin
Plugin=InputText
X=([iP_OI.02:X]+4*#Scale#)
Y=([iP_OI.02:Y]+10*#Scale#)
W=((200-8)*#Scale#)
H=(20*#Scale#)
SolidColor=#ThemeColor_TextInputer#
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(8*#Scale#)
AntiAlias=1
FocusDismiss=1
DefaultValue=[#Scale_Actual]
Command1=[!WriteKeyValue Variables "ReadyScale" "$UserInput$"][!Refresh][!Delay 16][!ShowMeterGroup GiP_OI.02.01][!Update][!Update][!Redraw]
OnDismissAction=[!HideMeter CiP_OI.02][!Redraw]
DynamicVariables=1
InputNumber=1

[GiP_OI.03]
Group=GiP_OI.03
Hidden=1
[iP_OIS.03.00]
Meter=Shape
X=[iP_OI.03:X]
Y=([iP_OI.03:Y]-40*#Scale#*[#Blur])
Shape=Rectangle 0,0,(200*#Scale#),(40*3*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_TextInputer#
Shape2=Rectangle 0,0,(200*#Scale#),(40*3*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape3=Rectangle (1*#Scale#),(1*#Scale#),(198*#Scale#),((40*3-2)*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape4=Combine Shape2 | Exclude Shape3
DynamicVariables=1
MeterStyle=GiP_OI.03
MouseLeaveAction=[!HideMeterGroup GiP_OI.03][!Redraw]
[iP_OIS.03.01]
Meter=String
Text=#T.OFF#
ToolTipText=#T.OFF#
MeterStyle=SCMT|CMTB|GiP_OI.03
LeftMouseUpAction=[!WriteKeyValue Variables Blur 0 "#@#Settings.inc"][!RefreshApp]
[iP_OIS.03.02M]
Measure=String
String=Win7
[iP_OIS.03.02]
Meter=String
Text=Aero (#T.1_Only#)
ToolTipText=Aero (#T.1_Only#)
MeasureName=#CURRENTSECTION#M
MeterStyle=SCMT|NextT|GiP_OI.03
LeftMouseUpAction=[!WriteKeyValue Variables Blur 1 "#@#Settings.inc"][!RefreshApp]
[iP_OIS.03.03M]
Measure=String
String=Win10/11
[iP_OIS.03.03]
Meter=String
Text=Plugin (#T.1_Only#)
ToolTipText=Plugin (#T.1_Only#)
MeasureName=#CURRENTSECTION#M
MeterStyle=SCMT|NextT|GiP_OI.03
LeftMouseUpAction=[!WriteKeyValue Variables Blur 2 "#@#Settings.inc"][!RefreshApp]
[iP_OIS.03.M]
Meter=Shape
X=[iP_OI.03:X]
Y=[iP_OI.03:Y]
MeterStyle=SCMM|GiP_OI.03

[GiP_OI.04_2]
Group=GiP_OI.04_2
Hidden=1
[iP_OIS.04_2.00]
Meter=Shape
X=[iP_OI.04_2:X]
Y=([iP_OI.04_2:Y]-40*#Scale#*[#Blur_Type])
Shape=Rectangle 0,0,(200*#Scale#),(40*2*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_TextInputer#
Shape2=Rectangle 0,0,(200*#Scale#),(40*2*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape3=Rectangle (1*#Scale#),(1*#Scale#),(198*#Scale#),((40*2-2)*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape4=Combine Shape2 | Exclude Shape3
DynamicVariables=1
MeterStyle=GiP_OI.04_2
MouseLeaveAction=[!HideMeterGroup GiP_OI.04_2][!Redraw]
[iP_OIS.04_2.01M]
Measure=String
String=Win10
[iP_OIS.04_2.01]
Meter=String
Text=Blur (#T.1_Only#)
ToolTipText=Blur (#T.1_Only#)
MeasureName=#CURRENTSECTION#M
MeterStyle=SCMT|CMTB|GiP_OI.04_2
LeftMouseUpAction=[!WriteKeyValue Variables Blur_Type 0 "#@#Settings.inc"][!RefreshApp]
[iP_OIS.04_2.02]
Meter=String
Text=Acrylic
ToolTipText=Acrylic
MeterStyle=SCMT|NextT|GiP_OI.04_2
LeftMouseUpAction=[!WriteKeyValue Variables Blur_Type 1 "#@#Settings.inc"][!RefreshApp]
[iP_OIS.04_2.M]
Meter=Shape
X=[iP_OI.04_2:X]
Y=[iP_OI.04_2:Y]
MeterStyle=SCMM|GiP_OI.04_2

[GiP_OI.05_2]
Group=GiP_OI.05_2
Hidden=1
[iP_OIS.05_2.00]
Meter=Shape
X=[iP_OI.05_2:X]
Y=([iP_OI.05_2:Y]-40*#Scale#*[#Blur_Borders])
Shape=Rectangle 0,0,(200*#Scale#),(40*4*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_TextInputer#
Shape2=Rectangle 0,0,(200*#Scale#),(40*4*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape3=Rectangle (1*#Scale#),(1*#Scale#),(198*#Scale#),((40*4-2)*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape4=Combine Shape2 | Exclude Shape3
DynamicVariables=1
MeterStyle=GiP_OI.05_2
MouseLeaveAction=[!HideMeterGroup GiP_OI.05_2][!Redraw]
[iP_OIS.05_2.01]
Meter=String
Text=#T.None#
ToolTipText=#T.None#
MeasureName=#CURRENTSECTION#M
MeterStyle=SCMT|CMTB|GiP_OI.05_2
LeftMouseUpAction=[!WriteKeyValue Variables Blur_Borders 0 "#@#Settings.inc"][!RefreshApp]
[iP_OIS.05_2.02M]
Measure=String
String=Win10
[iP_OIS.05_2.02]
Meter=String
Text=All (#T.1_Only#)
ToolTipText=All (#T.1_Only#)
MeasureName=#CURRENTSECTION#M
MeterStyle=SCMT|NextT|GiP_OI.05_2
LeftMouseUpAction=[!WriteKeyValue Variables Blur_Borders 1 "#@#Settings.inc"][!RefreshApp]
[iP_OIS.05_2.03M]
Measure=String
String=Win11
[iP_OIS.05_2.03]
Meter=String
Text=Round (10px) (#T.1_Only#)
ToolTipText=Round (10px) (#T.1_Only#)
MeasureName=#CURRENTSECTION#M
MeterStyle=SCMT|NextT|GiP_OI.05_2
LeftMouseUpAction=[!WriteKeyValue Variables Blur_Borders 2 "#@#Settings.inc"][!RefreshApp]
[iP_OIS.05_2.04M]
Measure=String
String=Win11
[iP_OIS.05_2.04]
Meter=String
Text=RoundSmall (4px) (#T.1_Only#)
ToolTipText=RoundSmall (4px) (#T.1_Only#)
MeasureName=#CURRENTSECTION#M
MeterStyle=SCMT|NextT|GiP_OI.05_2
LeftMouseUpAction=[!WriteKeyValue Variables Blur_Borders 3 "#@#Settings.inc"][!RefreshApp]
[iP_OIS.05_2.M]
Meter=Shape
X=[iP_OI.05_2:X]
Y=[iP_OI.05_2:Y]
MeterStyle=SCMM|GiP_OI.05_2

[CiP_OI.01]
Meter=Shape
MeterStyle=STIC|TIB
[CiP_OI.02]
Meter=Shape
MeterStyle=STIC|Next

@include2=#@#Pages\GlobalSettings_Global_Extras.inc
