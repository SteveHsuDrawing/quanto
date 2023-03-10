[MeterOptionStyle]
X=0r
Y=((#Gap#))r
Shape=Rectangle 0,0,(610*#Scale#),(80*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_BarBorder# | Stroke Color #ThemeColor_BarBorder#
Shape2=Rectangle 0,0,(610*#Scale#),(80*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_Option# | StrokeWidth 0
DynamicVariables=1
Group=MouseAction

[MeterOptionSelectedStyle]
X=0r
Y=((#Gap#))r
Shape=Rectangle 0,0,(610*#Scale#),(80*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_BackgroundSelectedLight# | StrokeWidth 0
DynamicVariables=1
Hidden=1
Group=Hover

[MeterIconStyle]
X=0r
Y=((#Gap#))r
H=(24*#Scale#)
W=(24*#Scale#)
ImageTint=#FontColor_General#,255
DynamicVariables=1

[MeterOptionTitleStyle]
X=0r
Y=((#Gap#))r
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(12*#Scale#)
AntiAlias=1
DynamicVariables=1

[MeterOptionTextStyle]
X=0r
Y=((#Gap#))r
W=(286*#Scale#)
ClipString=2
FontFace=#FontFace_General#
FontColor=#FontColor_General#,128
FontSize=(10*#Scale#)
StringAlign=LeftCenter
AntiAlias=1
DynamicVariables=1
InlineSetting=Size | (12*#Scale#)
InlineSetting2=Color | #FontColor_General#

[MeterSmallIconStyle]
H=(16*#Scale#)
W=(16*#Scale#)
ImageTint=#FontColor_General#,255

[MeterSwitcherIconStyle]
H=(48*#Scale#)
W=(48*#Scale#)

[MeterTextInputStyle]
Shape=Rectangle 0,0,(192*#Scale#),(36*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color 0,0,0,0 | Stroke Color #ThemeColor_BarBorder#
Shape2=Rectangle 0,0,(192*#Scale#),(36*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_TextInputer# | StrokeWidth 0
DynamicVariables=1
Group=MouseAction

[TextInputer]
MouseActionCursor=1
MouseActionCursorName=TEXT

[MeterTextInputSelectedStyle]
Shape=Rectangle 0,0,(192*#Scale#),(36*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_BackgroundSelected# | StrokeWidth 0
DynamicVariables=1
Hidden=1
Group=Hover

[MeterTextInputChoosenStyle]
Shape=Rectangle 0,0,(192*#Scale#),(#Scale#*36),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_General# | StrokeWidth 0
Shape2=Rectangle 0,(-2*#Scale#),(192*#Scale#),(#Scale#*36),(4*#Scale#),(4*#Scale#)
Shape3=Combine Shape | Exclude Shape2
DynamicVariables=1
Hidden=1
Group=Hover

[MeterSmallButtonStyle]
X=(((98)*#Scale#))r
Y=0r
Shape=Rectangle 0,0,(92*#Scale#),(36*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color 0,0,0,0 | Stroke Color #ThemeColor_BarBorder#
Shape2=Rectangle 0,0,(92*#Scale#),(36*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_TextInputer# | StrokeWidth 0
DynamicVariables=1
Group=MouseAction

[MeterSmallButtonSelectedStyle]
X=(((98)*#Scale#))r
Y=0r
Shape=Rectangle 0,0,(92*#Scale#),(36*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_BackgroundSelected# | StrokeWidth 0
DynamicVariables=1
Hidden=1
Group=Hover

[MeterSmallButtonChoosenStyle]
X=(((98)*#Scale#))r
Y=0r
Shape=Rectangle 0,0,(92*#Scale#),(#Scale#*36),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_General# | StrokeWidth 0
Shape2=Rectangle 0,(-2*#Scale#),(92*#Scale#),(#Scale#*36),(4*#Scale#),(4*#Scale#)
Shape3=Combine Shape | Exclude Shape2
Group=Hover
DynamicVariables=1
Hidden=1
Group=Hover

[MeterTextInputWx3ChoosenStyle]
Shape=Rectangle 0,0,(290*#Scale#),(36*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color 0,0,0,0 | Stroke Color #ThemeColor_BarBorder#
Shape2=Rectangle 0,0,(290*#Scale#),(36*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_TextInputer# | StrokeWidth 0
Shape3=Rectangle 0,0,(290*#Scale#),(#Scale#*36),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_General# | StrokeWidth 0
Shape4=Rectangle 0,(-2*#Scale#),(290*#Scale#),(#Scale#*36),(4*#Scale#),(4*#Scale#)
Shape5=Combine Shape3 | Exclude Shape4
DynamicVariables=1
Hidden=1
Group=Hover

