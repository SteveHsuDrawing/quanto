[Rainmeter]
ContextAction2=[!ActivateConfig "#ROOTCONFIG#\Widgets\GPU\2" "#CURRENTFILE#"][!Move (#CURRENTCONFIGX#+16*#Scale#) (#CURRENTCONFIGY#+16*#Scale#) "#ROOTCONFIG#\Widgets\GPU\2"]

[MeasureSource]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=Software\FinalWire\AIDA64\SensorValues
RegValue=Value.SGPU#Index#UTI
MinValue=0
MaxValue=100
DynamicVariables=1

[MeasureSourceCalc]
Measure=Calc
Formula=(MeasureSource/100>1)?1:(MeasureSource/100)
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

[MeasureSourceName]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=SYSTEM\CurrentControlSet\Control\Class\{4d36e968-e325-11ce-bfc1-08002be10318}\000#Index#
RegValue=DriverDesc
UpdateDivider=#UpdateDivider#

[MeasureCalc1]
Measure=Calc
Formula=#Index#-1
UpdateDivider=#UpdateDivider#

[MeasureGPUTemp]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=Software\FinalWire\AIDA64\SensorValues
RegValue=#RKGPUTemp#
OnChangeAction=[!Update]
DynamicVariables=1
UpdateDivider=#UpdateDivider#

[MeasureGPUFanSpeed]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=Software\FinalWire\AIDA64\SensorValues
RegValue=#RKGPUFanSpeed#
OnChangeAction=[!Update]
DynamicVariables=1
UpdateDivider=#UpdateDivider#

[MeasureGPUVoltage]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=Software\FinalWire\AIDA64\SensorValues
RegValue=#RKGPUVoltage#
OnChangeAction=[!Update]
DynamicVariables=1
UpdateDivider=#UpdateDivider#

[MeasureGPUPower]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=Software\FinalWire\AIDA64\SensorValues
RegValue=#RKGPUPower#
OnChangeAction=[!Update]
DynamicVariables=1
UpdateDivider=#UpdateDivider#