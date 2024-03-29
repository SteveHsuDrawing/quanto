[Variables]
@Include=#@#Global.inc
@Include2=#@#Settings.inc
@Include3=Settings.inc
@Include4=#@#TimeFormat\#TimeFormat_Global#.inc
SkinW=0
SkinH=0
BeginX=0
BeginY=0

[Rainmeter]
Update=(1000+59000*#EnergySaving#)
Blur=0
BlurRegion=0

RightMouseUpAction=[!SkinCustomMenu]
ContextTitle=#OT.Alternative#
ContextTitle2=#OT.Skin_Settings#
ContextTitle3=#OT.GlobalSettings#
ContextTitle4=-
ContextTitle5=#OT.Refresh#
ContextTitle6=#OT.Unload#
ContextTitle7=#OT.More#
ContextAction=#GeneralAction2#
ContextAction2=#GeneralAction11#
ContextAction3=#GeneralAction4#
ContextAction4=[]
ContextAction5=#GeneralAction5#
ContextAction6=#GeneralAction6#
ContextAction7=#GeneralAction7#

BackgroundMode=2
SolidColor=255,255,255,1
Group=Extras
DynamicWindowSize=1

MouseOverAction=[!Update]
MouseLeaveAction=[!Update]

[MeasureTime]
Measure=Time

[MeasureTimeM]
Measure=Time
Format=#VariableTimeM#
Substitute="AM":"#T.AM#","PM":"#T.PM#"

[MeasureTimeAMPM]
Measure=Time
Format=#TimeFormat.3# #VariableTimeAMPM#
Substitute="January":"#T.January#","February":"#T.February#","March":"#T.March#","April":"#T.April#","May":"#T.May#","June":"#T.June#","July":"#T.July#","August":"#T.August#","September":"#T.September#","October":"#T.October#","November":"#T.November#","December":"#T.December#","Jan":"#T.Jan#","Feb":"#T.Feb#","Mar":"#T.Mar#","Apr":"#T.Apr#","May":"#T.May#","Jun":"#T.Jun#","Jul":"#T.Jul#","Aug":"#T.Aug#","Sep":"#T.Sep#","Oct":"#T.Oct#","Nov":"#T.Nov#","Dec":"#T.Dec#","Sunday":"#T.Sunday#","Monday":"#T.Monday#","Tuesday":"#T.Tuesday#","Wednesday":"#T.Wednesday#","Thursday":"#T.Thursday#","Friday":"#T.Friday#","Saturday":"#T.Saturday#","AM":"#T.AM#","PM":"#T.PM#"

[MeasureSecond]
Measure=Time
Format=#VariableTimeM# %S

[MeasureBlurIndex]
Measure=String
String=0

[MeasureBlur]
Measure=Plugin
Plugin=FrostedGlass
Type=None

[MeterText1]
Meter=STRING
Text=[MeasureTimeM]
X=(128*#XFix#*#Scale#*#Scale_Custom#)
W=(128*2*#Scale#*#Scale_Custom#)
FontFace=#FontFace_Clock#
FontColor=(255*#Brighten#),(255*#Brighten#),(255*#Brighten#)
FontSize=(12*#Scale_Custom#*#Scale#*4)
FontWeight=#FontWeight_Clock#
DynamicVariables=1
AntiAlias=1
StringAlign=#StringAlign#

[MeterText3]
Meter=STRING
Text=[MeasureTimeAMPM]
X=0r
Y=0R
W=(256*#Scale#*#Scale_Custom#)
FontFace=#FontFace_General#
FontColor=(255*#Brighten#),(255*#Brighten#),(255*#Brighten#)
FontSize=(12*#Scale_Custom#*#Scale#)
DynamicVariables=1
AntiAlias=1
StringAlign=#StringAlign#
Hidden=#HideDate#
