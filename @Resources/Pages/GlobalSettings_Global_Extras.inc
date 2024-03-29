[MeterSmallButtonStart]
X=((#SkinW#*64-70-50)*#Scale#)
Y=(56*#Scale#)

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
X=((#SkinW#*64-70-50+12)*#Scale#)
Y=(68*#Scale#)
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
X=((#SkinW#*64-70-50+12)*#Scale#)
Y=(68*#Scale#)
MeterStyle=MeterImageStyle | MeterImageAvailableStyle
Hidden=#HidePrvsB#

[MeterImageNextAvailable]
Meter=Image
ImageName=#@#Bitmap\Arrow Right
MeterStyle=MeterImageStyle | MeterImageAvailableStyle
Hidden=#HideNextB#

[MeterDisplayPage]
Meter=String
X=((#SkinW#*64-70-50-10)*#Scale#)
Y=(76*#Scale#)
Text=#DisplayPage#
MeterStyle=FontStyle_General
StringAlign=RightCenter