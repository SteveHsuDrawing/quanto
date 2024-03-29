[Variables]
@Include=#@#Global_SkinSettings.inc
@Include2=#CurrentPath#Settings.inc

AddonName=Quanto
SkinName=Widgets_FolderViewer

; Option Hidden
MSSSSO1H=0
MSSSSO2H=0
MSSSSO3H=0
MSSSSO4H=0
MSSSSO5H=0
MSSSSO6H=0
MSSSSO7H=1

; Option Name
MSSSSO1N=#T.Path#
MSSSSO2N=#T.Quantity#
MSSSSO3N=#T.Scaling# (#T.1_Style#)
MSSSSO4N=#T.Hide_1#
MSSSSO5N=#T.Show_1#
MSSSSO6N=#T.High-resolution_icons#
MSSSSO7N=

; Option Term in Name
; If not needed, leave nothing
MSSSSO1Tr=
MSSSSO2Tr=
MSSSSO3Tr=Dock
MSSSSO4Tr=#T.Extensions#
MSSSSO5Tr=#T.DotDot_Folder#
MSSSSO6Tr=
MSSSSO7Tr=

; Option Settings' Value
MSSSSO1V=Path
MSSSSO2V=Quantity
MSSSSO3V=Scale_Custom
MSSSSO4V=HideExtensions
MSSSSO5V=ShowDotDot
MSSSSO6V=IconSize
MSSSSO7V=

; Option Settings' Display Value
MSSSSO1D=[#Path]
MSSSSO2D=[#Quantity]
MSSSSO3D=[#Scale_Custom]
MSSSSO4D=[#T.[#HideExtensions]]
MSSSSO5D=[#T.[#ShowDotDot]]
MSSSSO6D=[#T.[#IconSize]]
MSSSSO7D=

; Option Type
; - NO - None
; - TI - Text Inputer
; - NV - Numeric Value
; - CM - Context Menu
; - CB - Check Box
; - CF - Choose Folder
; - OA - Other Actions
MSSSSO1Ty=CF
MSSSSO2Ty=NV
MSSSSO3Ty=NV
MSSSSO4Ty=CB
MSSSSO5Ty=CB
MSSSSO6Ty=CB
MSSSSO7Ty=NO

; Numeric Value Option: Range
; If not needed, leave "0,1"
MSSSSO1R=0,1
MSSSSO2R=1,32
MSSSSO3R=1,4
MSSSSO4R=0,1
MSSSSO5R=0,1
MSSSSO6R=0,1
MSSSSO7R=0,1

; Numeric Value Option: Add/Decrease Value
; If not needed, leave "0"
MSSSSO1RV=0
MSSSSO2RV=1
MSSSSO3RV=0.5
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

CloseOA=[]

 