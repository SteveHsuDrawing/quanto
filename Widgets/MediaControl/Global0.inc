[Variables]
00=Light
01=Dark
10=Dark
11=Light

Mode_0.Action_1=[!ShowMeterGroup Bar]
Mode_0.Action_2=[!HideMeterGroup Bar]
Mode_1.Action_1=[!ShowMeterGroup Bar]
Mode_1.Action_2=[!HideMeterGroup Bar]

T.PlayerName.0=AIMP
T.PlayerName.1=CAD
T.PlayerName.2=iTunes
T.PlayerName.3=Spotify
T.PlayerName.4=Winamp
T.PlayerName.5=WLM
T.PlayerName.6=WMP

PlayerName_=[#T.PlayerName.[#PlayerName]]

T.PlayerName.0_Execution=aimp.exe
T.PlayerName.1_Execution=
T.PlayerName.2_Execution=itunes.exe
T.PlayerName.3_Execution=spotify.exe
T.PlayerName.4_Execution=winamp.exe
T.PlayerName.5_Execution=
T.PlayerName.6_Execution=wmplayer.exe


[M]
Measure=String
String=[#T.PlayerName.[#PlayerName]]
DynamicVariables=1

; ======================================== Plugin 0 ========================================

[MeasurePlayer0]
Measure=NowPlaying
PlayerName=#PlayerName_#
PlayerType=TITLE
PlayerPatH=
DisableLeadingZero=0
Substitute="":"-"
DynamicVariables=1
Disabled=(#Mode#=0?0:1)

[MeasurePlayerState0]
Measure=NowPlaying
PlayerName=#PlayerName_#
PlayerType=STATE
Substitute="0":"Play","1":"Pause","2":"Play"
DynamicVariables=1
Disabled=(#Mode#=0?0:1)

[MeasurePlayerArtist0]
Measure=NowPlaying
PlayerName=#PlayerName_#
PlayerType=ARTIST
Substitute="":"-"
DynamicVariables=1
Disabled=(#Mode#=0?0:1)

[MeasurePlayerAlbum0]
Measure=NowPlaying
PlayerName=#PlayerName_#
PlayerType=ALBUM
Substitute="":"-"
DynamicVariables=1
Disabled=(#Mode#=0?0:1)

[MeasurePlayerCover0]
Measure=NowPlaying
PlayerName=#PlayerName_#
PlayerType=COVER
DynamicVariables=1
Disabled=(#Mode#=0?0:1)

[MeasurePlayerDuration0]
Measure=NowPlaying
PlayerName=#PlayerName_#
PlayerType=Duration
DynamicVariables=1
Disabled=(#Mode#=0?0:1)

[MeasurePlayerPosition0]
Measure=NowPlaying
PlayerName=#PlayerName_#
PlayerType=Position
DynamicVariables=1
Disabled=(#Mode#=0?0:1)

[MeasurePlayerLyrics0]
Measure=NowPlaying
PlayerName=#PlayerName_#
PlayerType=Lyrics
DynamicVariables=1
Substitute="":"[MeasurePlayerArtist[#Mode]] - [MeasurePlayer[#Mode]]","- - -":"-"
Disabled=(#Mode#=0?0:1)

[MeasurePlayerRepeat0]
Measure=NowPlaying
PlayerName=#PlayerName_#
PlayerType=Repeat
DynamicVariables=1
Disabled=(#Mode#=0?0:1)

[MeasurePlayerShuffle0]
Measure=NowPlaying
PlayerName=#PlayerName_#
PlayerType=Shuffle
DynamicVariables=1
Disabled=(#Mode#=0?0:1)

[MeasurePlayerRating0]
Measure=NowPlaying
PlayerName=#PlayerName_#
PlayerType=Rating
DynamicVariables=1
Disabled=(#Mode#=0?0:1)

[MeasureCalc]
Measure=Calc
Formula=MeasurePlayerPosition[#Mode]/MeasurePlayerDuration[#Mode]
DynamicVariables=1

[ChameleonAA]
Measure=Plugin
Plugin=Chameleon
DynamicVariables=1
Type=File
Format=Dec
Path=[MeasurePlayerCover[#Mode]]
Paused=(1-#Colored#)
[caaBG1]
Measure=Plugin
Plugin=Chameleon
Parent=ChameleonAA
Color=[#[&mDM]0]1
Format=Dec
Substitute="255,255,255":"#ThemeColor_BackgroundNoAlpha#","0,0,0":"#ThemeColor_BackgroundNoAlpha#","":"#ThemeColor_BackgroundNoAlpha#"
DynamicVariables=1
Paused=(1-#Colored#)
[caaFG1]
Measure=Plugin
Plugin=Chameleon
Parent=ChameleonAA
Color=[#[&mDM]1]1
Format=Dec
Substitute="255,255,255":"#FontColor_General#","0,0,0":"#FontColor_General#","":"#FontColor_General#"
DynamicVariables=1
Paused=(1-#Colored#)
[caaFG2]
Measure=Plugin
Plugin=Chameleon
Parent=ChameleonAA
Color=[#[&mDM]1]2
Format=Dec
Substitute="255,255,255":"#ThemeColor_General#","0,0,0":"#ThemeColor_General#","":"#ThemeColor_General#"
DynamicVariables=1
Paused=(1-#Colored#)