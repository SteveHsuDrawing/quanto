[TextStyle]
W=(24*#Scale#)
H=(18*#Scale#)
X=((32*#Scale#))r
Y=r
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(#FontSize_General#*3/4*#Scale#)
StringAlign=CenterCenter
AntiAlias=1
DynamicVariables=1

[FirstDay]
Y=((9*#Scale#))R
X=(32*#Scale#)
DynamicVariables=1

[NewWk]
Y=((9*#Scale#))R
X=(32*#Scale#)
DynamicVariables=1

[CurrentDay]
Solidcolor=#ThemeColor_General#
FontColor=255,255,255
DynamicVariables=1

[LastWeek]
FontColor=0,0,0,0

[PreviousMonth]
FontColor=#FontColor_General#,64
DynamicVariables=1

[NextMonth]
FontColor=#FontColor_General#,64
DynamicVariables=1

[HolidayStyle]
FontColor=#FontColor_General#,128
DynamicVariables=1

[WeekendStyle]
FontColor=#FontColor_General#,128
DynamicVariables=1

[MeasureDate]
Measure=Time
Format=#TimeFormat.4#
Substitute="January":"#T.January#","February":"#T.February#","March":"#T.March#","April":"#T.April#","May":"#T.May#","June":"#T.June#","July":"#T.July#","August":"#T.August#","September":"#T.September#","October":"#T.October#","November":"#T.November#","December":"#T.December#","Jan":"#T.Jan#","Feb":"#T.Feb#","Mar":"#T.Mar#","Apr":"#T.Apr#","May":"#T.May#","Jun":"#T.Jun#","Jul":"#T.Jul#","Aug":"#T.Aug#","Sep":"#T.Sep#","Oct":"#T.Oct#","Nov":"#T.Nov#","Dec":"#T.Dec#","Sunday":"#T.Sunday#","Monday":"#T.Monday#","Tuesday":"#T.Tuesday#","Wednesday":"#T.Wednesday#","Thursday":"#T.Thursday#","Friday":"#T.Friday#","Saturday":"#T.Saturday#"


[Custom1]
X=((32*#Scale#))r
Y=0r
StringAlign=CenterCenter
StringStyle=Bold
DynamicVariables=1

[MeterTitle1]
Meter=String
Text=#T.Sun#
MeterStyle=FontStyle_Small | Custom1
X=(32*#Scale#)
Y=(21*#Scale#)

[MeterTitle2]
Meter=String
Text=#T.Mon#
MeterStyle=FontStyle_Small | Custom1

[MeterTitle4]
Meter=String
Text=#T.Tue#
MeterStyle=FontStyle_Small | Custom1

[MeterTitle3]
Meter=String
Text=#T.Wed#
MeterStyle=FontStyle_Small | Custom1

[MeterTitle5]
Meter=String
Text=#T.Thu#
MeterStyle=FontStyle_Small | Custom1

[MeterTitle6]
Meter=String
Text=#T.Fri#
MeterStyle=FontStyle_Small | Custom1

[MeterTitle7]
Meter=String
Text=#T.Sat#
MeterStyle=FontStyle_Small | Custom1

[Lua]
Measure=Script
ScriptFile=CScript.lua

; .................... 1st week start ....................

[mDay1]
Meter=string

[mDay2]
Meter=string

[mDay3]
Meter=string

[mDay4]
Meter=string

[mDay5]
Meter=string

[mDay6]
Meter=string

[mDay7]
Meter=string

; .................... 2nd week start ....................

[mDay8]
Meter=string

[mDay9]
Meter=string

[mDay10]
Meter=string

[mDay11]
Meter=string

[mDay12]
Meter=string

[mDay13]
Meter=string

[mDay14]
Meter=string

; .................... 3rd week start ....................

[mDay15]
Meter=string

[mDay16]
Meter=string

[mDay17]
Meter=string

[mDay18]
Meter=string

[mDay19]
Meter=string

[mDay20]
Meter=string

[mDay21]
Meter=string

; .................... 4th week start ....................

[mDay22]
Meter=string

[mDay23]
Meter=string

[mDay24]
Meter=string

[mDay25]
Meter=string

[mDay26]
Meter=string

[mDay27]
Meter=string

[mDay28]
Meter=string

; .................... 5th week start ....................

[mDay29]
Meter=string

[mDay30]
Meter=string

[mDay31]
Meter=string

[mDay32]
Meter=string

[mDay33]
Meter=string

[mDay34]
Meter=string

[mDay35]
Meter=string

; .................... 6th week start ....................

[mDay36]
Meter=string

[mDay37]
Meter=string

[mDay38]
Meter=string

[mDay39]
Meter=string

[mDay40]
Meter=string

[mDay41]
Meter=string

[mDay42]
Meter=string
