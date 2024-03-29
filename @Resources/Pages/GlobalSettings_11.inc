[Variables]
@include=#@#Pages\GlobalSettings_Global.inc
Fix=0
BeginX=384
BeginY=108
TitleButtonAction=
TitleButtonImageName=

[MeterTitle]
Text=#T.Global_Settings#

[iP_ZO1]
Meter=Shape
MeterStyle=SZW|ZB
LeftMouseUpAction=[!WriteKeyValue Variables SubPage 12 "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!Refresh]
[iP_ZO2]
Meter=Shape
MeterStyle=SZW|Next
LeftMouseUpAction=[!WriteKeyValue Variables SubPage 13 "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!Refresh]
[iP_ZO3]
Meter=Shape
MeterStyle=SZW|Next
LeftMouseUpAction=[!WriteKeyValue Variables SubPage 14 "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!Refresh]
[iP_ZO4]
Meter=Shape
MeterStyle=SZW|Next
LeftMouseUpAction=[!WriteKeyValue Variables SubPage 15 "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"][!Refresh]

[iP_BO1]
Meter=Shape
MeterStyle=SBW|ZB
[iP_BO2]
Meter=Shape
MeterStyle=SBW|Next
[iP_BO3]
Meter=Shape
MeterStyle=SBW|Next
[iP_BO4]
Meter=Shape
MeterStyle=SBW|Next

[iP_I01]
Meter=Image
MeterStyle=SIiP|IB
ImageName=#@#Bitmap\Globe
[iP_I02]
Meter=Image
MeterStyle=SIiP|Next
ImageName=#@#Bitmap\Setting
[iP_I03]
Meter=Image
MeterStyle=SIiP|Next
ImageName=#@#Bitmap\Details
[iP_I04]
Meter=Image
MeterStyle=SIiP|Next
ImageName=#@#Bitmap\Experimental

[iP_T01]
Meter=String
MeterStyle=MeterOptionTextStyle|WT|TB
Text=#T.Region_Settings##CRLF##S.Widgets_Settings.27#
InlinePattern=#T.Region_Settings##CRLF#
InlinePattern2=#T.Region_Settings##CRLF#
W=(495*#Scale#)
[iP_T02]
Meter=String
MeterStyle=MeterOptionTextStyle|WT|Next
Text=#T.Gerneral_Settings##CRLF##S.Widgets_Settings.31#
InlinePattern=#T.Gerneral_Settings##CRLF#
InlinePattern2=#T.Gerneral_Settings##CRLF#
W=(495*#Scale#)
[iP_T03]
Meter=String
MeterStyle=MeterOptionTextStyle|WT|Next
Text=#T.Details_Settings##CRLF##S.Widgets_Settings.32#
InlinePattern=#T.Details_Settings##CRLF#
InlinePattern2=#T.Details_Settings##CRLF#
W=(495*#Scale#)
[iP_T04]
Meter=String
MeterStyle=MeterOptionTextStyle|WT|Next
Text=#T.Experimental_Settings##CRLF##S.Widgets_Settings.33#
InlinePattern=#T.Experimental_Settings##CRLF#
InlinePattern2=#T.Experimental_Settings##CRLF#
W=(495*#Scale#)

[iP_SI01]
Meter=Image
MeterStyle=SSIiP|SIBiP
ImageName=#@#Bitmap\Arrow Right
[iP_SI02]
Meter=Image
MeterStyle=SSIiP|Next
ImageName=#@#Bitmap\Arrow Right
[iP_SI03]
Meter=Image
MeterStyle=SSIiP|Next
ImageName=#@#Bitmap\Arrow Right
[iP_SI04]
Meter=Image
MeterStyle=SSIiP|Next
ImageName=#@#Bitmap\Arrow Right

[BSHiP_ZO1]
Meter=Shape
MeterStyle=SBHW|ZB
[BSHiP_ZO2]
Meter=Shape
MeterStyle=SBHW|Next
[BSHiP_ZO3]
Meter=Shape
MeterStyle=SBHW|Next
[BSHiP_ZO4]
Meter=Shape
MeterStyle=SBHW|Next