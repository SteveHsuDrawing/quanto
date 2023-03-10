[Variables]

; 「RSSMain」定義 RSS 源；「RSSName」定義顯示的主標題。
; MSN RSS Feeds   - https://rss.msn.com/#locale#/0
; 澎湃新闻        - https://feedx.fun/rss/thepaper.xml
; 人民网 国内新闻 - http://www.people.com.cn/rss/politics.xml
; BBC News World  - http://feeds.bbci.co.uk/news/world/rss.xml
; CNN News World  - http://rss.cnn.com/rss/edition_world.rss
RSSMain=#P.RSS.1#
RSSName=#P.RSS.2#

; 「CodePage」定義頁碼。
; 通常無必要進行設定，除非標題出現了亂碼。
; 437   - 擴充 ANSI 字元集
; 936   - 簡體中文 (GBK)
; 950   - 繁體中文 (Big5)
; 65001 - UTF-8 Unicode
CodePage=65001

; 「Gap」定義自動重整間隔。單位為秒。
; 當其值為「-1」時，則不會進行自動重整。
Gap=3600
