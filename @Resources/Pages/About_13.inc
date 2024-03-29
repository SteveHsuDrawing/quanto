[MeterTitle]
Meter=String
Text=#T.About# - #T.Disclaimer#
MeterStyle=FontStyle_Title
DynamicVariables=1

[MeterTitleButtonZone]
Meter=Shape
MeterStyle=MeterTitleButtonZoneStyle

[MeterTitleButton]
Meter=Image
MeterStyle=MeterTitleButtonStyle

[MeterTitleButtonSelected]
Meter=Shape
MeterStyle=MeterTitleButtonSelectedStyle

[Variables]
Fix=1
BeginX=384
BeginY=108
TitleButtonAction=[!WriteKeyValue Variables SubPage 11 "#ROOTCONFIGPATH#Extras\Settings\16x14.ini"]
TitleButtonImageName=#@#Bitmap\Back Button.png

Gap=(84*#Scale#)
GapUnscaled=84
Gap2=(140*#Scale#)

Text0=Quanto is inspired by Fluent Design System and Windows 11 user interface. The project is not using any code from Windows 11. The graphics were created from scratch to resemble the ones of Windows 11. Any resemblances to existing or future Microsoft(R) products are for customization purposes only, but also with an intention to raise awareness of the mentioned products within the community.#CRLF##CRLF#Quanto is a non-profit product that is free forever and does not coerce users to pay. Any donation is voluntary.#CRLF##CRLF#Quanto uses OpenWeatherMap to provide weather services. This service is free by default. If you need to use your own API key, make sure you're using the same plan. We are not responsible for the use of other plans, even paid plans, that cause the service to not be used properly. We don't collect location information from users, which is only used to provide local weather services.#CRLF##CRLF#Quanto is an Open Source Customization Project available on GitHub.#CRLF##CRLF#Quanto provides Add-ons functionality. We cannot guarantee the security of Add-on because there are many sources of Add-on. Add-on makers are requested to follow the relevant specifications.#CRLF##CRLF#Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License.#CRLF##CRLF#THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
Text1=Quanto 从 Fluent Design System 以及 Windows 11 用户界面受到启发。本项目不使用 Windows 11 的任何一处代码。图像皆为临摹 Windows 11 的相关图像的。与现有或未来的 Microsoft (R) 产品的任何相似之处仅用于定制目的，但也旨在提高社区内对上述产品的认识。#CRLF##CRLF#Quanto 是一个非营利性产品，永远免费且不会强迫用户付费。任何捐赠都是自愿的。#CRLF##CRLF#Quanto 使用 OpenWeatherMap 提供天气服务。默认情况下，此服务是免费的。如果您需要使用自己的 API 密钥，请确保您使用的是相同的计划。对于使用其他计划，甚至是付费计划，会导致服务无法正确使用的，我们概不负责。我们不会从用户那里收集位置信息，这些信息仅用于提供本地天气服务。#CRLF##CRLF#Quanto 是一个开源定制项目，可在 GitHub 上找到。#CRLF##CRLF#Quanto 提供 Add-ons 功能。我们不能保证 Add-on 的安全性，因为 Add-on 的来源繁多。请 Add-on 制作者遵循相关规范。#CRLF##CRLF#本作品遵循知识共享署名-非商业性使用-相同方式共享 4.0 国际许可。#CRLF##CRLF#THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

Language_=0

T.Language__0=#en-us#
T.Language__1=#zh-cn#

[Back]
Meter=Shape
X=(#BeginX#*#Scale#)
Y=(#BeginY#*#Scale#)
Shape=Rectangle 0,0,(605*#Scale#),([Text:H]+32*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_OptionAlpha#
Shape2=Rectangle 0,0,(605*#Scale#),([Text:H]+32*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape3=Rectangle (1*#Scale#),(1*#Scale#),((605-2)*#Scale#),([Text:H]+(32-2)*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#)
Shape4=Combine Shape2 | Exclude Shape3
DynamicVariables=1

[Text]
Meter=String
Text=[#Text[#Language_]]
MeterStyle=FontStyle_General
X=((#BeginX#+16)*#Scale#)
Y=((#BeginY#+16)*#Scale#)
W=((605-32)*#Scale#)
FontSize=((11+1*#Language_#)*#Scale#)
ClipString=2

[Option1]
Meter=String
Text=Quanto on GitHub
MeterStyle=FontStyle_General
FontColor=#ThemeColor_General#
X=([Back:X])
Y=([Back:YH]+16*#Scale#)
InlinePattern=.*
InlineSetting=None
W=(605*#Scale#)
ClipString=2
LeftMouseUpAction=[https://github.com/SteveHsuDrawing/quanto]
MouseActionCursor=1
MouseActionCursorName=HAND
MouseOverAction=[!SetOption #CURRENTSECTION# InlineSetting "Underline"][!Update][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# InlineSetting "None"][!Update][!Redraw]

[Option2]
Meter=String
Text=Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License
MeterStyle=FontStyle_General
FontColor=#ThemeColor_General#
X=0r
Y=(8*#Scale#)R
InlinePattern=.*
InlineSetting=None
W=(605*#Scale#)
ClipString=2
LeftMouseUpAction=[https://creativecommons.org/licenses/by-nc-sa/4.0/]
MouseActionCursor=1
MouseActionCursorName=HAND
MouseOverAction=[!SetOption #CURRENTSECTION# InlineSetting "Underline"][!Update][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# InlineSetting "None"][!Update][!Redraw]

[CMB]
Meter=Shape
X=((#BeginX#+605-200)*#Scale#)
Y=((#BeginY#-40-12)*#Scale#)
Shape=Rectangle 0,0,(200*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_OptionAlpha#
Shape2=Rectangle 0,0,(200*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape3=Rectangle (1*#Scale#),(1*#Scale#),(198*#Scale#),(38*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape4=Combine Shape2 | Exclude Shape3
DynamicVariables=1
MouseOverAction=[!ShowMeter H#CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!HideMeter H#CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!ShowMeterGroup G#CURRENTSECTION#][!Redraw]
[HCMB]
Meter=Shape
X=0r
Y=0r
Shape=Rectangle 0,0,(200*#Scale#),(40*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BackgroundSelectedLight#
DynamicVariables=1
Hidden=1
[CMBT]
Meter=String
Text=[#T.Language__[#Language_]]
W=(155*#Scale#)
ClipString=1
X=([CMB:X]+8*#Scale#)
Y=([CMB:Y]+20*#Scale#)
MeterStyle=FontStyle_General
StringAlign=LeftCenter
[CMBI]
Meter=Image
ImageName=#@#Bitmap\Arrow Down
X=([CMB:X]+(200-20-9)*#Scale#)
Y=([CMB:Y]+(20-9)*#Scale#)
W=(18*#Scale#)
H=(18*#Scale#)
DynamicVariables=1
ImageTint=#FontColor_General#

[SCMT]
StringAlign=LeftCenter
FontFace=#FontFace_General#
FontColor=#FontColor_General#
FontSize=(12*#Scale#)
DynamicVariables=1
AntiAlias=1
W=((200-16-8)*#Scale#)
ClipString=1
[CMTB]
X=(16*#Scale#)r
Y=(18*#Scale#)r
[NextT]
X=0r
Y=(40*#Scale#)r
[SCMM]
Shape=Rectangle (8*#Scale#),(10*#Scale#),(3*#Scale#),((40-10*2)*#Scale#),(1.5*#Scale#),(1.5*#Scale#) | StrokeWidth 0 | Fill Color #ThemeColor_General#
DynamicVariables=1

[GCMB]
Group=GCMB
Hidden=1
[CMBS.00]
Meter=Shape
X=[CMB:X]
Y=([CMB:Y]-40*#Scale#*[#Language_])
Shape=Rectangle 0,0,(200*#Scale#),(40*2*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_TextInputer#
Shape2=Rectangle 0,0,(200*#Scale#),(40*2*#Scale#),(4*#Scale#*#Arched#),(4*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape3=Rectangle (1*#Scale#),(1*#Scale#),(198*#Scale#),((40*2-2)*#Scale#),(3*#Scale#*#Arched#),(3*#Scale#*#Arched#) | StrokeWidth 0 | Fill Color #ThemeColor_BarBorder#
Shape4=Combine Shape2 | Exclude Shape3
DynamicVariables=1
MeterStyle=GCMB
MouseLeaveAction=[!HideMeterGroup GCMB][!Redraw]
[CMBS.01]
Meter=String
Text=#en-us#
MeterStyle=SCMT|CMTB|GCMB
LeftMouseUpAction=[!WriteKeyValue Variables Language_ 0 "#@#Pages\About_13.inc"][!Refresh]
[CMBS.02]
Meter=String
Text=#zh-cn#
MeterStyle=SCMT|NextT|GCMB
LeftMouseUpAction=[!WriteKeyValue Variables Language_ 1 "#@#Pages\About_13.inc"][!Refresh]
[CMBS.M]
Meter=Shape
X=[CMB:X]
Y=[CMB:Y]
MeterStyle=SCMM|GCMB
