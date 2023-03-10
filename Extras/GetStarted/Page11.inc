[Variables]
HideAtFirst=1
DisplayPage=2/6
HidePrvsB=0
HideNextB=0
ani0=0
ani1=0
ani2=0

[Rainmeter]
OnRefreshAction=[!Delay 250][!CommandMeasure MeasureAnimation_Image "Execute 1"][!CommandMeasure MeasureAnimation "Execute 1"][!Redraw]

[MeasureAnimation]
Measure=Plugin
Plugin=ActionTimer
ActionList1=Repeat ani0,8,25 | wait 500 | show1 | Repeat ani1,8,50 | hide1 | wait 500 | show2 | wait 500 | hide2 | Repeat ani2,8,25
ani0=[!SetVariable ani0 "(Clamp((#ani0#+0.050),0,1))"][!UpdateMeasure MeasureAnimation][!UpdateMeterGroup ANI][!Redraw]
ani1=[!SetVariable ani1 "(Clamp((#ani1#+0.025),0,1))"][!UpdateMeasure MeasureAnimation][!UpdateMeterGroup ANI][!Redraw]
ani2=[!SetVariable ani2 "(Clamp((#ani2#+0.050),0,1))"][!UpdateMeasure MeasureAnimation][!UpdateMeterGroup ANI][!Redraw]
show1=[!ShowMeter ani0004][!Redraw]
hide1=[!HideMeter ani0004][!Redraw]
show2=[!ShowMeter ani0005][!Redraw]
hide2=[!HideMeter ani0005][!Redraw]
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
X=((576+163)*#Scale#)
Y=((195)*#Scale#)
W=(254*#Scale#)
PreserveAspectRatio=2
ImageTint=255,255,255,(255*#ani0#*#ani2#)
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
X=((576+163*#ani1#)*#Scale#)
Y=(195*#Scale#)
W=(254*#Scale#)
PreserveAspectRatio=2
ImageTint=255,255,255,(255*#ani0#*(1-#ani2#))
ImageName=#@#Bitmap\GetStarted\0002
Container=MeterSquareZone
DynamicVariables=1
Group=ANI|ani1
[ani0003]
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
[ani0004]
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
[ani0005]
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