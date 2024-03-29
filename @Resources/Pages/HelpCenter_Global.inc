[Variables]

[MeterSmallButtonStart]
X=((#SkinW#*64-70-46)*#Scale#)
Y=((#SkinH#*64-60)*#Scale#)

[MeterSmallButtonUnavailableStyle]
X=((46*#Scale#))r
Y=0r
Shape=Rectangle 0,0,(40*#Scale#),(40*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color 0,0,0,0 | Stroke Color #ThemeColor_BarBorder#
Shape2=Rectangle 0,0,(40*#Scale#),(40*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_BackgroundNoAlpha#,(#Alpha#/2) | StrokeWidth 0
DynamicVariables=1

[MeterSmallButtonAvailableStyle]
X=((46*#Scale#))r
Y=0r
Shape=Rectangle 0,0,(40*#Scale#),(40*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color 0,0,0,0 | Stroke Color #ThemeColor_BarBorder#
Shape2=Rectangle 0,0,(40*#Scale#),(40*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_OptionAlpha# | StrokeWidth 0
DynamicVariables=1

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
X=((#SkinW#*64-70-46+12)*#Scale#)
Y=((#SkinH#*64-60+12)*#Scale#)
MeterStyle=MeterImageStyle | MeterImageUnavailableStyle

[MeterImageNextUnavailable]
Meter=Image
ImageName=#@#Bitmap\Arrow Right
MeterStyle=MeterImageStyle | MeterImageUnavailableStyle

[MeterPrvsButton]
Meter=Shape
MeterStyle=MeterSmallButtonAvailableStyle | MeterSmallButtonStart
Hidden=#HidePrvsB#
MouseOverAction=[!ShowMeter MeterPrvsButtonHover][!Redraw]
MouseLeaveAction=[!HideMeter MeterPrvsButtonHover][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables SubPage (#SubPage#-#Grade#) "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!Refresh]

[MeterNextButton]
Meter=Shape
MeterStyle=MeterSmallButtonAvailableStyle
Hidden=#HideNextB#
MouseOverAction=[!ShowMeter MeterNextButtonHover][!Redraw]
MouseLeaveAction=[!HideMeter MeterNextButtonHover][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables SubPage (#SubPage#+#Grade#) "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!Refresh]

[MeterPrvsButtonHover]
Meter=Shape
MeterStyle=MeterSmallButtonHoverStyle | MeterSmallButtonStart

[MeterNextButtonHover]
Meter=Shape
MeterStyle=MeterSmallButtonHoverStyle

[MeterImagePrvsAvailable]
Meter=Image
ImageName=#@#Bitmap\Arrow Left
X=((#SkinW#*64-70-46+12)*#Scale#)
Y=((#SkinH#*64-60+12)*#Scale#)
MeterStyle=MeterImageStyle | MeterImageAvailableStyle
Hidden=#HidePrvsB#

[MeterImageNextAvailable]
Meter=Image
ImageName=#@#Bitmap\Arrow Right
MeterStyle=MeterImageStyle | MeterImageAvailableStyle
Hidden=#HideNextB#

[MeterDisplayPage]
Meter=String
X=((#SkinW#*64-70-46-10)*#Scale#)
Y=((#SkinH#*64-60+20)*#Scale#)
Text=#DisplayPage#
MeterStyle=FontStyle_General
StringAlign=RightCenter

[Next]
X=0r
Y=((60*#Scale#))r
DynamicVariables=1

[Prev]
X=0r
Y=((-60*#Scale#))r
DynamicVariables=1

[MeterHeaderImageContainer]
Meter=Shape
X=(#BeginX#*#Scale#)
Y=((#BeginY#+48)*#Scale#)
Shape=Rectangle 0,0,(610*#Scale#),(305*#Scale#),(4*#Scale#),(4*#Scale#) | StrokeWidth 0
DynamicVariables=1

[MeterHeaderImage]
Meter=Image
ImageName=#@#Bitmap\Help\#SubPage#
W=(610*#Scale#)
H=(305*#Scale#)
Hidden=#HideImage#
Container=MeterHeaderImageContainer
DynamicVariables=1

[MeterSmallTitle]
Meter=String
MeterStyle=FontStyle_SmallTitle
Text=[#Help.[#SubPage]_Title]
X=(#BeginX#*#Scale#)
Y=((#BeginY#+15)*#Scale#)
W=(610*#Scale#)
ClipString=2

[MeterDetail2]
Meter=String
X=(#BeginX#*#Scale#)
Y=((#BeginY#+48+(1-#HideImage#)*312+(46+14)*#TextFix#)*#Scale#)
MeterStyle=FontStyle_General
FontColor=#FontColor_General#
Text=[#Help.[#SubPage]_Cntnt]
W=((610-32)*#Scale#)
ClipString=2
Solidcolor=#ThemeColor_OptionAlpha#
Padding=(16*#Scale#),(12*#Scale#),(16*#Scale#),(12*#Scale#)
BevelType=1
BevelColor=#ThemeColor_BarBorder#
BevelColor2=#ThemeColor_BarBorder#
Hidden=#HideCntnt#

[MeterOptionStart]
X=(#BeginX#*#Scale#)
Y=((#BeginY#+48+(1-#HideImage#)*312)*#Scale#)
DynamicVariables=1

[FontStyle_CustomStart]
X=((#BeginX#+16)*#Scale#)
Y=((#BeginY#+74+(1-#HideImage#)*312)*#Scale#)
DynamicVariables=1

[MeterSmallIconStart]
X=((#BeginX#+576)*#Scale#)
Y=((#BeginY#+68+(1-#HideImage#)*312)*#Scale#)
DynamicVariables=1

[MeterOptionDownStart]
X=(#BeginX#*#Scale#)
Y=((#BeginY#+48+620)*#Scale#)
DynamicVariables=1

[FontStyle_CustomDownStart]
X=((#BeginX#+16)*#Scale#)
Y=((#BeginY#+74+620)*#Scale#)
DynamicVariables=1

[MeterSmallIconDownStart]
X=((#BeginX#+576)*#Scale#)
Y=((#BeginY#+68+620)*#Scale#)
DynamicVariables=1

[MeterOptionStyle]
Shape=Rectangle 0,0,(610*#Scale#),(54*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_BarBorder# | Stroke Color #ThemeColor_BarBorder#
Shape2=Rectangle 0,0,(610*#Scale#),(54*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_OptionAlpha# | StrokeWidth 0

[MeterOptionHoverStyle]
Shape=Rectangle 0,0,(610*#Scale#),(54*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_BackgroundSelectedLight# | StrokeWidth 0
Hidden=1
DynamicVariables=1

[FontStyle_Custom1]
StringAlign=LeftCenter
W=((610-32-16)*#Scale#)
ClipString=2

[MeterSmallIconStyle]
W=(16*#Scale#)
H=(16*#Scale#)
ImageName=#@#Bitmap\Arrow Right
ImageTint=#FontColor_General#

[MeterTextDetailStyle]
X=(#BeginX#*#Scale#)
Y=((#BeginY#+48+(1-#HideImage#)*312)*#Scale#)
DynamicVariables=1