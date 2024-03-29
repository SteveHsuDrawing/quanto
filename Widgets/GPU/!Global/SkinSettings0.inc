[Variables]
@Include=#@#Global_SkinSettings.inc
@Include2=#CurrentPath#Settings.inc

AddonName=Quanto
SkinName=Widgets_GPU

; Option Hidden
MSSSSO1H=0
MSSSSO2H=0
MSSSSO3H=0
MSSSSO4H=0
MSSSSO5H=0
MSSSSO6H=0
MSSSSO7H=0

; Option Name
MSSSSO1N=#T.Show_1# (4x1)
MSSSSO2N=#T.Registry_Key_of_1#
MSSSSO3N=#T.Registry_Key_of_1#
MSSSSO4N=#T.Registry_Key_of_1#
MSSSSO5N=#T.Registry_Key_of_1#
MSSSSO6N=#T.Name_on_display#
MSSSSO7N=#S.Global.5#

; Option Term in Name
; If not needed, leave nothing
MSSSSO1Tr=#T.Temperature#
MSSSSO2Tr=#T.Temperature#
MSSSSO3Tr=#T.Fan_speed#
MSSSSO4Tr=#T.Voltage#
MSSSSO5Tr=#T.Power#
MSSSSO6Tr=
MSSSSO7Tr=

; Option Settings' Value
MSSSSO1V=ExtraText3
MSSSSO2V=RKGPUTemp
MSSSSO3V=RKGPUFanSpeed
MSSSSO4V=RKGPUVoltage
MSSSSO5V=RKGPUPower
MSSSSO6V=Text2
MSSSSO7V=

; Option Settings' Display Value
MSSSSO1D=[#T.[#ExtraText3]]
MSSSSO2D=[#RKGPUTemp]
MSSSSO3D=[#RKGPUFanSpeed]
MSSSSO4D=[#RKGPUVoltage]
MSSSSO5D=[#RKGPUPower]
MSSSSO6D=[#Text2]
MSSSSO7D=[#T.Look_for_Help]

; Option Type
; - NO - None
; - TI - Text Inputer
; - NV - Numeric Value
; - CM - Context Menu
; - CB - Check Box
; - CF - Choose Folder
; - OA - Other Actions
MSSSSO1Ty=CB
MSSSSO2Ty=TI
MSSSSO3Ty=TI
MSSSSO4Ty=TI
MSSSSO5Ty=TI
MSSSSO6Ty=TI
MSSSSO7Ty=OA

; Numeric Value Option: Range
; If not needed, leave "0,1"
MSSSSO1R=0,1
MSSSSO2R=0,1
MSSSSO3R=0,1
MSSSSO4R=0,1
MSSSSO5R=0,1
MSSSSO6R=0,1
MSSSSO7R=0,1

; Numeric Value Option: Add/Decrease Value
; If not needed, leave "0"
MSSSSO1RV=0
MSSSSO2RV=0
MSSSSO3RV=0
MSSSSO4RV=0
MSSSSO5RV=0
MSSSSO6RV=0
MSSSSO7RV=0

; Options' Other Actions
; If not needed, leave "[]"
MSSSSO1OA=[]
MSSSSO2OA=[]
MSSSSO3OA=[]
MSSSSO4OA=[]
MSSSSO5OA=[]
MSSSSO6OA=[]
MSSSSO7OA=["https://github.com/SteveHsuDrawing/quanto/wiki/Troubleshooting#for-aida64-users"]

CloseOA=[]

 