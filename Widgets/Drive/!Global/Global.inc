
[Rainmeter]
ContextTitle=#OT.Alternative#
ContextTitle2=#OT.Add_Another#
ContextTitle3=#OT.Skin_Settings#
ContextTitle4=#OT.GlobalSettings#
ContextTitle5=-
ContextTitle6=#OT.Refresh#
ContextTitle7=#OT.Unload#
ContextTitle8=#OT.More#

ContextAction=#GeneralAction2#
ContextAction2=[]
ContextAction3=#GeneralAction11#
ContextAction4=#GeneralAction4#
ContextAction5=[]
ContextAction6=#GeneralAction5#
ContextAction7=#GeneralAction6#
ContextAction8=#GeneralAction7#

[MeasureSource]
Measure=FreeDiskSpace
Drive=#DriveName#
InvertMeasure=1

[MeasureSourceTotal]
Measure=FreeDiskSpace
Drive=#DriveName#
Total=1

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

[MeasureHDDName]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=Software\FinalWire\AIDA64\SensorValues
RegValue=Label.THDD#HDD#
OnChangeAction=[!Update]
DynamicVariables=1
UpdateDivider=#UpdateDivider#

[MeasureTemp]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=Software\FinalWire\AIDA64\SensorValues
RegValue=Value.THDD#HDD#
OnChangeAction=[!Update]
DynamicVariables=1
UpdateDivider=#UpdateDivider#

[MeasureIOReadS]
Measure=Plugin
Plugin=UsageMonitor
Alias=IOREAD
Index=#HDD#
UpdateDivider=#UpdateDivider#

[MeasureIORead]
Measure=Calc
Formula=Round(MeasureIOReadS/(1024**2),1)
UpdateDivider=#UpdateDivider#

[MeasureIOWriteS]
Measure=Plugin
Plugin=UsageMonitor
Alias=IOWRITE
Index=#HDD#
UpdateDivider=#UpdateDivider#

[MeasureIOWrite]
Measure=Calc
Formula=Round(MeasureIOWriteS/(1024**2),1)
UpdateDivider=#UpdateDivider#
