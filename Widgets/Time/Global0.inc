[Variables]
@Include=Settings.inc
@Include2=#@#TimeFormat\#TimeFormat_Global#.inc
SkinW=4
SkinH=4
BeginX=0
BeginY=0

[MeasureTime]
Measure=Time

[MeasureTimeAMPM]
Measure=Time
Format=#TimeFormat.3#
Substitute="January":"#T.January#","February":"#T.February#","March":"#T.March#","April":"#T.April#","May":"#T.May#","June":"#T.June#","July":"#T.July#","August":"#T.August#","September":"#T.September#","October":"#T.October#","November":"#T.November#","December":"#T.December#","Jan":"#T.Jan#","Feb":"#T.Feb#","Mar":"#T.Mar#","Apr":"#T.Apr#","May":"#T.May#","Jun":"#T.Jun#","Jul":"#T.Jul#","Aug":"#T.Aug#","Sep":"#T.Sep#","Oct":"#T.Oct#","Nov":"#T.Nov#","Dec":"#T.Dec#","Sunday":"#T.Sunday#","Monday":"#T.Monday#","Tuesday":"#T.Tuesday#","Wednesday":"#T.Wednesday#","Thursday":"#T.Thursday#","Friday":"#T.Friday#","Saturday":"#T.Saturday#"

[MeasureSec]
Measure=Time
Format=%S
MinValue=0
MaxValue=60

[MeasureMinSource]
Measure=Time
Format=%M

[MeasureMin]
Measure=Calc
Formula=MeasureMinSource+MeasureSec/60
MinValue=0
MaxValue=60

[MeasureHourSource]
Measure=Time
Format=%I

[MeasureHour]
Measure=Calc
Formula=MeasureHourSource+MeasureMinSource/60+MeasureSec/3600-1
MinValue=0
MaxValue=12

[MeterSquare]
Meter=Shape
MeterStyle=MeterSquare_General

[MeterImage1]
Meter=Image
ImageName=#@#Bitmap\Clock Face 1
ImageTint=#FontColor_General#
W=(256*#Scale#)
H=(256*#Scale#)
DynamicVariables=1

[MeterImage2]
Meter=Image
ImageName=#@#Bitmap\Clock Face 2
ImageTint=#ThemeColor_General#
W=(256*#Scale#)
H=(256*#Scale#)
DynamicVariables=1

[MeterText]
Meter=String
MeterStyle=FontStyle_General
Text=[MeasureTimeAMPM]
StringAlign=CenterCenter
X=(128*#Scale#)
Y=(174*#Scale#)
FontColor=#FontColor_General#,96
Hidden=#HideDate#

[Custom1]
X=0
Y=0
W=(256*#Scale#)
H=(256*#Scale#)
StartAngle=(Rad(270))
AntiAlias=1
DynamicVariables=1

[MeterRotator1]
Meter=Roundline
MeterStyle=Custom1
MeasureName=MeasureSec
LineLength=(80*#Scale#)
LineColor=#ThemeColor_General#
LineWidth=(2*#Scale#)
Hidden=#EnergySaving#

[MeterRotator2]
Meter=Roundline
MeterStyle=Custom1
StartAngle=(Rad(90))
MeasureName=MeasureSec
LineLength=(20*#Scale#)
LineColor=#ThemeColor_General#
LineWidth=(2*#Scale#)
Hidden=#EnergySaving#

[MeterRotator3]
Meter=Roundline
MeterStyle=Custom1
MeasureName=MeasureMin
LineLength=(60*#Scale#)
LineColor=#FontColor_General#,128
LineWidth=(4*#Scale#)

[MeterRotator4]
Meter=Roundline
MeterStyle=Custom1
StartAngle=(Rad(90))
MeasureName=MeasureMin
LineLength=(15*#Scale#)
LineColor=#FontColor_General#,128
LineWidth=(4*#Scale#)

[MeterRotator5]
Meter=Roundline
MeterStyle=Custom1
StartAngle=(Rad(-60))
MeasureName=MeasureHour
LineLength=(40*#Scale#)
LineColor=#FontColor_General#
LineWidth=(6*#Scale#)

[MeterRotator6]
Meter=Roundline
MeterStyle=Custom1
StartAngle=(Rad(120))
MeasureName=MeasureHour
LineLength=(10*#Scale#)
LineColor=#FontColor_General#
LineWidth=(6*#Scale#)

;[MeterMask]
;Meter=Shape
;Shape=Ellipse (128*#Scale#),(128*#Scale#),(3*#Scale#) | Fill Color #FontColor_General# | StrokeWidth 0
;DynamicVariables=1
