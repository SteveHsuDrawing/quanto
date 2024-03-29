[Variables]
@Include=#@#Global_SkinSettings.inc
@Include2=#CurrentPath#Settings.inc

AddonName=Quanto
SkinName=Widgets_RAM

; Option Hidden
MSSSSO1H=0
MSSSSO2H=0
MSSSSO3H=0
MSSSSO4H=0
MSSSSO5H=0
MSSSSO6H=1
MSSSSO7H=1

; Option Name
MSSSSO1N=#T.Show_1# (4x1)
MSSSSO2N=#T.Registry_Key_of_1#
MSSSSO3N=#T.Registry_Key_of_1#
MSSSSO4N=#S.Global.5#
MSSSSO5N=#S.Global.4#
MSSSSO6N=
MSSSSO7N=

; Option Term in Name
; If not needed, leave nothing
MSSSSO1Tr=#T.Temperature#
MSSSSO2Tr=#T.Temperature#
MSSSSO3Tr=#T.Power#
MSSSSO4Tr=
MSSSSO5Tr=
MSSSSO6Tr=
MSSSSO7Tr=

; Option Settings' Value
MSSSSO1V=ExtraText3
MSSSSO2V=RKDIMMTemp
MSSSSO3V=RKDIMMPower
MSSSSO4V=
MSSSSO5V=
MSSSSO6V=
MSSSSO7V=

; Option Settings' Display Value
MSSSSO1D=[#T.[#ExtraText3]]
MSSSSO2D=[#RKDIMMTemp]
MSSSSO3D=[#RKDIMMPower]
MSSSSO4D=[#T.Look_for_Help]
MSSSSO5D=[#T.Look_for_Help]
MSSSSO6D=
MSSSSO7D=

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
MSSSSO4Ty=OA
MSSSSO5Ty=OA
MSSSSO6Ty=NO
MSSSSO7Ty=NO

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
MSSSSO4RV=5
MSSSSO5RV=0
MSSSSO6RV=0
MSSSSO7RV=0

; Options' Other Actions
; If not needed, leave "[]"
MSSSSO1OA=[]
MSSSSO2OA=[]
MSSSSO3OA=[]
MSSSSO4OA=["https://github.com/SteveHsuDrawing/quanto/wiki/Troubleshooting#for-aida64-users"]
MSSSSO5OA=["https://github.com/SteveHsuDrawing/quanto/wiki/Troubleshooting#advanced-objects-can-be-displayed-in-the-software-but-not-in-quanto-what-should-i-do"]
MSSSSO6OA=[]
MSSSSO7OA=[]

CloseOA=[]

 