[Variables]
ExtraTip=
PreviewPathPrefix=#@#Previews\0\
OptionW=304
OptionH=72
OptionGapX=#OptionW#+6
OptionGapY=#OptionH#+4

[MeterOptionStyle1]
X=0r
Y=((((#OptionGapY#))*#Scale#))r
Shape=Rectangle 0,0,((#OptionW#)*#Scale#),(#OptionH#*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_BarBorder# | Stroke Color #ThemeColor_BarBorder#
Shape2=Rectangle 0,0,((#OptionW#)*#Scale#),(#OptionH#*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_Option# | StrokeWidth 0
DynamicVariables=1
Group=Contents

[MeterOptionX1Begin]
X=((#BeginX#)*#Scale#)
Y=((#BeginY#+80)*#Scale#)

[MeterOptionX2Begin]
X=((((#OptionGapX#))*#Scale#))r
Y=((#BeginY#+80)*#Scale#)

[MeterOption11]
Meter=Shape
MeterStyle=MeterOptionStyle1 | MeterOptionX1Begin
Hidden=#OptionHidden11#

[MeterOption21]
Meter=Shape
MeterStyle=MeterOptionStyle1
Hidden=#OptionHidden21#

[MeterOption31]
Meter=Shape
MeterStyle=MeterOptionStyle1
Hidden=#OptionHidden31#

[MeterOption41]
Meter=Shape
MeterStyle=MeterOptionStyle1
Hidden=#OptionHidden41#

[MeterOption51]
Meter=Shape
MeterStyle=MeterOptionStyle1
Hidden=#OptionHidden51#

[MeterOption61]
Meter=Shape
MeterStyle=MeterOptionStyle1
Hidden=#OptionHidden61#

[MeterOption71]
Meter=Shape
MeterStyle=MeterOptionStyle1
Hidden=#OptionHidden71#

[MeterOption81]
Meter=Shape
MeterStyle=MeterOptionStyle1
Hidden=#OptionHidden81#

[MeterOption91]
Meter=Shape
MeterStyle=MeterOptionStyle1
Hidden=#OptionHidden91#

[MeterOption12]
Meter=Shape
MeterStyle=MeterOptionStyle1 | MeterOptionX2Begin
Hidden=#OptionHidden12#

[MeterOption22]
Meter=Shape
MeterStyle=MeterOptionStyle1
Hidden=#OptionHidden22#

[MeterOption32]
Meter=Shape
MeterStyle=MeterOptionStyle1
Hidden=#OptionHidden32#

[MeterOption42]
Meter=Shape
MeterStyle=MeterOptionStyle1
Hidden=#OptionHidden42#

[MeterOption52]
Meter=Shape
MeterStyle=MeterOptionStyle1
Hidden=#OptionHidden52#

[MeterOption62]
Meter=Shape
MeterStyle=MeterOptionStyle1
Hidden=#OptionHidden62#

[MeterOption72]
Meter=Shape
MeterStyle=MeterOptionStyle1
Hidden=#OptionHidden72#

[MeterOption82]
Meter=Shape
MeterStyle=MeterOptionStyle1
Hidden=#OptionHidden82#

[MeterOption92]
Meter=Shape
MeterStyle=MeterOptionStyle1
Hidden=#OptionHidden92#

[MeterOptionStyle1Selected]
X=0r
Y=((((#OptionGapY#))*#Scale#))r
Shape=Rectangle 0,0,(24*#Scale#),(24*#Scale#),(4*#Scale#),(4*#Scale#) | Fill Color #ThemeColor_BackgroundSelected# | StrokeWidth 0
DynamicVariables=1
Hidden=1
Group=Contents

[MeterOptionX1SelectedBegin]
X=((#BeginX#+#OptionW#-38)*#Scale#)
Y=((#BeginY#+#OptionH#+18)*#Scale#)

[MeterOptionX2SelectedBegin]
X=((((#OptionGapX#))*#Scale#))r
Y=((#BeginY#+#OptionH#+18)*#Scale#)

[MeterRainmeterIconX1SelectedBegin]
X=((#BeginX#+#OptionW#-38)*#Scale#)
Y=((#BeginY#+#OptionH#+46)*#Scale#)

[MeterRainmeterIconX2SelectedBegin]
X=((((#OptionGapX#))*#Scale#))r
Y=((#BeginY#+#OptionH#+46)*#Scale#)

[MeterOption11Selected]
Meter=Shape
MeterStyle=MeterOptionStyle1Selected | MeterOptionX1SelectedBegin

[MeterOption21Selected]
Meter=Shape
MeterStyle=MeterOptionStyle1Selected

[MeterOption31Selected]
Meter=Shape
MeterStyle=MeterOptionStyle1Selected

[MeterOption41Selected]
Meter=Shape
MeterStyle=MeterOptionStyle1Selected

[MeterOption51Selected]
Meter=Shape
MeterStyle=MeterOptionStyle1Selected

[MeterOption61Selected]
Meter=Shape
MeterStyle=MeterOptionStyle1Selected

[MeterOption71Selected]
Meter=Shape
MeterStyle=MeterOptionStyle1Selected

[MeterOption81Selected]
Meter=Shape
MeterStyle=MeterOptionStyle1Selected

[MeterOption91Selected]
Meter=Shape
MeterStyle=MeterOptionStyle1Selected

[MeterOption12Selected]
Meter=Shape
MeterStyle=MeterOptionStyle1Selected | MeterOptionX2SelectedBegin

[MeterOption22Selected]
Meter=Shape
MeterStyle=MeterOptionStyle1Selected

[MeterOption32Selected]
Meter=Shape
MeterStyle=MeterOptionStyle1Selected

[MeterOption42Selected]
Meter=Shape
MeterStyle=MeterOptionStyle1Selected

[MeterOption52Selected]
Meter=Shape
MeterStyle=MeterOptionStyle1Selected

[MeterOption62Selected]
Meter=Shape
MeterStyle=MeterOptionStyle1Selected

[MeterOption72Selected]
Meter=Shape
MeterStyle=MeterOptionStyle1Selected

[MeterOption82Selected]
Meter=Shape
MeterStyle=MeterOptionStyle1Selected

[MeterOption92Selected]
Meter=Shape
MeterStyle=MeterOptionStyle1Selected

[MeterRainmeterIcon11Selected]
Meter=Shape
MeterStyle=MeterOptionStyle1Selected | MeterRainmeterIconX1SelectedBegin

[MeterRainmeterIcon21Selected]
Meter=Shape
MeterStyle=MeterOptionStyle1Selected

[MeterRainmeterIcon31Selected]
Meter=Shape
MeterStyle=MeterOptionStyle1Selected

[MeterRainmeterIcon41Selected]
Meter=Shape
MeterStyle=MeterOptionStyle1Selected

[MeterRainmeterIcon51Selected]
Meter=Shape
MeterStyle=MeterOptionStyle1Selected

[MeterRainmeterIcon61Selected]
Meter=Shape
MeterStyle=MeterOptionStyle1Selected

[MeterRainmeterIcon71Selected]
Meter=Shape
MeterStyle=MeterOptionStyle1Selected

[MeterRainmeterIcon81Selected]
Meter=Shape
MeterStyle=MeterOptionStyle1Selected

[MeterRainmeterIcon91Selected]
Meter=Shape
MeterStyle=MeterOptionStyle1Selected

[MeterRainmeterIcon12Selected]
Meter=Shape
MeterStyle=MeterOptionStyle1Selected | MeterRainmeterIconX2SelectedBegin

[MeterRainmeterIcon22Selected]
Meter=Shape
MeterStyle=MeterOptionStyle1Selected

[MeterRainmeterIcon32Selected]
Meter=Shape
MeterStyle=MeterOptionStyle1Selected

[MeterRainmeterIcon42Selected]
Meter=Shape
MeterStyle=MeterOptionStyle1Selected

[MeterRainmeterIcon52Selected]
Meter=Shape
MeterStyle=MeterOptionStyle1Selected

[MeterRainmeterIcon62Selected]
Meter=Shape
MeterStyle=MeterOptionStyle1Selected

[MeterRainmeterIcon72Selected]
Meter=Shape
MeterStyle=MeterOptionStyle1Selected

[MeterRainmeterIcon82Selected]
Meter=Shape
MeterStyle=MeterOptionStyle1Selected

[MeterRainmeterIcon92Selected]
Meter=Shape
MeterStyle=MeterOptionStyle1Selected

[MeterSmallIconStyle]
X=0r
Y=((((#OptionGapY#))*#Scale#))r
ImageName=#@#Bitmap\Add.png
W=(16*#Scale#)
H=(16*#Scale#)
ImageTint=#FontColor_General#
Group=Contents

[MeterSmallIconX1Begin]
X=((#BeginX#+#OptionW#-34)*#Scale#)
Y=((#BeginY#+#OptionH#+22)*#Scale#)

[MeterSmallIconX2Begin]
X=(((#OptionGapX#)*#Scale#))r
Y=((#BeginY#+#OptionH#+22)*#Scale#)

[MeterSmallIcon11]
Meter=Image
MeterStyle=MeterSmallIconStyle | MeterSmallIconX1Begin
Hidden=#OptionHidden11#
MouseOverAction=[!ShowMeter MeterOption11Selected][!Redraw]
MouseLeaveAction=[!HideMeter MeterOption11Selected][!Redraw]
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\#Option11#"]

[MeterSmallIcon21]
Meter=Image
MeterStyle=MeterSmallIconStyle
Hidden=#OptionHidden21#
MouseOverAction=[!ShowMeter MeterOption21Selected][!Redraw]
MouseLeaveAction=[!HideMeter MeterOption21Selected][!Redraw]
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\#Option21#"]

[MeterSmallIcon31]
Meter=Image
MeterStyle=MeterSmallIconStyle
Hidden=#OptionHidden31#
MouseOverAction=[!ShowMeter MeterOption31Selected][!Redraw]
MouseLeaveAction=[!HideMeter MeterOption31Selected][!Redraw]
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\#Option31#"]

[MeterSmallIcon41]
Meter=Image
MeterStyle=MeterSmallIconStyle
Hidden=#OptionHidden41#
MouseOverAction=[!ShowMeter MeterOption41Selected][!Redraw]
MouseLeaveAction=[!HideMeter MeterOption41Selected][!Redraw]
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\#Option41#"]

[MeterSmallIcon51]
Meter=Image
MeterStyle=MeterSmallIconStyle
Hidden=#OptionHidden51#
MouseOverAction=[!ShowMeter MeterOption51Selected][!Redraw]
MouseLeaveAction=[!HideMeter MeterOption51Selected][!Redraw]
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\#Option51#"]

[MeterSmallIcon61]
Meter=Image
MeterStyle=MeterSmallIconStyle
Hidden=#OptionHidden61#
MouseOverAction=[!ShowMeter MeterOption61Selected][!Redraw]
MouseLeaveAction=[!HideMeter MeterOption61Selected][!Redraw]
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\#Option61#"]

[MeterSmallIcon71]
Meter=Image
MeterStyle=MeterSmallIconStyle
Hidden=#OptionHidden71#
MouseOverAction=[!ShowMeter MeterOption71Selected][!Redraw]
MouseLeaveAction=[!HideMeter MeterOption71Selected][!Redraw]
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\#Option71#"]

[MeterSmallIcon81]
Meter=Image
MeterStyle=MeterSmallIconStyle
Hidden=#OptionHidden81#
MouseOverAction=[!ShowMeter MeterOption81Selected][!Redraw]
MouseLeaveAction=[!HideMeter MeterOption81Selected][!Redraw]
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\#Option81#"]

[MeterSmallIcon91]
Meter=Image
MeterStyle=MeterSmallIconStyle
Hidden=#OptionHidden91#
MouseOverAction=[!ShowMeter MeterOption91Selected][!Redraw]
MouseLeaveAction=[!HideMeter MeterOption91Selected][!Redraw]
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\#Option91#"]

[MeterSmallIcon12]
Meter=Image
MeterStyle=MeterSmallIconStyle | MeterSmallIconX2Begin
Hidden=#OptionHidden12#
MouseOverAction=[!ShowMeter MeterOption12Selected][!Redraw]
MouseLeaveAction=[!HideMeter MeterOption12Selected][!Redraw]
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\#Option12#"]

[MeterSmallIcon22]
Meter=Image
MeterStyle=MeterSmallIconStyle
Hidden=#OptionHidden22#
MouseOverAction=[!ShowMeter MeterOption22Selected][!Redraw]
MouseLeaveAction=[!HideMeter MeterOption22Selected][!Redraw]
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\#Option22#"]

[MeterSmallIcon32]
Meter=Image
MeterStyle=MeterSmallIconStyle
Hidden=#OptionHidden32#
MouseOverAction=[!ShowMeter MeterOption32Selected][!Redraw]
MouseLeaveAction=[!HideMeter MeterOption32Selected][!Redraw]
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\#Option32#"]

[MeterSmallIcon42]
Meter=Image
MeterStyle=MeterSmallIconStyle
Hidden=#OptionHidden42#
MouseOverAction=[!ShowMeter MeterOption42Selected][!Redraw]
MouseLeaveAction=[!HideMeter MeterOption42Selected][!Redraw]
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\#Option42#"]

[MeterSmallIcon52]
Meter=Image
MeterStyle=MeterSmallIconStyle
Hidden=#OptionHidden52#
MouseOverAction=[!ShowMeter MeterOption52Selected][!Redraw]
MouseLeaveAction=[!HideMeter MeterOption52Selected][!Redraw]
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\#Option52#"]

[MeterSmallIcon62]
Meter=Image
MeterStyle=MeterSmallIconStyle
Hidden=#OptionHidden62#
MouseOverAction=[!ShowMeter MeterOption62Selected][!Redraw]
MouseLeaveAction=[!HideMeter MeterOption62Selected][!Redraw]
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\#Option62#"]

[MeterSmallIcon72]
Meter=Image
MeterStyle=MeterSmallIconStyle
Hidden=#OptionHidden72#
MouseOverAction=[!ShowMeter MeterOption72Selected][!Redraw]
MouseLeaveAction=[!HideMeter MeterOption72Selected][!Redraw]
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\#Option72#"]

[MeterSmallIcon82]
Meter=Image
MeterStyle=MeterSmallIconStyle
Hidden=#OptionHidden82#
MouseOverAction=[!ShowMeter MeterOption82Selected][!Redraw]
MouseLeaveAction=[!HideMeter MeterOption82Selected][!Redraw]
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\#Option82#"]

[MeterSmallIcon92]
Meter=Image
MeterStyle=MeterSmallIconStyle
Hidden=#OptionHidden92#
MouseOverAction=[!ShowMeter MeterOption92Selected][!Redraw]
MouseLeaveAction=[!HideMeter MeterOption92Selected][!Redraw]
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\#Option92#"]

[MeterRainmeterIconStyle]
X=0r
Y=((((#OptionGapY#))*#Scale#))r
ImageName=#@#Bitmap\Arrow Right Up.png
W=(16*#Scale#)
H=(16*#Scale#)
ImageTint=#FontColor_General#
DynamicVariables=1
Group=Contents

[MeterRainmeterIconX1Begin]
X=((#BeginX#+#OptionW#-34)*#Scale#)
Y=((#BeginY#+#OptionH#+50)*#Scale#)

[MeterRainmeterIconX2Begin]
X=(((#OptionGapX#)*#Scale#))r
Y=((#BeginY#+#OptionH#+50)*#Scale#)

[MeterRainmeterIcon11]
Meter=Image
MeterStyle=MeterRainmeterIconStyle | MeterRainmeterIconX1Begin
Hidden=#OptionHidden11#
MouseOverAction=[!ShowMeter MeterRainmeterIcon11Selected][!Redraw]
MouseLeaveAction=[!HideMeter MeterRainmeterIcon11Selected][!Redraw]
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\#Option11#"]

[MeterRainmeterIcon21]
Meter=Image
MeterStyle=MeterRainmeterIconStyle
Hidden=#OptionHidden21#
MouseOverAction=[!ShowMeter MeterRainmeterIcon21Selected][!Redraw]
MouseLeaveAction=[!HideMeter MeterRainmeterIcon21Selected][!Redraw]
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\#Option21#"]

[MeterRainmeterIcon31]
Meter=Image
MeterStyle=MeterRainmeterIconStyle
Hidden=#OptionHidden31#
MouseOverAction=[!ShowMeter MeterRainmeterIcon31Selected][!Redraw]
MouseLeaveAction=[!HideMeter MeterRainmeterIcon31Selected][!Redraw]
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\#Option31#"]

[MeterRainmeterIcon41]
Meter=Image
MeterStyle=MeterRainmeterIconStyle
Hidden=#OptionHidden41#
MouseOverAction=[!ShowMeter MeterRainmeterIcon41Selected][!Redraw]
MouseLeaveAction=[!HideMeter MeterRainmeterIcon41Selected][!Redraw]
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\#Option41#"]

[MeterRainmeterIcon51]
Meter=Image
MeterStyle=MeterRainmeterIconStyle
Hidden=#OptionHidden51#
MouseOverAction=[!ShowMeter MeterRainmeterIcon51Selected][!Redraw]
MouseLeaveAction=[!HideMeter MeterRainmeterIcon51Selected][!Redraw]
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\#Option51#"]

[MeterRainmeterIcon61]
Meter=Image
MeterStyle=MeterRainmeterIconStyle
Hidden=#OptionHidden61#
MouseOverAction=[!ShowMeter MeterRainmeterIcon61Selected][!Redraw]
MouseLeaveAction=[!HideMeter MeterRainmeterIcon61Selected][!Redraw]
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\#Option61#"]

[MeterRainmeterIcon71]
Meter=Image
MeterStyle=MeterRainmeterIconStyle
Hidden=#OptionHidden71#
MouseOverAction=[!ShowMeter MeterRainmeterIcon71Selected][!Redraw]
MouseLeaveAction=[!HideMeter MeterRainmeterIcon71Selected][!Redraw]
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\#Option71#"]

[MeterRainmeterIcon81]
Meter=Image
MeterStyle=MeterRainmeterIconStyle
Hidden=#OptionHidden81#
MouseOverAction=[!ShowMeter MeterRainmeterIcon81Selected][!Redraw]
MouseLeaveAction=[!HideMeter MeterRainmeterIcon81Selected][!Redraw]
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\#Option81#"]

[MeterRainmeterIcon91]
Meter=Image
MeterStyle=MeterRainmeterIconStyle
Hidden=#OptionHidden91#
MouseOverAction=[!ShowMeter MeterRainmeterIcon91Selected][!Redraw]
MouseLeaveAction=[!HideMeter MeterRainmeterIcon91Selected][!Redraw]
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\#Option91#"]

[MeterRainmeterIcon12]
Meter=Image
MeterStyle=MeterRainmeterIconStyle | MeterRainmeterIconX2Begin
Hidden=#OptionHidden12#
MouseOverAction=[!ShowMeter MeterRainmeterIcon12Selected][!Redraw]
MouseLeaveAction=[!HideMeter MeterRainmeterIcon12Selected][!Redraw]
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\#Option12#"]

[MeterRainmeterIcon22]
Meter=Image
MeterStyle=MeterRainmeterIconStyle
Hidden=#OptionHidden22#
MouseOverAction=[!ShowMeter MeterRainmeterIcon22Selected][!Redraw]
MouseLeaveAction=[!HideMeter MeterRainmeterIcon22Selected][!Redraw]
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\#Option22#"]

[MeterRainmeterIcon32]
Meter=Image
MeterStyle=MeterRainmeterIconStyle
Hidden=#OptionHidden32#
MouseOverAction=[!ShowMeter MeterRainmeterIcon32Selected][!Redraw]
MouseLeaveAction=[!HideMeter MeterRainmeterIcon32Selected][!Redraw]
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\#Option32#"]

[MeterRainmeterIcon42]
Meter=Image
MeterStyle=MeterRainmeterIconStyle
Hidden=#OptionHidden42#
MouseOverAction=[!ShowMeter MeterRainmeterIcon42Selected][!Redraw]
MouseLeaveAction=[!HideMeter MeterRainmeterIcon42Selected][!Redraw]
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\#Option42#"]

[MeterRainmeterIcon52]
Meter=Image
MeterStyle=MeterRainmeterIconStyle
Hidden=#OptionHidden52#
MouseOverAction=[!ShowMeter MeterRainmeterIcon52Selected][!Redraw]
MouseLeaveAction=[!HideMeter MeterRainmeterIcon52Selected][!Redraw]
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\#Option52#"]

[MeterRainmeterIcon62]
Meter=Image
MeterStyle=MeterRainmeterIconStyle
Hidden=#OptionHidden62#
MouseOverAction=[!ShowMeter MeterRainmeterIcon62Selected][!Redraw]
MouseLeaveAction=[!HideMeter MeterRainmeterIcon62Selected][!Redraw]
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\#Option62#"]

[MeterRainmeterIcon72]
Meter=Image
MeterStyle=MeterRainmeterIconStyle
Hidden=#OptionHidden72#
MouseOverAction=[!ShowMeter MeterRainmeterIcon72Selected][!Redraw]
MouseLeaveAction=[!HideMeter MeterRainmeterIcon72Selected][!Redraw]
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\#Option72#"]

[MeterRainmeterIcon82]
Meter=Image
MeterStyle=MeterRainmeterIconStyle
Hidden=#OptionHidden82#
MouseOverAction=[!ShowMeter MeterRainmeterIcon82Selected][!Redraw]
MouseLeaveAction=[!HideMeter MeterRainmeterIcon82Selected][!Redraw]
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\#Option82#"]

[MeterRainmeterIcon92]
Meter=Image
MeterStyle=MeterRainmeterIconStyle
Hidden=#OptionHidden92#
MouseOverAction=[!ShowMeter MeterRainmeterIcon92Selected][!Redraw]
MouseLeaveAction=[!HideMeter MeterRainmeterIcon92Selected][!Redraw]
LeftMouseUpAction=[!Update][!Move (#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#) (#CURRENTCONFIGY#) "#ROOTCONFIG#\#Option92#"]

























[MeterIconStyle]
X=0r
Y=((((#OptionGapY#))*#Scale#))r
W=(24*#Scale#)
H=(24*#Scale#)
ImageTint=#FontColor_General#
DynamicVariables=1
Group=Contents

[MeterIcon11]
Meter=Image
X=((#BeginX#+22)*#Scale#)
Y=((#BeginY#+104)*#Scale#)
ImageName=#PreviewPathPrefix##Option11#
MeterStyle=MeterIconStyle
Hidden=#OptionHidden11#

[MeterIcon21]
Meter=Image
ImageName=#PreviewPathPrefix##Option21#
MeterStyle=MeterIconStyle
Hidden=#OptionHidden21#

[MeterIcon31]
Meter=Image
ImageName=#PreviewPathPrefix##Option31#
MeterStyle=MeterIconStyle
Hidden=#OptionHidden31#

[MeterIcon41]
Meter=Image
ImageName=#PreviewPathPrefix##Option41#
MeterStyle=MeterIconStyle
Hidden=#OptionHidden41#

[MeterIcon51]
Meter=Image
ImageName=#PreviewPathPrefix##Option51#
MeterStyle=MeterIconStyle
Hidden=#OptionHidden51#

[MeterIcon61]
Meter=Image
ImageName=#PreviewPathPrefix##Option61#
MeterStyle=MeterIconStyle
Hidden=#OptionHidden61#

[MeterIcon71]
Meter=Image
ImageName=#PreviewPathPrefix##Option71#
MeterStyle=MeterIconStyle
Hidden=#OptionHidden71#

[MeterIcon81]
Meter=Image
ImageName=#PreviewPathPrefix##Option81#
MeterStyle=MeterIconStyle
Hidden=#OptionHidden81#

[MeterIcon91]
Meter=Image
ImageName=#PreviewPathPrefix##Option91#
MeterStyle=MeterIconStyle
Hidden=#OptionHidden91#



[MeterIcon12]
Meter=Image
X=(((#OptionGapX#)*#Scale#))r
Y=((#BeginY#+104)*#Scale#)
ImageName=#PreviewPathPrefix##Option12#
MeterStyle=MeterIconStyle
Hidden=#OptionHidden12#

[MeterIcon22]
Meter=Image
ImageName=#PreviewPathPrefix##Option22#
MeterStyle=MeterIconStyle
Hidden=#OptionHidden22#

[MeterIcon32]
Meter=Image
ImageName=#PreviewPathPrefix##Option32#
MeterStyle=MeterIconStyle
Hidden=#OptionHidden32#

[MeterIcon42]
Meter=Image
ImageName=#PreviewPathPrefix##Option42#
MeterStyle=MeterIconStyle
Hidden=#OptionHidden42#

[MeterIcon52]
Meter=Image
ImageName=#PreviewPathPrefix##Option52#
MeterStyle=MeterIconStyle
Hidden=#OptionHidden52#

[MeterIcon62]
Meter=Image
ImageName=#PreviewPathPrefix##Option62#
MeterStyle=MeterIconStyle
Hidden=#OptionHidden62#

[MeterIcon72]
Meter=Image
ImageName=#PreviewPathPrefix##Option72#
MeterStyle=MeterIconStyle
Hidden=#OptionHidden72#

[MeterIcon82]
Meter=Image
ImageName=#PreviewPathPrefix##Option82#
MeterStyle=MeterIconStyle
Hidden=#OptionHidden82#

[MeterIcon92]
Meter=Image
ImageName=#PreviewPathPrefix##Option92#
MeterStyle=MeterIconStyle
Hidden=#OptionHidden92#



[MeterOptionTitleStyle]
X=0r
Y=((((#OptionGapY#))*#Scale#))r
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(12*#Scale#)
AntiAlias=1
DynamicVariables=1
Group=Contents


[MeterOptionTitle11]
Meter=String
Text=[#[#Category]_[#OptionName11]_Text.0]
X=((#BeginX#+62)*#Scale#)
Y=((#BeginY#+80+#OptionH#-56-#OptionTitleOffset11#*10)*#Scale#)
MeterStyle=MeterOptionTitleStyle
ToolTipText=#OptionTitleToolTipText11#
Hidden=#OptionHidden11#

[MeterOptionTitle21]
Meter=String
Y=((((#OptionGapY#+#OptionTitleOffset11#*10-#OptionTitleOffset21#*10))*#Scale#))r
Text=[#[#Category]_[#OptionName21]_Text.0]
MeterStyle=MeterOptionTitleStyle
ToolTipText=#OptionTitleToolTipText21#
Hidden=#OptionHidden21#

[MeterOptionTitle31]
Meter=String
Y=((((#OptionGapY#+#OptionTitleOffset21#*10-#OptionTitleOffset31#*10))*#Scale#))r
Text=[#[#Category]_[#OptionName31]_Text.0]
MeterStyle=MeterOptionTitleStyle
ToolTipText=#OptionTitleToolTipText31#
Hidden=#OptionHidden31#

[MeterOptionTitle41]
Meter=String
Y=((((#OptionGapY#+#OptionTitleOffset31#*10-#OptionTitleOffset41#*10))*#Scale#))r
Text=[#[#Category]_[#OptionName41]_Text.0]
MeterStyle=MeterOptionTitleStyle
ToolTipText=#OptionTitleToolTipText41#
Hidden=#OptionHidden41#

[MeterOptionTitle51]
Meter=String
Y=((((#OptionGapY#+#OptionTitleOffset41#*10-#OptionTitleOffset51#*10))*#Scale#))r
Text=[#[#Category]_[#OptionName51]_Text.0]
MeterStyle=MeterOptionTitleStyle
ToolTipText=#OptionTitleToolTipText51#
Hidden=#OptionHidden51#

[MeterOptionTitle61]
Meter=String
Y=((((#OptionGapY#+#OptionTitleOffset51#*10-#OptionTitleOffset61#*10))*#Scale#))r
Text=[#[#Category]_[#OptionName61]_Text.0]
MeterStyle=MeterOptionTitleStyle
ToolTipText=#OptionTitleToolTipText61#
Hidden=#OptionHidden61#

[MeterOptionTitle71]
Meter=String
Y=((((#OptionGapY#+#OptionTitleOffset61#*10-#OptionTitleOffset71#*10))*#Scale#))r
Text=[#[#Category]_[#OptionName71]_Text.0]
MeterStyle=MeterOptionTitleStyle
ToolTipText=#OptionTitleToolTipText71#
Hidden=#OptionHidden71#

[MeterOptionTitle81]
Meter=String
Y=((((#OptionGapY#+#OptionTitleOffset71#*10-#OptionTitleOffset81#*10))*#Scale#))r
Text=[#[#Category]_[#OptionName81]_Text.0]
MeterStyle=MeterOptionTitleStyle
ToolTipText=#OptionTitleToolTipText81#
Hidden=#OptionHidden81#

[MeterOptionTitle91]
Meter=String
Y=((((#OptionGapY#+#OptionTitleOffset81#*10-#OptionTitleOffset91#*10))*#Scale#))r
Text=[#[#Category]_[#OptionName91]_Text.0]
MeterStyle=MeterOptionTitleStyle
ToolTipText=#OptionTitleToolTipText91#
Hidden=#OptionHidden91#



[MeterOptionTitle12]
Meter=String
Text=[#[#Category]_[#OptionName12]_Text.0]
X=((#BeginX#+62+#OptionGapX#)*#Scale#)
Y=((#BeginY#+80+#OptionH#-56-#OptionTitleOffset12#*10)*#Scale#)
MeterStyle=MeterOptionTitleStyle
ToolTipText=#OptionTitleToolTipText12#
Hidden=#OptionHidden12#

[MeterOptionTitle22]
Meter=String
Y=((((#OptionGapY#+#OptionTitleOffset12#*10-#OptionTitleOffset22#*10))*#Scale#))r
Text=[#[#Category]_[#OptionName22]_Text.0]
MeterStyle=MeterOptionTitleStyle
ToolTipText=#OptionTitleToolTipText22#
Hidden=#OptionHidden22#

[MeterOptionTitle32]
Meter=String
Y=((((#OptionGapY#+#OptionTitleOffset22#*10-#OptionTitleOffset32#*10))*#Scale#))r
Text=[#[#Category]_[#OptionName32]_Text.0]
MeterStyle=MeterOptionTitleStyle
ToolTipText=#OptionTitleToolTipText32#
Hidden=#OptionHidden32#

[MeterOptionTitle42]
Meter=String
Y=((((#OptionGapY#+#OptionTitleOffset32#*10-#OptionTitleOffset42#*10))*#Scale#))r
Text=[#[#Category]_[#OptionName42]_Text.0]
MeterStyle=MeterOptionTitleStyle
ToolTipText=#OptionTitleToolTipText42#
Hidden=#OptionHidden42#

[MeterOptionTitle52]
Meter=String
Y=((((#OptionGapY#+#OptionTitleOffset42#*10-#OptionTitleOffset52#*10))*#Scale#))r
Text=[#[#Category]_[#OptionName52]_Text.0]
MeterStyle=MeterOptionTitleStyle
ToolTipText=#OptionTitleToolTipText52#
Hidden=#OptionHidden52#

[MeterOptionTitle62]
Meter=String
Y=((((#OptionGapY#+#OptionTitleOffset52#*10-#OptionTitleOffset62#*10))*#Scale#))r
Text=[#[#Category]_[#OptionName62]_Text.0]
MeterStyle=MeterOptionTitleStyle
ToolTipText=#OptionTitleToolTipText62#
Hidden=#OptionHidden62#

[MeterOptionTitle72]
Meter=String
Y=((((#OptionGapY#+#OptionTitleOffset62#*10-#OptionTitleOffset72#*10))*#Scale#))r
Text=[#[#Category]_[#OptionName72]_Text.0]
MeterStyle=MeterOptionTitleStyle
ToolTipText=#OptionTitleToolTipText72#
Hidden=#OptionHidden72#

[MeterOptionTitle82]
Meter=String
Y=((((#OptionGapY#+#OptionTitleOffset72#*10-#OptionTitleOffset82#*10))*#Scale#))r
Text=[#[#Category]_[#OptionName82]_Text.0]
MeterStyle=MeterOptionTitleStyle
ToolTipText=#OptionTitleToolTipText82#
Hidden=#OptionHidden82#

[MeterOptionTitle92]
Meter=String
Y=((((#OptionGapY#+#OptionTitleOffset82#*10-#OptionTitleOffset92#*10))*#Scale#))r
Text=[#[#Category]_[#OptionName92]_Text.0]
MeterStyle=MeterOptionTitleStyle
ToolTipText=#OptionTitleToolTipText92#
Hidden=#OptionHidden92#



[MeterOptionTextStyle]
X=0r
Y=((((#OptionGapY#))*#Scale#))r
FontFace=#FontFace_General#
FontColor=#FontColor_General#,128
FontSize=(10*#Scale#)
AntiAlias=1
DynamicVariables=1
Group=Contents


[MeterOptionText11]
Meter=String
Text=[#[#Category]_[#OptionName11]_Text._]
X=((#BeginX#+62)*#Scale#)
Y=((#BeginY#+80+#OptionH#-32-#OptionTitleOffset11#*10)*#Scale#)
MeterStyle=MeterOptionTextStyle
Hidden=#OptionHidden11#

[MeterOptionText21]
Meter=String
Y=((((#OptionGapY#+#OptionTitleOffset11#*10-#OptionTitleOffset21#*10))*#Scale#))r
Text=[#[#Category]_[#OptionName21]_Text._]
MeterStyle=MeterOptionTextStyle
Hidden=#OptionHidden21#

[MeterOptionText31]
Meter=String
Y=((((#OptionGapY#+#OptionTitleOffset21#*10-#OptionTitleOffset31#*10))*#Scale#))r
Text=[#[#Category]_[#OptionName31]_Text._]
MeterStyle=MeterOptionTextStyle
Hidden=#OptionHidden31#

[MeterOptionText41]
Meter=String
Y=((((#OptionGapY#+#OptionTitleOffset31#*10-#OptionTitleOffset41#*10))*#Scale#))r
Text=[#[#Category]_[#OptionName41]_Text._]
MeterStyle=MeterOptionTextStyle
Hidden=#OptionHidden41#

[MeterOptionText51]
Meter=String
Y=((((#OptionGapY#+#OptionTitleOffset41#*10-#OptionTitleOffset51#*10))*#Scale#))r
Text=[#[#Category]_[#OptionName51]_Text._]
MeterStyle=MeterOptionTextStyle
Hidden=#OptionHidden51#

[MeterOptionText61]
Meter=String
Y=((((#OptionGapY#+#OptionTitleOffset51#*10-#OptionTitleOffset61#*10))*#Scale#))r
Text=[#[#Category]_[#OptionName61]_Text._]
MeterStyle=MeterOptionTextStyle
Hidden=#OptionHidden61#

[MeterOptionText71]
Meter=String
Y=((((#OptionGapY#+#OptionTitleOffset61#*10-#OptionTitleOffset71#*10))*#Scale#))r
Y=((((#OptionGapY#-10))*#Scale#))r
Text=[#[#Category]_[#OptionName71]_Text._]
MeterStyle=MeterOptionTextStyle
Hidden=#OptionHidden71#

[MeterOptionText81]
Meter=String
Y=((((#OptionGapY#+#OptionTitleOffset71#*10-#OptionTitleOffset81#*10))*#Scale#))r
Y=((((#OptionGapY#+10))*#Scale#))r
Text=[#[#Category]_[#OptionName81]_Text._]
MeterStyle=MeterOptionTextStyle
Hidden=#OptionHidden81#

[MeterOptionText91]
Meter=String
Y=((((#OptionGapY#+#OptionTitleOffset81#*10-#OptionTitleOffset91#*10))*#Scale#))r
Text=[#[#Category]_[#OptionName91]_Text._]
MeterStyle=MeterOptionTextStyle
Hidden=#OptionHidden91#



[MeterOptionText12]
Meter=String
Text=[#[#Category]_[#OptionName12]_Text._]
X=((#BeginX#+62+#OptionGapX#)*#Scale#)
Y=((#BeginY#+80+#OptionH#-32-#OptionTitleOffset12#*10)*#Scale#)
MeterStyle=MeterOptionTextStyle
Hidden=#OptionHidden12#

[MeterOptionText22]
Meter=String
Y=((((#OptionGapY#+#OptionTitleOffset12#*10-#OptionTitleOffset22#*10))*#Scale#))r
Text=[#[#Category]_[#OptionName22]_Text._]
MeterStyle=MeterOptionTextStyle
Hidden=#OptionHidden22#

[MeterOptionText32]
Meter=String
Y=((((#OptionGapY#+#OptionTitleOffset22#*10-#OptionTitleOffset32#*10))*#Scale#))r
Text=[#[#Category]_[#OptionName32]_Text._]
MeterStyle=MeterOptionTextStyle
Hidden=#OptionHidden32#

[MeterOptionText42]
Meter=String
Y=((((#OptionGapY#+#OptionTitleOffset32#*10-#OptionTitleOffset42#*10))*#Scale#))r
Text=[#[#Category]_[#OptionName42]_Text._]
MeterStyle=MeterOptionTextStyle
Hidden=#OptionHidden42#

[MeterOptionText52]
Meter=String
Y=((((#OptionGapY#+#OptionTitleOffset42#*10-#OptionTitleOffset52#*10))*#Scale#))r
Text=[#[#Category]_[#OptionName52]_Text._]
MeterStyle=MeterOptionTextStyle
Hidden=#OptionHidden52#

[MeterOptionText62]
Meter=String
Y=((((#OptionGapY#+#OptionTitleOffset52#*10-#OptionTitleOffset62#*10))*#Scale#))r
Text=[#[#Category]_[#OptionName62]_Text._]
MeterStyle=MeterOptionTextStyle
Hidden=#OptionHidden62#

[MeterOptionText72]
Meter=String
Y=((((#OptionGapY#+#OptionTitleOffset62#*10-#OptionTitleOffset72#*10))*#Scale#))r
Text=[#[#Category]_[#OptionName72]_Text._]
MeterStyle=MeterOptionTextStyle
Hidden=#OptionHidden72#

[MeterOptionText82]
Meter=String
Y=((((#OptionGapY#+#OptionTitleOffset72#*10-#OptionTitleOffset82#*10))*#Scale#))r
Y=((((#OptionGapY#-10))*#Scale#))r
Text=[#[#Category]_[#OptionName82]_Text._]
MeterStyle=MeterOptionTextStyle
Hidden=#OptionHidden82#

[MeterOptionText92]
Meter=String
Y=((((#OptionGapY#+#OptionTitleOffset82#*10-#OptionTitleOffset92#*10))*#Scale#))r
Y=((((#OptionGapY#+10))*#Scale#))r
Text=[#[#Category]_[#OptionName92]_Text._]
MeterStyle=MeterOptionTextStyle
Hidden=#OptionHidden92#