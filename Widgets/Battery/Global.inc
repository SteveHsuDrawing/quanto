[MeasureSource]
Measure=Plugin
Plugin=PowerPlugin
PowerState=Percent
UpdateDivider=#UpdateDivider#

[MeasureSourceCalc]
Measure=Calc
Formula=MeasureSource/100
UpdateDivider=#UpdateDivider#

[MeasureSourceCalcOfEffect]
Measure=Calc
Formula=MeasureSourceCalc*1*29.75*#Scale#
UpdateDivider=#UpdateDivider#

[MeasureUsedCalcPer]
Measure=Calc
Formula=Clamp(Round(MeasureSourceCalc*100, 1),0,100)
UpdateDivider=#UpdateDivider#

[MeasureUsedCalcPer1x1]
Measure=Calc
Formula=Clamp(Round(MeasureSourceCalc*100, 0),0,100)
UpdateDivider=#UpdateDivider#

[MeasureAC]
Measure=Plugin
Plugin=PowerPlugin
PowerState=ACLine
Substitute="0":"Uncharging","1":"Charging"
UpdateDivider=#UpdateDivider#

[MeasureACDisplay]
Measure=Plugin
Plugin=PowerPlugin
PowerState=ACLine
UpdateDivider=#UpdateDivider#

[MeasureACString]
Measure=Plugin
Plugin=PowerPlugin
PowerState=ACLine
Substitute="0":"#Quanto.Widgets_Battery.Name#","1":"#T.Charging#"
UpdateDivider=#UpdateDivider#

[MeasureWearLevel]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=Software\FinalWire\AIDA64\SensorValues
RegValue=Value.SBATTWEARLVL
OnChangeAction=[!Update]
DynamicVariables=1
UpdateDivider=#UpdateDivider#

[MeasureVoltage]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=Software\FinalWire\AIDA64\SensorValues
RegValue=Value.VBATT
OnChangeAction=[!Update]
DynamicVariables=1
UpdateDivider=#UpdateDivider#