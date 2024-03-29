[Variables]
Disabled=1

@Include=#@#Global_SkinSettings.inc
@Include2=#CurrentPath#Settings.inc

AddonName=Quanto
SkinName=Widgets_Weather

; Option Hidden
MSSSSO1H=0
MSSSSO2H=0
MSSSSO3H=0
MSSSSO4H=1
MSSSSO5H=1
MSSSSO6H=1
MSSSSO7H=1

; Option Name
MSSSSO1N=#T.Update_Interval#
MSSSSO2N=#T.Monochrome_Icon_Pack#
MSSSSO3N=#T.Weather_Services_Settings#
MSSSSO4N=
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
MSSSSO1V=UpdateRate
MSSSSO2V=IconPack
MSSSSO3V=
MSSSSO4V=
MSSSSO5V=
MSSSSO6V=
MSSSSO7V=

; Option Settings' Display Value
MSSSSO1D=[#UpdateRate]min(s)
MSSSSO2D=[#T.[#IconPack]]
MSSSSO3D=#T.Open#
MSSSSO4D=
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
MSSSSO2Ty=CB
MSSSSO3Ty=OA
MSSSSO4Ty=NO
MSSSSO5Ty=NO
MSSSSO6Ty=NO
MSSSSO7Ty=NO

; Numeric Value Option: Range
; If not needed, leave "0,1"
MSSSSO1R=60,4294967295
MSSSSO2R=0,1
MSSSSO3R=0,1
MSSSSO4R=0,1
MSSSSO5R=0,1
MSSSSO6R=0,1
MSSSSO7R=0,1

; Numeric Value Option: Add/Decrease Value
; If not needed, leave "0"
MSSSSO1RV=1
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
MSSSSO3OA=[!WriteKeyValue Variables Page GlobalSettings "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!WriteKeyValue Variables SubPage 12 "#ROOTCONFIGPATh#Extras\Settings\16x14.ini"][!ActivateConfig "#ROOTCONFIG#\Extras\Settings" "16x14.ini"][!Refresh "#ROOTCONFIG#\Extras\Settings" "16x14.ini"]
MSSSSO4OA=[]
MSSSSO5OA=[]
MSSSSO6OA=[]
MSSSSO7OA=[]

CloseOA=[]