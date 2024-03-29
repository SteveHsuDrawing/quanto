[Variables]
@Include=#@#Global_SkinSettings.inc
@Include2=#CurrentPath#SkinSettingsExtras.inc
@Include3=#CurrentPath#Settings.inc

AddonName=Quanto
SkinName=Extras_SideBar

; Option Hidden
MSSSSO1H=0
MSSSSO2H=0
MSSSSO3H=0
MSSSSO4H=0
MSSSSO5H=1
MSSSSO6H=1
MSSSSO7H=1

; Option Name
MSSSSO1N=#T.Width#
MSSSSO2N=#T.Height#
MSSSSO3N=#T.Opacity#
MSSSSO4N=#T.Fix#
MSSSSO5N=
MSSSSO6N=
MSSSSO7N=

; Option Term in Name
; If not needed, leave nothing
MSSSSO1Tr=
MSSSSO2Tr=
MSSSSO3Tr=
MSSSSO4Tr=
MSSSSO5Tr=
MSSSSO6Tr=
MSSSSO7Tr=

; Option Settings' Value
MSSSSO1V=W
MSSSSO2V=H
MSSSSO3V=Alpha_Background
MSSSSO4V=Fix
MSSSSO5V=
MSSSSO6V=
MSSSSO7V=

; Terms & Ordinaries
T.A=#T.Work_area#
T.B=#T.Screen#
O.A=0
O.B=1

; Option Settings' Display Value
MSSSSO1D=[#W]x
MSSSSO2D=[#T.[#H]]
MSSSSO3D=[#Alpha_Background]x
MSSSSO4D=[#T.[#Fix]]
MSSSSO5D=
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
MSSSSO1Ty=NV
MSSSSO2Ty=CM
MSSSSO3Ty=NV
MSSSSO4Ty=CB
MSSSSO5Ty=NO
MSSSSO6Ty=NO
MSSSSO7Ty=NO

; Numeric Value Option: Range
; If not needed, leave "0,1"
MSSSSO1R=1,4294967295
MSSSSO2R=0,1
MSSSSO3R=0.0,1.0
MSSSSO4R=0,1
MSSSSO5R=0,1
MSSSSO6R=0,1
MSSSSO7R=0,1

; Numeric Value Option: Add/Decrease Value
; If not needed, leave "0"
MSSSSO1RV=1
MSSSSO2RV=1
MSSSSO3RV=0.10
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
MSSSSO7OA=[]

CloseOA=[!ZPos -2]