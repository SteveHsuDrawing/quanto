[Rainmeter]
ContextTitle=#OT.Alternative#
ContextTitle2=#OT.Skin_Settings#
ContextTitle3=#OT.GlobalSettings#
ContextTitle4=-
ContextTitle5=#OT.Refresh#
ContextTitle6=#OT.Unload#
ContextTitle7=#OT.More#
ContextTitle8=

ContextAction=#GeneralAction2#
ContextAction2=#GeneralAction11#
ContextAction3=#GeneralAction4#
ContextAction4=[]
ContextAction5=#GeneralAction5#
ContextAction6=#GeneralAction6#
ContextAction7=#GeneralAction7#
ContextAction8=

[MeasureSource]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=Software\FinalWire\AIDA64\SensorValues
RegValue=#RKFan#
OnChangeAction=[!Update]
DynamicVariables=1
UpdateDivider=#UpdateDivider#

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