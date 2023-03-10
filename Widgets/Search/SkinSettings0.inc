[Variables]
@Include=#@#Global.inc
@Include2=#CurrentPath#Settings.inc
Category=Widgets

[MeterSettingZone]
Meter=Shape
MeterStyle=MeterSettingZoneStyle
Hidden=#HideSettings#

[MeterSettingTitle]
Meter=String
MeterStyle=MeterSettingTitleStyle
Hidden=#HideSettings#

[MeterSkinSettingButtonZone1]
Meter=Shape
MeterStyle=MeterSmallButtonZone | MeterSmallButtonZoneBegin
Hidden=1

[MeterSkinSettingButtonIcon1]
Meter=Image
MeterStyle=MeterSmallButtonIcon | MeterSmallButtonIcon1
Hidden=#HideSettings#

[MeterOption1]
Meter=Shape
MeterStyle=MeterSmallOption | MeterSmallOptionBehavior1
Hidden=#HideSettings#
LeftMouseUpAction=[!ShowMeterGroup MeterOption1.Feature2][!Redraw]

[MeterOptionSelected1]
Meter=Shape
MeterStyle=MeterSmallOptionSelected | MeterSmallOptionBegin
Hidden=1

[MeterOptionTitle1]
Meter=String
MeterStyle=MeterSmallOptionTitle | MeterSmallOptionTitleBegin
Text=#T.Search_engine#
Hidden=#HideSettings#

[MeterOption1.Feature1.Measure1]
Measure=Calc
Formula=#SearchEngine#+2

[MeterOptionText1]
Meter=String
MeterStyle=MeterSmallOptionText | MeterSmallOptionTextBegin
Text=[#T.SearchEngine.[#SearchEngine]]
Hidden=#HideSettings#

[MeterOption1.Feature2.Display1]
Meter=Shape
X=((#BeginX#+6)*#Scale#)
Y=((#BeginY#+10)*#Scale#)
Shape=Rectangle 0,0,(242*#Scale#),((24*4+4)*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_BackgroundNoAlpha# | Stroke Color #ThemeColor_BarBorder#
DynamicVariables=1
Hidden=1
Group=MeterOption1.Feature2 | Contexts
MouseLeaveAction=[!HideMeterGroup Contexts][!Redraw]

[MeterOption1.Feature2.Display2]
Meter=String
Text=#T.SearchEngine.0#
MeterStyle=MeterSmallOptionTitle | MeterSkinSettingMenuTextStyle | MeterSkinSettingMenuTextBeginStyle
Hidden=1
Group=MeterOption1.Feature2 | Contexts
LeftMouseUpAction=[!WriteKeyValue Variables SearchEngine 0 "Settings.inc"][!Refresh]

[MeterOption1.Feature2.Display3]
Meter=String
Text=#T.SearchEngine.1#
MeterStyle=MeterSmallOptionTitle | MeterSkinSettingMenuTextStyle
Hidden=1
Group=MeterOption1.Feature2 | Contexts
LeftMouseUpAction=[!WriteKeyValue Variables SearchEngine 1 "Settings.inc"][!Refresh]

[MeterOption1.Feature2.Display4]
Meter=String
Text=#T.SearchEngine.2#
MeterStyle=MeterSmallOptionTitle | MeterSkinSettingMenuTextStyle
Hidden=1
Group=MeterOption1.Feature2 | Contexts
LeftMouseUpAction=[!WriteKeyValue Variables SearchEngine 2 "Settings.inc"][!Refresh]

[MeterOption1.Feature2.Display5]
Meter=String
Text=#T.SearchEngine.3#
MeterStyle=MeterSmallOptionTitle | MeterSkinSettingMenuTextStyle
Hidden=1
Group=MeterOption1.Feature2 | Contexts
LeftMouseUpAction=[!WriteKeyValue Variables SearchEngine 3 "Settings.inc"][!Refresh]

[MeterOption1.Feature2.Display7]
Meter=Shape
X=((#BeginX#+6+6)*#Scale#)
Y=((#BeginY#+10+6+24*#SearchEngine#)*#Scale#)
MeterStyle=MeterSkinSettingMenuIndicatorStyle
DynamicVariables=1
Hidden=1
Group=MeterOption1.Feature2 | Contexts
