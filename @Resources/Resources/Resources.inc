[Variables]
Default.BackgroundColor=0,0,0,0
Default.FontColor=#FontColor_General#
@include=Resources_Default.inc
@include2=Resources_Custom.inc

[MeasureBinSize]
Measure=RecycleManager
RecycleType=Size

[MeasureBinIconIndex]
Measure=Calc
Formula=MeasureBinSize>1 ? 1 : 0

[MeasureBinCount]
Measure=RecycleManager
RecycleType=Count

[MeasureBinSizeCalc]
Measure=Calc
Formula=Round(MeasureBinSize/1048576,2)
