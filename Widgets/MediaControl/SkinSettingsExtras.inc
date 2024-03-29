[Variables]
CM_1.Y=1
CM_1.Q=2
CM_1.V=Mode
CM_2.Y=1
CM_2.Q=7
CM_2.V=PlayerName

[CM_1.S]
Hidden=1
Group=MSSSSO1CM
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
MouseLeaveAction=[!HideMeterGroup MSSSSO1CM][!Redraw]
[CM_1.1]
MeterStyle=CM_1.S|FontStyle_General|MSS.S.CMI|MSS.S.CMIB
Meter=String
Text=NowPlaying
LeftMouseUpAction=#CM_A1# "#CM_1.V#" "0" #CM_A2#
[CM_1.2]
MeterStyle=CM_1.S|FontStyle_General|MSS.S.CMI|Next
Meter=String
Text=WebNowPlaying
LeftMouseUpAction=#CM_A1# "#CM_1.V#" "1" #CM_A2#
[CM_1.I]
MeterStyle=CM_1.S
Meter=Shape
X=[CM_1.0:X]
Y=[CM_1.0:Y]
Shape=#CM_SI1# [#[#CM_1.V]] #CM_SI2#

[CM_2.S]
Hidden=1
Group=MSSSSO2CM
DynamicVariables=1
[CM_2.0]
MeterStyle=CM_2.S
Meter=Shape
X=#CM_X#
Y=(#CM_2.Y#*#CM_Y#)
Shape=#CM_S11# #CM_2.Q# #CM_S12#
Shape2=#CM_S21# #CM_2.Q# #CM_S22#
Shape3=#CM_S31# #CM_2.Q# #CM_S32#
Shape4=#CM_S41#
MouseLeaveAction=[!HideMeterGroup MSSSSO2CM][!Redraw]
[CM_2.1]
MeterStyle=CM_2.S|FontStyle_General|MSS.S.CMI|MSS.S.CMIB
Meter=String
Text=AIMP
LeftMouseUpAction=#CM_A1# "#CM_2.V#" "0" #CM_A2#
[CM_2.2]
MeterStyle=CM_2.S|FontStyle_General|MSS.S.CMI|Next
Meter=String
Text=CAD
LeftMouseUpAction=#CM_A1# "#CM_2.V#" "1" #CM_A2#
[CM_2.3]
MeterStyle=CM_2.S|FontStyle_General|MSS.S.CMI|Next
Meter=String
Text=iTunes
LeftMouseUpAction=#CM_A1# "#CM_2.V#" "2" #CM_A2#
[CM_2.4]
MeterStyle=CM_2.S|FontStyle_General|MSS.S.CMI|Next
Meter=String
Text=Spotify
LeftMouseUpAction=#CM_A1# "#CM_2.V#" "3" #CM_A2#
[CM_2.5]
MeterStyle=CM_2.S|FontStyle_General|MSS.S.CMI|Next
Meter=String
Text=Winamp
LeftMouseUpAction=#CM_A1# "#CM_2.V#" "4" #CM_A2#
[CM_2.6]
MeterStyle=CM_2.S|FontStyle_General|MSS.S.CMI|Next
Meter=String
Text=WLM
LeftMouseUpAction=#CM_A1# "#CM_2.V#" "5" #CM_A2#
[CM_2.7]
MeterStyle=CM_2.S|FontStyle_General|MSS.S.CMI|Next
Meter=String
Text=WMP
LeftMouseUpAction=#CM_A1# "#CM_2.V#" "6" #CM_A2#
[CM_2.I]
MeterStyle=CM_2.S
Meter=Shape
X=[CM_2.0:X]
Y=[CM_2.0:Y]
Shape=#CM_SI1# [#[#CM_2.V]] #CM_SI2#