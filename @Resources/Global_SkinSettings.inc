[MC]
Measure=Plugin
Plugin=FileChoose
UseNewStyle=0
GetTarget=1
AllowNonstorageFolder=1
CopyLink=1
LinkCache=#@#LinkCache\
GetIcon=0
IconCache=#@#Icons\
IconSize=3
ReturnValue=Path
FileInitialDirectory=#@#File\
ImageInitialDirectory=#@#Icons\
Command1=[!WriteKeyValue Variables "[#MSSSSO1V]" "$Path$" "Settings.inc"][!Refresh]
Command2=[!WriteKeyValue Variables "[#MSSSSO2V]" "$Path$" "Settings.inc"][!Refresh]
Command3=[!WriteKeyValue Variables "[#MSSSSO3V]" "$Path$" "Settings.inc"][!Refresh]
Command4=[!WriteKeyValue Variables "[#MSSSSO4V]" "$Path$" "Settings.inc"][!Refresh]
Command5=[!WriteKeyValue Variables "[#MSSSSO5V]" "$Path$" "Settings.inc"][!Refresh]
Command6=[!WriteKeyValue Variables "[#MSSSSO6V]" "$Path$" "Settings.inc"][!Refresh]

[Rainmeter]
SkinWidth=(256*#Scale#)
SkinHeight=(256*#Scale#)
RightMouseUpAction=[]
MiddleMouseUpAction=[]

[Variables]

T.0=#T.OFF#
T.1=#T.ON#

MSSSSO1=1
MSSSSO2=2
MSSSSO3=3
MSSSSO4=4
MSSSSO5=5
MSSSSO6=6
MSSSSO7=7

CM_X=0
CM_Y=32*#Scale#
CM_S11=Rectangle (2*#Scale#),0,((256-4)*#Scale#),((32*
CM_S12=-1)*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | Fill Color #ThemeColor_TextInputer# | StrokeWidth 0
CM_S21=Rectangle (1*#Scale#),(-1*#Scale#),((256-2)*#Scale#),((32*
CM_S22=-1+2)*#Scale#),(5*#Scale#*#Arched#),(5*#Scale#*#Arched#) | Fill Color #ThemeColor_BarBorder# | StrokeWidth 0
CM_S31=Rectangle (2*#Scale#),0,((256-4)*#Scale#),((32*
CM_S32=-1)*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#).
CM_S41=Combine Shape2 | Exclude Shape3
CM_SI1=Rectangle (8*#Scale#),((8+
CM_SI2=*32)*#Scale#),(3*#Scale#),(16*#Scale#),(1.5*#Scale#),(1.5*#Scale#) | StrokeWidth 0 | Fill Color #ThemeColor_General#
CM_A1=[!WriteKeyValue "Variables"
CM_A2="#CurrentPath#Settings.inc"][!Refresh]

[MSS.Main]
Meter=Shape
Shape=Rectangle 0,0,(256*#Scale#),(256*#Scale#),(6*#Scale#*#Arched#),(6*#Scale#*#Arched#) | Fill Color #ThemeColor_Board# | StrokeWidth 0
Shape2=Rectangle 0,(32*#Scale#),(256*#Scale#),((256-32)*#Scale#),(6*#Scale#*#Arched#),(6*#Scale#*#Arched#) | Fill Color #ThemeColor_BackgroundNoAlpha# | StrokeWidth 0
Shape3=Rectangle 0,0,(256*#Scale#),(32*#Scale#),0,0
Shape4=Combine Shape2 | Exclude Shape3
Shape5=Rectangle 0,0,(256*#Scale#),(256*#Scale#),(6*#Scale#*#Arched#),(6*#Scale#*#Arched#) | Fill Color #FontColor_General#,64 | StrokeWidth 0
Shape6=Rectangle (1*#Scale#),(1*#Scale#),(254*#Scale#),(254*#Scale#),(5*#Scale#*#Arched#),(5*#Scale#*#Arched#)
Shape7=Combine Shape5 | Exclude Shape6
DynamicVariables=1

[MSS.CloseZ]
Meter=Shape
X=((256-32)*#Scale#)
Shape=Rectangle 0,0,(32*#Scale#),(32*#Scale#) | StrokeWidth 0 | Fill Color 0,0,0,0
DynamicVariables=1
MouseOverAction=[!ShowMeterGroup CloseH][!Redraw]
MouseLeaveAction=[!HideMeterGroup CloseH][!Redraw]
LeftMouseUpAction=[!WriteKeyValue "Variables" "HideSettings" "1"][!KeepOnScreen 0][!ZPos -1][!ZPos -2 "#ROOTCONFIG#\Extras\Background"][!ZPos -2 "#ROOTCONFIG#\Extras\SideBar"]#CloseOA#[!Refresh]

[MSS.CloseI]
Meter=Image
X=([MSS.CloseZ:X]+8*#Scale#)
Y=([MSS.CloseZ:Y]+8*#Scale#)
ImageName=#@#Bitmap\Close
DynamicVariables=1
ImageTint=#FontColor_General#
W=(16*#Scale#)
H=(16*#Scale#)

[MSS.S.Group_CloseH]
Group=CloseH
Hidden=1

[MSS.CloseHB]
Meter=Shape
X=[MSS.CloseZ:X]
Y=[MSS.CloseZ:Y]
Shape=Rectangle 0,0,(32*#Scale#),(32*#Scale#),(6*#Scale#*#Arched#),(6*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color 196,43,28
Shape2=Rectangle 0,0,(16*#Scale#),(32*#Scale#),0,0
Shape3=Rectangle 0,(16*#Scale#),(32*#Scale#),(16*#Scale#),0,0
Shape4=Combine Shape | Union Shape2 | Union Shape3
DynamicVariables=1
MeterStyle=MSS.S.Group_CloseH

[MSS.CloseHI]
Meter=Image
X=[MSS.CloseI:X]
Y=[MSS.CloseI:Y]
ImageName=#@#Bitmap\Close
DynamicVariables=1
W=(16*#Scale#)
H=(16*#Scale#)
MeterStyle=MSS.S.Group_CloseH

[MSS.MenuBZ]
Meter=Shape
X=((256-64)*#Scale#)
Shape=Rectangle 0,0,(32*#Scale#),(32*#Scale#) | StrokeWidth 0 | Fill Color 0,0,0,0
DynamicVariables=1
MouseOverAction=[!ShowMeter MSS.MenuBH][!Redraw]
MouseLeaveAction=[!HideMeter MSS.MenuBH][!Redraw]
LeftMouseUpAction=[!Refresh]

[MSS.MenuBH]
Meter=Shape
X=((256-64)*#Scale#)
Shape=Rectangle 0,0,(32*#Scale#),(32*#Scale#) | StrokeWidth 0 | Fill Color #ThemeColor_BackgroundSelected#
DynamicVariables=1
Hidden=1

[MSS.MenuBI]
Meter=Image
X=([MSS.MenuBZ:X]+8*#Scale#)
Y=([MSS.MenuBZ:Y]+8*#Scale#)
ImageName=#@#Bitmap\Reload
DynamicVariables=1
ImageTint=#FontColor_General#
W=(16*#Scale#)
H=(16*#Scale#)

[MSS.Title]
Meter=String
Text=#T.Settings_of_SkinName#
MeterStyle=FontStyle_General
FontSize=(9*#Scale#)
X=(8*#Scale#)
Y=(16*#Scale#)
StringAlign=LeftCenter
FontWeight=700

[MSS.S.O_NO]
LeftMouseUpAction=[]

[MSS.S.O_TI]
LeftMouseUpAction=[!CommandMeasure "[#CURRENTSECTION]TI" "ExecuteBatch 1"][!ShowMeter [#CURRENTSECTION]C][!Update][!Redraw]

[MSS.S.O_NV]
LeftMouseUpAction=[]

[MSS.S.O_CM]
LeftMouseUpAction=[!ShowMeterGroup [#CURRENTSECTION]CM][!Update][!Redraw]

[MSS.S.O_CB]
LeftMouseUpAction=[!WriteKeyValue "Variables" "[#[#CURRENTSECTION]V]" "(1-[#[#[#CURRENTSECTION]V]])" "#CurrentPath#Settings.inc"][!Refresh]

[MSS.S.O_CF]
LeftMouseUpAction=[!CommandMeasure MC "ChooseFolder [#[#CURRENTSECTION]]"]

[MSS.S.O_CL]
LeftMouseUpAction=[!CommandMeasure MC "ChooseFile [#[#CURRENTSECTION]]"]

[MSS.S.O_OA]
LeftMouseUpAction=[#[#CURRENTSECTION]OA]


[MSS.S.OI1_NO]
ImageName=#@#Bitmap\NA
ImageTint=#FontColor_General#

[MSS.S.OI1_TI]
ImageName=#@#Bitmap\Edit
ImageTint=#FontColor_General#

[MSS.S.OI1_NV]
W=(8*#Scale#)
H=(8*#Scale#)
DynamicVariables=1
ImageName=#@#Bitmap\Arrow Up (Small)
ImageTint=#FontColor_General#
LeftMouseUpAction=[!WriteKeyValue "Variables" "[#MSS[#CURRENTSECTION]V]" "(Clamp(([#[#MSS[#CURRENTSECTION]V]]+[#MSS[#CURRENTSECTION]RV]),[#MSS[#CURRENTSECTION]R]))" "#CurrentPath#Settings.inc"][!Refresh]

[MSS.S.OI1_CM]
ImageName=#@#Bitmap\Arrow Down
ImageTint=#FontColor_General#

[MSS.S.OI1_CB]
ImageName=#@#Bitmap\Check Box ([#[#MSS[#CURRENTSECTION]V]])
ImageTint=[#ThemeColor_CheckBox_[#[#MSS[#CURRENTSECTION]V]]]

[MSS.S.OI1_CF]
ImageName=#@#Bitmap\Search
ImageTint=#FontColor_General#

[MSS.S.OI1_CL]
ImageName=#@#Bitmap\Search
ImageTint=#FontColor_General#

[MSS.S.OI1_OA]
ImageName=#@#Bitmap\Open
ImageTint=#FontColor_General#

[MSS.S.OI2_NO]
ImageName=#@#Bitmap\NA
ImageTint=#FontColor_General#

[MSS.S.OI2_TI]
ImageName=#@#Bitmap\NA
ImageTint=#FontColor_General#

[MSS.S.OI2_NV]
W=(8*#Scale#)
H=(8*#Scale#)
ImageName=#@#Bitmap\Arrow Down (Small)
ImageTint=#FontColor_General#
LeftMouseUpAction=[!WriteKeyValue "Variables" "[#MSSS[#CURRENTSECTION]V]" "(Clamp(([#[#MSSS[#CURRENTSECTION]V]]-[#MSSS[#CURRENTSECTION]RV]),[#MSSS[#CURRENTSECTION]R]))" "#CurrentPath#Settings.inc"][!Refresh]

[MSS.S.OI2_CM]
ImageName=#@#Bitmap\NA
ImageTint=#FontColor_General#

[MSS.S.OI2_CB]
ImageName=#@#Bitmap\NA
ImageTint=#FontColor_General#

[MSS.S.OI2_CF]
ImageName=#@#Bitmap\NA
ImageTint=#FontColor_General#

[MSS.S.OI2_OA]
ImageName=#@#Bitmap\NA
ImageTint=#FontColor_General#



[MSS.S.DT_NO]
LeftMouseUpAction=[]

[MSS.S.DT_TI]
LeftMouseUpAction=[]

[MSS.S.DT_NV]
LeftMouseUpAction=[!CommandMeasure "MS[#CURRENTSECTION]NVTI" "ExecuteBatch 1"][!ShowMeter MS[#CURRENTSECTION]C][!Update][!Redraw]

[MSS.S.DT_CM]
LeftMouseUpAction=[]

[MSS.S.DT_CB]
LeftMouseUpAction=[]

[MSS.S.DT_OA]
LeftMouseUpAction=[]

[MSS.S.O]
Shape=Rectangle 0,0,(256*#Scale#),(32*#Scale#) | StrokeWidth 0 | Fill Color 0,0,0,0
Shape2=Rectangle (1*#Scale#),(-1*#Scale#),((256-2)*#Scale#),(1*#Scale#) | StrokeWidth 0 | Fill Color #FontColor_General#,32
DynamicVariables=1
Hidden=[#[#CURRENTSECTION]H]
MouseOverAction=[!ShowMeter [#CURRENTSECTION]H][!Redraw]
MouseLeaveAction=[!HideMeter [#CURRENTSECTION]H][!Redraw]

[MSS.S.OB]
X=0
Y=(32*#Scale#)

[Next]
X=0r
Y=(32*#Scale#)r

[MSSSSO1]
Meter=Shape
MeterStyle=MSS.S.O|MSS.S.O_[#[#CURRENTSECTION]Ty]|MSS.S.OB
[MSSSSO2]
Meter=Shape
MeterStyle=MSS.S.O|MSS.S.O_[#[#CURRENTSECTION]Ty]|Next
[MSSSSO3]
Meter=Shape
MeterStyle=MSS.S.O|MSS.S.O_[#[#CURRENTSECTION]Ty]|Next
[MSSSSO4]
Meter=Shape
MeterStyle=MSS.S.O|MSS.S.O_[#[#CURRENTSECTION]Ty]|Next
[MSSSSO5]
Meter=Shape
MeterStyle=MSS.S.O|MSS.S.O_[#[#CURRENTSECTION]Ty]|Next
[MSSSSO6]
Meter=Shape
MeterStyle=MSS.S.O|MSS.S.O_[#[#CURRENTSECTION]Ty]|Next
[MSSSSO7]
Meter=Shape
MeterStyle=MSS.S.O|MSS.S.O_[#[#CURRENTSECTION]Ty]|Next

[MSS.S.OH]
Shape=Rectangle (1*#Scale#),0,((256-2)*#Scale#),(32*#Scale#) | StrokeWidth 0 | Fill Color #ThemeColor_BackgroundSelected#
DynamicVariables=1
Hidden=1

[MSSSSO1H]
Meter=Shape
MeterStyle=MSS.S.OH|MSS.S.OB
[MSSSSO2H]
Meter=Shape
MeterStyle=MSS.S.OH|Next
[MSSSSO3H]
Meter=Shape
MeterStyle=MSS.S.OH|Next
[MSSSSO4H]
Meter=Shape
MeterStyle=MSS.S.OH|Next
[MSSSSO5H]
Meter=Shape
MeterStyle=MSS.S.OH|Next
[MSSSSO6H]
Meter=Shape
MeterStyle=MSS.S.OH|Next
[MSSSSO7H]
Meter=Shape
MeterStyle=MSS.S.OH|Next

[MeaSSSSO1]
Measure=String
String=#MSSSSO1Tr#
[MeaSSSSO2]
Measure=String
String=#MSSSSO2Tr#
[MeaSSSSO3]
Measure=String
String=#MSSSSO3Tr#
[MeaSSSSO4]
Measure=String
String=#MSSSSO4Tr#
[MeaSSSSO5]
Measure=String
String=#MSSSSO5Tr#
[MeaSSSSO6]
Measure=String
String=#MSSSSO6Tr#
[MeaSSSSO7]
Measure=String
String=#MSSSSO7Tr#

[MSS.S.N]
Text=[#M[#CURRENTSECTION]N]
MeasureName=Mea#CURRENTSECTION#
FontSize=(9*#Scale#)
StringAlign=LeftCenter
W=(180*#Scale#)
ClipString=1

[MSS.S.NB]
X=(8*#Scale#)
Y=(48*#Scale#)

[SSSSO1]
Meter=String
MeterStyle=FontStyle_General|MSS.S.N|MSS.S.NB
[SSSSO2]
Meter=String
MeterStyle=FontStyle_General|MSS.S.N|Next
[SSSSO3]
Meter=String
MeterStyle=FontStyle_General|MSS.S.N|Next
[SSSSO4]
Meter=String
MeterStyle=FontStyle_General|MSS.S.N|Next
[SSSSO5]
Meter=String
MeterStyle=FontStyle_General|MSS.S.N|Next
[SSSSO6]
Meter=String
MeterStyle=FontStyle_General|MSS.S.N|Next
[SSSSO7]
Meter=String
MeterStyle=FontStyle_General|MSS.S.N|Next

[MSS.S.D]
Text=[#MS[#CURRENTSECTION]D]
FontSize=(9*#Scale#)
StringAlign=RightCenter
W=(180*#Scale#)
ClipString=1
FontColor=#FontColor_General#,128

[MSS.S.DB]
X=((256-32)*#Scale#)
Y=(48*#Scale#)


[SSSO1]
Meter=String
MeterStyle=FontStyle_General|MSS.S.D|MSS.S.DT_[#MS[#CURRENTSECTION]Ty]|MSS.S.DB
[SSSO2]
Meter=String
MeterStyle=FontStyle_General|MSS.S.D|MSS.S.DT_[#MS[#CURRENTSECTION]Ty]|Next
[SSSO3]
Meter=String
MeterStyle=FontStyle_General|MSS.S.D|MSS.S.DT_[#MS[#CURRENTSECTION]Ty]|Next
[SSSO4]
Meter=String
MeterStyle=FontStyle_General|MSS.S.D|MSS.S.DT_[#MS[#CURRENTSECTION]Ty]|Next
[SSSO5]
Meter=String
MeterStyle=FontStyle_General|MSS.S.D|MSS.S.DT_[#MS[#CURRENTSECTION]Ty]|Next
[SSSO6]
Meter=String
MeterStyle=FontStyle_General|MSS.S.D|MSS.S.DT_[#MS[#CURRENTSECTION]Ty]|Next
[SSSO7]
Meter=String
MeterStyle=FontStyle_General|MSS.S.D|MSS.S.DT_[#MS[#CURRENTSECTION]Ty]|Next

[MSS.S.I]
W=(16*#Scale#)
H=(16*#Scale#)
DynamicVariables=1

[MSS.S.IB]
X=((256-32+8)*#Scale#)
Y=((32+8)*#Scale#)

[MSS.S.IB2]
X=((256-32+8)*#Scale#)
Y=((32+8+8)*#Scale#)

[SSO1]
Meter=Image
MeterStyle=MSS.S.IB|MSS.S.I|MSS.S.OI1_[#MSS[#CURRENTSECTION]Ty]
[SSO2]
Meter=Image
MeterStyle=Next|MSS.S.I|MSS.S.OI1_[#MSS[#CURRENTSECTION]Ty]
[SSO3]
Meter=Image
MeterStyle=Next|MSS.S.I|MSS.S.OI1_[#MSS[#CURRENTSECTION]Ty]
[SSO4]
Meter=Image
MeterStyle=Next|MSS.S.I|MSS.S.OI1_[#MSS[#CURRENTSECTION]Ty]
[SSO5]
Meter=Image
MeterStyle=Next|MSS.S.I|MSS.S.OI1_[#MSS[#CURRENTSECTION]Ty]
[SSO6]
Meter=Image
MeterStyle=Next|MSS.S.I|MSS.S.OI1_[#MSS[#CURRENTSECTION]Ty]
[SSO7]
Meter=Image
MeterStyle=Next|MSS.S.I|MSS.S.OI1_[#MSS[#CURRENTSECTION]Ty]

[SO1]
Meter=Image
MeterStyle=MSS.S.IB2|MSS.S.I|MSS.S.OI2_[#MSSS[#CURRENTSECTION]Ty]
[SO2]
Meter=Image
MeterStyle=Next|MSS.S.I|MSS.S.OI2_[#MSSS[#CURRENTSECTION]Ty]
[SO3]
Meter=Image
MeterStyle=Next|MSS.S.I|MSS.S.OI2_[#MSSS[#CURRENTSECTION]Ty]
[SO4]
Meter=Image
MeterStyle=Next|MSS.S.I|MSS.S.OI2_[#MSSS[#CURRENTSECTION]Ty]
[SO5]
Meter=Image
MeterStyle=Next|MSS.S.I|MSS.S.OI2_[#MSSS[#CURRENTSECTION]Ty]
[SO6]
Meter=Image
MeterStyle=Next|MSS.S.I|MSS.S.OI2_[#MSSS[#CURRENTSECTION]Ty]
[SO7]
Meter=Image
MeterStyle=Next|MSS.S.I|MSS.S.OI2_[#MSSS[#CURRENTSECTION]Ty]

[MSS.S.CMI]
FontSize=(9*#Scale#)
StringAlign=LeftCenter

[MSS.S.CMIB]
X=(16*#Scale#)r
Y=(16*#Scale#)r

[MSS.S.OC]
Shape=Rectangle (2*#Scale#),(2*#Scale#),((256-4)*#Scale#),((32-4)*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_TextInputer#
Shape2=Rectangle (2*#Scale#),(2*#Scale#),((256-4)*#Scale#),((32-4)*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_General#
Shape3=Rectangle (2*#Scale#),(0*#Scale#),((256-4)*#Scale#),((32-4)*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#)
Shape4=Combine Shape2 | Exclude Shape3
DynamicVariables=1
Hidden=1

[MSSSSO1C]
Meter=Shape
MeterStyle=MSS.S.OC|MSS.S.OB
[MSSSSO2C]
Meter=Shape
MeterStyle=MSS.S.OC|Next
[MSSSSO3C]
Meter=Shape
MeterStyle=MSS.S.OC|Next
[MSSSSO4C]
Meter=Shape
MeterStyle=MSS.S.OC|Next
[MSSSSO5C]
Meter=Shape
MeterStyle=MSS.S.OC|Next
[MSSSSO6C]
Meter=Shape
MeterStyle=MSS.S.OC|Next
[MSSSSO7C]
Meter=Shape
MeterStyle=MSS.S.OC|Next

[MSSSSO1TI]
Measure=Plugin
Plugin=InputText
X=(8*#Scale#)
Y=((8+32*1)*#Scale#)
W=((256-16)*#Scale#)
H=(16*#Scale#)
SolidColor=#ThemeColor_TextInputer#
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(8*#Scale#)
AntiAlias=1
FocusDismiss=1
DefaultValue=[#[#MSSSSO1V]]
Command1=[!WriteKeyValue Variables "#MSSSSO1V#" "$UserInput$" "#CurrentPath#Settings.inc"][!Refresh]
OnDismissAction=[!HideMeter MSSSSO1C][!Update][!Redraw]
DynamicVariables=1

[MSSSSO2TI]
Measure=Plugin
Plugin=InputText
X=(8*#Scale#)
Y=((8+32*2)*#Scale#)
W=((256-16)*#Scale#)
H=(16*#Scale#)
SolidColor=#ThemeColor_TextInputer#
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(8*#Scale#)
AntiAlias=1
FocusDismiss=1
DefaultValue=[#[#MSSSSO2V]]
Command1=[!WriteKeyValue Variables "#MSSSSO2V#" "$UserInput$" "#CurrentPath#Settings.inc"][!Refresh]
OnDismissAction=[!HideMeter MSSSSO2C][!Update][!Redraw]
DynamicVariables=1

[MSSSSO3TI]
Measure=Plugin
Plugin=InputText
X=(8*#Scale#)
Y=((8+32*3)*#Scale#)
W=((256-16)*#Scale#)
H=(16*#Scale#)
SolidColor=#ThemeColor_TextInputer#
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(8*#Scale#)
AntiAlias=1
FocusDismiss=1
DefaultValue=[#[#MSSSSO3V]]
Command1=[!WriteKeyValue Variables "#MSSSSO3V#" "$UserInput$" "#CurrentPath#Settings.inc"][!Refresh]
OnDismissAction=[!HideMeter MSSSSO3C][!Update][!Redraw]
DynamicVariables=1

[MSSSSO4TI]
Measure=Plugin
Plugin=InputText
X=(8*#Scale#)
Y=((8+32*4)*#Scale#)
W=((256-16)*#Scale#)
H=(16*#Scale#)
SolidColor=#ThemeColor_TextInputer#
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(8*#Scale#)
AntiAlias=1
FocusDismiss=1
DefaultValue=[#[#MSSSSO4V]]
Command1=[!WriteKeyValue Variables "#MSSSSO4V#" "$UserInput$" "#CurrentPath#Settings.inc"][!Refresh]
OnDismissAction=[!HideMeter MSSSSO4C][!Update][!Redraw]
DynamicVariables=1

[MSSSSO5TI]
Measure=Plugin
Plugin=InputText
X=(8*#Scale#)
Y=((8+32*5)*#Scale#)
W=((256-16)*#Scale#)
H=(16*#Scale#)
SolidColor=#ThemeColor_TextInputer#
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(8*#Scale#)
AntiAlias=1
FocusDismiss=1
DefaultValue=[#[#MSSSSO5V]]
Command1=[!WriteKeyValue Variables "#MSSSSO5V#" "$UserInput$" "#CurrentPath#Settings.inc"][!Refresh]
OnDismissAction=[!HideMeter MSSSSO5C][!Update][!Redraw]
DynamicVariables=1

[MSSSSO6TI]
Measure=Plugin
Plugin=InputText
X=(8*#Scale#)
Y=((8+32*6)*#Scale#)
W=((256-16)*#Scale#)
H=(16*#Scale#)
SolidColor=#ThemeColor_TextInputer#
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(8*#Scale#)
AntiAlias=1
FocusDismiss=1
DefaultValue=[#[#MSSSSO6V]]
Command1=[!WriteKeyValue Variables "#MSSSSO6V#" "$UserInput$" "#CurrentPath#Settings.inc"][!Refresh]
OnDismissAction=[!HideMeter MSSSSO6C][!Update][!Redraw]
DynamicVariables=1

[MSSSSO7TI]
Measure=Plugin
Plugin=InputText
X=(8*#Scale#)
Y=((8+32*7)*#Scale#)
W=((256-16)*#Scale#)
H=(16*#Scale#)
SolidColor=#ThemeColor_TextInputer#
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(8*#Scale#)
AntiAlias=1
FocusDismiss=1
DefaultValue=[#[#MSSSSO7V]]
Command1=[!WriteKeyValue Variables "#MSSSSO7V#" "$UserInput$" "#CurrentPath#Settings.inc"][!Refresh]
OnDismissAction=[!HideMeter MSSSSO7C][!Update][!Redraw]
DynamicVariables=1



[MSSSSO1NVTI]
Measure=Plugin
Plugin=InputText
X=(8*#Scale#)
Y=((8+32*1)*#Scale#)
W=((256-16)*#Scale#)
H=(16*#Scale#)
SolidColor=#ThemeColor_TextInputer#
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(8*#Scale#)
AntiAlias=1
FocusDismiss=1
DefaultValue=[#[#MSSSSO1V]]
Command1=[!WriteKeyValue Variables "#MSSSSO1V#" "(Clamp(($UserInput$),#MSSSSO1R#))" "#CurrentPath#Settings.inc"][!Refresh]
OnDismissAction=[!HideMeter MSSSSO1C][!Update][!Redraw]
DynamicVariables=1
InputNumber=1

[MSSSSO2NVTI]
Measure=Plugin
Plugin=InputText
X=(8*#Scale#)
Y=((8+32*2)*#Scale#)
W=((256-16)*#Scale#)
H=(16*#Scale#)
SolidColor=#ThemeColor_TextInputer#
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(8*#Scale#)
AntiAlias=1
FocusDismiss=1
DefaultValue=[#[#MSSSSO2V]]
Command1=[!WriteKeyValue Variables "#MSSSSO2V#" "(Clamp(($UserInput$),#MSSSSO2R#))" "#CurrentPath#Settings.inc"][!Refresh]
OnDismissAction=[!HideMeter MSSSSO2C][!Update][!Redraw]
DynamicVariables=1
InputNumber=1

[MSSSSO3NVTI]
Measure=Plugin
Plugin=InputText
X=(8*#Scale#)
Y=((8+32*3)*#Scale#)
W=((256-16)*#Scale#)
H=(16*#Scale#)
SolidColor=#ThemeColor_TextInputer#
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(8*#Scale#)
AntiAlias=1
FocusDismiss=1
DefaultValue=[#[#MSSSSO3V]]
Command1=[!WriteKeyValue Variables "#MSSSSO3V#" "(Clamp(($UserInput$),#MSSSSO3R#))" "#CurrentPath#Settings.inc"][!Refresh]
OnDismissAction=[!HideMeter MSSSSO3C][!Update][!Redraw]
DynamicVariables=1
InputNumber=1

[MSSSSO4NVTI]
Measure=Plugin
Plugin=InputText
X=(8*#Scale#)
Y=((8+32*4)*#Scale#)
W=((256-16)*#Scale#)
H=(16*#Scale#)
SolidColor=#ThemeColor_TextInputer#
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(8*#Scale#)
AntiAlias=1
FocusDismiss=1
DefaultValue=[#[#MSSSSO4V]]
Command1=[!WriteKeyValue Variables "#MSSSSO4V#" "(Clamp(($UserInput$),#MSSSSO4R#))" "#CurrentPath#Settings.inc"][!Refresh]
OnDismissAction=[!HideMeter MSSSSO4C][!Update][!Redraw]
DynamicVariables=1
InputNumber=1

[MSSSSO5NVTI]
Measure=Plugin
Plugin=InputText
X=(8*#Scale#)
Y=((8+32*5)*#Scale#)
W=((256-16)*#Scale#)
H=(16*#Scale#)
SolidColor=#ThemeColor_TextInputer#
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(8*#Scale#)
AntiAlias=1
FocusDismiss=1
DefaultValue=[#[#MSSSSO5V]]
Command1=[!WriteKeyValue Variables "#MSSSSO5V#" "(Clamp(($UserInput$),#MSSSSO5R#))" "#CurrentPath#Settings.inc"][!Refresh]
OnDismissAction=[!HideMeter MSSSSO5C][!Update][!Redraw]
DynamicVariables=1
InputNumber=1

[MSSSSO6NVTI]
Measure=Plugin
Plugin=InputText
X=(8*#Scale#)
Y=((8+32*6)*#Scale#)
W=((256-16)*#Scale#)
H=(16*#Scale#)
SolidColor=#ThemeColor_TextInputer#
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(8*#Scale#)
AntiAlias=1
FocusDismiss=1
DefaultValue=[#[#MSSSSO6V]]
Command1=[!WriteKeyValue Variables "#MSSSSO6V#" "(Clamp(($UserInput$),#MSSSSO6R#))" "#CurrentPath#Settings.inc"][!Refresh]
OnDismissAction=[!HideMeter MSSSSO6C][!Update][!Redraw]
DynamicVariables=1
InputNumber=1

[MSSSSO7NVTI]
Measure=Plugin
Plugin=InputText
X=(8*#Scale#)
Y=((8+32*7)*#Scale#)
W=((256-16)*#Scale#)
H=(16*#Scale#)
SolidColor=#ThemeColor_TextInputer#
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(8*#Scale#)
AntiAlias=1
FocusDismiss=1
DefaultValue=[#[#MSSSSO7V]]
Command1=[!WriteKeyValue Variables "#MSSSSO7V#" "(Clamp(($UserInput$),#MSSSSO7R#))" "#CurrentPath#Settings.inc"][!Refresh]
OnDismissAction=[!HideMeter MSSSSO7C][!Update][!Redraw]
DynamicVariables=1
InputNumber=1
