[Variables]
Source=1
Icon=#@#Bitmap\CPU.png
Text1=[MeasureUsedCalcPer]% #T.used#
Text2=#T.Top#: [MeasureCPUTopProcess]
IconToolTipText=#T.Open# #T.Task_Manager#
Text1ToolTipText=
Text2ToolTipText=[MeasureCPUTopProcess]
IconAction=["taskmgr.exe"]
HideInformation=0
InformationToolTipText=[MeasureCPUName]
ExtraText3=1
Text3=[MeasureCPUTemp]°C
Text3ToolTipText=
Text3Icon=#@#Bitmap\Temperature.png
Text3IconAction=
1x1Text=[MeasureUsedCalcPer1x1]
1x1Title=CPU



4x2Bar1_Hidden=0
4x2Bar1_Icon=#@#Bitmap\Temperature.png
4x2Bar1_Text=[MeasureCPUTemp] °C
4x2Bar1_Width=140
4x2Bar1_Dividen=[MeasureCPUTemp]
4x2Bar1_Divisor=80
4x2Bar2_Hidden=0
4x2Bar2_Icon=#@#Bitmap\Fans.png
4x2Bar2_Text=[MeasureCPUFanSpeed] RPM
4x2Bar2_Width=140
4x2Bar2_Dividen=[MeasureCPUFanSpeed]
4x2Bar2_Divisor=50000

4x3TextXBegin=96
4x3TextYBegin=16
4x3LineSpacing=19
4x3Hiden1=0
4x3Title1=#T.CPU_name#
4x3Cntnt1=[MeasureCPUName]
4x3Hiden2=0
4x3Title2=#T.Top_process#
4x3Cntnt2=[MeasureCPUTopProcess]
4x3Hiden3=0
4x3Title3=#T.Temperature#
4x3Cntnt3=[MeasureCPUTemp] °C
4x3Hiden4=0
4x3Title4=#T.Fan_speed#
4x3Cntnt4=[MeasureCPUFanSpeed] RPM
4x3Hiden5=0
4x3Title5=#T.Voltage#
4x3Cntnt5=[MeasureCPUVoltage] V
4x3Hiden6=0
4x3Title6=#T.Power#
4x3Cntnt6=[MeasureCPUPower] W
