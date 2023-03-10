[Rainmeter]
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

[Variables]
HideDebug=1
get=#P.Widgets_Weather.1#(.*)",.*"icon":(.*),.*"tempHi":(.*),.*"tempLo":(.*),.*
SubstituteIcons="101":"SunnyDay","102":"ClearNight","10":"FreezingRain","11":"FreezingRain","12":"HazeSmoke","13":"LightRainVThree","14":"ModerateRain","15":"HeavySnow","16":"HailDay","17":"LightRainShowerDay","18":"Fog","19":"LightRainVThree","20":"LightSnow","21":"Fog","22":"ModerateRain","23":"RainShowersDay","24":"RainSnow","25":"HeavySnow","26":"SnowShowersDay","27":"Thunderstorms","28":"ClearNight","29":"MostlyClearNight","30":"PartlyCloudyNight","31":"MostlyCloudy","32":"Cloudy","33":"BlowingHail","34":"BlowingSnow","35":"LightRainVThree","36":"Fog","37":"FreezingRain","38":"FreezingRain","39":"HazeSmokeNight","40":"LightRainVThree","41":"ModerateRain","42":"HeavySnow","43":"HailNight","44":"LightRainShowerNight","45":"Fog","46":"LightRainVThree","47":"LightSnow","48":"Fog","49":"ModerateRain","50":"RainShowersNight","51":"RainSnow","52":"HeavySnow","53":"SnowShowersDay","54":"Thunderstorms","57":"BlowingSnow","58":"BlowingSnow","59":"BlowingSnow","60":"BlowingSnow","61":"BlowingHail","62":"BlowingHail","63":"Fog","64":"Fog","65":"HailDay","66":"HailNight","67":"Thunderstorms","68":"Thunderstorms","69":"FreezingRain","70":"FreezingRain","71":"FreezingRain","72":"FreezingRain","73":"HailDay","74":"HailNight","75":"RainSnow","76":"RainSnow","77":"RainSnowDay","78":"RainSnowShowersNight","79":"RainShowersDay","80":"RainShowersNight","81":"SnowShowersDay","82":"SnowShowersNight","83":"RainSnowDay","84":"RainSnowShowersNight","85":"RainSnow","86":"RainSnow","87":"BlowingHail","88":"BlowingHail","89":"HazeSmoke","90":"HazeSmokeNight","91":"Windy","92":"Windy","93":"BlowingHail","94":"BlowingHail","95":"BlowingHail","96":"BlowingHail","1":"SunnyDay","2":"MostlySunnyDay","3":"PartlyCloudyDay","4":"MostlyCloudy","5":"Cloudy","6":"BlowingHail","7":"BlowingSnow","8":"LightRainVThree","9":"Fog"
SubstituteText=".0":""
appId=9e21380c-ff19-4c78-b4ea-19558e93a5d3
apiKey=j5i4gDqHL6nGYwx5wi5kRhXjtf2c5qgFX9fzfk0TOo
ocid=msftweather
wrapOData=false

;============================= Measures =============================

[Counter]
Measure=Calc
Formula=Counter+1
IfAboveValue=#Gap#
IfAboveAction=[!Refresh]

[Main1]
Measure=WebParser
URL=https://assets.#msn#/service/weather/overview?lat=#Latitude#&lon=#Longitude#&locale=#languageCode#-#countryCode#&units=#Units#&appId=#appId#&apiKey=#apiKey#&ocid=#ocid#&wrapOData=#wrapOData#
;URL=https://assets.#msn#/service/weather/overview?latLongList=#Latitude#,#Longitude#&locale=#languageCode#-#countryCode#&units=#Units#&appId=#appId#&apiKey=#apiKey#&ocid=#ocid#&wrapOData=#wrapOData#
RegExp=(?siU)"cap":"(.*)",.*"icon":(.*),.*"temp":(.*),.*#get##get##get##get#"name":"(.*)",.*"location":{"Name":"(.*)",.*
OnConnectErrorAction=[!SetOption MeterTipTitle Text "#T.Connection_failed#"][!SetOption MeterTipText1 Text "#S.Global.6#"]
OnRegExpErrorAction=[!SetOption MeterTipTitle Text "#T.Read_failed#"][!SetOption MeterTipText1 Text "#S.Widgets_Weather.2#"]
FinishAction=[!HideMeterGroup Tipper][!ShowMeterGroup Main]
;Debug=2

[Item0101]
Measure=WebParser
URL=[Main1]
StringIndex=1

[Item0102]
Measure=WebParser
URL=[Main1]
StringIndex=2
Substitute="":"NA","#SubstituteIcons#"

[Item0103]
Measure=WebParser
URL=[Main1]
StringIndex=3
Substitute=#SubstituteText#

[Item0104]
Measure=WebParser
URL=[Main1]
StringIndex=4

[Item0105]
Measure=WebParser
URL=[Main1]
StringIndex=5
Substitute="":"NA","#SubstituteIcons#"

[Item0106]
Measure=WebParser
URL=[Main1]
StringIndex=6
Substitute=#SubstituteText#

[Item0107]
Measure=WebParser
URL=[Main1]
StringIndex=7
Substitute=#SubstituteText#

[Item0201]
Measure=WebParser
URL=[Main1]
StringIndex=8

[Item0202]
Measure=WebParser
URL=[Main1]
StringIndex=9
Substitute="":"NA","#SubstituteIcons#"

[Item0203]
Measure=WebParser
URL=[Main1]
StringIndex=10
Substitute=#SubstituteText#

[Item0204]
Measure=WebParser
URL=[Main1]
StringIndex=11
Substitute=#SubstituteText#

[Item0301]
Measure=WebParser
URL=[Main1]
StringIndex=12

[Item0302]
Measure=WebParser
URL=[Main1]
StringIndex=13
Substitute="":"NA","#SubstituteIcons#"

[Item0303]
Measure=WebParser
URL=[Main1]
StringIndex=14
Substitute=#SubstituteText#

[Item0304]
Measure=WebParser
URL=[Main1]
StringIndex=15
Substitute=#SubstituteText#

[Item0001]
Measure=WebParser
URL=[Main1]
StringIndex=21

[Item0002]
Measure=WebParser
URL=[Main1]
StringIndex=20
