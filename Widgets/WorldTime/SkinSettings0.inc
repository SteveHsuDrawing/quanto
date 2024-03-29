[Variables]
@Include=#@#Global_SkinSettings.inc
@Include2=#CurrentPath#Settings.inc

AddonName=Quanto
SkinName=Widgets_WorldTime

; Option Hidden
MSSSSO1H=0
MSSSSO2H=0
MSSSSO3H=0
MSSSSO4H=0
MSSSSO5H=0
MSSSSO6H=0
MSSSSO7H=1

; Option Name
MSSSSO1N=#T.Name_of_region# (1)
MSSSSO2N=#T.Time_zone# (1)
MSSSSO3N=#T.Daylight_Saving_Time# (1)
MSSSSO4N=#T.Name_of_region# (2)
MSSSSO5N=#T.Time_zone# (2)
MSSSSO6N=#T.Daylight_Saving_Time# (2)
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
MSSSSO1V=TimeAreaName1
MSSSSO2V=TimeZone1
MSSSSO3V=DaylightSavingTime1
MSSSSO4V=TimeAreaName2
MSSSSO5V=TimeZone2
MSSSSO6V=DaylightSavingTime2
MSSSSO7V=

; Option Settings' Display Value
MSSSSO1D=#TimeAreaName1#
MSSSSO2D=GMT #TimeZone1#:00
MSSSSO3D=[#T.[#DaylightSavingTime1]]
MSSSSO4D=#TimeAreaName2#
MSSSSO5D=GMT #TimeZone2#:00
MSSSSO6D=[#T.[#DaylightSavingTime2]]
MSSSSO7D=

; Option Type
; - NO - None
; - TI - Text Inputer
; - NV - Numeric Value
; - CM - Context Menu
; - CB - Check Box
; - CF - Choose Folder
; - OA - Other Actions
MSSSSO1Ty=TI
MSSSSO2Ty=NV
MSSSSO3Ty=CB
MSSSSO4Ty=TI
MSSSSO5Ty=NV
MSSSSO6Ty=CB
MSSSSO7Ty=NO

; Numeric Value Option: Range
; If not needed, leave "0,1"
MSSSSO1R=0,1
MSSSSO2R=-12,12
MSSSSO3R=0,1
MSSSSO4R=0,1
MSSSSO5R=-12,12
MSSSSO6R=0,1
MSSSSO7R=0,1

; Numeric Value Option: Add/Decrease Value
; If not needed, leave "0"
MSSSSO1RV=0
MSSSSO2RV=1
MSSSSO3RV=0
MSSSSO4RV=0
MSSSSO5RV=1
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

 