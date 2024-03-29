[Variables]
-------O11.Hidden=1
-------O12.Hidden=1
-------O13.Hidden=1
-------O14.Hidden=1
-------O15.Hidden=1
-------O16.Hidden=1
-------O17.Hidden=1
-------O18.Hidden=1
-------O21.Hidden=1
-------O22.Hidden=1
-------O23.Hidden=1
-------O24.Hidden=1
-------O25.Hidden=1
-------O26.Hidden=1
-------O27.Hidden=1
-------O28.Hidden=1

-------O11.Name=NA
-------O12.Name=NA
-------O13.Name=NA
-------O14.Name=NA
-------O15.Name=NA
-------O16.Name=NA
-------O17.Name=NA
-------O18.Name=NA
-------O21.Name=NA
-------O22.Name=NA
-------O23.Name=NA
-------O24.Name=NA
-------O25.Name=NA
-------O26.Name=NA
-------O27.Name=NA
-------O28.Name=NA

ExtraTip=#S.Widgets_Settings.24#
Category=Shortcuts\Customs

@Include=#@#Resources\Resources.inc


[XN]
X=((60*#Scale#))r
Y=0r

[YN]
X=0r
Y=((58*#Scale#))r

[iPS1]
Shape=Rectangle 0,0,(40*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_OptionAlpha#
Shape2=Rectangle 0,0,(40*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape3=Rectangle (1*#Scale#),(1*#Scale#),((40-2)*#Scale#),((40-2)*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape4=Combine Shape2 | Exclude Shape3
DynamicVariables=1
Group=MouseAction
MouseOverAction=[!ShowMeter H[#CURRENTSECTION]][!Redraw]
MouseLeaveAction=[!HideMeter H[#CURRENTSECTION]][!Redraw]
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Shortcuts\Customs\Custom_#CURRENTSECTION#"]
RightMouseUpAction=[!WriteKeyValue Variables Edit "Custom_#CURRENTSECTION#" "#ROOTCONFIGPATH#Extras\Settings\CustomShortcutSettings\Settings.inc"][!ActivateConfig "#ROOTCONFIG#\Extras\Settings\CustomShortcutSettings" "9x9.ini"][!Move (#CURRENTCONFIGX#+16*#Scale#) (#CURRENTCONFIGY#+16*#Scale#) "#ROOTCONFIG#\Extras\Settings\CustomShortcutSettings"]
ToolTipTitle=[#QuickSetting.Text.Custom_[#CURRENTSECTION]]
ToolTipText=[#QuickSetting.Action.Custom_[#CURRENTSECTION]]#CRLF##S.Widgets_Settings.12#

[iPS2]
W=(24*#Scale#)
H=(24*#Scale#)
DynamicVariables=1
ImageName=[#QuickSetting.[#CURRENTSECTION]]

[iPS3]
Shape=Rectangle 0,0,(40*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0
DynamicVariables=1

[iPS4]
ImageName=[#QuickSetting.[#CURRENTSECTION]]
W=(40*#Scale#)
H=(40*#Scale#)
PreserveAspectRatio=1
DynamicVariables=1
Container=M.[#CURRENTSECTION]

[iPS5]
Shape=Rectangle 0,0,(40*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | Fill Color #ThemeColor_BackgroundSelected# | StrokeWidth 0
DynamicVariables=1
Hidden=1

[BX1]
X=((#BeginX#+15)*#Scale#)

[BX2]
X=((#BeginX#+15+8)*#Scale#)

;-------------------------------------------------------------------

[001]
Meter=Shape
Y=((#BeginY#+80)*#Scale#)
MeterStyle=iPS1|BX1
[002]
Meter=Shape
MeterStyle=iPS1|XN
[003]
Meter=Shape
MeterStyle=iPS1|XN
[004]
Meter=Shape
MeterStyle=iPS1|XN
[005]
Meter=Shape
MeterStyle=iPS1|XN
[006]
Meter=Shape
MeterStyle=iPS1|XN
[007]
Meter=Shape
MeterStyle=iPS1|XN
[008]
Meter=Shape
MeterStyle=iPS1|XN
[009]
Meter=Shape
MeterStyle=iPS1|XN
[010]
Meter=Shape
MeterStyle=iPS1|XN

[011]
Meter=Shape
MeterStyle=iPS1|YN|BX1
[012]
Meter=Shape
MeterStyle=iPS1|XN
[013]
Meter=Shape
MeterStyle=iPS1|XN
[014]
Meter=Shape
MeterStyle=iPS1|XN
[015]
Meter=Shape
MeterStyle=iPS1|XN
[016]
Meter=Shape
MeterStyle=iPS1|XN
[017]
Meter=Shape
MeterStyle=iPS1|XN
[018]
Meter=Shape
MeterStyle=iPS1|XN
[019]
Meter=Shape
MeterStyle=iPS1|XN
[020]
Meter=Shape
MeterStyle=iPS1|XN

[021]
Meter=Shape
MeterStyle=iPS1|YN|BX1
[022]
Meter=Shape
MeterStyle=iPS1|XN
[023]
Meter=Shape
MeterStyle=iPS1|XN
[024]
Meter=Shape
MeterStyle=iPS1|XN
[025]
Meter=Shape
MeterStyle=iPS1|XN
[026]
Meter=Shape
MeterStyle=iPS1|XN
[027]
Meter=Shape
MeterStyle=iPS1|XN
[028]
Meter=Shape
MeterStyle=iPS1|XN
[029]
Meter=Shape
MeterStyle=iPS1|XN
[030]
Meter=Shape
MeterStyle=iPS1|XN

[031]
Meter=Shape
MeterStyle=iPS1|YN|BX1
[032]
Meter=Shape
MeterStyle=iPS1|XN
[033]
Meter=Shape
MeterStyle=iPS1|XN
[034]
Meter=Shape
MeterStyle=iPS1|XN
[035]
Meter=Shape
MeterStyle=iPS1|XN
[036]
Meter=Shape
MeterStyle=iPS1|XN
[037]
Meter=Shape
MeterStyle=iPS1|XN
[038]
Meter=Shape
MeterStyle=iPS1|XN
[039]
Meter=Shape
MeterStyle=iPS1|XN
[040]
Meter=Shape
MeterStyle=iPS1|XN

[041]
Meter=Shape
MeterStyle=iPS1|YN|BX1
[042]
Meter=Shape
MeterStyle=iPS1|XN
[043]
Meter=Shape
MeterStyle=iPS1|XN
[044]
Meter=Shape
MeterStyle=iPS1|XN
[045]
Meter=Shape
MeterStyle=iPS1|XN
[046]
Meter=Shape
MeterStyle=iPS1|XN
[047]
Meter=Shape
MeterStyle=iPS1|XN
[048]
Meter=Shape
MeterStyle=iPS1|XN
[049]
Meter=Shape
MeterStyle=iPS1|XN
[050]
Meter=Shape
MeterStyle=iPS1|XN

[051]
Meter=Shape
MeterStyle=iPS1|YN|BX1
[052]
Meter=Shape
MeterStyle=iPS1|XN
[053]
Meter=Shape
MeterStyle=iPS1|XN
[054]
Meter=Shape
MeterStyle=iPS1|XN
[055]
Meter=Shape
MeterStyle=iPS1|XN
[056]
Meter=Shape
MeterStyle=iPS1|XN
[057]
Meter=Shape
MeterStyle=iPS1|XN
[058]
Meter=Shape
MeterStyle=iPS1|XN
[059]
Meter=Shape
MeterStyle=iPS1|XN
[060]
Meter=Shape
MeterStyle=iPS1|XN

[061]
Meter=Shape
MeterStyle=iPS1|YN|BX1
[062]
Meter=Shape
MeterStyle=iPS1|XN
[063]
Meter=Shape
MeterStyle=iPS1|XN
[064]
Meter=Shape
MeterStyle=iPS1|XN
[065]
Meter=Shape
MeterStyle=iPS1|XN
[066]
Meter=Shape
MeterStyle=iPS1|XN
[067]
Meter=Shape
MeterStyle=iPS1|XN
[068]
Meter=Shape
MeterStyle=iPS1|XN
[069]
Meter=Shape
MeterStyle=iPS1|XN
[070]
Meter=Shape
MeterStyle=iPS1|XN

[071]
Meter=Shape
MeterStyle=iPS1|YN|BX1
[072]
Meter=Shape
MeterStyle=iPS1|XN
[073]
Meter=Shape
MeterStyle=iPS1|XN
[074]
Meter=Shape
MeterStyle=iPS1|XN
[075]
Meter=Shape
MeterStyle=iPS1|XN
[076]
Meter=Shape
MeterStyle=iPS1|XN
[077]
Meter=Shape
MeterStyle=iPS1|XN
[078]
Meter=Shape
MeterStyle=iPS1|XN
[079]
Meter=Shape
MeterStyle=iPS1|XN
[080]
Meter=Shape
MeterStyle=iPS1|XN

[081]
Meter=Shape
MeterStyle=iPS1|YN|BX1
[082]
Meter=Shape
MeterStyle=iPS1|XN
[083]
Meter=Shape
MeterStyle=iPS1|XN
[084]
Meter=Shape
MeterStyle=iPS1|XN
[085]
Meter=Shape
MeterStyle=iPS1|XN
[086]
Meter=Shape
MeterStyle=iPS1|XN
[087]
Meter=Shape
MeterStyle=iPS1|XN
[088]
Meter=Shape
MeterStyle=iPS1|XN
[089]
Meter=Shape
MeterStyle=iPS1|XN
[090]
Meter=Shape
MeterStyle=iPS1|XN

[091]
Meter=Shape
MeterStyle=iPS1|YN|BX1
[092]
Meter=Shape
MeterStyle=iPS1|XN
[093]
Meter=Shape
MeterStyle=iPS1|XN
[094]
Meter=Shape
MeterStyle=iPS1|XN
[095]
Meter=Shape
MeterStyle=iPS1|XN
[096]
Meter=Shape
MeterStyle=iPS1|XN
[097]
Meter=Shape
MeterStyle=iPS1|XN
[098]
Meter=Shape
MeterStyle=iPS1|XN
[099]
Meter=Shape
MeterStyle=iPS1|XN
[100]
Meter=Shape
MeterStyle=iPS1|XN

[101]
Meter=Shape
MeterStyle=iPS1|YN|BX1
[102]
Meter=Shape
MeterStyle=iPS1|XN
[103]
Meter=Shape
MeterStyle=iPS1|XN
[104]
Meter=Shape
MeterStyle=iPS1|XN
[105]
Meter=Shape
MeterStyle=iPS1|XN
[106]
Meter=Shape
MeterStyle=iPS1|XN
[107]
Meter=Shape
MeterStyle=iPS1|XN
[108]
Meter=Shape
MeterStyle=iPS1|XN
[109]
Meter=Shape
MeterStyle=iPS1|XN
[110]
Meter=Shape
MeterStyle=iPS1|XN

[111]
Meter=Shape
MeterStyle=iPS1|YN|BX1
[112]
Meter=Shape
MeterStyle=iPS1|XN
[113]
Meter=Shape
MeterStyle=iPS1|XN
[114]
Meter=Shape
MeterStyle=iPS1|XN
[115]
Meter=Shape
MeterStyle=iPS1|XN
[116]
Meter=Shape
MeterStyle=iPS1|XN
[117]
Meter=Shape
MeterStyle=iPS1|XN
[118]
Meter=Shape
MeterStyle=iPS1|XN
[119]
Meter=Shape
MeterStyle=iPS1|XN
[120]
Meter=Shape
MeterStyle=iPS1|XN

;-------------------------------------------------------------------


[Icon.Custom_001]
Meter=Image
Y=((#BeginY#+80+8)*#Scale#)
MeterStyle=iPS2|BX2
[Icon.Custom_002]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_003]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_004]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_005]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_006]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_007]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_008]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_009]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_010]
Meter=Image
MeterStyle=iPS2|XN

[Icon.Custom_011]
Meter=Image
MeterStyle=iPS2|YN|BX2
[Icon.Custom_012]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_013]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_014]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_015]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_016]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_017]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_018]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_019]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_020]
Meter=Image
MeterStyle=iPS2|XN

[Icon.Custom_021]
Meter=Image
MeterStyle=iPS2|YN|BX2
[Icon.Custom_022]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_023]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_024]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_025]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_026]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_027]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_028]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_029]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_030]
Meter=Image
MeterStyle=iPS2|XN

[Icon.Custom_031]
Meter=Image
MeterStyle=iPS2|YN|BX2
[Icon.Custom_032]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_033]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_034]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_035]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_036]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_037]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_038]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_039]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_040]
Meter=Image
MeterStyle=iPS2|XN

[Icon.Custom_041]
Meter=Image
MeterStyle=iPS2|YN|BX2
[Icon.Custom_042]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_043]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_044]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_045]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_046]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_047]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_048]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_049]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_050]
Meter=Image
MeterStyle=iPS2|XN

[Icon.Custom_051]
Meter=Image
MeterStyle=iPS2|YN|BX2
[Icon.Custom_052]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_053]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_054]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_055]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_056]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_057]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_058]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_059]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_060]
Meter=Image
MeterStyle=iPS2|XN

[Icon.Custom_061]
Meter=Image
MeterStyle=iPS2|YN|BX2
[Icon.Custom_062]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_063]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_064]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_065]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_066]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_067]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_068]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_069]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_070]
Meter=Image
MeterStyle=iPS2|XN

[Icon.Custom_071]
Meter=Image
MeterStyle=iPS2|YN|BX2
[Icon.Custom_072]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_073]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_074]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_075]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_076]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_077]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_078]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_079]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_080]
Meter=Image
MeterStyle=iPS2|XN

[Icon.Custom_081]
Meter=Image
MeterStyle=iPS2|YN|BX2
[Icon.Custom_082]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_083]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_084]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_085]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_086]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_087]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_088]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_089]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_090]
Meter=Image
MeterStyle=iPS2|XN

[Icon.Custom_091]
Meter=Image
MeterStyle=iPS2|YN|BX2
[Icon.Custom_092]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_093]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_094]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_095]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_096]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_097]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_098]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_099]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_100]
Meter=Image
MeterStyle=iPS2|XN

[Icon.Custom_101]
Meter=Image
MeterStyle=iPS2|YN|BX2
[Icon.Custom_102]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_103]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_104]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_105]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_106]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_107]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_108]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_109]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_110]
Meter=Image
MeterStyle=iPS2|XN

[Icon.Custom_111]
Meter=Image
MeterStyle=iPS2|YN|BX2
[Icon.Custom_112]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_113]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_114]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_115]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_116]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_117]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_118]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_119]
Meter=Image
MeterStyle=iPS2|XN
[Icon.Custom_120]
Meter=Image
MeterStyle=iPS2|XN

;-------------------------------------------------------------------

[M.Image_1x1.Custom_001]
Meter=Shape
Y=((#BeginY#+80)*#Scale#)
MeterStyle=iPS3|BX1
[M.Image_1x1.Custom_002]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_003]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_004]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_005]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_006]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_007]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_008]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_009]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_010]
Meter=Shape
MeterStyle=iPS3|XN

[M.Image_1x1.Custom_011]
Meter=Shape
MeterStyle=iPS3|YN|BX1
[M.Image_1x1.Custom_012]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_013]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_014]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_015]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_016]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_017]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_018]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_019]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_020]
Meter=Shape
MeterStyle=iPS3|XN

[M.Image_1x1.Custom_021]
Meter=Shape
MeterStyle=iPS3|YN|BX1
[M.Image_1x1.Custom_022]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_023]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_024]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_025]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_026]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_027]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_028]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_029]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_030]
Meter=Shape
MeterStyle=iPS3|XN

[M.Image_1x1.Custom_031]
Meter=Shape
MeterStyle=iPS3|YN|BX1
[M.Image_1x1.Custom_032]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_033]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_034]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_035]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_036]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_037]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_038]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_039]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_040]
Meter=Shape
MeterStyle=iPS3|XN

[M.Image_1x1.Custom_041]
Meter=Shape
MeterStyle=iPS3|YN|BX1
[M.Image_1x1.Custom_042]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_043]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_044]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_045]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_046]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_047]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_048]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_049]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_050]
Meter=Shape
MeterStyle=iPS3|XN

[M.Image_1x1.Custom_051]
Meter=Shape
MeterStyle=iPS3|YN|BX1
[M.Image_1x1.Custom_052]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_053]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_054]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_055]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_056]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_057]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_058]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_059]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_060]
Meter=Shape
MeterStyle=iPS3|XN

[M.Image_1x1.Custom_061]
Meter=Shape
MeterStyle=iPS3|YN|BX1
[M.Image_1x1.Custom_062]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_063]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_064]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_065]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_066]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_067]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_068]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_069]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_070]
Meter=Shape
MeterStyle=iPS3|XN

[M.Image_1x1.Custom_071]
Meter=Shape
MeterStyle=iPS3|YN|BX1
[M.Image_1x1.Custom_072]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_073]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_074]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_075]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_076]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_077]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_078]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_079]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_080]
Meter=Shape
MeterStyle=iPS3|XN

[M.Image_1x1.Custom_081]
Meter=Shape
MeterStyle=iPS3|YN|BX1
[M.Image_1x1.Custom_082]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_083]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_084]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_085]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_086]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_087]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_088]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_089]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_090]
Meter=Shape
MeterStyle=iPS3|XN

[M.Image_1x1.Custom_091]
Meter=Shape
MeterStyle=iPS3|YN|BX1
[M.Image_1x1.Custom_092]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_093]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_094]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_095]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_096]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_097]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_098]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_099]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_100]
Meter=Shape
MeterStyle=iPS3|XN

[M.Image_1x1.Custom_101]
Meter=Shape
MeterStyle=iPS3|YN|BX1
[M.Image_1x1.Custom_102]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_103]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_104]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_105]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_106]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_107]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_108]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_109]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_110]
Meter=Shape
MeterStyle=iPS3|XN

[M.Image_1x1.Custom_111]
Meter=Shape
MeterStyle=iPS3|YN|BX1
[M.Image_1x1.Custom_112]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_113]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_114]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_115]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_116]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_117]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_118]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_119]
Meter=Shape
MeterStyle=iPS3|XN
[M.Image_1x1.Custom_120]
Meter=Shape
MeterStyle=iPS3|XN

;-------------------------------------------------------------------

[Image_1x1.Custom_001]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_002]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_003]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_004]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_005]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_006]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_007]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_008]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_009]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_010]
Meter=Image
MeterStyle=iPS4

[Image_1x1.Custom_011]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_012]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_013]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_014]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_015]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_016]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_017]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_018]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_019]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_020]
Meter=Image
MeterStyle=iPS4

[Image_1x1.Custom_021]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_022]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_023]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_024]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_025]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_026]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_027]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_028]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_029]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_030]
Meter=Image
MeterStyle=iPS4

[Image_1x1.Custom_031]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_032]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_033]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_034]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_035]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_036]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_037]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_038]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_039]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_040]
Meter=Image
MeterStyle=iPS4

[Image_1x1.Custom_041]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_042]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_043]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_044]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_045]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_046]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_047]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_048]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_049]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_050]
Meter=Image
MeterStyle=iPS4

[Image_1x1.Custom_051]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_052]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_053]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_054]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_055]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_056]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_057]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_058]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_059]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_060]
Meter=Image
MeterStyle=iPS4

[Image_1x1.Custom_061]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_062]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_063]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_064]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_065]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_066]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_067]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_068]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_069]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_070]
Meter=Image
MeterStyle=iPS4

[Image_1x1.Custom_071]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_072]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_073]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_074]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_075]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_076]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_077]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_078]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_079]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_080]
Meter=Image
MeterStyle=iPS4

[Image_1x1.Custom_081]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_082]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_083]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_084]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_085]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_086]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_087]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_088]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_089]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_090]
Meter=Image
MeterStyle=iPS4

[Image_1x1.Custom_091]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_092]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_093]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_094]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_095]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_096]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_097]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_098]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_099]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_100]
Meter=Image
MeterStyle=iPS4

[Image_1x1.Custom_101]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_102]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_103]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_104]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_105]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_106]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_107]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_108]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_109]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_110]
Meter=Image
MeterStyle=iPS4

[Image_1x1.Custom_111]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_112]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_113]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_114]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_115]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_116]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_117]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_118]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_119]
Meter=Image
MeterStyle=iPS4
[Image_1x1.Custom_120]
Meter=Image
MeterStyle=iPS4

;-------------------------------------------------------------------

[H001]
Meter=Shape
Y=((#BeginY#+80)*#Scale#)
MeterStyle=iPS5|BX1
[H002]
Meter=Shape
MeterStyle=iPS5|XN
[H003]
Meter=Shape
MeterStyle=iPS5|XN
[H004]
Meter=Shape
MeterStyle=iPS5|XN
[H005]
Meter=Shape
MeterStyle=iPS5|XN
[H006]
Meter=Shape
MeterStyle=iPS5|XN
[H007]
Meter=Shape
MeterStyle=iPS5|XN
[H008]
Meter=Shape
MeterStyle=iPS5|XN
[H009]
Meter=Shape
MeterStyle=iPS5|XN
[H010]
Meter=Shape
MeterStyle=iPS5|XN

[H011]
Meter=Shape
MeterStyle=iPS5|YN|BX1
[H012]
Meter=Shape
MeterStyle=iPS5|XN
[H013]
Meter=Shape
MeterStyle=iPS5|XN
[H014]
Meter=Shape
MeterStyle=iPS5|XN
[H015]
Meter=Shape
MeterStyle=iPS5|XN
[H016]
Meter=Shape
MeterStyle=iPS5|XN
[H017]
Meter=Shape
MeterStyle=iPS5|XN
[H018]
Meter=Shape
MeterStyle=iPS5|XN
[H019]
Meter=Shape
MeterStyle=iPS5|XN
[H020]
Meter=Shape
MeterStyle=iPS5|XN

[H021]
Meter=Shape
MeterStyle=iPS5|YN|BX1
[H022]
Meter=Shape
MeterStyle=iPS5|XN
[H023]
Meter=Shape
MeterStyle=iPS5|XN
[H024]
Meter=Shape
MeterStyle=iPS5|XN
[H025]
Meter=Shape
MeterStyle=iPS5|XN
[H026]
Meter=Shape
MeterStyle=iPS5|XN
[H027]
Meter=Shape
MeterStyle=iPS5|XN
[H028]
Meter=Shape
MeterStyle=iPS5|XN
[H029]
Meter=Shape
MeterStyle=iPS5|XN
[H030]
Meter=Shape
MeterStyle=iPS5|XN

[H031]
Meter=Shape
MeterStyle=iPS5|YN|BX1
[H032]
Meter=Shape
MeterStyle=iPS5|XN
[H033]
Meter=Shape
MeterStyle=iPS5|XN
[H034]
Meter=Shape
MeterStyle=iPS5|XN
[H035]
Meter=Shape
MeterStyle=iPS5|XN
[H036]
Meter=Shape
MeterStyle=iPS5|XN
[H037]
Meter=Shape
MeterStyle=iPS5|XN
[H038]
Meter=Shape
MeterStyle=iPS5|XN
[H039]
Meter=Shape
MeterStyle=iPS5|XN
[H040]
Meter=Shape
MeterStyle=iPS5|XN

[H041]
Meter=Shape
MeterStyle=iPS5|YN|BX1
[H042]
Meter=Shape
MeterStyle=iPS5|XN
[H043]
Meter=Shape
MeterStyle=iPS5|XN
[H044]
Meter=Shape
MeterStyle=iPS5|XN
[H045]
Meter=Shape
MeterStyle=iPS5|XN
[H046]
Meter=Shape
MeterStyle=iPS5|XN
[H047]
Meter=Shape
MeterStyle=iPS5|XN
[H048]
Meter=Shape
MeterStyle=iPS5|XN
[H049]
Meter=Shape
MeterStyle=iPS5|XN
[H050]
Meter=Shape
MeterStyle=iPS5|XN

[H051]
Meter=Shape
MeterStyle=iPS5|YN|BX1
[H052]
Meter=Shape
MeterStyle=iPS5|XN
[H053]
Meter=Shape
MeterStyle=iPS5|XN
[H054]
Meter=Shape
MeterStyle=iPS5|XN
[H055]
Meter=Shape
MeterStyle=iPS5|XN
[H056]
Meter=Shape
MeterStyle=iPS5|XN
[H057]
Meter=Shape
MeterStyle=iPS5|XN
[H058]
Meter=Shape
MeterStyle=iPS5|XN
[H059]
Meter=Shape
MeterStyle=iPS5|XN
[H060]
Meter=Shape
MeterStyle=iPS5|XN

[H061]
Meter=Shape
MeterStyle=iPS5|YN|BX1
[H062]
Meter=Shape
MeterStyle=iPS5|XN
[H063]
Meter=Shape
MeterStyle=iPS5|XN
[H064]
Meter=Shape
MeterStyle=iPS5|XN
[H065]
Meter=Shape
MeterStyle=iPS5|XN
[H066]
Meter=Shape
MeterStyle=iPS5|XN
[H067]
Meter=Shape
MeterStyle=iPS5|XN
[H068]
Meter=Shape
MeterStyle=iPS5|XN
[H069]
Meter=Shape
MeterStyle=iPS5|XN
[H070]
Meter=Shape
MeterStyle=iPS5|XN

[H071]
Meter=Shape
MeterStyle=iPS5|YN|BX1
[H072]
Meter=Shape
MeterStyle=iPS5|XN
[H073]
Meter=Shape
MeterStyle=iPS5|XN
[H074]
Meter=Shape
MeterStyle=iPS5|XN
[H075]
Meter=Shape
MeterStyle=iPS5|XN
[H076]
Meter=Shape
MeterStyle=iPS5|XN
[H077]
Meter=Shape
MeterStyle=iPS5|XN
[H078]
Meter=Shape
MeterStyle=iPS5|XN
[H079]
Meter=Shape
MeterStyle=iPS5|XN
[H080]
Meter=Shape
MeterStyle=iPS5|XN

[H081]
Meter=Shape
MeterStyle=iPS5|YN|BX1
[H082]
Meter=Shape
MeterStyle=iPS5|XN
[H083]
Meter=Shape
MeterStyle=iPS5|XN
[H084]
Meter=Shape
MeterStyle=iPS5|XN
[H085]
Meter=Shape
MeterStyle=iPS5|XN
[H086]
Meter=Shape
MeterStyle=iPS5|XN
[H087]
Meter=Shape
MeterStyle=iPS5|XN
[H088]
Meter=Shape
MeterStyle=iPS5|XN
[H089]
Meter=Shape
MeterStyle=iPS5|XN
[H090]
Meter=Shape
MeterStyle=iPS5|XN

[H091]
Meter=Shape
MeterStyle=iPS5|YN|BX1
[H092]
Meter=Shape
MeterStyle=iPS5|XN
[H093]
Meter=Shape
MeterStyle=iPS5|XN
[H094]
Meter=Shape
MeterStyle=iPS5|XN
[H095]
Meter=Shape
MeterStyle=iPS5|XN
[H096]
Meter=Shape
MeterStyle=iPS5|XN
[H097]
Meter=Shape
MeterStyle=iPS5|XN
[H098]
Meter=Shape
MeterStyle=iPS5|XN
[H099]
Meter=Shape
MeterStyle=iPS5|XN
[H100]
Meter=Shape
MeterStyle=iPS5|XN

[H101]
Meter=Shape
MeterStyle=iPS5|YN|BX1
[H102]
Meter=Shape
MeterStyle=iPS5|XN
[H103]
Meter=Shape
MeterStyle=iPS5|XN
[H104]
Meter=Shape
MeterStyle=iPS5|XN
[H105]
Meter=Shape
MeterStyle=iPS5|XN
[H106]
Meter=Shape
MeterStyle=iPS5|XN
[H107]
Meter=Shape
MeterStyle=iPS5|XN
[H108]
Meter=Shape
MeterStyle=iPS5|XN
[H109]
Meter=Shape
MeterStyle=iPS5|XN
[H110]
Meter=Shape
MeterStyle=iPS5|XN

[H111]
Meter=Shape
MeterStyle=iPS5|YN|BX1
[H112]
Meter=Shape
MeterStyle=iPS5|XN
[H113]
Meter=Shape
MeterStyle=iPS5|XN
[H114]
Meter=Shape
MeterStyle=iPS5|XN
[H115]
Meter=Shape
MeterStyle=iPS5|XN
[H116]
Meter=Shape
MeterStyle=iPS5|XN
[H117]
Meter=Shape
MeterStyle=iPS5|XN
[H118]
Meter=Shape
MeterStyle=iPS5|XN
[H119]
Meter=Shape
MeterStyle=iPS5|XN
[H120]
Meter=Shape
MeterStyle=iPS5|XN

@Include2=#@#Pages\AddSkins_Global4.inc
@Include3=#@#Pages\AddSkins_Global.inc
@Include4=#@#Global_BGBlur.inc
@include5=AddSkins_Global2.inc