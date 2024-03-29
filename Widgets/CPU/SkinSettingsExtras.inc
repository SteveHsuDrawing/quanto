[Variables]
CM_1.Y=2
CM_1.Q=3
CM_1.V=Source

[CM_1.S]
Hidden=1
Group=MSSSSO2CM
DynamicVariables=1

[CM_1.0]
MeterStyle=CM_1.S
Meter=Shape
X=#CM_X#
Y=(#CM_1.Y#*#CM_Y#)
Shape=#CM_S11# #CM_1.Q# #CM_S12#
Shape2=#CM_S21# #CM_1.Q# #CM_S22#
Shape3=#CM_S31# #CM_1.Q# #CM_S32#
Shape4=#CM_S41#
MouseLeaveAction=[!HideMeterGroup MSSSSO2CM][!Redraw]

[CM_1.1]
MeterStyle=CM_1.S|FontStyle_General|MSS.S.CMI|MSS.S.CMIB
Meter=String
Text=#T.Source_0#
LeftMouseUpAction=#CM_A1# "#CM_1.V#" "0" #CM_A2#
[CM_1.2]
MeterStyle=CM_1.S|FontStyle_General|MSS.S.CMI|Next
Meter=String
Text=#T.Source_1#
LeftMouseUpAction=#CM_A1# "#CM_1.V#" "1" #CM_A2#
[CM_1.3]
MeterStyle=CM_1.S|FontStyle_General|MSS.S.CMI|Next
Meter=String
Text=#T.Source_2#
LeftMouseUpAction=#CM_A1# "#CM_1.V#" "2" #CM_A2#

[CM_1.I]
MeterStyle=CM_1.S
Meter=Shape
X=[CM_1.0:X]
Y=[CM_1.0:Y]
Shape=#CM_SI1# [#Source] #CM_SI2#