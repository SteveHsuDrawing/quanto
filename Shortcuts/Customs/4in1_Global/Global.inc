[Rainmeter]
Update=-1

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

ContextAction=[!WriteKeyValue Variables Mode 0 "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!WriteKeyValue Variables Page AddSkins "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!WriteKeyValue Variables SubPage 11 "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!ActivateConfig "#ROOTCONFIG#\Extras\Settings" "16x14.ini"][!Refresh "#ROOTCONFIG#\Extras\Settings" "16x14.ini"]
ContextAction2=[!WriteKeyValue Variables Mode 0 "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!WriteKeyValue Variables Page AddSkins "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!WriteKeyValue Variables SubPage 12 "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!ActivateConfig "#ROOTCONFIG#\Extras\Settings" "16x14.ini"][!Refresh "#ROOTCONFIG#\Extras\Settings" "16x14.ini"]
ContextAction3=[]
ContextAction4=#GeneralAction2#
ContextAction5=#GeneralAction11#
ContextAction6=#GeneralAction4#
ContextAction7=[]
ContextAction8=#GeneralAction5#
ContextAction9=#GeneralAction6#
ContextAction10=#GeneralAction7#

[Variables]
@Include=#@#Global.inc
@Include2=#@#Resources\Resources.inc