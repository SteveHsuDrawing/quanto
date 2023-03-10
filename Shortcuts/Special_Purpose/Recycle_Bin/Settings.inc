[Rainmeter]
Update=1000
ContextTitle=#OT.Empty_Recycle_Bin#
ContextAction=[!CommandMeasure MeasureBinSize EmptyBin]

[Variables]
Scale_Custom=1
QuickSetting_1=Recycle_Bin

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
