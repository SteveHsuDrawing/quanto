[Variables]
DisableDownloadFunction=1

BeginX=384
BeginY=108
HelpButtonAction=[!WriteKeyValue Variables Page HelpCenter "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!WriteKeyValue Variables SubPage 00 "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!Refresh]

AOLP=0
Count=([FC0]-7*#AOLP#)

HFC1=(#Count#<1?1:0)
HFC2=(#Count#<2?1:0)
HFC3=(#Count#<3?1:0)
HFC4=(#Count#<4?1:0)
HFC5=(#Count#<5?1:0)
HFC6=(#Count#<6?1:0)
HFC7=(#Count#<7?1:0)
FC1=HWiNFOSupport
FC2=
FC3=
FC4=
FC5=
FC6=
FC7=

@include=#@#Pages\GlobalSettings_Global.inc
GapUnscaled=85
Gap=(#GapUnscaled#*#Scale#)
Gap2=(140*#Scale#)
@include1=#ROOTCONFIGPATH#Addons\#FC1#\@\Language\Global.inc
@include2=#ROOTCONFIGPATH#Addons\#FC2#\@\Language\Global.inc
@include3=#ROOTCONFIGPATH#Addons\#FC3#\@\Language\Global.inc
@include4=#ROOTCONFIGPATH#Addons\#FC4#\@\Language\Global.inc
@include5=#ROOTCONFIGPATH#Addons\#FC5#\@\Language\Global.inc
@include6=#ROOTCONFIGPATH#Addons\#FC6#\@\Language\Global.inc
@include7=#ROOTCONFIGPATH#Addons\#FC7#\@\Language\Global.inc

RefreshAddons=[!Update][!Delay 16][!Refresh][!WriteKeyValue Variables FC1 [FC1] "#@#Pages\AddSkins_00.inc"][!WriteKeyValue Variables FC2 [FC2] "#@#Pages\AddSkins_00.inc"][!WriteKeyValue Variables FC3 [FC3] "#@#Pages\AddSkins_00.inc"][!WriteKeyValue Variables FC4 [FC4] "#@#Pages\AddSkins_00.inc"][!WriteKeyValue Variables FC5 [FC5] "#@#Pages\AddSkins_00.inc"][!WriteKeyValue Variables FC6 [FC6] "#@#Pages\AddSkins_00.inc"][!WriteKeyValue Variables FC7 [FC7] "#@#Pages\AddSkins_00.inc"][!RefreshApp][!Update]

Fix=0
TitleButtonAction=[]
TitleButtonImageName=#@#Bitmap\NA

[Main]
Measure=Plugin
Plugin=FileView
Path=#ROOTCONFIGPATH#Addons
ShowDotDot=0
ShowFolder=1
ShowFile=0
ShowHidden=0
Count=(7+7*#AOLP#)

[FC0]
Measure=Plugin
Plugin=FileView
Path=[Main]
Type=FolderCount
[FC1]
Measure=Plugin
Plugin=FileView
Path=[Main]
Type=FileName
Index=(1+7*#AOLP#)
[FC2]
Measure=Plugin
Plugin=FileView
Path=[Main]
Type=FileName
Index=(2+7*#AOLP#)
[FC3]
Measure=Plugin
Plugin=FileView
Path=[Main]
Type=FileName
Index=(3+7*#AOLP#)
[FC4]
Measure=Plugin
Plugin=FileView
Path=[Main]
Type=FileName
Index=(4+7*#AOLP#)
[FC5]
Measure=Plugin
Plugin=FileView
Path=[Main]
Type=FileName
Index=(5+7*#AOLP#)
[FC6]
Measure=Plugin
Plugin=FileView
Path=[Main]
Type=FileName
Index=(6+7*#AOLP#)
[FC7]
Measure=Plugin
Plugin=FileView
Path=[Main]
Type=FileName
Index=(7+7*#AOLP#)

[MeterOption1]
Meter=Shape
X=(#BeginX#*#Scale#)
Y=(#BeginY#*#Scale#)
MeterStyle=MeterOptionStyle
MouseOverAction=[!ShowMeter MeterOptionSelected1][!Redraw]
MouseLeaveAction=[!HideMeter MeterOptionSelected1][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables Mode 0 "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!WriteKeyValue Variables AddonName Quanto "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!WriteKeyValue Variables SubPage 11 "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!Refresh]

[MeterOption2]
Meter=Shape
MeterStyle=MeterOptionStyle
MouseOverAction=[!ShowMeter MeterOptionSelected2][!Redraw]
MouseLeaveAction=[!HideMeter MeterOptionSelected2][!Redraw]
Hidden=1

[MeterOptionSelected1]
Meter=Shape
X=(#BeginX#*#Scale#)
Y=(#BeginY#*#Scale#)
MeterStyle=MeterOptionSelectedStyle

[MeterOptionSelected2]
Meter=Shape
MeterStyle=MeterOptionSelectedStyle

[MeterIcon1]
Meter=Image
ImageName=#@#Bitmap\Title Icon.png
X=((#BeginX#+24)*#Scale#)
Y=((#BeginY#+28)*#Scale#)
MeterStyle=MeterIconStyle
DynamicVariables=1

[MeterIcon2]
Meter=Image
ImageName=#@#Bitmap\Blur.png
MeterStyle=MeterIconStyle
Hidden=1

[MeterOptionText1]
Meter=String
X=((#BeginX#+68)*#Scale#)
Y=((#BeginY#+40)*#Scale#)
Text=Quanto
MeterStyle=MeterOptionTextStyle

[MeterOption1.Feature1.Display1]
Meter=Image
X=((#BeginX#+574)*#Scale#)
Y=(((#BeginY#+32)+((#GapUnscaled#))*0)*#Scale#)
ImageName=#@#Bitmap\Arrow Right.png
MeterStyle=MeterSmallIconStyle
DynamicVariables=1


[iP_ST1]
Meter=String
MeterStyle=FontStyle_General|SST
Y=([MeterOption1:YH]+25*#Scale#)
Text=#T.Add-ons_List# ([FC0])


[ZB]
X=(#BeginX#*#Scale#)
Y=((#BeginY#+170)*#Scale#)
[IB]
X=((#BeginX#+24)*#Scale#)
Y=((#BeginY#+28+170)*#Scale#)
[TB]
X=((#BeginX#+68)*#Scale#)
Y=((#BeginY#+40+170)*#Scale#)
[SIBiP]
X=((#BeginX#+605-9-24)*#Scale#)
Y=((#BeginY#+40-9+170)*#Scale#)
[TIB]
X=((#BeginX#+605-200-20)*#Scale#)
Y=((#BeginY#+40-20+170)*#Scale#)
[TIIB]
X=((#BeginX#+605-20-18-8)*#Scale#)
Y=((#BeginY#+40-20+10+170)*#Scale#)
[TITB]
X=((#BeginX#+605-200-16+4)*#Scale#)
Y=((#BeginY#+40-20+19+170)*#Scale#)
[CMTB]
X=(16*#Scale#)r
Y=(18*#Scale#)r
[SwcBX2]
X=((#BeginX#+300-48-16)*#Scale#)
Y=((#BeginY#+40-24+135)*#Scale#)
[SwcBX1]
X=((#BeginX#+605-48-16)*#Scale#)
Y=((#BeginY#+40-24+135)*#Scale#)


[iP_ZO1]
Meter=Shape
MeterStyle=SZW|ZB
Hidden=#HFC1#
LeftMouseUpAction=[!WriteKeyValue Variables Mode 1 "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!WriteKeyValue Variables AddonName #FC1# "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!WriteKeyValue Variables SubPage 11 "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!Refresh]
[iP_ZO2]
Meter=Shape
MeterStyle=SZW|Next
Hidden=#HFC2#
LeftMouseUpAction=[!WriteKeyValue Variables Mode 1 "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!WriteKeyValue Variables AddonName #FC2# "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!WriteKeyValue Variables SubPage 11 "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!Refresh]
[iP_ZO3]
Meter=Shape
MeterStyle=SZW|Next
Hidden=#HFC3#
LeftMouseUpAction=[!WriteKeyValue Variables Mode 1 "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!WriteKeyValue Variables AddonName #FC3# "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!WriteKeyValue Variables SubPage 11 "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!Refresh]
[iP_ZO4]
Meter=Shape
MeterStyle=SZW|Next
Hidden=#HFC4#
LeftMouseUpAction=[!WriteKeyValue Variables Mode 1 "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!WriteKeyValue Variables AddonName #FC4# "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!WriteKeyValue Variables SubPage 11 "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!Refresh]
[iP_ZO5]
Meter=Shape
MeterStyle=SZW|Next
Hidden=#HFC5#
LeftMouseUpAction=[!WriteKeyValue Variables Mode 1 "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!WriteKeyValue Variables AddonName #FC5# "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!WriteKeyValue Variables SubPage 11 "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!Refresh]
[iP_ZO6]
Meter=Shape
MeterStyle=SZW|Next
Hidden=#HFC6#
LeftMouseUpAction=[!WriteKeyValue Variables Mode 1 "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!WriteKeyValue Variables AddonName #FC6# "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!WriteKeyValue Variables SubPage 11 "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!Refresh]
[iP_ZO7]
Meter=Shape
MeterStyle=SZW|Next
Hidden=#HFC7#
LeftMouseUpAction=[!WriteKeyValue Variables Mode 1 "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!WriteKeyValue Variables AddonName #FC7# "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!WriteKeyValue Variables SubPage 11 "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!Refresh]

[iP_BO1]
Meter=Shape
MeterStyle=SBW|ZB
Hidden=#HFC1#
[iP_BO2]
Meter=Shape
MeterStyle=SBW|Next
Hidden=#HFC2#
[iP_BO3]
Meter=Shape
MeterStyle=SBW|Next
Hidden=#HFC3#
[iP_BO4]
Meter=Shape
MeterStyle=SBW|Next
Hidden=#HFC4#
[iP_BO5]
Meter=Shape
MeterStyle=SBW|Next
Hidden=#HFC5#
[iP_BO6]
Meter=Shape
MeterStyle=SBW|Next
Hidden=#HFC6#
[iP_BO7]
Meter=Shape
MeterStyle=SBW|Next
Hidden=#HFC7#


[SIiPS]
X=0r
Y=(((#OptionH#+5)*#Scale#))r
H=(24*#Scale#)
W=(24*#Scale#)
DynamicVariables=1

[iP_I01]
Meter=Image
MeterStyle=SIiPS|IB
ImageName=#ROOTCONFIGPATH#Addons\#FC1#\@\PackIcon.png
Hidden=#HFC1#
[iP_I02]
Meter=Image
MeterStyle=SIiPS|Next
ImageName=#ROOTCONFIGPATH#Addons\#FC2#\@\PackIcon.png
Hidden=#HFC2#
[iP_I03]
Meter=Image
MeterStyle=SIiPS|Next
ImageName=#ROOTCONFIGPATH#Addons\#FC3#\@\PackIcon.png
Hidden=#HFC3#
[iP_I04]
Meter=Image
MeterStyle=SIiPS|Next
ImageName=#ROOTCONFIGPATH#Addons\#FC4#\@\PackIcon.png
Hidden=#HFC4#
[iP_I05]
Meter=Image
MeterStyle=SIiPS|Next
ImageName=#ROOTCONFIGPATH#Addons\#FC5#\@\PackIcon.png
Hidden=#HFC5#
[iP_I06]
Meter=Image
MeterStyle=SIiPS|Next
ImageName=#ROOTCONFIGPATH#Addons\#FC6#\@\PackIcon.png
Hidden=#HFC6#
[iP_I07]
Meter=Image
MeterStyle=SIiPS|Next
ImageName=#ROOTCONFIGPATH#Addons\#FC7#\@\PackIcon.png
Hidden=#HFC7#

[MiP_T01]
Measure=String
String=[#AO_Inf.[#FC1].ApplyTo]
Hidden=#HFC1#
[MiP_T02]
Measure=String
String=[#AO_Inf.[#FC2].ApplyTo]
Hidden=#HFC2#
[MiP_T03]
Measure=String
String=[#AO_Inf.[#FC3].ApplyTo]
Hidden=#HFC3#
[MiP_T04]
Measure=String
String=[#AO_Inf.[#FC4].ApplyTo]
Hidden=#HFC4#
[MiP_T05]
Measure=String
String=[#AO_Inf.[#FC5].ApplyTo]
Hidden=#HFC5#
[MiP_T06]
Measure=String
String=[#AO_Inf.[#FC6].ApplyTo]
Hidden=#HFC6#
[MiP_T07]
Measure=String
String=[#AO_Inf.[#FC7].ApplyTo]
Hidden=#HFC7#
[iP_T01]
Meter=String
MeterStyle=MeterOptionTextStyle|WT|TB
MeasureName=M#CURRENTSECTION#
Text=[#AO_Inf.[#FC1].Name]#CRLF#[#AO_Inf.[#FC1].Description]#CRLF#[#AO_Inf.[#FC1].Version] | [#T.Applies_to_1]
InlinePattern=[#AO_Inf.[#FC1].Name]#CRLF#
InlinePattern2=[#AO_Inf.[#FC1].Name]#CRLF#
W=(495*#Scale#)
Hidden=#HFC1#
[iP_T02]
Meter=String
MeterStyle=MeterOptionTextStyle|WT|Next
MeasureName=M#CURRENTSECTION#
Text=[#AO_Inf.[#FC2].Name]#CRLF#[#AO_Inf.[#FC2].Description]#CRLF#[#AO_Inf.[#FC2].Version] | [#T.Applies_to_1]
InlinePattern=[#AO_Inf.[#FC2].Name]#CRLF#
InlinePattern2=[#AO_Inf.[#FC2].Name]#CRLF#
W=(495*#Scale#)
Hidden=#HFC2#
[iP_T03]
Meter=String
MeterStyle=MeterOptionTextStyle|WT|Next
MeasureName=M#CURRENTSECTION#
Text=[#AO_Inf.[#FC3].Name]#CRLF#[#AO_Inf.[#FC3].Description]#CRLF#[#AO_Inf.[#FC3].Version] | [#T.Applies_to_1]
InlinePattern=[#AO_Inf.[#FC3].Name]#CRLF#
InlinePattern2=[#AO_Inf.[#FC3].Name]#CRLF#
W=(495*#Scale#)
Hidden=#HFC3#
[iP_T04]
Meter=String
MeterStyle=MeterOptionTextStyle|WT|Next
MeasureName=M#CURRENTSECTION#
Text=[#AO_Inf.[#FC4].Name]#CRLF#[#AO_Inf.[#FC4].Description]#CRLF#[#AO_Inf.[#FC4].Version] | [#T.Applies_to_1]
InlinePattern=[#AO_Inf.[#FC4].Name]#CRLF#
InlinePattern2=[#AO_Inf.[#FC4].Name]#CRLF#
W=(495*#Scale#)
Hidden=#HFC4#
[iP_T05]
Meter=String
MeterStyle=MeterOptionTextStyle|WT|Next
MeasureName=M#CURRENTSECTION#
Text=[#AO_Inf.[#FC5].Name]#CRLF#[#AO_Inf.[#FC5].Description]#CRLF#[#AO_Inf.[#FC5].Version] | [#T.Applies_to_1]
InlinePattern=[#AO_Inf.[#FC5].Name]#CRLF#
InlinePattern2=[#AO_Inf.[#FC5].Name]#CRLF#
W=(495*#Scale#)
Hidden=#HFC5#
[iP_T06]
Meter=String
MeterStyle=MeterOptionTextStyle|WT|Next
MeasureName=M#CURRENTSECTION#
Text=[#AO_Inf.[#FC6].Name]#CRLF#[#AO_Inf.[#FC6].Description]#CRLF#[#AO_Inf.[#FC6].Version] | [#T.Applies_to_1]
InlinePattern=[#AO_Inf.[#FC6].Name]#CRLF#
InlinePattern2=[#AO_Inf.[#FC6].Name]#CRLF#
W=(495*#Scale#)
Hidden=#HFC6#
[iP_T07]
Meter=String
MeterStyle=MeterOptionTextStyle|WT|Next
MeasureName=M#CURRENTSECTION#
Text=[#AO_Inf.[#FC7].Name]#CRLF#[#AO_Inf.[#FC7].Description]#CRLF#[#AO_Inf.[#FC7].Version] | [#T.Applies_to_1]
InlinePattern=[#AO_Inf.[#FC7].Name]#CRLF#
InlinePattern2=[#AO_Inf.[#FC7].Name]#CRLF#
W=(495*#Scale#)
Hidden=#HFC7#

[iP_SI01]
Meter=Image
MeterStyle=SSIiP|SIBiP
ImageName=#@#Bitmap\Arrow Right
Hidden=#HFC1#
[iP_SI02]
Meter=Image
MeterStyle=SSIiP|Next
ImageName=#@#Bitmap\Arrow Right
Hidden=#HFC2#
[iP_SI03]
Meter=Image
MeterStyle=SSIiP|Next
ImageName=#@#Bitmap\Arrow Right
Hidden=#HFC3#
[iP_SI04]
Meter=Image
MeterStyle=SSIiP|Next
ImageName=#@#Bitmap\Arrow Right
Hidden=#HFC4#
[iP_SI05]
Meter=Image
MeterStyle=SSIiP|Next
ImageName=#@#Bitmap\Arrow Right
Hidden=#HFC5#
[iP_SI06]
Meter=Image
MeterStyle=SSIiP|Next
ImageName=#@#Bitmap\Arrow Right
Hidden=#HFC6#
[iP_SI07]
Meter=Image
MeterStyle=SSIiP|Next
ImageName=#@#Bitmap\Arrow Right
Hidden=#HFC7#

[BSHiP_ZO1]
Meter=Shape
MeterStyle=SBHW|ZB
[BSHiP_ZO2]
Meter=Shape
MeterStyle=SBHW|Next
[BSHiP_ZO3]
Meter=Shape
MeterStyle=SBHW|Next
[BSHiP_ZO4]
Meter=Shape
MeterStyle=SBHW|Next
[BSHiP_ZO5]
Meter=Shape
MeterStyle=SBHW|Next
[BSHiP_ZO6]
Meter=Shape
MeterStyle=SBHW|Next
[BSHiP_ZO7]
Meter=Shape
MeterStyle=SBHW|Next


[Nothing]
Meter=String
MeterStyle=FontStyle_General
Text=#S.Widgets_Settings.41#
X=((#BeginX#+300)*#Scale#)
Y=((#BeginY#+170+40)*#Scale#)
StringAlign=CenterCenter
FontColor=#FontColor_General#,128
Hidden=(#Count#<1?0:1)




[MeterSmallButtonStart]
X=(#BeginX#*#Scale#)
Y=((#BeginY#+125)*#Scale#)
[MeterSmallButtonImageStart]
X=((#BeginX#+12)*#Scale#)
Y=((#BeginY#+125+12)*#Scale#)

[MeterSmallButtonUnavailableStyle]
X=((46*#Scale#))r
Y=0r
Shape=Rectangle 0,0,(40*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BackgroundNoAlpha#,(#Alpha#/2)
Shape2=Rectangle 0,0,(40*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape3=Rectangle (1*#Scale#),(1*#Scale#),((40-2)*#Scale#),(38*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape4=Combine Shape2 | Exclude Shape3
DynamicVariables=1

[MeterSmallButtonAvailableStyle]
X=((46*#Scale#))r
Y=0r
Shape=Rectangle 0,0,(40*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_OptionAlpha#
Shape2=Rectangle 0,0,(40*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape3=Rectangle (1*#Scale#),(1*#Scale#),((40-2)*#Scale#),(38*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape4=Combine Shape2 | Exclude Shape3
DynamicVariables=1
MouseOverAction=[!ShowMeter #CURRENTSECTION#Hover][!Redraw]
MouseLeaveAction=[!HideMeter #CURRENTSECTION#Hover][!Redraw]

[MeterSmallButtonHoverStyle]
X=((46*#Scale#))r
Y=0r
Shape=Rectangle 0,0,(40*#Scale#),(40*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_BackgroundSelectedLight# | StrokeWidth 0
Hidden=1
DynamicVariables=1
[MeterPrvsButtonUnavailable]
Meter=Shape
MeterStyle=MeterSmallButtonUnavailableStyle | MeterSmallButtonStart
[MeterNextButtonUnavailable]
Meter=Shape
MeterStyle=MeterSmallButtonUnavailableStyle
[MeterImageStyle]
X=((46*#Scale#))r
Y=0r
W=(16*#Scale#)
H=(16*#Scale#)
DynamicVariables=1
[MeterImageUnavailableStyle]
ImageTint=#FontColor_General#,128
[MeterImageAvailableStyle]
ImageTint=#FontColor_General#

[MeterImagePrvsUnavailable]
Meter=Image
ImageName=#@#Bitmap\Arrow Left
MeterStyle=MeterImageStyle | MeterImageUnavailableStyle | MeterSmallButtonImageStart
[MeterImageNextUnavailable]
Meter=Image
ImageName=#@#Bitmap\Arrow Right
MeterStyle=MeterImageStyle | MeterImageUnavailableStyle

[MeterPrvsButton]
Meter=Shape
MeterStyle=MeterSmallButtonAvailableStyle | MeterSmallButtonStart
Hidden=(#AOLP#=0?1:0)
LeftMouseUpAction=[!WriteKeyValue Variables AOLP "(#AOLP#-1)" "#@#Pages\AddSkins_00.inc"][!Refresh]#RefreshAddons#
[MeterNextButton]
Meter=Shape
MeterStyle=MeterSmallButtonAvailableStyle
Hidden=(#Count#>7?0:1)
LeftMouseUpAction=[!WriteKeyValue Variables AOLP "(#AOLP#+1)" "#@#Pages\AddSkins_00.inc"][!Refresh]#RefreshAddons#
[MeterRefreshButton]
Meter=Shape
MeterStyle=MeterSmallButtonAvailableStyle
LeftMouseUpAction=[!WriteKeyValue Variables AOLP "0" "#@#Pages\AddSkins_00.inc"][!Refresh]#RefreshAddons#
[MeterFolderButton]
Meter=Shape
MeterStyle=MeterSmallButtonAvailableStyle
LeftMouseUpAction=["#ROOTCONFIGPATH#Addons"]
[MeterDownloadButton]
Meter=Shape
MeterStyle=MeterSmallButtonAvailableStyle
;LeftMouseUpAction=["#ROOTCONFIGPATH#Addons"]
ToolTipText=#S.Widgets_Settings.43#
Hidden=#DisableDownloadFunction#

[MeterPrvsButtonHover]
Meter=Shape
MeterStyle=MeterSmallButtonHoverStyle | MeterSmallButtonStart
[MeterNextButtonHover]
Meter=Shape
MeterStyle=MeterSmallButtonHoverStyle
[MeterRefreshButtonHover]
Meter=Shape
MeterStyle=MeterSmallButtonHoverStyle
[MeterFolderButtonHover]
Meter=Shape
MeterStyle=MeterSmallButtonHoverStyle
[MeterDownloadButtonHover]
Meter=Shape
MeterStyle=MeterSmallButtonHoverStyle

[MeterImagePrvsAvailable]
Meter=Image
ImageName=#@#Bitmap\Arrow Left
MeterStyle=MeterImageStyle | MeterImageAvailableStyle | MeterSmallButtonImageStart
Hidden=(#AOLP#=0?1:0)
[MeterImageNextAvailable]
Meter=Image
ImageName=#@#Bitmap\Arrow Right
MeterStyle=MeterImageStyle | MeterImageAvailableStyle
Hidden=(#Count#>7?0:1)
[MeterImageRefreshAvailable]
Meter=Image
ImageName=#@#Bitmap\Reload
MeterStyle=MeterImageStyle | MeterImageAvailableStyle
[MeterImageFolderAvailable]
Meter=Image
ImageName=#@#Bitmap\Folder
MeterStyle=MeterImageStyle | MeterImageAvailableStyle
[MeterImageDownloadAvailable]
Meter=Image
ImageName=#@#Bitmap\Download
MeterStyle=MeterImageStyle | MeterImageAvailableStyle
Hidden=#DisableDownloadFunction#

[SL]
Meter=String
MeterStyle=FontStyle_General|SSl
W=(375*#Scale#)
ClipString=1
Text=#S.Widgets_Settings.42#
X=((#BeginX#+605)*#Scale#)
Y=((#BeginY#+145)*#Scale#)
StringAlign=RightCenter
LeftMouseUpAction=["https://github.com/SteveHsuDrawing/quanto/wiki/Quanto-Add%E2%80%90ons"]

[MeterTitle]
Meter=String
Text=#T.Add_Skins#
MeterStyle=FontStyle_Title
DynamicVariables=1

[MeterTitleButtonZone]
Meter=Shape
MeterStyle=MeterTitleButtonZoneStyle

[MeterTitleButtonSelected]
Meter=Shape
MeterStyle=MeterTitleButtonSelectedStyle
