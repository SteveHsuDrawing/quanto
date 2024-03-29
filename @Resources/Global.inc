[mUserName]
Measure=Plugin
Plugin=SysInfo
SysInfoType=USER_NAME
UpdateDivider=-1

[mSystem]
Measure=Plugin
Plugin=SysInfo
SysInfoType=OS_VERSION
UpdateDivider=-1
Substitute="Windows ":""

[Variables]
AO_Inf..Name=
AO_Inf..Description=
AO_Inf..Version=
AO_Inf..Author=
AO_Inf..License=
AO_Inf..ApplyTo=

State=1
System=11

Default_11.UserImage=%HOMEDRIVE%\Users\[mUserName]\AppData\Local\Microsoft\Windows\AccountPicture\UserImage.jpg
Default_10.UserImage=%HOMEDRIVE%\Users\[mUserName]\AppData\Roaming\Microsoft\Windows\AccountPicture\UserImage.jpg
Default_8.1.UserImage=%HOMEDRIVE%\Users\[mUserName]\AppData\Local\Temp\[mUserName].bmp
Default_8.UserImage=%HOMEDRIVE%\Users\[mUserName]\AppData\Roaming\Microsoft\Windows\AccountPicture\UserImage.jpg
Default_7.UserImage=%HOMEDRIVE%\Users\[mUserName]\AppData\Local\Temp\[mUserName].bmp

Default_7.Fix=0
Default_8.Fix=0
Default_8.1.Fix=0
Default_10.Fix=1
Default_11.Fix=0

Default_7.Blur=1
Default_8.Blur=0
Default_8.1.Blur=0
Default_10.Blur=2
Default_11.Blur=2

Default_7.Blur_Type=1
Default_8.Blur_Type=0
Default_8.1.Blur_Type=0
Default_10.Blur_Type=2
Default_11.Blur_Type=2

Default_7.Blur_Borders=0
Default_8.Blur_Borders=0
Default_8.1.Blur_Borders=0
Default_10.Blur_Borders=0
Default_11.Blur_Borders=2

Blur.0.Texture_0=0
Blur.0.Texture_1=0
Blur.1.Texture_0=2
Blur.1.Texture_1=1
Blur.2.Texture_0=0
Blur.2.Texture_1=0
Blur.0.Coverage_0=0
Blur.0.Coverage_1=0
Blur.1.Coverage_0=1
Blur.1.Coverage_1=2,(#Spacing#*#Scale#),(#Spacing#*#Scale#),((64*#SkinW#+2*(#Spacing#-2))*#Scale#),((64*#SkinH#+2*(#Spacing#-2))*#Scale#),(16*#Arched#*#Scale#)
Blur.2.Coverage_0=0
Blur.2.Coverage_1=0
Blur.0_Type_0=None
Blur.0_Type_1=None
Blur.1_Type_0=None
Blur.1_Type_1=None
Blur.2_Type_0=Blur
Blur.2_Type_1=Acrylic
Blur.0_Borders_0=None
Blur.0_Borders_1=None
Blur.0_Borders_2=None
Blur.0_Borders_3=None
Blur.1_Borders_0=None
Blur.1_Borders_1=None
Blur.1_Borders_2=None
Blur.1_Borders_3=None
Blur.2_Borders_0=None
Blur.2_Borders_1=All
Blur.2_Borders_2=Round
Blur.2_Borders_3=RoundSmall
Global.Blur.0.Blur.0=0
Global.Blur.0.Blur.1=0
Global.Blur.0.Blur.2=0
Global.Blur.1.Blur.0=0
Global.Blur.1.Blur.1=1
Global.Blur.1.Blur.2=2

@include=Settings.inc
Blur_Display=#Blur#
Scale=(#Scale_Actual#/1.25)
Alpha=(256*#Alpha_Scale#)
Spacing=2
QuickRefresh=0
BrightColor=((#ThemeColor_General_R#>(220-(1-[mDM])*72)?1:(#ThemeColor_General_G#>(220-(1-[mDM])*72)?1:(#ThemeColor_General_B#>(220-(1-[mDM])*72)?1:0))))
@include2=DarkMode\#DarkMode#.inc
FontColor_Choosen=(255*#BrightColor#),(255*#BrightColor#),(255*#BrightColor#)
@include3=Language\Regions.inc
@include4=Language\Global.inc
@include5=Language\en-us.inc
@include6=Language\GetStarted\en-us.inc
@include7=Language\Shortcuts\en-us.inc
@include8=Language\#Language#.inc
@include9=Language\GetStarted\#Language#.inc
@include10=Language\Shortcuts\#Language#.inc
@include11=TimeFormat\#TimeFormat_Global#.inc
Radius=10
FontSize_General=12
GeneralAction1=[]
GeneralAction2=[!WriteKeyValue "Variables" "HideSettings" "1"][!ActivateConfig "#CurrentConfig#"]
GeneralAction3=["Settings.inc"]
GeneralAction4=[!WriteKeyValue Variables Mode 0 "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!WriteKeyValue Variables Page GlobalSettings "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!WriteKeyValue Variables SubPage 11 "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!ActivateConfig "#ROOTCONFIG#\Extras\Settings" "16x14.ini"][!Refresh "#ROOTCONFIG#\Extras\Settings" "16x14.ini"]
GeneralAction5=[!Refresh]
GeneralAction6=[!DeactivateConfig]
GeneralAction7=[!SkinMenu]
GeneralAction8=[!WriteKeyValue Variables Mode 0 "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!WriteKeyValue Variables Page Selection "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"]
GeneralAction9=[!Refresh "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"]
GeneralAction10=[!ShowMeterGroup SkinSettings]
GeneralAction11=[!WriteKeyValue "Variables" "HideSettings" "(1-#HideSettings#)"][!Refresh][!KeepOnScreen 1][!ZPos 1]
GeneralAction12=[!HideMeter MeterSettingTitle][!ShowMeter MeterSettingTitleTip][!Redraw]
GeneralAction13=[!HideMeterGroup Hover][!HideMeter MeterSettingTitleTip][!ShowMeter MeterSettingTitle][!Redraw]
GeneralAction14=["#@#Resources_List.txt"]
GeneralAction15=["#@#Resources.inc"]
GeneralAction16=["#@#Resources.inc"]
GeneralAction17=[!SetOption #CURRENTSECTION# ToolTipText "#T.Copied#"][!Update][!Delay 1000][!SetOption #CURRENTSECTION# ToolTipText ""][!Update]
GeneralAction18=[!WriteKeyValue "Variables" "HideSettings" "1"][!ActivateConfig "#CurrentConfig#" "!.ini"]
VC=4*#Scale#
V1x=58*#Scale#
V2x=122*#Scale#
V3x=186*#Scale#
V4x=250*#Scale#
V6x=378*#Scale#
V8x=506*#Scale#
VR=#Radius#*#Scale#
SSOBX=(#BeginX#+12)
SSOBY=(#BeginX#+16)

FA=[!ShowMeterGroup Global][!ShowMeterGroup Global#Design#][!EnableMouseAction MeterSquare "MouseOverAction|MouseLeaveAction"][!HideMeter LDT][!HideMeter FI][!Update][!Redraw]
OCEA=[!Delay 16][!HideMeterGroup Global][!HideMeterGroup Global#Design#][!DisableMouseAction MeterSquare "MouseOverAction|MouseLeaveAction"][!HideMeter LDT][!ShowMeter FI][!SetOption FI "LeftMouseUpAction" "[!Refresh]"][!Update][!Redraw]
OREA=[!Delay 16][!HideMeterGroup Global][!HideMeterGroup Global#Design#][!DisableMouseAction MeterSquare "MouseOverAction|MouseLeaveAction"][!HideMeter LDT][!ShowMeter FI][!SetOption FI "LeftMouseUpAction" "#GeneralAction11#"][!Update][!Redraw]

[mDM]
Measure=Calc
Formula=#DarkMode#>0?1:0
DynamicVariables=1

[HideMeterSquareHoverAction]
Measure=Calc
Formula=(#CLASSICAL#=0)?2222:1111
Substitute="2222":"MeterSquareHover","1111":""

[Rainmeter]
MouseActionCursor=0
Blur=[#Blur.[#Global.Blur.[#Global.Blur].Blur.[#Blur]].Texture_[#Blur_Texture]]
BlurRegion=2,(#Spacing#*#Scale#),(#Spacing#*#Scale#),((64*#SkinW#+2*(#Spacing#-2))*#Scale#),((64*#SkinH#+2*(#Spacing#-2))*#Scale#),(16*#Arched#*#Scale#)
AccurateText=1
DynamicWindowSize=1
DefaultKeepOnScreen=0
DefaultAlwaysOnTop=-1
DefaultLoadOrder=0
MiddleMouseUpAction=#GeneralAction2#
Group=WidgetsAndShortcuts
DynamicVariables=1
BackgroundMode=2
SolidColor=0,0,0,(1-(#Alpha#=0?0:1))
SelectedColor=#ThemeColor_General#,64

[1x]
Measure=Calc
Formula=58*#Scale#

[2x]
Measure=Calc
Formula=122*#Scale#

[3x]
Measure=Calc
Formula=186*#Scale#

[4x]
Measure=Calc
Formula=250*#Scale#

[6x]
Measure=Calc
Formula=378*#Scale#

[8x]
Measure=Calc
Formula=506*#Scale#

[MeterSquare_General]
Shape=Rectangle 0,0,(#SkinW#*64*#Scale#),(#SkinH#*64*#Scale#),(10*#Scale#*#Arched#),(10*#Scale#*#Arched#) | Fill Color #FontColor_General#,(#Border#*#Alpha#/16) | StrokeWidth 0
Shape2=Rectangle (#Spacing#*#Scale#),(#Spacing#*#Scale#),((#SkinW#*64-#Spacing#*2)*#Scale#),((#SkinH#*64-#Spacing#*2)*#Scale#),(8*#Arched#*#Scale#),(8*#Arched#*#Scale#)
Shape3=Combine Shape | Exclude Shape2
Shape4=Rectangle (#Spacing#/2*#Scale#),(#Spacing#/2*#Scale#),((#SkinW#*64-#Spacing#*1)*#Scale#),((#SkinH#*64-#Spacing#*1)*#Scale#),(8*#Arched#*#Scale#),(8*#Arched#*#Scale#) | Fill Color #FontColor_General#,(#Border#*#Alpha#/16) | StrokeWidth 0
Shape5=Combine Shape4 | Exclude Shape2
Shape6=Rectangle (#Spacing#*#Scale#),(#Spacing#*#Scale#),((#SkinW#*64-#Spacing#*2)*#Scale#),((#SkinH#*64-#Spacing#*2)*#Scale#),(8*#Arched#*#Scale#),(8*#Arched#*#Scale#) | Fill Color #ThemeColor_Background# | StrokeWidth 0
Shape7=Rectangle (#Spacing#*#Scale#),(#Spacing#*#Scale#),((#SkinW#*64-#Spacing#*2)*#Scale#),((#SkinH#*64-#Spacing#*2)*#Scale#),(8*#Arched#*#Scale#),(8*#Arched#*#Scale#) | Fill Color 255,255,255,(64*#Light#) | StrokeWidth 0
Shape8=Rectangle (#Spacing#*#Scale#),((#Spacing#+1)*#Scale#),((#SkinW#*64-#Spacing#*2)*#Scale#),((#SkinH#*64-#Spacing#*2)*#Scale#),(8*#Arched#*#Scale#),(8*#Arched#*#Scale#)
Shape9=Combine Shape7 | Exclude Shape8
DynamicVariables=1


[MeterSquare_NoShadow]
Shape=Rectangle (#Spacing#*#Scale#),(#Spacing#*#Scale#),((#SkinW#*64-#Spacing#*2)*#Scale#),((#SkinH#*64-#Spacing#*2)*#Scale#),(8*#Arched#*#Scale#),(8*#Arched#*#Scale#) | Fill Color #ThemeColor_Background# | StrokeWidth 0
DynamicVariables=1

[MeterSquare_Zone]
Shape=Rectangle (#Spacing#*#Scale#),(#Spacing#*#Scale#),((#SkinW#*64-#Spacing#*2)*#Scale#),((#SkinH#*64-#Spacing#*2)*#Scale#),(8*#Arched#*#Scale#),(8*#Arched#*#Scale#) | StrokeWidth 0
DynamicVariables=1

[MeterSquareSelected_General]
Shape=Rectangle (#Spacing#*#Scale#),(#Spacing#*#Scale#),((#SkinW#*64-#Spacing#*2)*#Scale#),((#SkinH#*64-#Spacing#*2)*#Scale#),(8*#Arched#*#Scale#),(8*#Arched#*#Scale#) | Fill Color #ThemeColor_BackgroundSelected# | StrokeWidth 0
Hidden=1
DynamicVariables=1

[MeterSquareBar_General]
Shape10=Rectangle (#Spacing#*#Scale#),(#Spacing#*#Scale#),((#SkinW#*64-#Spacing#*2)*#Scale#),((#SkinH#*64-#Spacing#*2)*#Scale#),(8*#Arched#*#Scale#),(8*#Arched#*#Scale#) | Fill Color #ThemeColor_Bar# | StrokeWidth 0
Shape11=Rectangle (#Spacing#*#Scale#),((#SkinH#*64-#BarH#)*#Scale#),((#SkinW#*64-#Spacing#*2)*#Scale#),(#BarH#*#Scale#)
Shape12=Combine Shape10 | Intersect Shape11
Shape13=Rectangle (#Spacing#*#Scale#),((#SkinH#*64-#BarH#)*#Scale#),((#SkinW#*64-#Spacing#*2)*#Scale#),(1*#Scale#) | Fill Color #ThemeColor_BarBorder# | StrokeWidth 0

[MeterSquare_Border]
Shape=Rectangle 0,0,#CURRENTCONFIGWIDTH#,#CURRENTCONFIGHEIGHT##,0,0 | StrokeWidth 0
Shape2=Rectangle (#Spacing#/2*#Scale#),(#Spacing#/2*#Scale#),((#SkinW#*64-#Spacing#)*#Scale#),((#SkinH#*64-#Spacing#)*#Scale#),(9*#Arched#*#Scale#),(9*#Arched#*#Scale#) | StrokeWidth 0
Shape3=Combine Shape | Exclude Shape2
DynamicVariables=1

[FontStyle_Debug]
X=10
Y=10
DynamicVariables=1
FontColor=0,0,0,128
Solidcolor=255,255,255,128
Hidden=#HideDebug#

[FontStyle_General]
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(12*#Scale#)
DynamicVariables=1
AntiAlias=1

[FontStyle_Clock]
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(12*#Scale#*3.5)
DynamicVariables=1
AntiAlias=1

[FontStyle_Title]
X=(#BeginX#*#Scale#)
Y=(72*#Scale#)
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(12*2*#Scale#)
StringAlign=LeftCenter
FontWeight=400
DynamicVariables=1
AntiAlias=1

[FontStyle_SmallTitle]
X=(16*#Scale#)
Y=(28*#Scale#)
FontFace=[#FontFace_General]
FontWeight=700
FontColor=#FontColor_General#
FontSize=(16*#Scale#)
StringAlign=LeftCenter
DynamicVariables=1
AntiAlias=1

[FontStyle_Small]
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(10*#Scale#)
DynamicVariables=1
AntiAlias=1

[FontStyle_Display]
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(20*#Scale#)
StringAlign=Center
DynamicVariables=1
AntiAlias=1

[ButtonStyle_4x4]
X=((47*#Scale#))r
Y=((0*#Scale#))r
Shape=Rectangle 0,0,(40*#Scale#),(40*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_Bar# | StrokeWidth 0
DynamicVariables=1
Hidden=1

[ButtonIconStyle_4x4]
X=((47*#Scale#))r
Y=((0*#Scale#))r
H=(18*#Scale#)
W=(18*#Scale#)
ImageTint=#FontColor_General#
DynamicVariables=1

[ButtonIconStyle_4x4_1]
MouseOverAction=[!ShowMeter MeterButton1][!Redraw]
MouseLeaveAction=[!HideMeter MeterButton1][!Redraw]
LeftMouseUpAction=#CustomAction1#[!ShowMeter MeterButton1][!Redraw]

[ButtonIconStyle_4x4_2]
MouseOverAction=[!ShowMeter MeterButton2][!Redraw]
MouseLeaveAction=[!HideMeter MeterButton2][!Redraw]
LeftMouseUpAction=#CustomAction2#[!ShowMeter MeterButton2][!Redraw]

[ButtonIconStyle_4x4_3]
MouseOverAction=[!ShowMeter MeterButton3][!Redraw]
MouseLeaveAction=[!HideMeter MeterButton3][!Redraw]
LeftMouseUpAction=#CustomAction3#[!ShowMeter MeterButton3][!Redraw]

[ButtonIconStyle_4x4_4]
MouseOverAction=[!ShowMeter MeterButton4][!Redraw]
MouseLeaveAction=[!HideMeter MeterButton4][!Redraw]
LeftMouseUpAction=#CustomAction4#[!ShowMeter MeterButton4][!Redraw]

[ButtonIconStyle_4x4_5]
MouseOverAction=[!ShowMeter MeterButton5][!Redraw]
MouseLeaveAction=[!HideMeter MeterButton5][!Redraw]
LeftMouseUpAction=#CustomAction5#[!ShowMeter MeterButton5][!Redraw]

[MeasureBlur]
Measure=Plugin
Plugin=FrostedGlass
Type=[#Blur.[#Global.Blur.[#Global.Blur].Blur.[#Blur]]_Type_[#Blur_Type]]
Corner=[#Blur.[#Global.Blur.[#Global.Blur].Blur.[#Blur]]_Borders_[#Blur_Borders]]
DynamicVariables=1

[MeasureAeroBlurIndex]
Measure=String
String=#Blur#
Substitute="2":"None"
DynamicVariables=1

[MeasureAeroBlurIndex2]
Measure=String
String=#Blur#
DynamicVariables=1

[MeterMovingZoneStyle]
Shape=Rectangle (0*#Scale#),(0*#Scale#),(12*#Scale#),(12*#Scale#),(4*#Arched#*#Scale#),(4*#Arched#*#Scale#) | Fill Color #ThemeColor_BackgroundNoAlpha# | StrokeWidth (1*#Scale#) | Stroke Color #ThemeColor_BarBorder#
Solidcolor=0,0,0,1
DynamicVariables=1
Hidden=1
Group=MovingZone

[MeterMovingImageStyle]
ImageName=#@#Bitmap\Move
ImageTint=#FontColor_General#,128
X=((2*#Scale#))r
Y=((2*#Scale#))r
W=(12*#Scale#)
H=(12*#Scale#)
DynamicVariables=1
Hidden=1
Group=MovingZone

;[MeterMovingZone]
;Meter=Shape
;MeterStyle=MeterMovingZoneStyle

;[MeterMovingImage]
;Meter=Image
;MeterStyle=MeterMovingImageStyle

[MeterSmallOption]
X=((0*#Scale#))r
Y=((34*#Scale#))r
Shape=Rectangle 0,0,(244*#Scale#),(30*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | Fill Color #ThemeColor_BarBorder# | Stroke Color #ThemeColor_BarBorder#
Shape2=Rectangle 0,0,(244*#Scale#),(30*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | Fill Color #ThemeColor_Option# | StrokeWidth 0
DynamicVariables=1
Group=SkinSettings | SmallOptions

[MeterSmallOptionSelected]
X=((0*#Scale#))r
Y=((34*#Scale#))r
Shape=Rectangle 0,0,(244*#Scale#),(30*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | Fill Color #ThemeColor_BackgroundSelectedLight# | StrokeWidth 0
DynamicVariables=1

[MeterSmallOptionChoosen]
X=((0*#Scale#))r
Y=((34*#Scale#))r
Shape=Rectangle 0,0,(244*#Scale#),(30*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | Fill Color #ThemeColor_General# | StrokeWidth 0
Shape2=Rectangle 0,(-2*#Scale#),(244*#Scale#),(30*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#)
Shape3=Combine Shape | Exclude Shape2
DynamicVariables=1
Group=Hover

[MeterSmallOptionChoosenHx2]
X=((0*#Scale#))r
Y=((34*#Scale#))r
Shape=Rectangle 0,0,(244*#Scale#),(64*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | Fill Color #ThemeColor_BarBorder# | Stroke Color #ThemeColor_BarBorder#
Shape2=Rectangle 0,0,(244*#Scale#),(64*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | Fill Color #ThemeColor_TextInputer# | StrokeWidth 0
Shape3=Rectangle 0,0,(244*#Scale#),(64*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | Fill Color #ThemeColor_General# | StrokeWidth 0
Shape4=Rectangle 0,(-2*#Scale#),(244*#Scale#),(64*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#)
Shape5=Combine Shape3 | Exclude Shape4
DynamicVariables=1
Group=Hover

[MeterSmallOptionTitle]
X=((0*#Scale#))r
Y=((34*#Scale#))r
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(9*#Scale#)
StringAlign=LeftCenter
DynamicVariables=1
AntiAlias=1
Group=SkinSettings

[MeterSmallOptionText]
X=((0*#Scale#))r
Y=((34*#Scale#))r
FontFace=#FontFace_General#
FontColor=#FontColor_General#,128
FontSize=(9*#Scale#)
StringAlign=RightCenter
ClipString=1
W=(120*#Scale#)
DynamicVariables=1
AntiAlias=1
Group=SkinSettings

[MeterSmallButtonZone]
X=((36*#Scale#))r
Y=((0*#Scale#))r
Shape=Rectangle 0,0,(32*#Scale#),(32*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | Fill Color #ThemeColor_Bar# | StrokeWidth 0
Hidden=1
DynamicVariables=1

[MeterSmallButtonIcon]
X=((36*#Scale#))r
Y=((0*#Scale#))r
H=(16*#Scale#)
W=(16*#Scale#)
ImageTint=#FontColor_General#
DynamicVariables=1
Group=SkinSettings

[MeterSettingZoneStyle]
X=(#BeginX#*#Scale#)
Y=(#BeginY#*#Scale#)
Shape=Rectangle (#Spacing#*#Scale#),(#Spacing#*#Scale#),((4*64-#Spacing#*2)*#Scale#),((4*64-#Spacing#*2)*#Scale#),(8*#Arched#*#Scale#),(8*#Arched#*#Scale#) | Fill Color 0,0,0,0 | Stroke Color #ThemeColor_LightShadow# | StrokeWidth (#Spacing#*#Scale#)
Shape2=Rectangle (#Spacing#*#Scale#),(#Spacing#*#Scale#),((4*64-#Spacing#*2)*#Scale#),((4*64-#Spacing#*2)*#Scale#),(8*#Arched#*#Scale#),(8*#Arched#*#Scale#) | Fill Color 0,0,0,0 | Stroke Color #ThemeColor_LightShadow# | StrokeWidth (#Spacing#*2*#Scale#)
Shape3=Rectangle (#Spacing#*#Scale#),(#Spacing#*#Scale#),((4*64-#Spacing#*2)*#Scale#),((4*64-#Spacing#*2)*#Scale#),(8*#Arched#*#Scale#),(8*#Arched#*#Scale#) | Fill Color #ThemeColor_Board# | Stroke Color #ThemeColor_Shadow#
Shape4=Rectangle (#Spacing#*#Scale#),(204*#Scale#),((4*64-#Spacing#*2)*#Scale#),((52-#Spacing#)*#Scale#),(8*#Arched#*#Scale#),(8*#Arched#*#Scale#) | Fill Color #ThemeColor_Bar# | StrokeWidth 0
Shape5=Rectangle (#Spacing#*#Scale#),(204*#Scale#),((4*64-#Spacing#*2)*#Scale#),(#Radius#*#Scale#),0,0
Shape6=Rectangle (#Spacing#*#Scale#),(214*#Scale#),((4*64-#Spacing#*2)*#Scale#),(1*#Scale#),0,0 | Fill Color #ThemeColor_BarBorder# | StrokeWidth 0
Shape7=Combine Shape4 | Exclude Shape5
DynamicVariables=1
Group=SkinSettings

[MeasureSettingTitle]
Measure=String
String=#CURRENTCONFIG#
Substitute="Fluent_Design":"..."

[MeterSettingTitleStyle]
X=((#BeginX#+10)*#Scale#)
Y=((#BeginY#+234)*#Scale#)
W=((170+36)*#Scale#)
ClipString=2
FontFace=#FontFace_General#
FontSize=(9*#Scale#)
StringAlign=LeftCenter
DynamicVariables=1
AntiAlias=1
Group=SkinSettings
FontColor=#FontColor_General#,128
Text=[MeasureSettingTitle]

[MeterSettingTitleTipStyle]
X=((#BeginX#+10)*#Scale#)
Y=((#BeginY#+234)*#Scale#)
W=((170+36)*#Scale#)
ClipString=2
FontFace=#FontFace_General#
FontSize=(9*#Scale#)
StringAlign=LeftCenter
DynamicVariables=1
AntiAlias=1
Group=SkinSettings
FontColor=#FontColor_General#,128
Text=#S.Global.1#

[MeterSmallButtonZoneBegin]
X=((#BeginX#+182+36)*#Scale#)
Y=((#BeginY#+218)*#Scale#)

[MeterSmallButtonIcon1]
X=((#BeginX#+190+36)*#Scale#)
Y=((#BeginY#+226)*#Scale#)
MeterStyle=MeterSmallButtonIcon
ImageName=#@#Bitmap\OK
MouseOverAction=[!ShowMeter MeterSkinSettingButtonZone1][!Redraw]
MouseLeaveAction=[!HideMeter MeterSkinSettingButtonZone1][!Redraw]
LeftMouseUpAction=[!HideMeterGroup SkinSettings][!Redraw][!WriteKeyValue Variables HideSettings 1][!Refresh]

[MeterSmallButtonIcon2]
MeterStyle=MeterSmallButtonIcon
ImageName=#@#Bitmap\Notepad
MouseOverAction=[!ShowMeter MeterSkinSettingButtonZone2][!Redraw]
MouseLeaveAction=[!HideMeter MeterSkinSettingButtonZone2][!Redraw]
LeftMouseUpAction=["#CurrentPath#Settings.inc"][!ShowMeter MeterSkinSettingButtonZone2][!Redraw]

[MeterSmallOptionBehavior1]
X=((#BeginX#+6)*#Scale#)
Y=((#BeginY#+10)*#Scale#)
MouseOverAction=[!ShowMeter MeterOptionSelected1][!Redraw]
MouseLeaveAction=[!HideMeter MeterOptionSelected1][!Redraw]

[MeterSmallOptionBehavior2]
MouseOverAction=[!ShowMeter MeterOptionSelected2][!Redraw]
MouseLeaveAction=[!HideMeter MeterOptionSelected2][!Redraw]

[MeterSmallOptionBehavior3]
MouseOverAction=[!ShowMeter MeterOptionSelected3][!Redraw]
MouseLeaveAction=[!HideMeter MeterOptionSelected3][!Redraw]

[MeterSmallOptionBehavior4]
MouseOverAction=[!ShowMeter MeterOptionSelected4][!Redraw]
MouseLeaveAction=[!HideMeter MeterOptionSelected4][!Redraw]

[MeterSmallOptionBehavior5]
MouseOverAction=[!ShowMeter MeterOptionSelected5][!Redraw]
MouseLeaveAction=[!HideMeter MeterOptionSelected5][!Redraw]

[MeterSmallOptionBehavior6]
MouseOverAction=[!ShowMeter MeterOptionSelected6][!Redraw]
MouseLeaveAction=[!HideMeter MeterOptionSelected6][!Redraw]

[MeterSmallOptionBegin]
X=((#BeginX#+6)*#Scale#)
Y=((#BeginY#+10)*#Scale#)

[MeterSmallOptionTitleBegin]
X=((#BeginX#+14)*#Scale#)
Y=((#BeginY#+25)*#Scale#)

[MeterSmallOptionTextBegin]
X=((#BeginX#+242)*#Scale#)
Y=((#BeginY#+24)*#Scale#)

[MeterSkinSettingOptionIconStyle]
H=(18*#Scale#)
W=(18*#Scale#)

[MeterSkinSettingMenuTextBeginStyle]
X=((12*#Scale#))r
Y=((15*#Scale#))r

[MeterSkinSettingMenuTextStyle]
Y=((24*#Scale#))r

[MeterSkinSettingMenuIndicatorStyle]
Shape=Rectangle 0,(3*#Scale#),(2*#Scale#),(12*#Scale#),(1.5*#Scale#),(1.5*#Scale#) | Fill Color #ThemeColor_General# | StrokeWidth 0
DynamicVariables=1

[MeterSquareHover]
Meter=Shape
Shape=Rectangle (#Spacing#*#Scale#),(#Spacing#*#Scale#),((#SkinW#*64-#Spacing#*2)*#Scale#),((#SkinH#*64-#Spacing#*2)*#Scale#),(8*#Arched#*#Scale#),(8*#Arched#*#Scale#) | Fill Color 0,0,0,0 | Stroke Color #ThemeColor_HoverBorder# | StrokeWidth (4*#Scale#)
Shape2=Rectangle (#Spacing#*#Scale#),(#Spacing#*#Scale#),((#SkinW#*64-#Spacing#*2)*#Scale#),((#SkinH#*64-#Spacing#*2)*#Scale#),(8*#Arched#*#Scale#),(8*#Arched#*#Scale#) | Fill Color 0,0,0,0 | Stroke Color #ThemeColor_Hover# | StrokeWidth (2*#Scale#)
DynamicVariables=1
Hidden=(1-#CLASSICAL#)

[MeterSquareDarkerStyle]
Shape=Rectangle (#Spacing#*#Scale#),(#Spacing#*#Scale#),((#SkinW#*64-#Spacing#*2)*#Scale#),((#SkinH#*64-#Spacing#*2)*#Scale#),(8*#Arched#*#Scale#),(8*#Arched#*#Scale#) | Fill Color 0,0,0,64 | StrokeWidth 0
DynamicVariables=1

[RoundlineBack]
Shape=Ellipse (64*#Scale#),(64*#Scale#),(49*#Scale#) | StrokeWidth (1*#Scale#) | Stroke Color #ThemeColor_MeterBar# | Fill Color 0,0,0,0
DynamicVariables=1

[RoundlineStyle]
X=(16*#Scale#)
Y=(16*#Scale#)
W=(96*#Scale#)
H=(96*#Scale#)
StartAngle=(Rad(270))
RotationAngle=(Rad(360))
LineWidth=(2*#Scale#)
LineStart=(47*#Scale#)
LineLength=(49*#Scale#)
LineColor=#ThemeColor_General#
Solid=1
AntiAlias=1
DynamicVariables=1

;[AlphaTestWarning]
;Meter=String
;Text=#ProjectName##CRLF##Version#
;MeterStyle=FontStyle_Debug

[SI]
ImageTint=#FontColor_General#
W=(12*#Scale#)
H=(12*#Scale#)
DynamicVariables=1
MouseOverAction=[!ShowMeter H#CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!HideMeter H#CURRENTSECTION#][!Redraw]
[HSIB]
X=((#CURRENTCONFIGWIDTH#-30)*#Scale#)
Y=(6*#Scale#)
[HSI]
X=(-20*#Scale#)r
Y=0r
Shape=Rectangle 0,0,(20*#Scale#),(20*#Scale#),(2*#Scale#*#Arched#),(2*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BackgroundSelected#
DynamicVariables=1
Hidden=1
[SLDT]
Text=#T.Loading#
X=(#CURRENTCONFIGWIDTH#/2)
Y=(#CURRENTCONFIGHEIGHT#/2)
W=(#CURRENTCONFIGWIDTH#-16*#Scale#)
ClipString=2
StringAlign=CenterCenter
FontSize=(18*#Scale#)
[SFI]
ImageName=#@#Bitmap\Warning
ImageTint=#FontColor_General#
X=(#CURRENTCONFIGWIDTH#/2-32/2*#Scale#)
Y=(#CURRENTCONFIGHEIGHT#/2-32/2*#Scale#)
W=(32*#Scale#)
H=(32*#Scale#)
DynamicVariables=1
Hidden=1
[SSI1]
X=((#CURRENTCONFIGWIDTH#-26)*#Scale#)
Y=(10*#Scale#)
ImageName=#@#Bitmap\Reload
LeftMouseUpAction=[!Refresh]
[SSI2]
X=(-20*#Scale#)r
Y=0r
ImageName=#@#Bitmap\More
LeftMouseUpAction=[!WriteKeyValue "Variables" "HideSettings" "(1-#HideSettings#)"][!Refresh]
