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

; ======================================== Plugin 1 ========================================

[MeasurePlayer1]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Title
Substitute="":"-"
Disabled=(#Mode#=1?0:1)

[MeasurePlayerState1]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=State
Substitute="0":"Play","1":"Pause","2":"Play"
Disabled=(#Mode#=1?0:1)

[MeasurePlayerArtist1]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Artist
Substitute="":"-"
Disabled=(#Mode#=1?0:1)

[MeasurePlayerAlbum1]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Album
Substitute="":"-"
Disabled=(#Mode#=1?0:1)

[MeasurePlayerCover1]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Cover
Disabled=(#Mode#=1?0:1)

[MeasurePlayerDuration1]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Duration
DynamicVariables=1
Disabled=(#Mode#=1?0:1)

[MeasurePlayerPosition1]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Position
DynamicVariables=1
Disabled=(#Mode#=1?0:1)

[MeasurePlayerLyrics1]
Measure=String
String=[MeasurePlayerArtist[#Mode]] - [MeasurePlayer[#Mode]]
Substitute="- - -":"-"
Disabled=(#Mode#=1?0:1)

[MeasurePlayerRepeat1]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Repeat
DynamicVariables=1
Disabled=(#Mode#=1?0:1)

[MeasurePlayerShuffle1]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Shuffle
DynamicVariables=1
Disabled=(#Mode#=1?0:1)

[MeasurePlayerRating1]
Measure=Plugin
Plugin=WebNowPlaying
PlayerType=Rating
DynamicVariables=1
Disabled=(#Mode#=1?0:1)

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