[MeasureSource]
Measure=PhysicalMemory
UpdateDivider=#UpdateDivider#

[MeasureSourceTotal]
Measure=PhysicalMemory
Total=1
UpdateDivider=#UpdateDivider#

[MeasureSourceCalc]
Measure=Calc
Formula=MeasureSource/MeasureSourceTotal
UpdateDivider=#UpdateDivider#

[MeasureUsedCalcPer]
Measure=Calc
Formula=Clamp(Round(MeasureSourceCalc*100, 1),0,100)
UpdateDivider=#UpdateDivider#

[MeasureUsedCalcPer1x1]
Measure=Calc
Formula=Clamp(Round(MeasureSourceCalc*100, 0),0,100)
UpdateDivider=#UpdateDivider#

[MeasureDIMMTemp]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=Software\FinalWire\AIDA64\SensorValues
RegValue=#RKDIMMTemp#
OnChangeAction=[!Update]
DynamicVariables=1
UpdateDivider=#UpdateDivider#

[MeasureDIMMPower]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=Software\FinalWire\AIDA64\SensorValues
RegValue=#RKDIMMPower#
OnChangeAction=[!Update]
DynamicVariables=1
UpdateDivider=#UpdateDivider#
