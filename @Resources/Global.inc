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

[mSystemDisk]
Measure=String
String=%SYSTEMROOT%
Substitute="WINDOWS":"","Windows":"","windows":""
UpdateDivider=-1

[Variables]
Default_11.UserImage=[mSystemDisk]Users\[mUserName]\AppData\Local\Microsoft\Windows\AccountPicture\UserImage.jpg
Default_10.UserImage=[mSystemDisk]Users\[mUserName]\AppData\Roaming\Microsoft\Windows\AccountPicture\UserImage.jpg
Default_8.1.UserImage=[mSystemDisk]Users\[mUserName]\AppData\Local\Temp\[mUserName].bmp
Default_8.UserImage=[mSystemDisk]Users\[mUserName]\AppData\Roaming\Microsoft\Windows\AccountPicture\UserImage.jpg
Default_7.UserImage=[mSystemDisk]Users\[mUserName]\AppData\Local\Temp\[mUserName].bmp
Default_11.Blur=2
Default_10.Blur=2
Default_8.1.Blur=0
Default_8.Blur=0
Default_7.Blur=1
Default.DarkMode-0.Alpha_Scale=0.85
Default.DarkMode-1.Alpha_Scale=0.85
Default.DarkMode-2.Alpha_Scale=0.6
Default.DarkMode-3.Alpha_Scale=0.6
@include=Settings.inc
Blur_Display=#Blur#
Scale=(#Scale_Actual#/1.25)
Alpha=(256*#Alpha_Scale#)
Spacing=2
QuickRefresh=0
@include2=DarkMode\#DarkMode#.inc
@include3=Language\Regions.inc
@include4=Language\Global.inc
@include5=Language\en-us.inc
@include6=Language\GetStarted\en-us.inc
@include7=Language\Help\en-us.inc
@include8=Language\Shortcuts\en-us.inc
@include9=Language\#Language#.inc
@include10=Language\GetStarted\#Language#.inc
@include11=Language\Help\#Language#.inc
@include12=Language\Shortcuts\#Language#.inc
@include13=TimeFormat\#TimeFormat_Global#.inc
Radius=10
ThemeColor_General=(#ThemeColor_General_R#+48*(#DarkMode#>0?1:0)),(#ThemeColor_General_G#+48*(#DarkMode#>0?1:0)),(#ThemeColor_General_B#+48*(#DarkMode#>0?1:0))
FontSize_General=12
GeneralAction1=[]
GeneralAction2=[!WriteKeyValue "Variables" "HideSettings" "1"][!ActivateConfig "#CurrentConfig#"]
GeneralAction3=["Settings.inc"]
GeneralAction4=[!WriteKeyValue Variables Page GlobalSettings "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!WriteKeyValue Variables SubPage 11 "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!ActivateConfig "#ROOTCONFIG#\Widgets\Settings" "16x14.ini"][!Refresh "#ROOTCONFIG#\Widgets\Settings" "16x14.ini"]
GeneralAction5=[!Refresh]
GeneralAction6=[!DeactivateConfig]
GeneralAction7=[!SkinMenu]
GeneralAction8=[!WriteKeyValue Variables Page Selection "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"]
GeneralAction9=[!Refresh "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"]
GeneralAction10=[!ShowMeterGroup SkinSettings]
GeneralAction11=[!WriteKeyValue "Variables" "HideSettings" "(1-#HideSettings#)"][!Refresh]
GeneralAction12=[!HideMeter MeterSettingTitle][!ShowMeter MeterSettingTitleTip][!Redraw]
GeneralAction13=[!HideMeterGroup Hover][!HideMeter MeterSettingTitleTip][!ShowMeter MeterSettingTitle][!Redraw]
GeneralAction14=["#@#Resources_List.txt"]
GeneralAction15=["#@#Resources.inc"]
GeneralAction16=["#@#Resources.inc"]
GeneralAction17=[!SetOption #CURRENTSECTION# ToolTipText "#T.Copied#"][!Delay 1000][!SetOption #CURRENTSECTION# ToolTipText ""]
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
Blur=#Blur#
BlurRegion=2,(#Spacing#*#Scale#),(#Spacing#*#Scale#),((64*#SkinW#+2*(#Spacing#-2))*#Scale#),((64*#SkinH#+2*(#Spacing#-2))*#Scale#),(16*#Arched#*#Scale#)
AccurateText=1
DynamicWindowSize=1
DefaultKeepOnScreen=0
DefaultAlwaysOnTop=-1
DefaultLoadOrder=0
MiddleMouseUpAction=#GeneralAction2#
MouseOverAction=[!ShowMeterGroup MovingZone][!HideMeter [HideMeterSquareHoverAction]][!Redraw]
MouseLeaveAction=[!HideMeterGroup MovingZone][!Redraw]
Group=WidgetsAndShortcuts
DynamicVariables=1

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
Shape=Rectangle (#Spacing#*#Scale#),(#Spacing#*#Scale#),((#SkinW#*64-#Spacing#*2)*#Scale#),((#SkinH#*64-#Spacing#*2)*#Scale#),(8*#Arched#*#Scale#),(8*#Arched#*#Scale#) | Fill Color 0,0,0,0 | Stroke Color #ThemeColor_LightShadow# | StrokeWidth (#Spacing#*#Scale#)
Shape2=Rectangle (#Spacing#*#Scale#),(#Spacing#*#Scale#),((#SkinW#*64-#Spacing#*2)*#Scale#),((#SkinH#*64-#Spacing#*2)*#Scale#),(8*#Arched#*#Scale#),(8*#Arched#*#Scale#) | Fill Color 0,0,0,0 | Stroke Color #ThemeColor_LightShadow# | StrokeWidth (#Spacing#*2*#Scale#)
Shape3=Rectangle (#Spacing#*#Scale#),(#Spacing#*#Scale#),((#SkinW#*64-#Spacing#*2)*#Scale#),((#SkinH#*64-#Spacing#*2)*#Scale#),(8*#Arched#*#Scale#),(8*#Arched#*#Scale#) | Fill Color #ThemeColor_Background# | Stroke Color #ThemeColor_Shadow#
Shape4=Rectangle (#Spacing#*#Scale#),(#Spacing#*#Scale#),((#SkinW#*64-#Spacing#*2)*#Scale#),((#SkinH#*64-#Spacing#*2)*#Scale#),(8*#Arched#*#Scale#),(8*#Arched#*#Scale#) | Fill Color 255,255,255,(64*#Light#) | StrokeWidth 0
Shape5=Rectangle (#Spacing#*#Scale#),((#Spacing#+1)*#Scale#),((#SkinW#*64-#Spacing#*2)*#Scale#),((#SkinH#*64-#Spacing#*2)*#Scale#),(8*#Arched#*#Scale#),(8*#Arched#*#Scale#)
Shape6=Combine Shape4 | Exclude Shape5
DynamicVariables=1

[MeterSquare_NoShadow]
Shape=Rectangle (#Spacing#*#Scale#),(#Spacing#*#Scale#),((#SkinW#*64-#Spacing#*2)*#Scale#),((#SkinH#*64-#Spacing#*2)*#Scale#),(8*#Arched#*#Scale#),(8*#Arched#*#Scale#) | Fill Color #ThemeColor_Background# | StrokeWidth 0
DynamicVariables=1

[MeterSquare_Zone]
Shape=Rectangle (#Spacing#*#Scale#),(#Spacing#*#Scale#),((#SkinW#*64-#Spacing#*2)*#Scale#),((#SkinH#*64-#Spacing#*2)*#Scale#),(8*#Arched#*#Scale#),(8*#Arched#*#Scale#) | Fill Color 0,0,0,0 | Stroke Color #ThemeColor_LightShadow# | StrokeWidth (#Spacing#*2*#Scale#)
Shape2=Rectangle (#Spacing#*#Scale#),(#Spacing#*#Scale#),((#SkinW#*64-#Spacing#*2)*#Scale#),((#SkinH#*64-#Spacing#*2)*#Scale#),(8*#Arched#*#Scale#),(8*#Arched#*#Scale#) | StrokeWidth 0
DynamicVariables=1

[MeterSquareSelected_General]
Shape=Rectangle (#Spacing#*#Scale#),(#Spacing#*#Scale#),((#SkinW#*64-#Spacing#*2)*#Scale#),((#SkinH#*64-#Spacing#*2)*#Scale#),(8*#Arched#*#Scale#),(8*#Arched#*#Scale#) | Fill Color #ThemeColor_BackgroundSelected# | StrokeWidth 0
Hidden=1
DynamicVariables=1

[MeterSquareBar_General]
Shape7=Rectangle (#Spacing#*#Scale#),(#Spacing#*#Scale#),((#SkinW#*64-#Spacing#*2)*#Scale#),((#SkinH#*64-#Spacing#*2)*#Scale#),(8*#Arched#*#Scale#),(8*#Arched#*#Scale#) | Fill Color #ThemeColor_Bar# | StrokeWidth 0
Shape8=Rectangle (#Spacing#*#Scale#),((#SkinH#*64-#BarH#)*#Scale#),((#SkinW#*64-#Spacing#*2)*#Scale#),(#BarH#*#Scale#)
Shape9=Combine Shape7 | Intersect Shape8
Shape10=Rectangle (#Spacing#*#Scale#),((#SkinH#*64-#BarH#)*#Scale#),((#SkinW#*64-#Spacing#*2)*#Scale#),(1*#Scale#) | Fill Color #ThemeColor_BarBorder# | StrokeWidth 0

[MeterSquare_Border]
Shape=Rectangle 0,0,#CURRENTCONFIGWIDTH#,#CURRENTCONFIGHEIGHT##,0,0 | StrokeWidth 0
Shape2=Rectangle (#Spacing#/2*#Scale#),(#Spacing#/2*#Scale#),((#SkinW#*64-#Spacing#)*#Scale#),((#SkinH#*64-#Spacing#)*#Scale#),(9*#Arched#*#Scale#),(9*#Arched#*#Scale#) | StrokeWidth 0
Shape3=Combine Shape | Exclude Shape2
DynamicVariables=1

[FontStyle_Debug]
DynamicVariables=1
FontColor=0,0,0,128
Solidcolor=255,255,255,128
Hidden=#HideDebug#

[FontStyle_General]
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(#FontSize_General#*#Scale#)
DynamicVariables=1
AntiAlias=1

[FontStyle_Clock]
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(#FontSize_General#*#Scale#*3.5)
DynamicVariables=1
AntiAlias=1

[FontStyle_Title]
X=(#BeginX#*#Scale#)
Y=(72*#Scale#)
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(#FontSize_General#*2*#Scale#)
StringAlign=LeftCenter
DynamicVariables=1
AntiAlias=1

[FontStyle_SmallTitle]
X=(16*#Scale#)
Y=(28*#Scale#)
FontFace=#FontFace_General#
StringStyle=Bold
FontColor=#FontColor_General#
FontSize=(16*#Scale#)
StringAlign=LeftCenter
DynamicVariables=1
AntiAlias=1

[FontStyle_Small]
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(#FontSize_General#*3/4*#Scale#)
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

[MeasureBlurIndex]
Measure=String
String=#Blur_Global#
Substitute="0":"None","1":"Blur"
DynamicVariables=1

[MeasureBlur]
Measure=Plugin
Plugin=FrostedGlass
Type=[MeasureBlurIndex]
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
Shape=Rectangle 0,0,(244*#Scale#),(30*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_BarBorder# | Stroke Color #ThemeColor_BarBorder#
Shape2=Rectangle 0,0,(244*#Scale#),(30*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_BackgroundNoAlpha# | StrokeWidth 0
DynamicVariables=1
Group=SkinSettings | SmallOptions

[MeterSmallOptionSelected]
X=((0*#Scale#))r
Y=((34*#Scale#))r
Shape=Rectangle 0,0,(244*#Scale#),(30*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_BackgroundSelectedLight# | StrokeWidth 0
DynamicVariables=1

[MeterSmallOptionChoosen]
X=((0*#Scale#))r
Y=((34*#Scale#))r
Shape=Rectangle 0,0,(244*#Scale#),(30*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_General# | StrokeWidth 0
Shape2=Rectangle 0,(-2*#Scale#),(244*#Scale#),(30*#Scale#),(4*#Scale#),(4*#Scale#)
Shape3=Combine Shape | Exclude Shape2
DynamicVariables=1
Group=Hover

[MeterSmallOptionChoosenHx2]
X=((0*#Scale#))r
Y=((34*#Scale#))r
Shape=Rectangle 0,0,(244*#Scale#),(64*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_BarBorder# | Stroke Color #ThemeColor_BarBorder#
Shape2=Rectangle 0,0,(244*#Scale#),(64*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_BackgroundNoAlpha# | StrokeWidth 0
Shape3=Rectangle 0,0,(244*#Scale#),(64*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_General# | StrokeWidth 0
Shape4=Rectangle 0,(-2*#Scale#),(244*#Scale#),(64*#Scale#),(4*#Scale#),(4*#Scale#)
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
Shape=Rectangle 0,0,(32*#Scale#),(32*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_Bar# | StrokeWidth 0
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
Shape3=Rectangle (#Spacing#*#Scale#),(#Spacing#*#Scale#),((4*64-#Spacing#*2)*#Scale#),((4*64-#Spacing#*2)*#Scale#),(8*#Arched#*#Scale#),(8*#Arched#*#Scale#) | Fill Color #ThemeColor_Background# | Stroke Color #ThemeColor_Shadow#
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

;[AlphaTestWarning]
;Meter=String
;Text=#ProjectName##CRLF##Version#
;MeterStyle=FontStyle_Debug