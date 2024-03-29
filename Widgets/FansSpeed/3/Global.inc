[Rainmeter]
ContextAction2=[!ActivateConfig "#ROOTCONFIG#\Widgets\FansSpeed\4" "#CURRENTFILE#"][!Move (#CURRENTCONFIGX#+16*#Scale#) (#CURRENTCONFIGY#+16*#Scale#) "#ROOTCONFIG#\Widgets\FansSpeed\4"]

[MeasureSource]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=Software\FinalWire\AIDA64\SensorValues
RegValue=#RKFan#
OnChangeAction=[!Update]
DynamicVariables=1

[MeasureSourceCalc]
Measure=Calc
Formula=MeasureSource/#Max#
UpdateDivider=#UpdateDivider#

[MeasureCalcOfBar]
Measure=Calc
Formula=MeasureSourceCalc*(184*#Scale#)
UpdateDivider=#UpdateDivider#

[MeasureUsedCalcPer]
Measure=Calc
Formula=Clamp(Round(MeasureSourceCalc*100, 1),0,100)
UpdateDivider=#UpdateDivider#

[MeasureUsedCalcPer1x1]
Measure=Calc
Formula=Clamp(Round(MeasureSourceCalc*100, 0),0,100)
UpdateDivider=#UpdateDivider#