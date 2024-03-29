[Variables]
@Include=#@#Global_SkinSettings.inc
@Include2=#CurrentPath#SkinSettingsExtras.inc
@Include3=#CurrentPath#Settings.inc

AddonName=Quanto
SkinName=Widgets_MediaControl

; Option Hidden
MSSSSO1H=0
MSSSSO2H=0
MSSSSO3H=0
MSSSSO4H=0
MSSSSO5H=1
MSSSSO6H=1
MSSSSO7H=1

; Option Name
MSSSSO1N=Plugin
MSSSSO2N=#T.Name_of_1# (NowPlaying)
MSSSSO3N=#T.Colored#
MSSSSO4N=#S.Global.4#
MSSSSO5N=
MSSSSO6N=
MSSSSO7N=

; Option Term in Name
; If not needed, leave nothing
MSSSSO1Tr=
MSSSSO2Tr=#T.Player#
MSSSSO3Tr=
MSSSSO4Tr=
MSSSSO5Tr=
MSSSSO6Tr=
MSSSSO7Tr=

; Option Settings' Value
MSSSSO1V=Mode
MSSSSO2V=PlayerName
MSSSSO3V=Colored
MSSSSO4V=
MSSSSO5V=
MSSSSO6V=
MSSSSO7V=

; Terms & Ordinaries

T.Mode.0=NowPlaying
T.Mode.1=WebNowPlaying

; Option Settings' Display Value
MSSSSO1D=[#T.Mode.[#Mode]]
MSSSSO2D=[#T.PlayerName.[#PlayerName]]
MSSSSO3D=[#T.[#Colored]]
MSSSSO4D=[#T.Look_for_Help]
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
MSSSSO1Ty=CM
MSSSSO2Ty=CM
MSSSSO3Ty=CB
MSSSSO4Ty=OA
MSSSSO5Ty=NO
MSSSSO6Ty=NO
MSSSSO7Ty=NO

; Numeric Value Option: Range
; If not needed, leave "0,1"
MSSSSO1R=0,
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
MSSSSO4OA=[https://github.com/SteveHsuDrawing/quanto/wiki/Troubleshooting#media-control-doesnt-work-with-my-media-player]
MSSSSO5OA=[]
MSSSSO6OA=[]
MSSSSO7OA=[]

CloseOA=[]