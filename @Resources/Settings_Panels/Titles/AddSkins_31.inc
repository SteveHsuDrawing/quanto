[Variables]
BeginX=384
BeginY=108
GapXUnscaled=60
GapYUnscaled=60
GapX=(#GapXUnscaled#*#Scale#)
GapY=(#GapYUnscaled#*#Scale#)

[MeterSelectionDisplay1]
Meter=Shape
X=((#BeginX#+#GapXUnscaled#*4)*#Scale#)
Y=((#BeginY#+39*0)*#Scale#)
Shape=Rectangle (58*#Scale#),(29*#Scale#),(12*#Scale#),(3*#Scale#),(1.5*#Scale#),(1.5*#Scale#) | Fill Color #ThemeColor_General# | Stroke Color 0,0,0,0
DynamicVariables=1

@include=AddSkins_Global.inc
