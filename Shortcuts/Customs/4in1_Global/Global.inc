[Rainmeter]
RightMouseUpAction=[!SkinCustomMenu]
ContextTitle=#OT.Edit_targets#
ContextTitle2=#OT.Edit_settings_of_Customs#
ContextTitle3=-
ContextTitle4=#OT.Alternative#
ContextTitle5=#OT.Skin_Settings#
ContextTitle6=#OT.GlobalSettings#
ContextTitle7=-
ContextTitle8=#OT.Refresh#
ContextTitle9=#OT.Unload#
ContextTitle10=#OT.More#

ContextAction=[!WriteKeyValue Variables Page AddSkins "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!WriteKeyValue Variables SubPage 11 "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!ActivateConfig "#ROOTCONFIG#\Widgets\Settings" "16x14.ini"][!Refresh "#ROOTCONFIG#\Widgets\Settings" "16x14.ini"]
ContextAction2=[!WriteKeyValue Variables Page AddSkins "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!WriteKeyValue Variables SubPage 12 "#ROOTCONFIGPATH#Widgets\Settings\16x14.ini"][!ActivateConfig "#ROOTCONFIG#\Widgets\Settings" "16x14.ini"][!Refresh "#ROOTCONFIG#\Widgets\Settings" "16x14.ini"]
ContextAction3=[]
ContextAction4=#GeneralAction2#
ContextAction5=#GeneralAction11#
ContextAction6=#GeneralAction4#
ContextAction7=[]
ContextAction8=#GeneralAction5#
ContextAction9=#GeneralAction6#
ContextAction10=#GeneralAction7#

MouseOverAction=[!ShowMeterGroup MovingZone][!Redraw]
MouseLeaveAction=[!HideMeterGroup MovingZone][!Redraw]


[Variables]
@Include=#@#Global.inc
@Include2=#@#Resources.inc
@Include3=SkinSettings#HideSettings#.inc