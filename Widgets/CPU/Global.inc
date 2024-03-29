[MeasureSource0]
Measure=Plugin
Plugin=UsageMonitor
Alias=CPU
Disabled=(#Source#=0?0:1)
UpdateDivider=#UpdateDivider#

[MeasureSource1]
Measure=Plugin
Plugin=UsageMonitor
Category=Processor Information
Counter=% Processor Utility
Index=-1
Disabled=(#Source#=1?0:1)
UpdateDivider=#UpdateDivider#

[MeasureSource2]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=Software\FinalWire\AIDA64\SensorValues
RegValue=Value.SCPUUTI
OnChangeAction=[!Update]
DynamicVariables=1
Disabled=(#Source#=2?0:1)
UpdateDivider=#UpdateDivider#

[MeasureSourceCalc]
Measure=Calc
Formula=MeasureSource#Source#/100
UpdateDivider=#UpdateDivider#

[MeasureUsedCalcPer]
Measure=Calc
Formula=Clamp(Round(MeasureSourceCalc*100, 1),0,100)
UpdateDivider=#UpdateDivider#

[MeasureUsedCalcPer1x1]
Measure=Calc
Formula=Clamp(Round(MeasureSourceCalc*100, 0),0,100)
UpdateDivider=#UpdateDivider#

[MeasureCPUTopProcess]
Measure=Plugin
Plugin=UsageMonitor
Alias=CPU
Index=1
Blacklist=_Total|Idle|dwm|csrss|svchost|lsass|System|spoolsv
UpdateDivider=#UpdateDivider#

[MeasureCPUName]
Measure=Registry
RegHKey=HKEY_LOCAL_MACHINE
RegKey=HARDWARE\DESCRIPTION\System\CentralProcessor\0
RegValue=ProcessorNameString
UpdateDivider=#UpdateDivider#

;[MeasureCPUTemp]
;Measure=Calc
;Formula=180

[MeasureCPUTemp]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=Software\FinalWire\AIDA64\SensorValues
RegValue=Value.TCPU
OnChangeAction=[!Update]
DynamicVariables=1
UpdateDivider=#UpdateDivider#

;[MeasureCPUFanSpeed]
;Measure=Calc
;Formula=4999

[MeasureCPUFanSpeed]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=Software\FinalWire\AIDA64\SensorValues
RegValue=Value.FCPU
DynamicVariables=1
UpdateDivider=#UpdateDivider#

[MeasureCPUVoltage]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=Software\FinalWire\AIDA64\SensorValues
RegValue=Value.VCPU
DynamicVariables=1
UpdateDivider=#UpdateDivider#

[MeasureCPUPower]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=Software\FinalWire\AIDA64\SensorValues
RegValue=Value.PCPU
DynamicVariables=1
UpdateDivider=#UpdateDivider#