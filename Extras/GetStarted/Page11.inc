[Variables]
HideAtFirst=1
DisplayPage=2/6
HidePrvsB=0
HideNextB=0
ani0=0
ani1=0
ani2=0
ani3=0

[Rainmeter]
OnRefreshAction=[!Delay 250][!CommandMeasure MeasureAnimation_Image "Execute 1"][!CommandMeasure MeasureAnimation "Execute 1"][!Redraw]

[MeasureAnimation]
Measure=Plugin
Plugin=ActionTimer
ActionList1=Repeat ani0,8,25 | set0 | wait 500 | show1 | Repeat ani1,8,50 | set1 | hide1 | wait 500 | show2 | wait 500 | hide2 | Repeat ani2,8,25 | set2 | wait 500 | show3 | wait 500 | hide3 | Repeat ani3,8,25 | set3
ani0=[!SetVariable ani0 "(Clamp((#ani0#+0.050),0,1))"][!UpdateMeasure MeasureAnimation][!UpdateMeterGroup ANI][!Redraw]
ani1=[!SetVariable ani1 "(Clamp((#ani1#+0.025),0,1))"][!UpdateMeasure MeasureAnimation][!UpdateMeterGroup ANI][!Redraw]
ani2=[!SetVariable ani2 "(Clamp((#ani2#+0.050),0,1))"][!UpdateMeasure MeasureAnimation][!UpdateMeterGroup ANI][!Redraw]
ani3=[!SetVariable ani3 "(Clamp((#ani3#+0.050),0,1))"][!UpdateMeasure MeasureAnimation][!UpdateMeterGroup ANI][!Redraw]
show1=[!ShowMeter ani1001][!Redraw]
hide1=[!HideMeter ani1001][!Redraw]
show2=[!ShowMeter ani1002][!Redraw]
hide2=[!HideMeter ani1002][!Redraw]
show3=[!ShowMeter ani1003][!Redraw]
hide3=[!HideMeter ani1003][!Redraw]
set0=[!SetOption ani0001 ImageTint "255,255,255,255"][!SetOption ani1000 ImageTint "255,255,255,255"][!SetOption ani1001 ImageTint "255,255,255,255"][!SetOption ani1002 ImageTint "255,255,255,255"][!SetOption ani1003 ImageTint "255,255,255,255"][!Update][!Redraw]
set1=[!SetOption ani0002 X ((576+162)*#Scale#)][!SetOption ani1000 X ((576+16+163)*#Scale#)][!SetOption ani1001 X ((576+16+163)*#Scale#)][!Update][!Redraw]
set2=[!SetOption ani0000 H ((128+128)*#Scale#)][!SetOption ani0000 ImageTint "255,255,255,255"][!SetOption ani0002 H ((128+128)*#Scale#)][!SetOption ani0002 ImageTint "255,255,255,0"][!Update][!Redraw]
set3=[!SetOption ani0003 X ((755-12)*#Scale#)][!SetOption ani0003 W (189*#Scale#)][!SetOption ani0003 H (176*#Scale#)][!SetOption ani0003 ImageTint "255,255,255,255"][!Update][!Redraw]
DynamicVariables=1


[mTI]
Meter=Image
MeterStyle=TI

[mTT]
Meter=String
MeterStyle=TT

[mTC]
Meter=String
MeterStyle=TC

[mMB]
Meter=Shape
MeterStyle=MB|MB2

[mBH]
Meter=Shape
MeterStyle=BH

[mBT]
Meter=String
MeterStyle=BT2



[ani0000]
Meter=Image
X=((576+162)*#Scale#)
Y=((194)*#Scale#)
W=(256*#Scale#)
H=((128+128*sqrt(sqrt(#ani2#)))*#Scale#)
ImageTint=255,255,255,(255*#ani0#*sqrt(sqrt(#ani2#)))
ImageName=#@#Bitmap\GetStarted\0003
Container=MeterSquareZone
DynamicVariables=1
Group=ANI|ani2
[ani0001]
Meter=Image
X=(576*#Scale#)
Y=0
W=(576*#Scale#)
PreserveAspectRatio=2
ImageTint=255,255,255,(255*#ani0#)
ImageName=#@#Bitmap\GetStarted\0001
Container=MeterSquareZone
DynamicVariables=1
Group=ANI
[ani0002]
Meter=Image
X=((576+162*#ani1#)*#Scale#)
Y=(194*#Scale#)
W=(256*#Scale#)
H=((128+128*sqrt(sqrt(#ani2#)))*#Scale#)
ImageTint=255,255,255,(255*#ani0#*(1-sqrt(sqrt(#ani2#))))
ImageName=#@#Bitmap\GetStarted\0002
Container=MeterSquareZone
DynamicVariables=1
Group=ANI|ani1|ani2
[ani0003]
Meter=Image
X=((755-12*sqrt(sqrt(#ani3#)))*#Scale#)
Y=(211*#Scale#)
W=((189*sqrt(sqrt(#ani3#)))*#Scale#)
H=((176*sqrt(sqrt(#ani3#)))*#Scale#)
ImageTint=255,255,255,(255*#ani0#*sqrt(sqrt(#ani3#)))
ImageName=#@#Bitmap\GetStarted\0004
Container=MeterSquareZone
DynamicVariables=1
Group=ANI|ani3
[ani1000]
Meter=Image
X=((576+16+163*#ani1#)*#Scale#)
Y=((195+16)*#Scale#)
W=(40*#Scale#)
PreserveAspectRatio=2
ImageTint=255,255,255,(255*#ani0#)
ImageName=#@#Bitmap\GetStarted\!Mouse
Container=MeterSquareZone
DynamicVariables=1
Group=ANI|ani1
[ani1001]
Meter=Image
X=((576+16+163*#ani1#)*#Scale#)
Y=((195+16)*#Scale#)
W=(40*#Scale#)
PreserveAspectRatio=2
ImageTint=255,255,255,(255*#ani0#)
ImageName=#@#Bitmap\GetStarted\!MouseButton1
Container=MeterSquareZone
DynamicVariables=1
Group=ANI|ani1
Hidden=1
[ani1002]
Meter=Image
X=((576+16+163)*#Scale#)
Y=((195+16)*#Scale#)
W=(40*#Scale#)
PreserveAspectRatio=2
ImageTint=255,255,255,(255*#ani0#)
ImageName=#@#Bitmap\GetStarted\!MouseButton2
Container=MeterSquareZone
DynamicVariables=1
Group=ANI|ani2
Hidden=1
[ani1003]
Meter=Image
X=((576+16+163)*#Scale#)
Y=((195+16)*#Scale#)
W=(40*#Scale#)
PreserveAspectRatio=2
ImageTint=255,255,255,(255*#ani0#)
ImageName=#@#Bitmap\GetStarted\!MouseButton3
Container=MeterSquareZone
DynamicVariables=1
Group=ANI|ani3
Hidden=1