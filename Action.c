Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("blocklist", 
		"URL=https://edge.microsoft.com/abusiveadblocking/api/v1/blocklist", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("MC1=GUID=9375e771064549138c3efa73f780c396&HASH=9375&LV=202409&V=4&LU=1725727260526; DOMAIN=edge.microsoft.com");

	web_custom_request("msa", 
		"URL=https://edge.microsoft.com/identity/api/v3/msa", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"disable_features\":\"a74ddd5e,ffe318a4,6c715cfb,3f6a1a2,f2e2135f,f95e5542,322c815,37ad96bc,2eb6d46b,dee07e4,ae7a5dc7,6a07a97c,93277d03,11890ef,b9047d,7727e674,a9159a38,d54f5dd3,4e39dc0e,c2f48bc1,941793d0,cc2ca015,a586b516,e7926102\",\"enable_features\":\"1e558dd0,47c14b7d,ddfd6cd3,d8475dc5,8874268c,eb6bda0a,27e96171,63b1f3c1,a996022f,6c138508,52718e59,d86d814c,f2ce36eb,d20a5ccf,81f32c3b,ab447047,a20d9658,2681f34b,8da34187,789d387a,5ddbee2d,49d6422,df07f74,b2095c6b,1f196109,70bb6934,"
		"4a32ce34,f38fdee,6f47a20e,4054678b,84a2b72d,689b25df,ff2c204,8efabf29,30ed0546,2c4eca72,66aaf0d8,c9b1eff3,69bc2e54,508f3c74,a8111ab6,24b90b43,fc9ed8aa,39747e28,41c26479,75b1b341,1207cc22,18a22b0d,3891021f,2c975da3,2373949a,58daec30,c3ed0393,260e931,a3ef7cb5,2565ea03,a976f7f5,55a5f854,5cfd95dc,7407dec5,974a1f21,21714a50,95a29f90,177b250e,a49949fb,9e8c649c,5cbd3dcb,bf8cde40,66f69762,df9dd966,ee446086,4ab9326a,99e16ee6,ff424117,38abf2b3,45371e92,12b79225,bf158d94,bf77051e,5aa83d4f,cc83e0ed,2d011c6b,"
		"ccc9c8e7,cf6b7491,bf2f2855,818cc3e5,69a7ad06,fd9414a8,55b8f41b,304a50c6,4ff83a15,9fa4b7c7,6c603e1e,17fcb4b7,4d578363,f26b1d9f,e28a1926,f7a7d752,ace2c02,d7fe785b,7548b341,7aef631d,62fd93b7,f2462fc7,ac6af412,d29e7da8,1dcc6d79,792fbf1a,72ca7b98,d56ab6df,43d8ef41,757371f6,9f497c3b,951654f3,75888302,4debc634,a1c02b9b,8b8dd9d3,aa5e60d5,94108217,451171d4,3faf1b94,60985fe2,c10a1ee8,29fbe5ed,be978d29,f79249b3,eb2a0f5d,17648a7a,6911c10f,2b99039a,ddcca13f,2a8663c,d5c4bb55,b3e45843,18b5b133,97845dd5,3c59dfce,"
		"31261441,80effd9,282948aa,c71c529b,609df054,b05c236d,126803bb,8f5ff88b,3433f3f9,38b573fb,c428f1f3,514cd46b,6dd844b8,1ca2ef43,50cbb1f,33a7e900,a1d4ae4,3fd1441a,67815f60,8b16b1a4,3e1e1ad1,3061cce0,1b926024,839906b2,8b944d27,15a8d884,155368ce,33fbeda0,fe3476f3,9961d8da,d5427798,e3ce9af1,1d4568d,8fcfcba7,ffdec9de,7f504a60,135c9220,6a2e7c8d,d941e64f,b2327950,df85253c,391f0da9,2894fa9e,7ee22832,9c2a448f,5bc70013,cec791b2,394bc2e0,498b0a6,51e941e0\",\"filter\":{\"version\":\"129.0.2792.79\"}}", 
		LAST);

	web_custom_request("rewardsUserInfo", 
		"URL=https://www.bing.com/api/shopping/v1/savings/rewards/rewardsUserInfo", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"IncludePromotions\":false,\"anid\":\"F9FC10108F728B0560CFB28DFFFFFFFF\",\"channel\":\"\"}", 
		LAST);

	web_custom_request("3", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/129.0.0.0 Safari/537.36 Edg/129.0.0.0\",\"identity\":{\"user\":{\"locale\":\"en-GB\"},\"device\":{\"id\":null,\"customId\":\"0f4b3b0a-4187-4755-bf10-2b7d9addf0f6\",\"onlineIdTicket\":\"t=GwAWAd9tBAAUanPXNspPGlCQJmFge+TK6U86WWUOZgAAEBwPOASsiXkG3aU+/+j/JVPgADEgcvltHhECdbhDo8yQCCcz0Hne3MBamsMwL2mwVj8xmNzgLwC05pJcB5/xhqV51TNnsu7kxvo7VKWUfO9ZRHIxr2GhFerya6lkfP2i9m5qWCAY+Ie575MqUdZub4ASi+"
		"kG9E9OSp8rjx+LeBddUea0kNr0+OsAr/R/4MeFRtisIBdZJe89SnLvSJnUcuxvYGGAWAAPfSFwvdgcC+k3dHFtVYyVZ953RLSYojregT42kN2sg6sE+9KBobnJFVGZLfY1GGH+rB65YTLI8D8qJrt9S9btvwwTTNJCC1nucstbHgE=&p=\",\"family\":3,\"locale\":\"en-GB\",\"osVersion\":\"10.0.19045.5011.vb_release\",\"browser\":{\"internetExplorer\":\"9.11.19041.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-GB\",\"name\":\"\",\"version\":\"129.0.2792.79 (Official build) \"},\"client\":{\""
		"version\":\"281483724390400\",\"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}}},\"destination\":{\"uri\":\""
		"http://petstore.octoperf.com/\",\"ip\":null},\"type\":\"top\",\"forceServiceDetermination\":false,\"correlationId\":\"0effc031-af12-4092-8ad6-e1297d4f7096\",\"synchronous\":false}", 
		LAST);

	web_custom_request("rewardsUserInfo_2", 
		"URL=https://www.bing.com/api/shopping/v1/savings/rewards/rewardsUserInfo", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"IncludePromotions\":false,\"anid\":\"F9FC10108F728B0560CFB28DFFFFFFFF\",\"channel\":\"\"}", 
		LAST);

	web_add_cookie("ANON=; DOMAIN=www.bing.com");

	web_add_cookie("MUID=03EA0C298FBD6525243718DA8EBB642E; DOMAIN=www.bing.com");

	web_add_cookie("_RwBf=r=0&ilt=0&ihpd=0&ispd=0&rc=275&rb=275&gb=0&rg=0&pc=275&mtu=0&rbb=0.0&g=0&cid=&clo=0&v=1&l=2024-10-06T07:00:00.0000000Z&lft=0001-01-01T00:00:00.0000000&aof=0&ard=0001-01-01T00:00:00.0000000&rwdbt=1707244353&rwflt=1717760325&o=0&p=BINGCOPILOTWAITLIST&c=MR000T&t=1577&s=2023-03-28T12:12:07.3083062+00:00&ts=2024-10-06T19:35:52.9103076+00:00&rwred=0&wls=2&wlb=0&wle=0&ccp=2&cpt=0&lka=0&lkt=0&aad=0&TH=&mta=0&e="
		"RBlj30tJKuJbpewRH-a36z1LvS8Eix8LxFgiTaSxGmcDqY_RmGHv3vVLzGMfxn4lVjY2kYg81hPqBz7ymeMVCqeA5IjFrusRhGOC7DJSE6U&A=F9FC10108F728B0560CFB28DFFFFFFFF&rwaul2=0; DOMAIN=www.bing.com");

	web_url("ExpandedDomainsFilterGlobal.json", 
		"URL=https://www.bing.com/bloomfilterfiles/ExpandedDomainsFilterGlobal.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("3_2", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/129.0.0.0 Safari/537.36 Edg/129.0.0.0\",\"redirectChain\":[{\"uri\":\"http://petstore.octoperf.com/\",\"type\":0}],\"identity\":{\"user\":{\"locale\":\"en-GB\"},\"device\":{\"id\":null,\"customId\":\"39ae2f57-e843-4146-a99d-0c6fa6dabd37\",\"onlineIdTicket\":\"t=GwAWAd9tBAAUanPXNspPGlCQJmFge+TK6U86WWUOZgAAEBwPOASsiXkG3aU+/+j/JVPgADEgcvltHhECdbhDo8yQCCcz0Hne3MBamsMwL2mwVj8xmNzgLwC05pJcB5/"
		"xhqV51TNnsu7kxvo7VKWUfO9ZRHIxr2GhFerya6lkfP2i9m5qWCAY+Ie575MqUdZub4ASi+kG9E9OSp8rjx+LeBddUea0kNr0+OsAr/R/4MeFRtisIBdZJe89SnLvSJnUcuxvYGGAWAAPfSFwvdgcC+k3dHFtVYyVZ953RLSYojregT42kN2sg6sE+9KBobnJFVGZLfY1GGH+rB65YTLI8D8qJrt9S9btvwwTTNJCC1nucstbHgE=&p=\",\"family\":3,\"locale\":\"en-GB\",\"osVersion\":\"10.0.19045.5011.vb_release\",\"browser\":{\"internetExplorer\":\"9.11.19041.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-GB\",\"name\":"
		"\"\",\"version\":\"129.0.2792.79 (Official build) \"},\"client\":{\"version\":\"281483724390400\",\"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\""
		"enforcedByPolicy\":false,\"level\":\"warn\"}}},\"destination\":{\"uri\":\"https://petstore.octoperf.com/\",\"ip\":null},\"type\":\"top\",\"forceServiceDetermination\":false,\"correlationId\":\"f1d937d4-79e8-48c4-bd2f-3e78500ee241\",\"synchronous\":false}", 
		LAST);

	web_url("shoppingsettings", 
		"URL=https://www.bing.com/api/shopping/v1/user/shoppingsettings", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	web_url("crx", 
		"URL=https://clients2.google.com/service/update2/crx?os=win&arch=x64&os_arch=x86_64&nacl_arch=x86-64&prod=chromiumcrx&prodchannel=&prodversion=129.0.2792.79&lang=en-GB&acceptformat=crx3,puff&x=id%3Djmopofhkmbgdgakogbjcgfkblkdpglnj%26v%3D0.0.0.0%26installedby%3Dinternal%26uc", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("MC1=GUID=9375e771064549138c3efa73f780c396&HASH=9375&LV=202409&V=4&LU=1725727260526; DOMAIN=prod.rewardsplatform.microsoft.com");

	web_url("me", 
		"URL=https://prod.rewardsplatform.microsoft.com/dapi/me?channel=edge&options=Profile,Promotions,Rebates", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	web_url("petstore.octoperf.com", 
		"URL=http://petstore.octoperf.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://petstore.octoperf.com/css/jpetstore.css", "Referer=https://petstore.octoperf.com/", ENDITEM, 
		LAST);

	web_custom_request("BrowserExtension", 
		"URL=https://nleditor.osi.office.net/NLEditor/api/V1/BrowserExtension", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"AppId\":\"EditorBX_Online\",\"Browser\":\"edge-chromium\",\"BrowserVersion\":\"129.0.0\",\"ExtensionId\":\"1.2409.603\",\"LanguageUxId\":\"en-GB\",\"StoreId\":\"hokifickgkhplphjiodbggjmoafhignh\"}", 
		LAST);

	web_add_cookie("pglt-edgeChromium-dhp=163; DOMAIN=ntp.msn.com");

	web_add_cookie("pglt-edgeChromium-ntp=163; DOMAIN=ntp.msn.com");

	web_add_cookie("USRLOC=CLOC=LAT=25.53823356827798|LON=86.50678868935687|A=733.4464586120832|TS=241009220622|SRC=W&BID=MjQxMDEwMDMzNjEyXzRjNDJjYmYxODJmMjViY2Q1Y2MxZmY1YmU1YjZiYTk0YmQ4YzFlZmJiNmRkNzNiNTE1ZTY2NjM3NDlkZmIwNTE=; DOMAIN=ntp.msn.com");

	web_add_cookie("MUIDB=0B920AC876FF61D831811E3B77176083; DOMAIN=ntp.msn.com");

	web_add_cookie("_EDGE_V=1; DOMAIN=ntp.msn.com");

	web_add_cookie("APP_ANON=A=F9FC10108F728B0560CFB28DFFFFFFFF; DOMAIN=ntp.msn.com");

	web_add_cookie("aace=%7b%22child%22%3a0%7d; DOMAIN=ntp.msn.com");

	web_add_cookie("els=%7b%22account_type%22%3a%22MSA%22%7d; DOMAIN=ntp.msn.com");

	web_add_cookie("MicrosoftApplicationsTelemetryDeviceId=a1947816-a3ab-4706-aa31-84b0363ae128; DOMAIN=ntp.msn.com");

	web_add_cookie("ntps={\"m\":\"en-in\"}; DOMAIN=ntp.msn.com");

	web_add_cookie("MUID=03EA0C298FBD6525243718DA8EBB642E; DOMAIN=ntp.msn.com");

	web_add_cookie("MSFPC=GUID=da2b9619bcaa445b8f95ea6f97bfe803&HASH=da2b&LV=202409&V=4&LU=1725728369893; DOMAIN=ntp.msn.com");

	web_add_cookie("msnup=; DOMAIN=ntp.msn.com");

	web_add_cookie("lt=t=EwBYA6AEAAAU+FEkrYVKODxcga16pzW/y5vRf68AATNleWYaH5YyBRxeF10hhS7wzrN6LXYZmthFTEkPfIGtL3N1UeTwhWpKqiFHN+0raiyHCiL/a93ExGaF1Yi+uvL2RTNtrxWLg+ZI9Et7RtFyCsTSwIRQsZC4QGvC1ErQwN8LKtrHmXFRLd10V4U1zm3YM2/VtFwyB3Y/+qeAxXmBECAGc8i3Ywce3Z3sHduUACVoP+JqfAhrzxheUhdPRN2J68zlr9hlAJ6yBGGV4ZEJ56DEaqnfNySi09MWNEWahjSHiX2lC4CjjjFAsXPwbq2WV3A3xaw1ekGk0KnQk7sYo7IciY0NLtjO3LkPoOZulZSEZgLoVlIronzIl/kzW6AQZgAAEM8TSozETnun0Vs7oqhcrawgApnTWecXAugrycochvwGDnvAu+g7hXfhkWtGybNsK3jkHsRYl+tyvQMdnConD7mn+"
		"H45PMTYU0SZcPcZBbOqWnTaqJe0j1FIg53PzldBDGhAKn2nXJpP4DmZ+gsfr0oeQvBOFdrY7F3ij0V/qcOh1StvNCuM/JCMUbnG+ysgspK/ZvDKxThFVbOpvGV6Oh/pA8NLZyoMBaGmoCjjuGswekZXm4HIU7Jls8YdAkpgzLIF+sXBifzIs4F47HhWtAop68g9H8lPQE8VJ3Lgu0o3tUn5FIn13GB4HIcgVmV6tfBe96JGkIeIfyxAthcW+BjZf6BEh8R7cKQsi7ExYKjM2iHQTtgI7v4WGBb41P302nam1bC/cMsb3f08ESudUYlNC9nl0XQJXmTqdwThs/OyDsR/5ggu1/U+/0QrnXZG4A/IaDFGpYk4DGhr6unPCf169O+r943TZI9+ykMt/Q0iUoBkPgJaQAX4wFmAiuuPaOk1DRCo6zp5rLZk3EFrHU2/YzyfYws8bhzuj+atLUjmZ5TXSfkeVdG6riDp7HrJpMRaekjzyb6fgS+"
		"3Wvbyo6W04blKVcy29AXqUZbthinqrAawzjCHvINghUMgrJ0Au9jkTPyN1S8aKrb8ccHGd5CMI4BSR/7UQKFcxD/fhgX8GEtE6+Ks0hXDawDCoiF8ifVdi8K5a7IzfbWuvk6Vywg8vhQH2Kqk7m8/4Nun/ha6BuBTAg==&p=; DOMAIN=ntp.msn.com");

	web_add_cookie("elt="
		"%7B%22access_token%22%3A%22eyJhbGciOiJSU0EtT0FFUCIsImVuYyI6IkExMjhDQkMtSFMyNTYiLCJ4NXQiOiJFY2tFODJLeld2ZGc1RFhkZ1c5LUUyU2ZYbGciLCJ6aXAiOiJERUYifQ.TBeP30gE4clJ1IV5VkPAA1UaFM5teMN9uuoKV7zVUYgVY1gV0lGpm8IFKZFAiNrkuHfCSmvHfLCwuoQpx7lSgLw9IFfzlHPp9qjeGvwVw-10VrNvHCvKmf5PidD2wEPsVC2AnELCzg0hCawLJ3V5rWwEwt3laE1AgTwXzGlbtl9hN-vEdhkgjxxlcp92lP2xyxMMdRcorr2RlKjUbmfyP-CSkTtl8RVrzjHhoY7XSSzm6LDy4IwHPtAwGgBikbP0fH-5wgrwxNKVmwb7RnPDgrV7ldLIwTePcL9kEPoSyt-Zhe5rPk02B2JSLXOwUpbY67_Al4XuodvAmhP5avYvVA.UffNKPAtbXtLJ"
		"8r4FVVGHA.4w_xj4azMEOvHvp48YXTyJ29r0Kt3LaWY0x4n1T4MVleJ86EZ8Kg8k_b-CBPKHqFhABZ8S21ykupR5tksQgn2Q2g3t5ewGzSnBn81JvqDzxItMvD5MHCbKTAGIQLHQtT0ZnqxBPn9pyWNRWsSb9IhjKZkrc435skw4S6Ti3MM-RpLW8s6hBCoj7IWrpaWiKE8YaN9bjwRr2m1GF2iLuWSX_aDFK72mfo2iT_850oc1mXNE2alQeC9aCNK1DHuuCGvS3Ob75Us19XmQU4crg2dY30Nl2sfLlrgmzEVaW-KaFZJuK_wM5ogitIJruJeklLdu9TBPcAbuYSDqJ434B8vWX_tqptWZ0FLE1_c0EaIwjz5RvGSsXNYqwJXGXeBhxKbHzblYY-PAypEjubWDvIiDPzaoI57HLwAlkPD8eRwbxG5pDbgEo1fS7acXbDVDs8oGiJLZJGrrdVJxMoy0iTvH8skd7J8Xak3adMzjhJW5Af"
		"otGFUVQl_LOItp_87roPkPbmrILYkJiJ4F_nQrQxEHTKubMkVFwFUEXzwjUGtmAjDCcSR5NKr5VhZb3mxJIW9FjY1Jj1Fjqwu4wOHHxaHYGeGp6imxAefUTxpKD5KtW6ed7_CI5L3Xpgrb00RGIX4Cv8y_ksFFbIYJY_YTV5bL8yEamV51K2DM6xoSfvB6PU_NwKk5_iir1aeC6KOlF7o4R9LuRYFlmnDc_OAc66agLmlAVTKjbRyxlk3BmwjzPeSDc4BDje9krV_KrS0ZAdSlLza-lUthuIsCOYzVhWAxmVGF16rONmdivT9wljdKZip573hCdJCkG-z0VkwP35YBLJixKf3wO2rhoJ-cdbdIyYucNoA1HfbfIevMTUY7cdFCLymEKLK13KYPiXAozfPRjl6GmknNyhpuYB8ASDETzhOyat_N3LGp_F_Q1mbumv5iagvC0XHatERIVQHJpBf6Q-janHl7UB14Nz39AfINnRq_2ptY6RNd"
		"RQvmnd-9nWI0yYqjxYrkIW44hd16Aupi0xUKx99Udtw2FANXHqSegVsYiAAlIXgD0L3hoIMD7jNDLxwKsjLYD8BMGLHhexZnaYwqM9sO8ChujQJZEr_5-sQ8Ke0f4CWlMRsnbKobwxupCPVgUJNdZZOmuCepgM73FWvifjhMCbhwpAoNwMwYqsV1UHRP-spNp3U8xHVR8Ldv1OI4xuJ4RFx8uAX2xJhjnQ9GgK2MBFVelV3t_-zrAXZn8ZLdzqWeoMRk0qR6luxL4hH_0KkdQKSV4T4n0jRHHu4kahPDx5dWl6OoJoexaXtMsin9KctHeYoBNf2gbN5S-zlsyDxpgNf29a_A0XyEud65QR4UHkvt3dFlDKOEMDYTcmLgc51jD_RolgGyQOiJiRUV1Mjf0D3gTiLfjp.K1hZ4tXmvT6BIPVUw4DRKQ%22%2C%22account_type%22%3A%22MSA%22%2C%22login_hint%22%3A%22sidd"
		"hantrawy@gmail.com%22%2C%22e%22%3A%22919180cc%22%7D; DOMAIN=ntp.msn.com");

	web_add_cookie("ai_session=ZabrBigJimT0duRGpab56r|1728511472047|1728511472047; DOMAIN=ntp.msn.com");

	web_url("ntp", 
		"URL=https://ntp.msn.com/edge/ntp?locale=en-GB&title=New%20tab&dsp=1&sp=Bing&prerender=1&PC=U531&adppc=EDGEXST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_add_cookie("MUIDB=03EA0C298FBD6525243718DA8EBB642E; DOMAIN=www.bing.com");

	web_add_cookie("_EDGE_V=1; DOMAIN=www.bing.com");

	web_add_cookie("SRCHD=AF=NOFORM; DOMAIN=www.bing.com");

	web_add_cookie("SRCHUID=V=2&GUID=BDAAF6C669DB45FAA9EA9BC75FEAE9ED&dmnchg=1; DOMAIN=www.bing.com");

	web_add_cookie("ANON=A=F9FC10108F728B0560CFB28DFFFFFFFF; DOMAIN=www.bing.com");

	web_add_cookie("_clck=khjgs1%7C2%7Cfp1%7C0%7C1711; DOMAIN=www.bing.com");

	web_add_cookie("BCP=AD=1&AL=1&SM=1; DOMAIN=www.bing.com");

	web_add_cookie("ABDEF=V=13&ABDV=13&MRNB=1725887067842&MRB=0; DOMAIN=www.bing.com");

	web_add_cookie("EDGSRCHHPGUSR=CIBV=1.1810.0; DOMAIN=www.bing.com");

	web_add_cookie("USRLOC=HS=1&ELOC=LAT=25.54812240600586|LON=86.50302124023438|N=Khagaria%2C%20Bihar|ELT=2|&CLOC=LAT=25.53823356827798|LON=86.50678868935687|A=733.4464586120832|TS=241009220622|SRC=W&BID=MjQxMDEwMDMzNjEyXzRjNDJjYmYxODJmMjViY2Q1Y2MxZmY1YmU1YjZiYTk0YmQ4YzFlZmJiNmRkNzNiNTE1ZTY2NjM3NDlkZmIwNTE=; DOMAIN=www.bing.com");

	web_add_cookie("SRCHUSR=DOB=20240907&T=1728243350000; DOMAIN=www.bing.com");

	web_add_cookie("SRCHHPGUSR=SRCHLANG=en&IG=3345A405BF734554AFFBCD76CEFD82FC&PV=10.0.0&DM=1&BRW=XW&BRH=M&CW=1912&CH=928&SCW=1897&SCH=3300&DPR=1.0&UTC=330&THEME=0&WEBTHEME=0&CIBV=1.1812.0&EXLTT=13&HV=1728243350&PRVCW=1912&PRVCH=928; DOMAIN=www.bing.com");

	web_add_cookie("_U=1GB3KcRi2f5gD6rAF-C_OQFP_I_C1T75frXy-OKuJO-lo7ZXzhEcWo0uFPiHykPr2gIt8sNAozsYEhHOaDhYoBaLvn0afbz1v6WEelgJ20vG2OhgbJXiLzEs4EbQ9ZuiXAAWZNE1y2XdWmOfCF1g3PklmF9DxdfyCi52JqKoTKwHj7bExtnUfNWipjTI1FVaUJtHV2I2dXaDxwixlDTGpgOyBEDjmQGmY3Iu8FFIp41I; DOMAIN=www.bing.com");

	lr_think_time(5);

	web_url("signin", 
		"URL=https://www.bing.com/fd/auth/signin?&action=header&provider=windows_live_id&save_token=0", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("MUID=03EA0C298FBD6525243718DA8EBB642E; DOMAIN=edgeservices.bing.com");

	web_add_cookie("_EDGE_V=1; DOMAIN=edgeservices.bing.com");

	web_add_cookie("SRCHD=AF=NOFORM; DOMAIN=edgeservices.bing.com");

	web_add_cookie("SRCHUID=V=2&GUID=BDAAF6C669DB45FAA9EA9BC75FEAE9ED&dmnchg=1; DOMAIN=edgeservices.bing.com");

	web_add_cookie("ANON=A=F9FC10108F728B0560CFB28DFFFFFFFF; DOMAIN=edgeservices.bing.com");

	web_add_cookie("MUIDB=03EA0C298FBD6525243718DA8EBB642E; DOMAIN=edgeservices.bing.com");

	web_add_cookie("EDGSRVCPERSIST=; DOMAIN=edgeservices.bing.com");

	web_add_cookie("_clck=khjgs1%7C2%7Cfp1%7C0%7C1711; DOMAIN=edgeservices.bing.com");

	web_add_cookie("BCP=AD=1&AL=1&SM=1; DOMAIN=edgeservices.bing.com");

	web_add_cookie("ABDEF=V=13&ABDV=13&MRNB=1725887067842&MRB=0; DOMAIN=edgeservices.bing.com");

	web_add_cookie("CUID=3F2gu8+Z0X8KHNFQOYbojUC3vpQ=; DOMAIN=edgeservices.bing.com");

	web_add_cookie("EDGSRCHHPGUSR=CIBV=1.1810.0; DOMAIN=edgeservices.bing.com");

	web_add_cookie("USRLOC=HS=1&ELOC=LAT=25.54812240600586|LON=86.50302124023438|N=Khagaria%2C%20Bihar|ELT=2|&CLOC=LAT=25.53823356827798|LON=86.50678868935687|A=733.4464586120832|TS=241009220622|SRC=W&BID=MjQxMDEwMDMzNjEyXzRjNDJjYmYxODJmMjViY2Q1Y2MxZmY1YmU1YjZiYTk0YmQ4YzFlZmJiNmRkNzNiNTE1ZTY2NjM3NDlkZmIwNTE=; DOMAIN=edgeservices.bing.com");

	web_add_cookie("SRCHUSR=DOB=20240907&T=1728243350000; DOMAIN=edgeservices.bing.com");

	web_add_cookie("SRCHHPGUSR=SRCHLANG=en&IG=3345A405BF734554AFFBCD76CEFD82FC&PV=10.0.0&DM=1&BRW=XW&BRH=M&CW=1912&CH=928&SCW=1897&SCH=3300&DPR=1.0&UTC=330&THEME=0&WEBTHEME=0&CIBV=1.1812.0&EXLTT=13&HV=1728243350&PRVCW=1912&PRVCH=928; DOMAIN=edgeservices.bing.com");

	web_add_cookie("_RwBf=r=0&ilt=0&ihpd=0&ispd=0&rc=275&rb=275&gb=0&rg=0&pc=275&mtu=0&rbb=0.0&g=0&cid=&clo=0&v=1&l=2024-10-06T07:00:00.0000000Z&lft=0001-01-01T00:00:00.0000000&aof=0&ard=0001-01-01T00:00:00.0000000&rwdbt=1707244353&rwflt=1717760325&o=0&p=BINGCOPILOTWAITLIST&c=MR000T&t=1577&s=2023-03-28T12:12:07.3083062+00:00&ts=2024-10-06T19:35:52.9103076+00:00&rwred=0&wls=2&wlb=0&wle=0&ccp=2&cpt=0&lka=0&lkt=0&aad=0&TH=&mta=0&e="
		"RBlj30tJKuJbpewRH-a36z1LvS8Eix8LxFgiTaSxGmcDqY_RmGHv3vVLzGMfxn4lVjY2kYg81hPqBz7ymeMVCqeA5IjFrusRhGOC7DJSE6U&A=F9FC10108F728B0560CFB28DFFFFFFFF&rwaul2=0; DOMAIN=edgeservices.bing.com");

	web_add_cookie("_U=1GB3KcRi2f5gD6rAF-C_OQFP_I_C1T75frXy-OKuJO-lo7ZXzhEcWo0uFPiHykPr2gIt8sNAozsYEhHOaDhYoBaLvn0afbz1v6WEelgJ20vG2OhgbJXiLzEs4EbQ9ZuiXAAWZNE1y2XdWmOfCF1g3PklmF9DxdfyCi52JqKoTKwHj7bExtnUfNWipjTI1FVaUJtHV2I2dXaDxwixlDTGpgOyBEDjmQGmY3Iu8FFIp41I; DOMAIN=edgeservices.bing.com");

	web_url("shell", 
		"URL=https://edgeservices.bing.com/edgesvc/shell?darkschemeovr=1&FORM=SHORUN&udsnav=1&setlang=en-GB&udsedgeshop=1&clientscopes=noheader%2Ccspgrd%2Ccoauthor%2Cchat%2Cvisibilitypm%2Cdevtoolsapi%2Cudsedgeshop%2Cudsinwin10%2Cntpquery%2Cudsdlpconsent%2Cudsfrontload%2Cdocvisibility%2Cchannelstable%2C%2Cudspreretry&copilotsupported=0%2C&browserversion=129.0.2792.79%2C&loadsource=frontload%2C&udsframed=1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("command", 
		"URL=https://edge.microsoft.com/sync/v1/feeds/me/syncEntities/command/?client=Chromium&client_id=woyHE6xU2pJWSn1hOBnDEA%3D%3D", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t16.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x18woyHE6xU2pJWSn1hOBnDEA==\\x10c\\x18\\x02*\\xED\\x04\\x12\\x02\\x10\\x01\\x18\\x012\\x1E\\x08\\x88\\x81\\x02\\x12\\x08\\x07p[U\\x8F\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xC6\\xA6\\x02\\x12\\x08|\\xF4Rs\\x92\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xB1\\xE6\\x02\\x12\\x08|\\xF4Rs\\x92\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xCF\\xF3\\x03\\x12\\x08|"
		"\\xF4Rs\\x92\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xF1\\xF7\\x01\\x12\\x08|\\xF4Rs\\x92\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xCD\\xBE\\x02\\x12\\x08|\\xF4Rs\\x92\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xF7\\xF7\\x02\\x12\\x08|\\xF4Rs\\x92\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xC7\\x87\\x03\\x12\\x08|"
		"\\xF4Rs\\x92\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x01(\\x040\\x008\\x00@\\x002\\x1E\\x08\\x9F\\xEF\\x05\\x12\\x08|\\xF4Rs\\x92\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xEB\\x95\t\\x12\\x08|\\xF4Rs\\x92\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\x9A\\xB7\t\\x12\\x08|\\xF4Rs\\x92\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xFC\\xDE$\\x12\\x08|"
		"\\xF4Rs\\x92\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xC9\\x8B)\\x12\\x08|\\xF4Rs\\x92\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xA1\\xDD'\\x12\\x08|\\xF4Rs\\x92\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xD0\\xAF:\\x12\\x08|\\xF4Rs\\x92\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xA9\\xF0O\\x12\\x08|"
		"\\xF4Rs\\x92\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xF1\\xBFG\\x12\\x08|\\xF4Rs\\x92\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\xB5\\xDAD\\x12\\x08|\\xF4Rs\\x92\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x040\\x008\\x00@\\x002\\x1E\\x08\\x81\\xF5\\x02\\x12\\x08|\\xF4Rs\\x92\\x01\\x00\\x00*\\x0E\\x10\\x00\\x18\\x01 \\x00(\\x060\\x008\\x00@\\x00H\\x0CP\\x00\\xC0>\\x01:\\x1FProductionEnvironmentDefinitionRP\n"
		"\\x02\\x08\\x05\n\\x02\\x08\t\n\\x02\\x08\n\n\\x04\\x18\\xC7\\x87\\x03\\x10\\x01\\x18\\x00 \\x00(\\x88\\x81\\x02(\\xC6\\xA6\\x02(\\xB1\\xE6\\x02(\\xCD\\xBE\\x02(\\xF7\\xF7\\x02(\\x9F\\xEF\\x05(\\xEB\\x95\t(\\xFC\\xDE$(\\xC9\\x8B)(\\xA1\\xDD'(\\xD0\\xAF:(\\xF1\\xBFG(\\xB5\\xDAD(\\x81\\xF5\\x02Z\\x00b\ndummytokenj\\x02\\x10\\x01r\\x1Cchr:woyHE6xU2pJWSn1hOBnDEA==", 
		LAST);

	web_url("crx_2", 
		"URL=https://edge.microsoft.com/extensionwebstorebase/v1/crx?os=win&arch=x64&os_arch=x86_64&nacl_arch=x86-64&prod=edgecrx&prodchannel=&prodversion=129.0.2792.79&lang=en-GB&acceptformat=crx3,puff&x=id%3Dboldmdfoencgjfblcelefkjfafmpiahm%26v%3D0.5.2%26installedby%3Dinternal%26uc&x=id%3Dhokifickgkhplphjiodbggjmoafhignh%26v%3D1.2409.603%26installedby%3Dinternal%26uc&x=id%3Djmjflgjpcpepeafmmgdpfkogkghcpiha%26v%3D1.2.1%26installedby%3Dother%26uc&x="
		"id%3Dllbjbkhnmlidjebalopleeepgdfgcpec%26v%3D6.42.22%26installedby%3Dinternal%26uc", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("MUID=148CA97F15BA6968228CBD8C14086831; DOMAIN=copilot.microsoft.com");

	web_add_cookie("MUIDB=148CA97F15BA6968228CBD8C14086831; DOMAIN=copilot.microsoft.com");

	web_add_cookie("_EDGE_V=1; DOMAIN=copilot.microsoft.com");

	web_add_cookie("ANON=A=F9FC10108F728B0560CFB28DFFFFFFFF; DOMAIN=copilot.microsoft.com");

	web_add_cookie("MC1=GUID=9375e771064549138c3efa73f780c396&HASH=9375&LV=202409&V=4&LU=1725727260526; DOMAIN=copilot.microsoft.com");

	web_add_cookie("_clck=1fwc3ix%7C2%7Cfpb%7C1%7C1723; DOMAIN=copilot.microsoft.com");

	web_add_cookie("AMCV_EA76ADE95776D2EC7F000101%40AdobeOrg=1585540135%7CMCIDTS%7C19993%7CvVersion%7C4.4.0%7CMCMID%7C19991439201248183652248176557012378689%7CMCAID%7CNONE%7CMCOPTOUT-1727343778s%7CNONE; DOMAIN=copilot.microsoft.com");

	web_add_cookie("mbox=PC#4f1b92946d3d466293c645fc0520a14c.41_0#1729928580|session#102daa48856b47b69c1da7cadd06bbec#1727338440; DOMAIN=copilot.microsoft.com");

	web_add_cookie("_uetvid=c21383d076bb11efa166b7e187469650; DOMAIN=copilot.microsoft.com");

	web_add_cookie("_uetmsclkid=_uet70b2a974d6bf1c56f26ecf98e5bd1d7a; DOMAIN=copilot.microsoft.com");

	web_add_cookie("ak_bmsc=8F042E952B186327C72EB99BC9063DA1~000000000000000000000000000000~YAAQ340sMYXpNlKSAQAAc+4mcxnM48nnFcEyry9nqlI4RZyv4VGvnA+EVhsH0k7jnr/YtX7mXKUEdsar+DLNzz8nFcpcIrm5mxsZ5C0Wsd6JobwMdCIOeB1sh2lGP30Kbdv8G0rbT0jGSg9iyV2XjQ2/36KBdJ3wvdElUE3T5SWNAj25udBfdU3zftc61KR67VujTJDjCYuLZFWFdwk5pk9UKl/E5t72REjO2VUsft3OHSLXpitES2tQFwV8Ewc+MhYC0IRU8a2+SLYz0YOaqrPaqOkCS/PLkSdZ2uXRTA4IRvpG5FEvFlIwfJ+sSYl9Fu8Ve5uWjYW/D/BUF6NUr+rvtZ3Z03626NSbZd8eT0629H612ApzEFmLny0A92wdGezZ/Jl28KfXABr4ARGkXtEUtMQ/TXnHPA"
		"==; DOMAIN=copilot.microsoft.com");

	web_add_cookie("bm_sv=D8A98ECF3631CCDDB457B79958F47C25~YAAQ340sMSwjN1KSAQAAXg5Rcxn+oE7IGGJ1TdaLEqVwPen9n4jyq14x5XH8wBtPdwYbelS0+2BDzqefYGl/5l1YNJb9N2PBboBPp6n6BCKae6DuP+JB2mV1FCBlwP4XFQZOrUXLsU8KWojmTUC2XxLwraS78/NWR6z3eUqHQAbnUYwJ4jP4RfvFqDNKzImte6AooVIwuo6xP6Q9sNhOd1Q73W1bWuNHxELPU0cBoq0W+JyK/IV4cq1s31hxHuH86sRy~1; DOMAIN=copilot.microsoft.com");

	web_url("signin_2", 
		"URL=https://copilot.microsoft.com/fd/auth/signin?&action=header&provider=windows_live_id&save_token=0", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_C_Auth=; DOMAIN=ntp.msn.com");

	web_add_cookie("_EDGE_S=SID=1145E2E4ADA66EA108D8F7F7AC836F22; DOMAIN=ntp.msn.com");

	lr_think_time(9);

	web_url("V1Profile", 
		"URL=https://substrate.office.com/profileb2/v2.0/me/V1Profile", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://ntp.msn.com/edge/ntp/service-worker.js?bundles=latest&riverAgeMinutes=2880&navAgeMinutes=2880&networkTimeoutSeconds=5&bgTaskNetworkTimeoutSeconds=8&ssrBasePageNavAgeMinutes=360&enableEmptySectionRoute=true&enableNavPreload=true&enableFallbackVerticalsFeed=true&noCacheLayoutTemplates=true&cacheSSRBasePageResponse=true&enableStaticAdsRouting=true", "Referer=https://ntp.msn.com/edge/ntp/service-worker.js?bundles=latest&riverAgeMinutes=2880&navAgeMinutes=2880&networkTimeoutSeconds=5&"
		"bgTaskNetworkTimeoutSeconds=8&ssrBasePageNavAgeMinutes=360&enableEmptySectionRoute=true&enableNavPreload=true&enableFallbackVerticalsFeed=true&noCacheLayoutTemplates=true&cacheSSRBasePageResponse=true&enableStaticAdsRouting=true", ENDITEM, 
		LAST);

	web_custom_request("favicon.ico", 
		"URL=https://assets.msn.com/statics/icons/favicon.ico", 
		"Method=HEAD", 
		"Resource=1", 
		"RecContentType=image/x-icon", 
		"Referer=https://ntp.msn.com/", 
		"Snapshot=t20.inf", 
		LAST);

	web_url("Catalog.action", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../images/cart.gif", ENDITEM, 
		"Url=../images/sm_dogs.gif", ENDITEM, 
		"Url=../images/sm_fish.gif", ENDITEM, 
		"Url=../images/sm_birds.gif", ENDITEM, 
		"Url=../images/sm_reptiles.gif", ENDITEM, 
		"Url=../images/sm_cats.gif", ENDITEM, 
		LAST);

	web_add_cookie("USRLOC=CLOC=LAT=25.53823356827798|LON=86.50678868935687|A=733.4464586120832|TS=241009220622|SRC=W&BID=MjQxMDEwMDMzNjEyXzRjNDJjYmYxODJmMjViY2Q1Y2MxZmY1YmU1YjZiYTk0YmQ4YzFlZmJiNmRkNzNiNTE1ZTY2NjM3NDlkZmIwNTE=; DOMAIN=assets.msn.com");

	web_add_cookie("_EDGE_V=1; DOMAIN=assets.msn.com");

	web_add_cookie("APP_ANON=A=F9FC10108F728B0560CFB28DFFFFFFFF; DOMAIN=assets.msn.com");

	web_add_cookie("aace=%7b%22child%22%3a0%7d; DOMAIN=assets.msn.com");

	web_add_cookie("els=%7b%22account_type%22%3a%22MSA%22%7d; DOMAIN=assets.msn.com");

	web_add_cookie("ntps={\"m\":\"en-in\"}; DOMAIN=assets.msn.com");

	web_add_cookie("MUIDB=0B920AC876FF61D831811E3B77176083; DOMAIN=assets.msn.com");

	web_add_cookie("MUID=03EA0C298FBD6525243718DA8EBB642E; DOMAIN=assets.msn.com");

	web_add_cookie("msnup=; DOMAIN=assets.msn.com");

	web_add_cookie("lt=t=EwBYA6AEAAAU+FEkrYVKODxcga16pzW/y5vRf68AATNleWYaH5YyBRxeF10hhS7wzrN6LXYZmthFTEkPfIGtL3N1UeTwhWpKqiFHN+0raiyHCiL/a93ExGaF1Yi+uvL2RTNtrxWLg+ZI9Et7RtFyCsTSwIRQsZC4QGvC1ErQwN8LKtrHmXFRLd10V4U1zm3YM2/VtFwyB3Y/+qeAxXmBECAGc8i3Ywce3Z3sHduUACVoP+JqfAhrzxheUhdPRN2J68zlr9hlAJ6yBGGV4ZEJ56DEaqnfNySi09MWNEWahjSHiX2lC4CjjjFAsXPwbq2WV3A3xaw1ekGk0KnQk7sYo7IciY0NLtjO3LkPoOZulZSEZgLoVlIronzIl/kzW6AQZgAAEM8TSozETnun0Vs7oqhcrawgApnTWecXAugrycochvwGDnvAu+g7hXfhkWtGybNsK3jkHsRYl+tyvQMdnConD7mn+"
		"H45PMTYU0SZcPcZBbOqWnTaqJe0j1FIg53PzldBDGhAKn2nXJpP4DmZ+gsfr0oeQvBOFdrY7F3ij0V/qcOh1StvNCuM/JCMUbnG+ysgspK/ZvDKxThFVbOpvGV6Oh/pA8NLZyoMBaGmoCjjuGswekZXm4HIU7Jls8YdAkpgzLIF+sXBifzIs4F47HhWtAop68g9H8lPQE8VJ3Lgu0o3tUn5FIn13GB4HIcgVmV6tfBe96JGkIeIfyxAthcW+BjZf6BEh8R7cKQsi7ExYKjM2iHQTtgI7v4WGBb41P302nam1bC/cMsb3f08ESudUYlNC9nl0XQJXmTqdwThs/OyDsR/5ggu1/U+/0QrnXZG4A/IaDFGpYk4DGhr6unPCf169O+r943TZI9+ykMt/Q0iUoBkPgJaQAX4wFmAiuuPaOk1DRCo6zp5rLZk3EFrHU2/YzyfYws8bhzuj+atLUjmZ5TXSfkeVdG6riDp7HrJpMRaekjzyb6fgS+"
		"3Wvbyo6W04blKVcy29AXqUZbthinqrAawzjCHvINghUMgrJ0Au9jkTPyN1S8aKrb8ccHGd5CMI4BSR/7UQKFcxD/fhgX8GEtE6+Ks0hXDawDCoiF8ifVdi8K5a7IzfbWuvk6Vywg8vhQH2Kqk7m8/4Nun/ha6BuBTAg==&p=; DOMAIN=assets.msn.com");

	web_add_cookie("elt="
		"%7B%22access_token%22%3A%22eyJhbGciOiJSU0EtT0FFUCIsImVuYyI6IkExMjhDQkMtSFMyNTYiLCJ4NXQiOiJFY2tFODJLeld2ZGc1RFhkZ1c5LUUyU2ZYbGciLCJ6aXAiOiJERUYifQ.TBeP30gE4clJ1IV5VkPAA1UaFM5teMN9uuoKV7zVUYgVY1gV0lGpm8IFKZFAiNrkuHfCSmvHfLCwuoQpx7lSgLw9IFfzlHPp9qjeGvwVw-10VrNvHCvKmf5PidD2wEPsVC2AnELCzg0hCawLJ3V5rWwEwt3laE1AgTwXzGlbtl9hN-vEdhkgjxxlcp92lP2xyxMMdRcorr2RlKjUbmfyP-CSkTtl8RVrzjHhoY7XSSzm6LDy4IwHPtAwGgBikbP0fH-5wgrwxNKVmwb7RnPDgrV7ldLIwTePcL9kEPoSyt-Zhe5rPk02B2JSLXOwUpbY67_Al4XuodvAmhP5avYvVA.UffNKPAtbXtLJ"
		"8r4FVVGHA.4w_xj4azMEOvHvp48YXTyJ29r0Kt3LaWY0x4n1T4MVleJ86EZ8Kg8k_b-CBPKHqFhABZ8S21ykupR5tksQgn2Q2g3t5ewGzSnBn81JvqDzxItMvD5MHCbKTAGIQLHQtT0ZnqxBPn9pyWNRWsSb9IhjKZkrc435skw4S6Ti3MM-RpLW8s6hBCoj7IWrpaWiKE8YaN9bjwRr2m1GF2iLuWSX_aDFK72mfo2iT_850oc1mXNE2alQeC9aCNK1DHuuCGvS3Ob75Us19XmQU4crg2dY30Nl2sfLlrgmzEVaW-KaFZJuK_wM5ogitIJruJeklLdu9TBPcAbuYSDqJ434B8vWX_tqptWZ0FLE1_c0EaIwjz5RvGSsXNYqwJXGXeBhxKbHzblYY-PAypEjubWDvIiDPzaoI57HLwAlkPD8eRwbxG5pDbgEo1fS7acXbDVDs8oGiJLZJGrrdVJxMoy0iTvH8skd7J8Xak3adMzjhJW5Af"
		"otGFUVQl_LOItp_87roPkPbmrILYkJiJ4F_nQrQxEHTKubMkVFwFUEXzwjUGtmAjDCcSR5NKr5VhZb3mxJIW9FjY1Jj1Fjqwu4wOHHxaHYGeGp6imxAefUTxpKD5KtW6ed7_CI5L3Xpgrb00RGIX4Cv8y_ksFFbIYJY_YTV5bL8yEamV51K2DM6xoSfvB6PU_NwKk5_iir1aeC6KOlF7o4R9LuRYFlmnDc_OAc66agLmlAVTKjbRyxlk3BmwjzPeSDc4BDje9krV_KrS0ZAdSlLza-lUthuIsCOYzVhWAxmVGF16rONmdivT9wljdKZip573hCdJCkG-z0VkwP35YBLJixKf3wO2rhoJ-cdbdIyYucNoA1HfbfIevMTUY7cdFCLymEKLK13KYPiXAozfPRjl6GmknNyhpuYB8ASDETzhOyat_N3LGp_F_Q1mbumv5iagvC0XHatERIVQHJpBf6Q-janHl7UB14Nz39AfINnRq_2ptY6RNd"
		"RQvmnd-9nWI0yYqjxYrkIW44hd16Aupi0xUKx99Udtw2FANXHqSegVsYiAAlIXgD0L3hoIMD7jNDLxwKsjLYD8BMGLHhexZnaYwqM9sO8ChujQJZEr_5-sQ8Ke0f4CWlMRsnbKobwxupCPVgUJNdZZOmuCepgM73FWvifjhMCbhwpAoNwMwYqsV1UHRP-spNp3U8xHVR8Ldv1OI4xuJ4RFx8uAX2xJhjnQ9GgK2MBFVelV3t_-zrAXZn8ZLdzqWeoMRk0qR6luxL4hH_0KkdQKSV4T4n0jRHHu4kahPDx5dWl6OoJoexaXtMsin9KctHeYoBNf2gbN5S-zlsyDxpgNf29a_A0XyEud65QR4UHkvt3dFlDKOEMDYTcmLgc51jD_RolgGyQOiJiRUV1Mjf0D3gTiLfjp.K1hZ4tXmvT6BIPVUw4DRKQ%22%2C%22account_type%22%3A%22MSA%22%2C%22login_hint%22%3A%22sidd"
		"hantrawy@gmail.com%22%2C%22e%22%3A%22919180cc%22%7D; DOMAIN=assets.msn.com");

	web_add_cookie("_EDGE_S=SID=1145E2E4ADA66EA108D8F7F7AC836F22; DOMAIN=assets.msn.com");

	web_url("weather", 
		"URL=https://assets.msn.com/service/segments/recoitems/weather?apikey=UhJ4G66OjyLbn9mXARgajXLiLw6V75sHnfpU60aJBB&activityId=1EF055B8-D872-43DE-8481-EB10797DFEAC&ocid=weather-peregrine&cm=en-in&it=app&user=m-03EA0C298FBD6525243718DA8EBB642E&scn=APP_ANON&appId=4de6fc9f-3262-47bf-9c99-e189a8234fa2&wrapodata=false&includemapsmetadata=true&cuthour=true&filterRule=card&distanceinkm=0&regionDataCount=20&orderby=distance&days=5&pageOcid=anaheim-ntp-peregrine&source=undefined_csr&hours=13&fdhead="
		"prg-1sw-wxinst&contentcount=3&region=in&market=en-in&locale=en-in", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://ntp.msn.com/edge/ntp?locale=en-GB&title=New%20tab&dsp=1&sp=Bing&prerender=1&PC=U531&adppc=EDGEXST", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("WLS=C=936a3d3eb3a08966&N=Siddhant; DOMAIN=edgeservices.bing.com");

	web_add_cookie("_U=1soO-TayBegtoHjotX2ecUr1rnoK1Qy1w3zKpv0np_sMurN29DyDz8bbqKNAUETWTpnfIYXOEmkIXUBq8v2YjDL1EeYIZJPIiNSx24A7Iv-mSeXFWY_vp75tCu_nyYwOBjx1bKWAuRgnoljA7kbi-WgJb8dlPi22uc6nmzM9kSyvzbC6MbeJymTVE8A3NmBxZCZEOTySlwUzqm64-it--WHHfH0Mqqo53DY7Drj2TnkQ; DOMAIN=edgeservices.bing.com");

	web_add_cookie("_SS=SID=1914CA26041C6562089DDF35051A64AC; DOMAIN=edgeservices.bing.com");

	web_add_cookie("EDGSRVC=darkschemeovr=displaytheme=edgeservices&EN=language=edgeservices; DOMAIN=edgeservices.bing.com");

	web_add_cookie("EDGSRVCSCEN=shell=clientscopes=noheader-cspgrd-coauthor-chat-visibilitypm-devtoolsapi-udsedgeshop-udsinwin10-ntpquery-udsdlpconsent-udsfrontload-docvisibility-channelstable-udspreretry; DOMAIN=edgeservices.bing.com");

	web_url("test", 
		"URL=https://edgeservices.bing.com/ipv6test/test?FORM=MONITR", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://edgeservices.bing.com/edgesvc/shell?darkschemeovr=1&FORM=SHORUN&udsnav=1&setlang=en-GB&udsedgeshop=1&clientscopes=noheader%2Ccspgrd%2Ccoauthor%2Cchat%2Cvisibilitypm%2Cdevtoolsapi%2Cudsedgeshop%2Cudsinwin10%2Cntpquery%2Cudsdlpconsent%2Cudsfrontload%2Cdocvisibility%2Cchannelstable%2C%2Cudspreretry&copilotsupported=0%2C&browserversion=129.0.2792.79%2C&loadsource=frontload%2C&udsframed=1", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);

	web_url("l", 
		"URL=https://edgeservices.bing.com/fd/ls/l?IG=E8793E25AAEB4A11B206817F78693F0F&Type=Event.CPT&DATA=%7B%22pp%22:%7B%22S%22:%22L%22,%22FC%22:300,%22BC%22:305,%22SE%22:-1,%22TC%22:-1,%22H%22:430,%22BP%22:446,%22CT%22:447,%22IL%22:0%7D,%22ad%22:[-1,-1,0,0,0,0,0],%22net%22:%22undefined%22%7D&P=UNSP&DA=PUSE01", 
		"Resource=0", 
		"Referer=https://edgeservices.bing.com/edgesvc/shell?darkschemeovr=1&FORM=SHORUN&udsnav=1&setlang=en-GB&udsedgeshop=1&clientscopes=noheader%2Ccspgrd%2Ccoauthor%2Cchat%2Cvisibilitypm%2Cdevtoolsapi%2Cudsedgeshop%2Cudsinwin10%2Cntpquery%2Cudsdlpconsent%2Cudsfrontload%2Cdocvisibility%2Cchannelstable%2C%2Cudspreretry&copilotsupported=0%2C&browserversion=129.0.2792.79%2C&loadsource=frontload%2C&udsframed=1", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("command_2", 
		"URL=https://edge.microsoft.com/sync/v1/feeds/me/syncEntities/command/?client=Chromium&client_id=woyHE6xU2pJWSn1hOBnDEA%3D%3D", 
		"Method=POST", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"Body=<ClientInstRequest><CID>03EA0C298FBD6525243718DA8EBB642E</CID><Events><E><T>Event.ClientInst</T><IG>2B611F094587481EAB4D044877C978DA</IG><D><![CDATA[{\"CurUrl\":\"https://edgeservices.bing.com/edgesvc/shell\",\"T\":\"CI.BoxModel\",\"FID\":\"CI\",\"Name\":\"v2.8.3\",\"P\":{\"C\":1,\"N\":2,\"I\":\"1qd\",\"S\":\"V\",\"M\":\"V+L+M+MT+E+N+C+K+BD+BF\",\"T\":317425,\"K\":\"6sxc+6hq+6rh\",\"F\":1},\"V\":\"@m//////////pagehide\",\"M\":\"go+6sxc+-1+6sxd+m+0+0+1+0+0+0\",\"N\":\"@n/l//@2/web%2Fxls.aspx/"
		"@9/9r/@3/@n/@n/@n/6ht/@o/@o\",\"TS\":1728511951043,\"RTS\":316899,\"SEQ\":9,\"UTS\":1728512002037}]]></D><TS>1728511951043</TS></E><E><T>Event.ClientInst</T><IG>E8793E25AAEB4A11B206817F78693F0F</IG><D><![CDATA[{\"CurUrl\":\"https://edgeservices.bing.com/edgesvc/shell\",\"T\":\"CI.Discover.Shell.Bootstrap\",\"TS\":1728511988629,\"RTS\":394,\"SEQ\":0,\"UTS\":1728512002037}]]></D><TS>1728511988629</TS></E><E><T>Event.ClientInst</T><IG>E8793E25AAEB4A11B206817F78693F0F</IG><D><![CDATA[{\"CurUrl\":\""
		"https://edgeservices.bing.com/edgesvc/shell\",\"data\":{\"formCod", 
		LAST);

	web_custom_request("lsp.aspx", 
		"URL=https://edgeservices.bing.com/fd/ls/lsp.aspx?", 
		"Method=POST", 
		"Resource=1", 
		"Referer=https://edgeservices.bing.com/edgesvc/shell?darkschemeovr=1&FORM=SHORUN&udsnav=1&setlang=en-GB&udsedgeshop=1&clientscopes=noheader%2Ccspgrd%2Ccoauthor%2Cchat%2Cvisibilitypm%2Cdevtoolsapi%2Cudsedgeshop%2Cudsinwin10%2Cntpquery%2Cudsdlpconsent%2Cudsfrontload%2Cdocvisibility%2Cchannelstable%2C%2Cudspreretry&copilotsupported=0%2C&browserversion=129.0.2792.79%2C&loadsource=frontload%2C&udsframed=1", 
		"Snapshot=t26.inf", 
		"EncType=text/plain;charset=UTF-8", 
		"Body=<ClientInstRequest><Events><E><T>Event.ClientInst</T><IG>E8793E25AAEB4A11B206817F78693F0F</IG><TS>1728511989033</TS><D><![CDATA[{id:9015,P:\"2:7,3:7,4:7,5:b,7:6im,6:d,8:6im,9:72w,10:7fs,11:736,12:7fs,13:7fs,14:7ft,15:7ft,16:7ft,17:7ft,FN:7br,BN:7bw\",S:\"nav:0\",v:1.1,T:\"CI.Perf\",FID:\"CI\",Name:\"PerfV2\"}]]></D></E></Events><STS>1728511989033</STS></ClientInstRequest>", 
		LAST);

	web_add_cookie("MC1=GUID=9375e771064549138c3efa73f780c396&HASH=9375&LV=202409&V=4&LU=1725727260526; DOMAIN=browser.events.data.microsoft.com");

	web_add_cookie("_clck=1fwc3ix%7C2%7Cfpb%7C1%7C1723; DOMAIN=browser.events.data.microsoft.com");

	web_add_cookie("AMCV_EA76ADE95776D2EC7F000101%40AdobeOrg=1585540135%7CMCIDTS%7C19993%7CvVersion%7C4.4.0%7CMCMID%7C19991439201248183652248176557012378689%7CMCAID%7CNONE%7CMCOPTOUT-1727343778s%7CNONE; DOMAIN=browser.events.data.microsoft.com");

	web_add_cookie("mbox=PC#4f1b92946d3d466293c645fc0520a14c.41_0#1729928580|session#102daa48856b47b69c1da7cadd06bbec#1727338440; DOMAIN=browser.events.data.microsoft.com");

	web_add_cookie("_uetvid=c21383d076bb11efa166b7e187469650; DOMAIN=browser.events.data.microsoft.com");

	web_add_cookie("_uetmsclkid=_uet70b2a974d6bf1c56f26ecf98e5bd1d7a; DOMAIN=browser.events.data.microsoft.com");

	web_add_cookie("ak_bmsc=8F042E952B186327C72EB99BC9063DA1~000000000000000000000000000000~YAAQ340sMYXpNlKSAQAAc+4mcxnM48nnFcEyry9nqlI4RZyv4VGvnA+EVhsH0k7jnr/YtX7mXKUEdsar+DLNzz8nFcpcIrm5mxsZ5C0Wsd6JobwMdCIOeB1sh2lGP30Kbdv8G0rbT0jGSg9iyV2XjQ2/36KBdJ3wvdElUE3T5SWNAj25udBfdU3zftc61KR67VujTJDjCYuLZFWFdwk5pk9UKl/E5t72REjO2VUsft3OHSLXpitES2tQFwV8Ewc+MhYC0IRU8a2+SLYz0YOaqrPaqOkCS/PLkSdZ2uXRTA4IRvpG5FEvFlIwfJ+sSYl9Fu8Ve5uWjYW/D/BUF6NUr+rvtZ3Z03626NSbZd8eT0629H612ApzEFmLny0A92wdGezZ/Jl28KfXABr4ARGkXtEUtMQ/TXnHPA"
		"==; DOMAIN=browser.events.data.microsoft.com");

	web_add_cookie("bm_sv=D8A98ECF3631CCDDB457B79958F47C25~YAAQ340sMSwjN1KSAQAAXg5Rcxn+oE7IGGJ1TdaLEqVwPen9n4jyq14x5XH8wBtPdwYbelS0+2BDzqefYGl/5l1YNJb9N2PBboBPp6n6BCKae6DuP+JB2mV1FCBlwP4XFQZOrUXLsU8KWojmTUC2XxLwraS78/NWR6z3eUqHQAbnUYwJ4jP4RfvFqDNKzImte6AooVIwuo6xP6Q9sNhOd1Q73W1bWuNHxELPU0cBoq0W+JyK/IV4cq1s31hxHuH86sRy~1; DOMAIN=browser.events.data.microsoft.com");

	web_custom_request("1.0", 
		"URL=https://browser.events.data.microsoft.com/OneCollector/1.0/?cors=true&content-type=application/x-json-stream&w=2", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"EncType=application/x-json-stream", 
		"Body={\"name\":\"Office.NaturalLanguage.EditorBx.RemoteSettingSync\",\"time\":\"2024-10-09T22:13:01.735Z\",\"ver\":\"4.0\",\"iKey\":\"o:71cc1046851042108843d90e5d3ef6c1\",\"ext\":{\"sdk\":{\"seq\":1,\"ver\":\"1DS-Web-JS-3.2.6\"},\"metadata\":{\"f\":{\"Event.Time\":{\"t\":9},\"Event.Sequence\":{\"t\":4},\"Activity.Duration\":{\"t\":4},\"Activity.Count\":{\"t\":4},\"Activity.AggMode\":{\"t\":4}}}},\"data\":{\"baseType\":\"custom.office_system_activity\",\"baseData\":{\"properties\":{\"version\":\""
		"PostChannel=3.2.6\"}},\"Event.Name\":\"Office.NaturalLanguage.EditorBx.RemoteSettingSync\",\"Event.Source\":\"OTelJS\",\"Event.Time\":\"2024-10-09T22:13:01.735Z\",\"Event.Sequence\":1,\"Event.Id\":\"72a88eb4-ef07-4390-ab90-b0a5cc1a72fd.1\",\"Session.Id\":\"4807a275-df65-4866-8b2d-a39f01e7be5f\",\"App.Platform\":\"Web\",\"App.Name\":\"EditorBX\",\"Data.OTelJS.Version\":\"4.18.2\",\"Data.Browser_Type\":\"edge-chromium\",\"Data.Browser_Version\":\"129.0.0\",\"Data.Store_Runtime_Id\":\""
		"hokifickgkhplphjiodbggjmoafhignh\",\"Data.Extension_Version\":\"1.2409.603\",\"Data.Extension_Version_Name\":\"v1.9.1\",\"Data.App_Id\":\"EditorBX_Online\",\"Data.Client_Id\":\"f8ae85d0-a22d-43b7-ad73-ee870db6ded2\",\"Data.ConfigurationId\":\"P-R-83860-16-100,P-R-1436507-1-4,P-R-1436461-2-7,P-R-1177547-1-12,P-R-1105740-1-5,P-R-1105738-1-5,P-R-1105733-1-5,P-R-1061653-6-44,P-R-89231-4-91,P-R-83171-11-91,P-R-49474-10-167,P-D-1141483-1-2,P-D-1098128-4-13\",\"Event.Contract\":\"Office.System.Activity\""
		",\"Activity.CV\":\"dZOBjASawU8t1qzrzlIR70.1\",\"Activity.Duration\":0,\"Activity.Count\":1,\"Activity.AggMode\":0,\"Activity.Success\":true,\"zC.Activity\":\"Office.System.Activity\"}}\n{\"name\":\"Office.NaturalLanguage.EditorBx.ClientStateChanged\",\"time\":\"2024-10-09T22:13:01.740Z\",\"ver\":\"4.0\",\"iKey\":\"o:71cc1046851042108843d90e5d3ef6c1\",\"ext\":{\"sdk\":{\"seq\":2,\"ver\":\"1DS-Web-JS-3.2.6\"},\"metadata\":{\"f\":{\"Event.Time\":{\"t\":9},\"Event.Sequence\":{\"t\":4},\""
		"Data.Editor_Client_State\":{\"t\":4},\"Activity.Duration\":{\"t\":4},\"Activity.Count\":{\"t\":4},\"Activity.AggMode\":{\"t\":4}}}},\"data\":{\"baseType\":\"custom.office_system_activity\",\"baseData\":{\"properties\":{\"version\":\"PostChannel=3.2.6\"}},\"Event.Name\":\"Office.NaturalLanguage.EditorBx.ClientStateChanged\",\"Event.Source\":\"OTelJS\",\"Event.Time\":\"2024-10-09T22:13:01.740Z\",\"Event.Sequence\":2,\"Event.Id\":\"72a88eb4-ef07-4390-ab90-b0a5cc1a72fd.2\",\"Session.Id\":\""
		"4807a275-df65-4866-8b2d-a39f01e7be5f\",\"App.Platform\":\"Web\",\"App.Name\":\"EditorBX\",\"Data.OTelJS.Version\":\"4.18.2\",\"Data.Browser_Type\":\"edge-chromium\",\"Data.Browser_Version\":\"129.0.0\",\"Data.Store_Runtime_Id\":\"hokifickgkhplphjiodbggjmoafhignh\",\"Data.Extension_Version\":\"1.2409.603\",\"Data.Extension_Version_Name\":\"v1.9.1\",\"Data.App_Id\":\"EditorBX_Online\",\"Data.Client_Id\":\"f8ae85d0-a22d-43b7-ad73-ee870db6ded2\",\"Data.ConfigurationId\":\"P-R-83860-16-100,"
		"P-R-1436507-1-4,P-R-1436461-2-7,P-R-1177547-1-12,P-R-1105740-1-5,P-R-1105738-1-5,P-R-1105733-1-5,P-R-1061653-6-44,P-R-89231-4-91,P-R-83171-11-91,P-R-49474-10-167,P-D-1141483-1-2,P-D-1098128-4-13\",\"Data.Is_LoggedIn\":false,\"Data.EditorPriority_Shutdown\":false,\"Data.Editor_Client_State\":0,\"Event.Contract\":\"Office.System.Activity\",\"Activity.CV\":\"dZOBjASawU8t1qzrzlIR70.2\",\"Activity.Duration\":0,\"Activity.Count\":1,\"Activity.AggMode\":0,\"Activity.Success\":true,\"zC.Activity\":\""
		"Office.System.Activity\"}}\n{\"name\":\"Office.NaturalLanguage.EditorBx.BackgroundScriptInitialization\",\"time\":\"2024-10-09T22:13:01.742Z\",\"ver\":\"4.0\",\"iKey\":\"o:71cc1046851042108843d90e5d3ef6c1\",\"ext\":{\"sdk\":{\"seq\":3,\"ver\":\"1DS-Web-JS-3.2.6\"},\"metadata\":{\"f\":{\"Event.Time\":{\"t\":9},\"Event.Sequence\":{\"t\":4},\"Activity.Duration\":{\"t\":4},\"Activity.Count\":{\"t\":4},\"Activity.AggMode\":{\"t\":4}}}},\"data\":{\"baseType\":\"custom.office_system_activity\",\""
		"baseData\":{\"properties\":{\"version\":\"PostChannel=3.2.6\"}},\"Event.Name\":\"Office.NaturalLanguage.EditorBx.BackgroundScriptInitialization\",\"Event.Source\":\"OTelJS\",\"Event.Time\":\"2024-10-09T22:13:01.742Z\",\"Event.Sequence\":3,\"Event.Id\":\"72a88eb4-ef07-4390-ab90-b0a5cc1a72fd.3\",\"Session.Id\":\"4807a275-df65-4866-8b2d-a39f01e7be5f\",\"App.Platform\":\"Web\",\"App.Name\":\"EditorBX\",\"Data.OTelJS.Version\":\"4.18.2\",\"Data.Browser_Type\":\"edge-chromium\",\"Data.Browser_Version\""
		":\"129.0.0\",\"Data.Store_Runtime_Id\":\"hokifickgkhplphjiodbggjmoafhignh\",\"Data.Extension_Version\":\"1.2409.603\",\"Data.Extension_Version_Name\":\"v1.9.1\",\"Data.App_Id\":\"EditorBX_Online\",\"Data.Client_Id\":\"f8ae85d0-a22d-43b7-ad73-ee870db6ded2\",\"Data.ConfigurationId\":\"P-R-83860-16-100,P-R-1436507-1-4,P-R-1436461-2-7,P-R-1177547-1-12,P-R-1105740-1-5,P-R-1105738-1-5,P-R-1105733-1-5,P-R-1061653-6-44,P-R-89231-4-91,P-R-83171-11-91,P-R-49474-10-167,P-D-1141483-1-2,P-D-1098128-4-13\",\""
		"Data.UnsignedInFeatureEnabled\":true,\"Event.Contract\":\"Office.System.Activity\",\"Activity.CV\":\"dZOBjASawU8t1qzrzlIR70.3\",\"Activity.Duration\":1000,\"Activity.Count\":1,\"Activity.AggMode\":0,\"Activity.Success\":true,\"zC.Activity\":\"Office.System.Activity\"}}", 
		LAST);

	web_add_cookie("MUID=03EA0C298FBD6525243718DA8EBB642E; DOMAIN=4.bing.com");

	web_add_cookie("_EDGE_V=1; DOMAIN=4.bing.com");

	web_add_cookie("SRCHD=AF=NOFORM; DOMAIN=4.bing.com");

	web_add_cookie("SRCHUID=V=2&GUID=BDAAF6C669DB45FAA9EA9BC75FEAE9ED&dmnchg=1; DOMAIN=4.bing.com");

	web_add_cookie("ANON=A=F9FC10108F728B0560CFB28DFFFFFFFF; DOMAIN=4.bing.com");

	web_add_cookie("MUIDB=03EA0C298FBD6525243718DA8EBB642E; DOMAIN=4.bing.com");

	web_add_cookie("_clck=khjgs1%7C2%7Cfp1%7C0%7C1711; DOMAIN=4.bing.com");

	web_add_cookie("BCP=AD=1&AL=1&SM=1; DOMAIN=4.bing.com");

	web_add_cookie("ABDEF=V=13&ABDV=13&MRNB=1725887067842&MRB=0; DOMAIN=4.bing.com");

	web_add_cookie("EDGSRCHHPGUSR=CIBV=1.1810.0; DOMAIN=4.bing.com");

	web_add_cookie("USRLOC=HS=1&ELOC=LAT=25.54812240600586|LON=86.50302124023438|N=Khagaria%2C%20Bihar|ELT=2|&CLOC=LAT=25.53877825074653|LON=86.5017169954679|A=733.4464586120832|TS=241009221313|SRC=W&BID=MjQxMDEwMDM0MzAzXzRjNDJjYmYxODJmMjViY2Q1Y2MxZmY1YmU1YjZiYTk0YmQ4YzFlZmJiNmRkNzNiNTE1ZTY2NjM3NDlkZmIwNTE=; DOMAIN=4.bing.com");

	web_add_cookie("SRCHUSR=DOB=20240907&T=1728243350000; DOMAIN=4.bing.com");

	web_add_cookie("_RwBf=r=0&ilt=0&ihpd=0&ispd=0&rc=275&rb=275&gb=0&rg=0&pc=275&mtu=0&rbb=0.0&g=0&cid=&clo=0&v=1&l=2024-10-06T07:00:00.0000000Z&lft=0001-01-01T00:00:00.0000000&aof=0&ard=0001-01-01T00:00:00.0000000&rwdbt=1707244353&rwflt=1717760325&o=0&p=BINGCOPILOTWAITLIST&c=MR000T&t=1577&s=2023-03-28T12:12:07.3083062+00:00&ts=2024-10-06T19:35:52.9103076+00:00&rwred=0&wls=2&wlb=0&wle=0&ccp=2&cpt=0&lka=0&lkt=0&aad=0&TH=&mta=0&e="
		"RBlj30tJKuJbpewRH-a36z1LvS8Eix8LxFgiTaSxGmcDqY_RmGHv3vVLzGMfxn4lVjY2kYg81hPqBz7ymeMVCqeA5IjFrusRhGOC7DJSE6U&A=F9FC10108F728B0560CFB28DFFFFFFFF&rwaul2=0; DOMAIN=4.bing.com");

	web_add_cookie("WLS=C=936a3d3eb3a08966&N=Siddhant; DOMAIN=4.bing.com");

	web_add_cookie("_U=1soO-TayBegtoHjotX2ecUr1rnoK1Qy1w3zKpv0np_sMurN29DyDz8bbqKNAUETWTpnfIYXOEmkIXUBq8v2YjDL1EeYIZJPIiNSx24A7Iv-mSeXFWY_vp75tCu_nyYwOBjx1bKWAuRgnoljA7kbi-WgJb8dlPi22uc6nmzM9kSyvzbC6MbeJymTVE8A3NmBxZCZEOTySlwUzqm64-it--WHHfH0Mqqo53DY7Drj2TnkQ; DOMAIN=4.bing.com");

	web_add_cookie("_SS=SID=1914CA26041C6562089DDF35051A64AC; DOMAIN=4.bing.com");

	lr_think_time(8);

	web_url("test_2", 
		"URL=https://4.bing.com/ipv6test/test", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://edgeservices.bing.com/", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		LAST);

	web_url("4001093852167439374", 
		"URL=https://edge.microsoft.com/autofillservice/core/page/-2883966096674770251/4001093852167439374", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(4);

	lr_start_transaction("1_transaction");

	web_url("Catalog.action;jsessionid=733736DF1D744BCE010B09162A0256BF", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action;jsessionid=733736DF1D744BCE010B09162A0256BF?viewCategory=&categoryId=FISH", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		LAST);

	web_url("collections", 
		"URL=https://www.bingapis.com/api/v7/saves/edge/collections?appid=44A72CAAA7B8B99CBEF405BFAD4E9B24370F2853", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("3_3", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/129.0.0.0 Safari/537.36 Edg/129.0.0.0\",\"identity\":{\"user\":{\"locale\":\"en-GB\"},\"device\":{\"id\":null,\"customId\":\"d7d8896f-5a7e-45fe-8dd9-96ba3c9ffab5\",\"onlineIdTicket\":\"t=GwAWAd9tBAAUanPXNspPGlCQJmFge+TK6U86WWUOZgAAEBwPOASsiXkG3aU+/+j/JVPgADEgcvltHhECdbhDo8yQCCcz0Hne3MBamsMwL2mwVj8xmNzgLwC05pJcB5/xhqV51TNnsu7kxvo7VKWUfO9ZRHIxr2GhFerya6lkfP2i9m5qWCAY+Ie575MqUdZub4ASi+"
		"kG9E9OSp8rjx+LeBddUea0kNr0+OsAr/R/4MeFRtisIBdZJe89SnLvSJnUcuxvYGGAWAAPfSFwvdgcC+k3dHFtVYyVZ953RLSYojregT42kN2sg6sE+9KBobnJFVGZLfY1GGH+rB65YTLI8D8qJrt9S9btvwwTTNJCC1nucstbHgE=&p=\",\"family\":3,\"locale\":\"en-GB\",\"osVersion\":\"10.0.19045.5011.vb_release\",\"browser\":{\"internetExplorer\":\"9.11.19041.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-GB\",\"name\":\"\",\"version\":\"129.0.2792.79 (Official build) \"},\"client\":{\""
		"version\":\"281483724390400\",\"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}}},\"destination\":{\"uri\":\""
		"https://petstore.octoperf.com/actions/Catalog.action;jsessionid=733736DF1D744BCE010B09162A0256BF?viewCategory=&categoryId=FISH\",\"ip\":null},\"referrer\":{\"uri\":\"https://petstore.octoperf.com/actions/Catalog.action\",\"ip\":null},\"type\":\"top\",\"forceServiceDetermination\":false,\"correlationId\":\"4769164d-c007-499b-9168-a8ae7a898646\",\"synchronous\":false}", 
		LAST);

	web_url("collections_2", 
		"URL=https://www.bingapis.com/api/v7/saves/edge/collections?appid=44A72CAAA7B8B99CBEF405BFAD4E9B24370F2853", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("cloud_config_observers.json", 
		"URL=https://static.edge.microsoftapp.net/default/cloud_config_observers.json", 
		"Method=HEAD", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("update", 
		"URL=https://edge.microsoft.com/componentupdater/api/v1/update?cup2key=7:cYNykOq-iyJkWammOvLSoygqc3xQkm710sn7AhWLXJ8&cup2hreq=2f0d8d72fe3387e17965c7d3613888bd2923ec81c469c71bfc00fd7fcfc61748", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"msedge\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"eeobbhfgfagbclfofmgbdfoicabjdbkn\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.88\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.8BFD50D350D47445B57BB1D61BBDE41CEDA7AC43DC81FCE95BF1AC646D97D2A0\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.88\",\"AppMajorVersion\":\"129\",\"AppRollout\":0.88,\"AppVersion\":\"129.0.2792.79\","
		"\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.25\"},\"updatecheck\":{},\"version\":\"1.0.0.8\"},{\"appid\":\"oankkpibpaokgecfckkdkgaoafllipag\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.01\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.44C48B9ECD87ACDDD850F9AA5E1C9D48B7A398DEC13D376CD62D55DADBD464A5\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.01\",\"AppMajorVersion\":\"129\",\""
		"AppRollout\":0.01,\"AppVersion\":\"129.0.2792.79\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.25\"},\"updatecheck\":{},\"version\":\"6498.2023.8.1\"},{\"appid\":\"kpfehajjjbbcifeehjgfgnabifknmdad\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.25\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.42AF0D1905C8F1D8F6167365271C4549A73603B838BA58B9A664C57C00DB1EE5\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":"
		"{\"AppCohort\":\"rrf@0.25\",\"AppMajorVersion\":\"129\",\"AppRollout\":0.25,\"AppVersion\":\"129.0.2792.79\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.25\"},\"updatecheck\":{},\"version\":\"101.0.4906.0\"},{\"appid\":\"ndikpojcjlepofdkaaldkinkjbeeebkl\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.65\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.8657AD8DF1B23B55192C68D707CEBC7653AC24FBD8F4EABDA9F8954FF88F1634\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.65\",\"AppMajorVersion\":\"129\",\"AppRollout\":0.65,\"AppVersion\":\"129.0.2792.79\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.25\"},\"updatecheck\":{},\"version\":\"10.34.0.55\"},{\"appid\":\"fppmbhmldokgmleojlplaaodlkibgikh\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.60\",\"enabled\":true,\"installdate\":-1,\""
		"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.A81D1959892AE4180554347DF1B97834ABBA2E1A5E6B9AEBA000ECEA26EABECC\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.60\",\"AppMajorVersion\":\"129\",\"AppRollout\":0.6,\"AppVersion\":\"129.0.2792.79\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.25\"},\"updatecheck\":{},\"version\":\"1.15.0.1\"},{\"appid\":\"fgbafbciocncjfbbonhocjaohoknlaco\",\"brand\":\"INBX\",\"cohort\""
		":\"rrf@0.79\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.73C9DC3F13E75C1A974790BA29AAB67B445C43B822F7F85C3566699CC3C8CAA0\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.79\",\"AppMajorVersion\":\"129\",\"AppRollout\":0.79,\"AppVersion\":\"129.0.2792.79\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.25\"},\"updatecheck\":{},\"version\":\"2024.9.30.1\"},{\"appid\":\""
		"ahmaebgpfccdhgidjaidaoojjcijckba\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.97\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-GB\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.97\",\"AppMajorVersion\":\"129\",\"AppRollout\":0.97,\"AppVersion\":\"129.0.2792.79\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.25\"},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"alpjnmnfbgfkmmpcfpejmmoebdndedno\",\"brand\":\"INBX\",\""
		"cohort\":\"rrf@0.76\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.3912AE3B63A3E8EE555D67078FBBDDCC8B8441A2EA309A96030A8239637C1476\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.76\",\"AppMajorVersion\":\"129\",\"AppRollout\":0.76,\"AppVersion\":\"129.0.2792.79\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.25\"},\"updatecheck\":{},\"version\":\"13.0.0.0\"},{\"appid\":\""
		"ojblfafjmiikbkepnnolpgbbhejhlcim\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.77\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.C1E0755E98DF77F5A56556098D6898E27C5295377F6F0703EF98DB199920CDB5\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.77\",\"AppMajorVersion\":\"129\",\"AppRollout\":0.77,\"AppVersion\":\"129.0.2792.79\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.25\"},\""
		"updatecheck\":{},\"version\":\"4.10.2830.1\"},{\"appid\":\"kmkacjgmmfchkbeglfbjjeidfckbnkca\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.64\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.CC20B6D106C65C1C3308F7C2E473E79CCCD6804135EC3F8C3C9534356EF84128\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.64\",\"AppMajorVersion\":\"129\",\"AppRollout\":0.64,\"AppVersion\":\"129.0.2792.79\",\"IsInternalUser\":false,\"Priority\":false,\""
		"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.25\"},\"updatecheck\":{},\"version\":\"1.0.0.0\"},{\"appid\":\"mpicjakjneaggahlnmbojhjpnileolnb\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.60\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.CE76D55583A73A20436D496343E63405C4A75595400C1C87230986BDAA4BDB1A\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.60\",\"AppMajorVersion\":\"129\",\"AppRollout\":0.6,\"AppVersion\":\""
		"129.0.2792.79\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.25\"},\"updatecheck\":{},\"version\":\"4.0.1.5\"},{\"appid\":\"ebkkldgijmkljgglkajkjgedfnigiakk\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.54\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.1B2BA8FC90BA68CD057B9CAAFFC218EAD59A23E37F79192ED37D0C3A7A8BAB03\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.54\",\""
		"AppMajorVersion\":\"129\",\"AppRollout\":0.54,\"AppVersion\":\"129.0.2792.79\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.25\"},\"updatecheck\":{},\"version\":\"1.0.0.20\"},{\"appid\":\"lkkdlcloifjinapabfonaibjijloebfb\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.50\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.32EA8DE55A2EEB9A6933D9DDF784B7B6082C8F78E0A0EB6C7CDC592B68202ED9\"}]},\"ping\":{\"r\":-2},\""
		"targetingattributes\":{\"AppCohort\":\"rrf@0.50\",\"AppMajorVersion\":\"129\",\"AppRollout\":0.5,\"AppVersion\":\"129.0.2792.79\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.25\"},\"updatecheck\":{},\"version\":\"4.0.3.2\"},{\"appid\":\"mkcgfaeepibomfapiapjaceihcojnphg\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.67\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-GB\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.67\",\""
		"AppMajorVersion\":\"129\",\"AppRollout\":0.67,\"AppVersion\":\"129.0.2792.79\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.25\"},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"plbmmhnabegcabfbcejohgjpkamkddhn\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.65\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.966A92CBF95906E6821E5F4A3280BD81446F64CA585A60CEB88A0A5C1B913576\"}]},\"ping\":{\"r\":-2},\""
		"targetingattributes\":{\"AppCohort\":\"rrf@0.65\",\"AppMajorVersion\":\"129\",\"AppRollout\":0.65,\"AppVersion\":\"129.0.2792.79\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.25\"},\"updatecheck\":{},\"version\":\"3044\"},{\"appid\":\"omnckhpgfmaoelhddliebabpgblmmnjp\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.92\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\""
		"1.DD91C7C496E4D9E8DF5BEAA3D33D45F9EF196B4F888D0FAC50EAF08CAD6B29D7\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.92\",\"AppMajorVersion\":\"129\",\"AppRollout\":0.92,\"AppVersion\":\"129.0.2792.79\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.25\"},\"updatecheck\":{},\"version\":\"1.0.0.2\"},{\"appid\":\"llmidpclgepbgbgoecnhcmgfhmfplfao\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.16\",\"enabled\":true,\"installdate\":-1,\""
		"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.F377FDB36A132849DFCEC89B61FD9A2503B347F0DC536FA61C980650C292A63D\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.16\",\"AppMajorVersion\":\"129\",\"AppRollout\":0.16,\"AppVersion\":\"129.0.2792.79\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.25\"},\"updatecheck\":{},\"version\":\"2.0.7597.0\"},{\"appid\":\"jcmcegpcehdchljeldgmmfbgcpnmgedo\",\"brand\":\"INBX\",\""
		"cohort\":\"rrf@0.51\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.A9B20C7C6BEE5BFA194A5E7526CA324400BCF130839BB303AB13D7CFAA715AF6\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.51\",\"AppMajorVersion\":\"129\",\"AppRollout\":0.51,\"AppVersion\":\"129.0.2792.79\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.25\"},\"updatecheck\":{},\"version\":\"2024.10.8.1\"},{\"appid\":\""
		"lfmeghnikdkbonehgjihjebgioakijgn\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.91\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.45D9E3EEE2DF150812BCE0EA0ABADF3C6977745CD58A3C5873FE1E0940CD43E2\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.91\",\"AppMajorVersion\":\"129\",\"AppRollout\":0.91,\"AppVersion\":\"129.0.2792.79\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.25\"},\""
		"updatecheck\":{},\"version\":\"2.0.0.16\"},{\"appid\":\"ohckeflnhegojcjlcpbfpciadgikcohk\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.86\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.26123BEF7D73536450862D2C4D44963D720AA80B6FC2D8496F559CB9C1FDEB00\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.86\",\"AppMajorVersion\":\"129\",\"AppRollout\":0.86,\"AppVersion\":\"129.0.2792.79\",\"IsInternalUser\":false,\"Priority\":false,\""
		"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.25\"},\"updatecheck\":{},\"version\":\"0.0.1.4\"},{\"appid\":\"cllppcmmlnkggcmljjfigkcigaajjmid\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.44\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.52E08516DCAB025A84C9666F17D24EDA22D468C4D7CB276F38243440F4DCCE33\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.44\",\"AppMajorVersion\":\"129\",\"AppRollout\":0.44,\"AppVersion\":\""
		"129.0.2792.79\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.25\"},\"updatecheck\":{},\"version\":\"128.18125.18117.513\"},{\"appid\":\"hjaimielcgmceiphgjjfddlgjklfpdei\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.30\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.A00289AF85D31D698A0F6753B6CE67DBAB4BDFF639BDE5FC588A5D5D8A3885D5\"}]},\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.30\",\""
		"AppMajorVersion\":\"129\",\"AppRollout\":0.3,\"AppVersion\":\"129.0.2792.79\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.25\"},\"updatecheck\":{},\"version\":\"1.0.0.5\"},{\"appid\":\"pbdgbpmpeenomngainidcjmopnklimmf\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.85\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.CD01AC863490DA629313B1747627CB54E462DC5FA5C2C27FE1DA2E1B48BD1445\"}]},\"ping\":{\"r\":-2},\""
		"targetingattributes\":{\"AppCohort\":\"rrf@0.85\",\"AppMajorVersion\":\"129\",\"AppRollout\":0.85,\"AppVersion\":\"129.0.2792.79\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.25\"},\"updatecheck\":{},\"version\":\"0.0.0.37\"},{\"appid\":\"jbfaflocpnkhbgcijpkiafdpbjkedane\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.59\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-GB\",\"ping\":{\"r\":-2},\"targetingattributes\":{\"AppCohort\":\"rrf@0.59\",\""
		"AppMajorVersion\":\"129\",\"AppRollout\":0.59,\"AppVersion\":\"129.0.2792.79\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.25\"},\"updatecheck\":{},\"version\":\"1.0.0.26\"},{\"appid\":\"pdfjdcjjjegpclfiilihfkmdfndkneei\",\"brand\":\"INBX\",\"cohort\":\"rrf@0.89\",\"enabled\":true,\"installdate\":-1,\"lang\":\"en-GB\",\"packages\":{\"package\":[{\"fp\":\"1.E16D54ADD609864E09062DF24D74402C09F4FE41A2314E0085FB24152F675BEE\"}]},\"ping\":{\"r\":-2},\""
		"targetingattributes\":{\"AppCohort\":\"rrf@0.89\",\"AppMajorVersion\":\"129\",\"AppRollout\":0.89,\"AppVersion\":\"129.0.2792.79\",\"IsInternalUser\":false,\"Priority\":false,\"Updater\":\"Omaha\",\"UpdaterVersion\":\"1.3.195.25\"},\"updatecheck\":{},\"version\":\"2024.7.24.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":true,\"hw\":{\"avx\":1,\"physmemory\":8,\"sse\":1,\"sse2\":1,\"sse3\":1,\"sse41\":1,\"sse42\":1,\"ssse3\":1},\"ismachine\":1,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\""
		"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19045.5011\"},\"prodversion\":\"129.0.2792.79\",\"protocol\":\"3.1\",\"requestid\":\"{42c3c3e9-1826-496a-952a-ca631a601808}\",\"sessionid\":\"{e145c648-185b-4131-a667-6b96921ffc56}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":1,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.195.25\"},\"updaterversion\":\"129.0.2792.79\"}}", 
		EXTRARES, 
		"Url=/neededge/v1?bucket=15", "Referer=", ENDITEM, 
		LAST);

	web_url("activitystatus", 
		"URL=https://edge.microsoft.com/extensiondiagnostic/v1/activitystatus?x=id%3Dboldmdfoencgjfblcelefkjfafmpiahm%26v%3D0.5.2&x=id%3Dhokifickgkhplphjiodbggjmoafhignh%26v%3D1.2409.603&x=id%3Dllbjbkhnmlidjebalopleeepgdfgcpec%26v%3D6.42.22", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("1.0_2", 
		"URL=https://functional.events.data.microsoft.com/OneCollector/1.0/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t37.inf", 
		"ContentEncoding=deflate", 
		"Mode=HTML", 
		"EncType=application/bond-compact-binary", 
		"BodyBinary=)\\x034.0I8Microsoft.WebBrowser.Personalization.SAN.PageContentInfoq\\xA6\\x9B\\xD9\\xD6\\xF4\\xAB\\xF4\\xDC\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t"
		"\\x1D\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\\x02HP\\x89\\x17HP ENVY Laptop 13-ad1xx\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:edfe3246-7d56-4faf-ad71-23a714b8e3b8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9,"
		"10.0.19041.1.amd64fre.vb_release.191206-1406\\x00\\xCB\\x19\n\\x01\\xA9fW:00061537ac8a115f77e58dc70d7f3ee7f8d300000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2024/10/03:00:47:07!39ec9f!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++-No-3.5.131.1I$5363A4F9-8B81-4121-9744-DC548AF5C7B0q:\\x89$9A50DC5E-9DD6-4D80-A669-9BCEA6720B54\\x00\\xCB!\n\\x01i\\x06+05:30\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n"
		"\\x0F\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$be4aed6d-e1a2-43e9-a9c8-859c0f527e1d\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x10Serp2ndChunkTime0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00\\xF0\\xBF\\x00\\x07SimHash0\\x00\\x91\\xC0\\xEB\\xDC\\xFD\\xFD\\xED\\xDA\\x97\\x16\\x00\\x05TabId0\\x00\\x91\\xB8\\xEA\\x8D\\xCA\\x02\\x00\tTimestampi\\x182024-10-09T22:13:47.195Z\\x00\t"
		"client_id0\\x00\\x91\\x9B\\xEB\\xBD\\x98\\xA2\\xE9\\xEA\\x97G\\x00\\x04muidi 03EA0C298FBD6525243718DA8EBB642E\\x00\rnavigationUrli~https://petstore.octoperf.com/actions/Catalog.action;jsessionid=733736DF1D744BCE010B09162A0256BF?viewCategory=&categoryId=FISH\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)"
		"\\x034.0I8Microsoft.WebBrowser.Personalization.SAN.HistoryAddUrlExq\\xEC\\xBD\\xC5\\xC9\\xF4\\xAB\\xF4\\xDC\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t"
		"\\x1C\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\\x02HP\\x89\\x17HP ENVY Laptop 13-ad1xx\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:edfe3246-7d56-4faf-ad71-23a714b8e3b8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9,"
		"10.0.19041.1.amd64fre.vb_release.191206-1406\\x00\\xCB\\x19\n\\x01\\xA9fW:00061537ac8a115f77e58dc70d7f3ee7f8d300000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2024/10/03:00:47:07!39ec9f!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++-No-3.5.131.1I$5363A4F9-8B81-4121-9744-DC548AF5C7B0q8\\x89$9A50DC5E-9DD6-4D80-A669-9BCEA6720B54\\x00\\xCB!\n\\x01i\\x06+05:30\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n"
		"\\x0C\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$be4aed6d-e1a2-43e9-a9c8-859c0f527e1d\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\tPageTitlei\\x0EJPetStore Demo\\x00\\x05TabId0\\x00\\x91\\xB8\\xEA\\x8D\\xCA\\x02\\x00\tTimestampi\\x182024-10-09T22:13:43.553Z\\x00\tclient_id0\\x00\\x91\\x9B\\xEB\\xBD\\x98\\xA2\\xE9\\xEA\\x97G\\x00\\x04muidi 03EA0C298FBD6525243718DA8EBB642E\\x00\n"
		"pop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x034.0IAMicrosoft.WebBrowser.Personalization.SAN.NavigateCompleteExtendedq\\xF4\\xA1\\xC4\\xC9\\xF4\\xAB\\xF4\\xDC\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t"
		"\\x1B\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\\x02HP\\x89\\x17HP ENVY Laptop 13-ad1xx\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:edfe3246-7d56-4faf-ad71-23a714b8e3b8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9,"
		"10.0.19041.1.amd64fre.vb_release.191206-1406\\x00\\xCB\\x19\n\\x01\\xA9fW:00061537ac8a115f77e58dc70d7f3ee7f8d300000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2024/10/03:00:47:07!39ec9f!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++-No-3.5.131.1I$5363A4F9-8B81-4121-9744-DC548AF5C7B0q6\\x89$9A50DC5E-9DD6-4D80-A669-9BCEA6720B54\\x00\\xCB!\n\\x01i\\x06+05:30\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\\x1C\r"
		"AdjacentTabId0\\x00\\x91\\x01\\x00\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$be4aed6d-e1a2-43e9-a9c8-859c0f527e1d\\x00\tDNSErrors0\\x0C\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x07FrameId0\\x00\\x91\\x04\\x00\\x0EHttpStatusCode0\\x00\\x91\\x90\\x03\\x00\nHubAppName\\x00\t"
		"IsAADUser0\\x0C\\x00\\x13IsAutolaunchSession0\\x0C\\x00\\x0EIsFavoriteItem0\\x0C\\x00\\x14IsImportedFromChrome0\\x0C\\x00\\x18IsSameDocumentNavigation0\\x0C\\x00\rIsTopLevelUrl0\\x0C\\x91\\x02\\x00\\x11NavigationContext0\\x00\\x00\\x10NavigationSource0\\x00\\x00\\x05TabId0\\x00\\x91\\xB8\\xEA\\x8D\\xCA\\x02\\x00\tTimestampi\\x182024-10-09T22:13:43.535Z\\x00\tclient_id0\\x00\\x91\\x9B\\xEB\\xBD\\x98\\xA2\\xE9\\xEA\\x97G\\x00\\x04muidi 03EA0C298FBD6525243718DA8EBB642E\\x00\rnavigationUrli~https://"
		"petstore.octoperf.com/actions/Catalog.action;jsessionid=733736DF1D744BCE010B09162A0256BF?viewCategory=&categoryId=FISH\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\\x08referUrli4https://petstore.octoperf.com/actions/Catalog.action\\x00\\x12referUrlRejectCode0\\x00\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)"
		"\\x034.0I6Microsoft.WebBrowser.Personalization.SAN.HistoryAddUrlq\\xF4\\xA1\\xC4\\xC9\\xF4\\xAB\\xF4\\xDC\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t\\x1A\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\\x02HP\\x89\\x17HP ENVY Laptop "
		"13-ad1xx\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:edfe3246-7d56-4faf-ad71-23a714b8e3b8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9,10.0.19041.1.amd64fre.vb_release.191206-1406\\x00\\xCB\\x19\n\\x01\\xA9fW:00061537ac8a115f77e58dc70d7f3ee7f8d300000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2024/10/03:00:47:07!39ec9f!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++"
		"-No-3.5.131.1I$5363A4F9-8B81-4121-9744-DC548AF5C7B0q4\\x89$9A50DC5E-9DD6-4D80-A669-9BCEA6720B54\\x00\\xCB!\n\\x01i\\x06+05:30\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\\x12\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$be4aed6d-e1a2-43e9-a9c8-859c0f527e1d\\x00\\x12EdgeShoppingToggle0\\x0C\\x91\\x02\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x10IsShoppingDomain0\\x0C\\x00\t"
		"PageTitle\\x00\\x05TabId0\\x00\\x91\\xB8\\xEA\\x8D\\xCA\\x02\\x00\tTimestampi\\x182024-10-09T22:13:43.534Z\\x00\tclient_id0\\x00\\x91\\x9B\\xEB\\xBD\\x98\\xA2\\xE9\\xEA\\x97G\\x00\\x04muidi 03EA0C298FBD6525243718DA8EBB642E\\x00\rnavigationUrli~https://petstore.octoperf.com/actions/Catalog.action;jsessionid=733736DF1D744BCE010B09162A0256BF?viewCategory=&categoryId=FISH\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\\x08referUrli4https://"
		"petstore.octoperf.com/actions/Catalog.action\\x00\\x12referUrlRejectCode0\\x00\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x034.0I8Microsoft.WebBrowser.Personalization.SAN.PageContentInfoq\\xF4\\xA1\\xC4\\xC9\\xF4\\xAB\\xF4\\xDC\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t"
		"\\x19\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\\x02HP\\x89\\x17HP ENVY Laptop 13-ad1xx\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:edfe3246-7d56-4faf-ad71-23a714b8e3b8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9,"
		"10.0.19041.1.amd64fre.vb_release.191206-1406\\x00\\xCB\\x19\n\\x01\\xA9fW:00061537ac8a115f77e58dc70d7f3ee7f8d300000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2024/10/03:00:47:07!39ec9f!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++-No-3.5.131.1I$5363A4F9-8B81-4121-9744-DC548AF5C7B0q2\\x89$9A50DC5E-9DD6-4D80-A669-9BCEA6720B54\\x00\\xCB!\n\\x01i\\x06+05:30\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n"
		"\\x0F\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$be4aed6d-e1a2-43e9-a9c8-859c0f527e1d\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x10Serp2ndChunkTime0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00\\xF0\\xBF\\x00\\x07SimHash0\\x00\\x91\\xE0\\xEA\\x89\\xCB\\xED\\xE1\\xF6\\x95\\xFC\\x01\\x00\\x05TabId0\\x00\\x91\\xB8\\xEA\\x8D\\xCA\\x02\\x00\tTimestampi\\x182024-10-09T22:13:41.400Z\\x00\t"
		"client_id0\\x00\\x91\\x9B\\xEB\\xBD\\x98\\xA2\\xE9\\xEA\\x97G\\x00\\x04muidi 03EA0C298FBD6525243718DA8EBB642E\\x00\rnavigationUrli4https://petstore.octoperf.com/actions/Catalog.action\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x034.0I?Microsoft.WebBrowser.Personalization.SAN.BeforeNavigateExtendedq\\x8C\\x86\\xC3\\xC9\\xF4\\xAB\\xF4\\xDC\\x11\\xA9\"o"
		":70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t\\x18\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\\x02HP\\x89\\x17HP ENVY Laptop 13-ad1xx\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:edfe3246-7d56-4faf-ad71-23a714b8e3b8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n"
		"\\x01\\x89\\x0FWindows Desktop\\xA9,10.0.19041.1.amd64fre.vb_release.191206-1406\\x00\\xCB\\x19\n\\x01\\xA9fW:00061537ac8a115f77e58dc70d7f3ee7f8d300000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2024/10/03:00:47:07!39ec9f!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++-No-3.5.131.1I$5363A4F9-8B81-4121-9744-DC548AF5C7B0q0\\x89$9A50DC5E-9DD6-4D80-A669-9BCEA6720B54\\x00\\xCB!\n\\x01i\\x06+05:30\\x00\\xCB%\n\\x01\\x00\\xC9"
		"<\\x06custom\\xCBF\n\\x01-\t\n\\x17\rAdjacentTabId0\\x00\\x91\\x01\\x00\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$be4aed6d-e1a2-43e9-a9c8-859c0f527e1d\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x07FrameId0\\x00\\x91\\x04\\x00\nHubAppName\\x00\tIsAADUser0\\x0C\\x00\\x13IsAutolaunchSession0\\x0C\\x00\\x0EIsFavoriteItem0\\x0C\\x00\\x14IsImportedFromChrome0\\x0C\\x00\\x18IsSameDocumentNavigation0\\x0C\\x00\r"
		"IsTopLevelUrl0\\x0C\\x91\\x02\\x00\\x11NavigationContext0\\x00\\x00\\x05TabId0\\x00\\x91\\xB8\\xEA\\x8D\\xCA\\x02\\x00\tTimestampi\\x182024-10-09T22:13:41.397Z\\x00\tclient_id0\\x00\\x91\\x9B\\xEB\\xBD\\x98\\xA2\\xE9\\xEA\\x97G\\x00\\x04muidi 03EA0C298FBD6525243718DA8EBB642E\\x00\rnavigationUrli~https://petstore.octoperf.com/actions/Catalog.action;jsessionid=733736DF1D744BCE010B09162A0256BF?viewCategory=&categoryId=FISH\\x00\\x17navigationUrlRejectCode0\\x00\\x00\n"
		"pop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x034.0I?Microsoft.WebBrowser.Personalization.SAN.NavigateElementClickedq\\x8C\\x86\\xC3\\xC9\\xF4\\xAB\\xF4\\xDC\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t"
		"\\x17\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\\x02HP\\x89\\x17HP ENVY Laptop 13-ad1xx\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:edfe3246-7d56-4faf-ad71-23a714b8e3b8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9,10.0.19041.1.amd64fre.vb_release.191206-1406\\x00\\xCB\\x19\n"
		"\\x01\\xA9fW:00061537ac8a115f77e58dc70d7f3ee7f8d300000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2024/10/03:00:47:07!39ec9f!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++-No-3.5.131.1I$5363A4F9-8B81-4121-9744-DC548AF5C7B0q.\\x89$9A50DC5E-9DD6-4D80-A669-9BCEA6720B54\\x00\\xCB!\n\\x01i\\x06+05:30\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n"
		"\\x0E\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$cb3fc602-55d4-45f4-adcb-44284a3bcea8\\x00\\x10DOMAnchorHrefUrli~https://petstore.octoperf.com/actions/Catalog.action;jsessionid=733736DF1D744BCE010B09162A0256BF?viewCategory=&categoryId=FISH\\x00\\x0EDOMElementPathi7A|0||;DIV|7|QuickLinks|;DIV|1|Header|;BODY|2||;HTML|1||\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x05TabId0\\x00\\x91\\xB8\\xEA\\x8D\\xCA\\x02\\x00\t"
		"Timestampi\\x182024-10-09T22:13:41.395Z\\x00\tclient_id0\\x00\\x91\\x9B\\xEB\\xBD\\x98\\xA2\\xE9\\xEA\\x97G\\x00\\x04muidi 03EA0C298FBD6525243718DA8EBB642E\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x034.0IAMicrosoft.WebBrowser.Personalization.SAN.BrowserWindowGainedFocusq\\x8C\\x86\\xC3\\xC9\\xF4\\xAB\\xF4\\xDC\\x11\\xA9\"o"
		":70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t\\x16\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\\x02HP\\x89\\x17HP ENVY Laptop 13-ad1xx\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:edfe3246-7d56-4faf-ad71-23a714b8e3b8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows "
		"Desktop\\xA9,10.0.19041.1.amd64fre.vb_release.191206-1406\\x00\\xCB\\x19\n\\x01\\xA9fW:00061537ac8a115f77e58dc70d7f3ee7f8d300000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2024/10/03:00:47:07!39ec9f!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++-No-3.5.131.1I$5363A4F9-8B81-4121-9744-DC548AF5C7B0q,\\x89$9A50DC5E-9DD6-4D80-A669-9BCEA6720B54\\x00\\xCB!\n\\x01i\\x06+05:30\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t"
		"\n\\x0C\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$cb3fc602-55d4-45f4-adcb-44284a3bcea8\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x11NavigationContext0\\x00\\x00\\x05TabId0\\x00\\x91\\xB8\\xEA\\x8D\\xCA\\x02\\x00\tTimestampi\\x182024-10-09T22:13:41.275Z\\x00\tclient_id0\\x00\\x91\\x9B\\xEB\\xBD\\x98\\xA2\\xE9\\xEA\\x97G\\x00\\x04muidi 03EA0C298FBD6525243718DA8EBB642E\\x00\n"
		"pop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x034.0I?Microsoft.WebBrowser.Personalization.SAN.BrowserWindowLostFocusq\\x8C\\x86\\xC3\\xC9\\xF4\\xAB\\xF4\\xDC\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t"
		"\\x15\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\\x02HP\\x89\\x17HP ENVY Laptop 13-ad1xx\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:edfe3246-7d56-4faf-ad71-23a714b8e3b8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9,10.0.19041.1.amd64fre.vb_release.191206-1406\\x00\\xCB\\x19\n\\x01\\xA9fW"
		":00061537ac8a115f77e58dc70d7f3ee7f8d300000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2024/10/03:00:47:07!39ec9f!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++-No-3.5.131.1I$5363A4F9-8B81-4121-9744-DC548AF5C7B0q*\\x89$9A50DC5E-9DD6-4D80-A669-9BCEA6720B54\\x00\\xCB!\n\\x01i\\x06+05:30\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n"
		"\\x0C\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$cb3fc602-55d4-45f4-adcb-44284a3bcea8\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x11NavigationContext0\\x00\\x00\\x05TabId0\\x00\\x91\\xB8\\xEA\\x8D\\xCA\\x02\\x00\tTimestampi\\x182024-10-09T22:13:35.029Z\\x00\tclient_id0\\x00\\x91\\x9B\\xEB\\xBD\\x98\\xA2\\xE9\\xEA\\x97G\\x00\\x04muidi 03EA0C298FBD6525243718DA8EBB642E\\x00\n"
		"pop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x034.0I8Microsoft.WebBrowser.Personalization.SAN.HistoryAddUrlExq\\x8C\\x86\\xC3\\xC9\\xF4\\xAB\\xF4\\xDC\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t"
		"\\x14\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\\x02HP\\x89\\x17HP ENVY Laptop 13-ad1xx\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:edfe3246-7d56-4faf-ad71-23a714b8e3b8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9,10.0.19041.1.amd64fre.vb_release.191206-1406\\x00\\xCB\\x19\n\\x01\\xA9fW"
		":00061537ac8a115f77e58dc70d7f3ee7f8d300000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2024/10/03:00:47:07!39ec9f!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++-No-3.5.131.1I$5363A4F9-8B81-4121-9744-DC548AF5C7B0q(\\x89$9A50DC5E-9DD6-4D80-A669-9BCEA6720B54\\x00\\xCB!\n\\x01i\\x06+05:30\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n"
		"\\x0C\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$cb3fc602-55d4-45f4-adcb-44284a3bcea8\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\tPageTitlei\\x0EJPetStore Demo\\x00\\x05TabId0\\x00\\x91\\xB8\\xEA\\x8D\\xCA\\x02\\x00\tTimestampi\\x182024-10-09T22:13:26.166Z\\x00\tclient_id0\\x00\\x91\\x9B\\xEB\\xBD\\x98\\xA2\\xE9\\xEA\\x97G\\x00\\x04muidi 03EA0C298FBD6525243718DA8EBB642E\\x00\n"
		"pop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x034.0IAMicrosoft.WebBrowser.Personalization.SAN.NavigateCompleteExtendedq\\xA2\\xEA\\xC1\\xC9\\xF4\\xAB\\xF4\\xDC\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t"
		"\\x13\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\\x02HP\\x89\\x17HP ENVY Laptop 13-ad1xx\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:edfe3246-7d56-4faf-ad71-23a714b8e3b8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9,10.0.19041.1.amd64fre.vb_release.191206-1406\\x00\\xCB\\x19\n\\x01\\xA9fW"
		":00061537ac8a115f77e58dc70d7f3ee7f8d300000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2024/10/03:00:47:07!39ec9f!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++-No-3.5.131.1I$5363A4F9-8B81-4121-9744-DC548AF5C7B0q&\\x89$9A50DC5E-9DD6-4D80-A669-9BCEA6720B54\\x00\\xCB!\n\\x01i\\x06+05:30\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\\x1C\r"
		"AdjacentTabId0\\x00\\x91\\x01\\x00\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$cb3fc602-55d4-45f4-adcb-44284a3bcea8\\x00\tDNSErrors0\\x0C\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x07FrameId0\\x00\\x91\\x04\\x00\\x0EHttpStatusCode0\\x00\\x91\\x90\\x03\\x00\nHubAppName\\x00\t"
		"IsAADUser0\\x0C\\x00\\x13IsAutolaunchSession0\\x0C\\x00\\x0EIsFavoriteItem0\\x0C\\x00\\x14IsImportedFromChrome0\\x0C\\x00\\x18IsSameDocumentNavigation0\\x0C\\x00\rIsTopLevelUrl0\\x0C\\x91\\x02\\x00\\x11NavigationContext0\\x00\\x00\\x10NavigationSource0\\x00\\x00\\x05TabId0\\x00\\x91\\xB8\\xEA\\x8D\\xCA\\x02\\x00\tTimestampi\\x182024-10-09T22:13:26.126Z\\x00\tclient_id0\\x00\\x91\\x9B\\xEB\\xBD\\x98\\xA2\\xE9\\xEA\\x97G\\x00\\x04muidi 03EA0C298FBD6525243718DA8EBB642E\\x00\rnavigationUrli4https://"
		"petstore.octoperf.com/actions/Catalog.action\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\\x08referUrli\\x1Ehttps://petstore.octoperf.com/\\x00\\x12referUrlRejectCode0\\x00\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x034.0I6Microsoft.WebBrowser.Personalization.SAN.HistoryAddUrlq\\xA2\\xEA\\xC1\\xC9\\xF4\\xAB\\xF4\\xDC\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n"
		"\\x01K\\x0B\\x01\t\\x12\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\\x02HP\\x89\\x17HP ENVY Laptop 13-ad1xx\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:edfe3246-7d56-4faf-ad71-23a714b8e3b8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9,10.0.19041.1.amd64fre.vb_release.191206-1406\\x00\\xCB\\x19\n\\x01\\xA9fW"
		":00061537ac8a115f77e58dc70d7f3ee7f8d300000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2024/10/03:00:47:07!39ec9f!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++-No-3.5.131.1I$5363A4F9-8B81-4121-9744-DC548AF5C7B0q$\\x89$9A50DC5E-9DD6-4D80-A669-9BCEA6720B54\\x00\\xCB!\n\\x01i\\x06+05:30\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n"
		"\\x12\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$cb3fc602-55d4-45f4-adcb-44284a3bcea8\\x00\\x12EdgeShoppingToggle0\\x0C\\x91\\x02\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x10IsShoppingDomain0\\x0C\\x00\tPageTitle\\x00\\x05TabId0\\x00\\x91\\xB8\\xEA\\x8D\\xCA\\x02\\x00\tTimestampi\\x182024-10-09T22:13:26.125Z\\x00\tclient_id0\\x00\\x91\\x9B\\xEB\\xBD\\x98\\xA2\\xE9\\xEA\\x97G\\x00\\x04muidi "
		"03EA0C298FBD6525243718DA8EBB642E\\x00\rnavigationUrli4https://petstore.octoperf.com/actions/Catalog.action\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\\x08referUrli\\x1Ehttps://petstore.octoperf.com/\\x00\\x12referUrlRejectCode0\\x00\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x034.0I?Microsoft.WebBrowser.Personalization.SAN.BeforeNavigateExtendedq\\xA2\\xEA\\xC1\\xC9\\xF4\\xAB\\xF4\\xDC\\x11\\xA9\"o"
		":70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t\\x11\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\\x02HP\\x89\\x17HP ENVY Laptop 13-ad1xx\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:edfe3246-7d56-4faf-ad71-23a714b8e3b8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9,"
		"10.0.19041.1.amd64fre.vb_release.191206-1406\\x00\\xCB\\x19\n\\x01\\xA9fW:00061537ac8a115f77e58dc70d7f3ee7f8d300000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2024/10/03:00:47:07!39ec9f!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++-No-3.5.131.1I$5363A4F9-8B81-4121-9744-DC548AF5C7B0q\"\\x89$9A50DC5E-9DD6-4D80-A669-9BCEA6720B54\\x00\\xCB!\n\\x01i\\x06+05:30\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\\x17\r"
		"AdjacentTabId0\\x00\\x91\\x01\\x00\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$cb3fc602-55d4-45f4-adcb-44284a3bcea8\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x07FrameId0\\x00\\x91\\x04\\x00\nHubAppName\\x00\tIsAADUser0\\x0C\\x00\\x13IsAutolaunchSession0\\x0C\\x00\\x0EIsFavoriteItem0\\x0C\\x00\\x14IsImportedFromChrome0\\x0C\\x00\\x18IsSameDocumentNavigation0\\x0C\\x00\r"
		"IsTopLevelUrl0\\x0C\\x91\\x02\\x00\\x11NavigationContext0\\x00\\x00\\x05TabId0\\x00\\x91\\xB8\\xEA\\x8D\\xCA\\x02\\x00\tTimestampi\\x182024-10-09T22:13:13.748Z\\x00\tclient_id0\\x00\\x91\\x9B\\xEB\\xBD\\x98\\xA2\\xE9\\xEA\\x97G\\x00\\x04muidi 03EA0C298FBD6525243718DA8EBB642E\\x00\rnavigationUrli4https://petstore.octoperf.com/actions/Catalog.action\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\t"
		"utc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x034.0I?Microsoft.WebBrowser.Personalization.SAN.NavigateElementClickedq\\xA2\\xEA\\xC1\\xC9\\xF4\\xAB\\xF4\\xDC\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t\\x10\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\\x02HP\\x89\\x17HP ENVY Laptop 13-ad1xx\\x00\\xCB\\x16\n"
		"\\x01\\x00\\xCB\\x17\n\\x01I&r:edfe3246-7d56-4faf-ad71-23a714b8e3b8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9,10.0.19041.1.amd64fre.vb_release.191206-1406\\x00\\xCB\\x19\n\\x01\\xA9fW:00061537ac8a115f77e58dc70d7f3ee7f8d300000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2024/10/03:00:47:07!39ec9f!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++"
		"-No-3.5.131.1I$5363A4F9-8B81-4121-9744-DC548AF5C7B0q \\x89$9A50DC5E-9DD6-4D80-A669-9BCEA6720B54\\x00\\xCB!\n\\x01i\\x06+05:30\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\\x0E\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$7f3f162f-595a-4ada-b0bd-8309daa48d35\\x00\\x10DOMAnchorHrefUrli4https://petstore.octoperf.com/actions/Catalog.action\\x00\\x0EDOMElementPathi,A|0||;P|3||;DIV|1|Content|;BODY|2||;HTML|2||"
		"\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x05TabId0\\x00\\x91\\xB8\\xEA\\x8D\\xCA\\x02\\x00\tTimestampi\\x182024-10-09T22:13:13.742Z\\x00\tclient_id0\\x00\\x91\\x9B\\xEB\\xBD\\x98\\xA2\\xE9\\xEA\\x97G\\x00\\x04muidi 03EA0C298FBD6525243718DA8EBB642E\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)"
		"\\x034.0I8Microsoft.WebBrowser.Personalization.SAN.PageContentInfoq\\xA2\\xEA\\xC1\\xC9\\xF4\\xAB\\xF4\\xDC\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t\\x0F\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\\x02HP\\x89\\x17HP ENVY Laptop 13-ad1xx\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r"
		":edfe3246-7d56-4faf-ad71-23a714b8e3b8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9,10.0.19041.1.amd64fre.vb_release.191206-1406\\x00\\xCB\\x19\n\\x01\\xA9fW:00061537ac8a115f77e58dc70d7f3ee7f8d300000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2024/10/03:00:47:07!39ec9f!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++"
		"-No-3.5.131.1I$5363A4F9-8B81-4121-9744-DC548AF5C7B0q\\x1E\\x89$9A50DC5E-9DD6-4D80-A669-9BCEA6720B54\\x00\\xCB!\n\\x01i\\x06+05:30\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n"
		"\\x0F\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$7f3f162f-595a-4ada-b0bd-8309daa48d35\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x10Serp2ndChunkTime0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00\\xF0\\xBF\\x00\\x07SimHash0\\x00\\x91\\x9B\\xCD\\xF4\\xEA\\x90\\xB2\\xD9\\xC5\\xB7\\x01\\x00\\x05TabId0\\x00\\x91\\xB8\\xEA\\x8D\\xCA\\x02\\x00\tTimestampi\\x182024-10-09T22:13:09.652Z\\x00\t"
		"client_id0\\x00\\x91\\x9B\\xEB\\xBD\\x98\\xA2\\xE9\\xEA\\x97G\\x00\\x04muidi 03EA0C298FBD6525243718DA8EBB642E\\x00\rnavigationUrli\\x1Ehttps://petstore.octoperf.com/\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x034.0I8Microsoft.WebBrowser.Personalization.SAN.HistoryAddUrlExq\\xC0\\xCE\\xC0\\xC9\\xF4\\xAB\\xF4\\xDC\\x11\\xA9\"o"
		":70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t\\x0E\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\\x02HP\\x89\\x17HP ENVY Laptop 13-ad1xx\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:edfe3246-7d56-4faf-ad71-23a714b8e3b8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9,10.0.19041.1.amd64fre.vb_release.191206-1406\\x00\\xCB\\x19\n"
		"\\x01\\xA9fW:00061537ac8a115f77e58dc70d7f3ee7f8d300000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2024/10/03:00:47:07!39ec9f!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++-No-3.5.131.1I$5363A4F9-8B81-4121-9744-DC548AF5C7B0q\\x1C\\x89$9A50DC5E-9DD6-4D80-A669-9BCEA6720B54\\x00\\xCB!\n\\x01i\\x06+05:30\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n"
		"\\x0C\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuid\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\tPageTitlei\\x07New tab\\x00\\x05TabId0\\x00\\x91\\xA4\\xEB\\x8D\\xCA\\x02\\x00\tTimestampi\\x182024-10-09T22:13:03.417Z\\x00\tclient_id0\\x00\\x91\\x9B\\xEB\\xBD\\x98\\xA2\\xE9\\xEA\\x97G\\x00\\x04muidi 03EA0C298FBD6525243718DA8EBB642E\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\t"
		"utc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x034.0I8Microsoft.WebBrowser.Personalization.SAN.HistoryAddUrlExq\\xC0\\xCE\\xC0\\xC9\\xF4\\xAB\\xF4\\xDC\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t\r\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\\x02HP\\x89\\x17HP ENVY Laptop 13-ad1xx\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r"
		":edfe3246-7d56-4faf-ad71-23a714b8e3b8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9,10.0.19041.1.amd64fre.vb_release.191206-1406\\x00\\xCB\\x19\n\\x01\\xA9fW:00061537ac8a115f77e58dc70d7f3ee7f8d300000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2024/10/03:00:47:07!39ec9f!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++"
		"-No-3.5.131.1I$5363A4F9-8B81-4121-9744-DC548AF5C7B0q\\x1A\\x89$9A50DC5E-9DD6-4D80-A669-9BCEA6720B54\\x00\\xCB!\n\\x01i\\x06+05:30\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\\x0C\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuid\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\tPageTitlei\redge://newtab\\x00\\x05TabId0\\x00\\x91\\xA4\\xEB\\x8D\\xCA\\x02\\x00\tTimestampi\\x182024-10-09T22:13:03.416Z\\x00\t"
		"client_id0\\x00\\x91\\x9B\\xEB\\xBD\\x98\\xA2\\xE9\\xEA\\x97G\\x00\\x04muidi 03EA0C298FBD6525243718DA8EBB642E\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x034.0I8Microsoft.WebBrowser.Personalization.SAN.HistoryAddUrlExq\\xC0\\xCE\\xC0\\xC9\\xF4\\xAB\\xF4\\xDC\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t"
		"\\x0C\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\\x02HP\\x89\\x17HP ENVY Laptop 13-ad1xx\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:edfe3246-7d56-4faf-ad71-23a714b8e3b8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9,10.0.19041.1.amd64fre.vb_release.191206-1406\\x00\\xCB\\x19\n\\x01\\xA9fW:00061537ac8a115f77e58dc70d7f3ee7f8d300000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709"
		"!msedge.exe\\xC9\\x06%2024/10/03:00:47:07!39ec9f!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++-No-3.5.131.1I$5363A4F9-8B81-4121-9744-DC548AF5C7B0q\\x18\\x89$9A50DC5E-9DD6-4D80-A669-9BCEA6720B54\\x00\\xCB!\n\\x01i\\x06+05:30\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n"
		"\\x0C\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$7f3f162f-595a-4ada-b0bd-8309daa48d35\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\tPageTitlei\\x0EJPetStore Demo\\x00\\x05TabId0\\x00\\x91\\xB8\\xEA\\x8D\\xCA\\x02\\x00\tTimestampi\\x182024-10-09T22:13:00.077Z\\x00\tclient_id0\\x00\\x91\\x9B\\xEB\\xBD\\x98\\xA2\\xE9\\xEA\\x97G\\x00\\x04muidi 03EA0C298FBD6525243718DA8EBB642E\\x00\n"
		"pop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x034.0IAMicrosoft.WebBrowser.Personalization.SAN.NavigateCompleteExtendedq\\xC0\\xCE\\xC0\\xC9\\xF4\\xAB\\xF4\\xDC\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t\\x0B\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\\x02HP\\x89\\x17HP ENVY Laptop "
		"13-ad1xx\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:edfe3246-7d56-4faf-ad71-23a714b8e3b8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9,10.0.19041.1.amd64fre.vb_release.191206-1406\\x00\\xCB\\x19\n\\x01\\xA9fW:00061537ac8a115f77e58dc70d7f3ee7f8d300000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2024/10/03:00:47:07!39ec9f!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++"
		"-No-3.5.131.1I$5363A4F9-8B81-4121-9744-DC548AF5C7B0q\\x16\\x89$9A50DC5E-9DD6-4D80-A669-9BCEA6720B54\\x00\\xCB!\n\\x01i\\x06+05:30\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\\x1C\rAdjacentTabId0\\x00\\x91\\x01\\x00\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$7f3f162f-595a-4ada-b0bd-8309daa48d35\\x00\t"
		"DNSErrors0\\x0C\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x07FrameId0\\x00\\x91\\x04\\x00\\x0EHttpStatusCode0\\x00\\x91\\x90\\x03\\x00\nHubAppName\\x00\tIsAADUser0\\x0C\\x00\\x13IsAutolaunchSession0\\x0C\\x00\\x0EIsFavoriteItem0\\x0C\\x00\\x14IsImportedFromChrome0\\x0C\\x00\\x18IsSameDocumentNavigation0\\x0C\\x00\rIsTopLevelUrl0\\x0C\\x91\\x02\\x00\\x11NavigationContext0\\x00\\x00\\x10NavigationSource0\\x00\\x91\\x0C\\x00\\x05TabId0\\x00\\x91\\xB8\\xEA\\x8D\\xCA\\x02\\x00\t"
		"Timestampi\\x182024-10-09T22:13:00.034Z\\x00\tclient_id0\\x00\\x91\\x9B\\xEB\\xBD\\x98\\xA2\\xE9\\xEA\\x97G\\x00\\x04muidi 03EA0C298FBD6525243718DA8EBB642E\\x00\rnavigationUrli\\x1Ehttps://petstore.octoperf.com/\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\\x08referUrl\\x00\\x12referUrlRejectCode0\\x00\\x91\\xD6\\x01\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)"
		"\\x034.0I6Microsoft.WebBrowser.Personalization.SAN.HistoryAddUrlq\\xC0\\xB2\\xBF\\xC9\\xF4\\xAB\\xF4\\xDC\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t\n\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\\x02HP\\x89\\x17HP ENVY Laptop 13-ad1xx\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:edfe3246-7d56-4faf-ad71-23a714b8e3b8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows "
		"Desktop\\xA9,10.0.19041.1.amd64fre.vb_release.191206-1406\\x00\\xCB\\x19\n\\x01\\xA9fW:00061537ac8a115f77e58dc70d7f3ee7f8d300000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2024/10/03:00:47:07!39ec9f!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++-No-3.5.131.1I$5363A4F9-8B81-4121-9744-DC548AF5C7B0q\\x14\\x89$9A50DC5E-9DD6-4D80-A669-9BCEA6720B54\\x00\\xCB!\n\\x01i\\x06+05:30\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n"
		"\\x01-\t\n\\x12\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$7f3f162f-595a-4ada-b0bd-8309daa48d35\\x00\\x12EdgeShoppingToggle0\\x0C\\x91\\x02\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x10IsShoppingDomain0\\x0C\\x00\tPageTitle\\x00\\x05TabId0\\x00\\x91\\xB8\\xEA\\x8D\\xCA\\x02\\x00\tTimestampi\\x182024-10-09T22:13:00.033Z\\x00\tclient_id0\\x00\\x91\\x9B\\xEB\\xBD\\x98\\xA2\\xE9\\xEA\\x97G\\x00\\x04muidi "
		"03EA0C298FBD6525243718DA8EBB642E\\x00\rnavigationUrli\\x1Ehttps://petstore.octoperf.com/\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\\x08referUrl\\x00\\x12referUrlRejectCode0\\x00\\x91\\xD6\\x01\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x034.0IAMicrosoft.WebBrowser.Personalization.SAN.NavigateCompleteExtendedq\\xC0\\xB2\\xBF\\xC9\\xF4\\xAB\\xF4\\xDC\\x11\\xA9\"o"
		":70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t\t\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\\x02HP\\x89\\x17HP ENVY Laptop 13-ad1xx\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:edfe3246-7d56-4faf-ad71-23a714b8e3b8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9,10.0.19041.1.amd64fre.vb_release.191206-1406\\x00\\xCB\\x19\n\\x01\\xA9fW:00061537ac8a115f77e58dc70d7f3ee7f8d300000904"
		"!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2024/10/03:00:47:07!39ec9f!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++-No-3.5.131.1I$5363A4F9-8B81-4121-9744-DC548AF5C7B0q\\x12\\x89$9A50DC5E-9DD6-4D80-A669-9BCEA6720B54\\x00\\xCB!\n\\x01i\\x06+05:30\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\\x1C\r"
		"AdjacentTabId0\\x00\\x91\\xB8\\xEA\\x8D\\xCA\\x02\\x00\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$eb81d713-434a-487c-ac86-4614ceb7d76c\\x00\tDNSErrors0\\x0C\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x07FrameId0\\x00\\x91\\x08\\x00\\x0EHttpStatusCode0\\x00\\x91\\x90\\x03\\x00\nHubAppNamei\\x07Copilot\\x00\t"
		"IsAADUser0\\x0C\\x00\\x13IsAutolaunchSession0\\x0C\\x00\\x0EIsFavoriteItem0\\x0C\\x00\\x14IsImportedFromChrome0\\x0C\\x00\\x18IsSameDocumentNavigation0\\x0C\\x00\rIsTopLevelUrl0\\x0C\\x91\\x02\\x00\\x11NavigationContext0\\x00\\x91\\x04\\x00\\x10NavigationSource0\\x00\\x00\\x05TabId0\\x00\\x91\\x01\\x00\tTimestampi\\x182024-10-09T22:12:48.403Z\\x00\tclient_id0\\x00\\x91\\x9B\\xEB\\xBD\\x98\\xA2\\xE9\\xEA\\x97G\\x00\\x04muidi 03EA0C298FBD6525243718DA8EBB642E\\x00\r"
		"navigationUrl\\x00\\x17navigationUrlRejectCode0\\x00\\x91\\x04\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\\x08referUrl\\x00\\x12referUrlRejectCode0\\x00\\x91\\xD6\\x01\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x034.0I?Microsoft.WebBrowser.Personalization.SAN.BeforeNavigateExtendedq\\xC0\\xB2\\xBF\\xC9\\xF4\\xAB\\xF4\\xDC\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t"
		"\\x08\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\\x02HP\\x89\\x17HP ENVY Laptop 13-ad1xx\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:edfe3246-7d56-4faf-ad71-23a714b8e3b8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9,10.0.19041.1.amd64fre.vb_release.191206-1406\\x00\\xCB\\x19\n\\x01\\xA9fW:00061537ac8a115f77e58dc70d7f3ee7f8d300000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2024/10/03:00:47:07!39ec9f"
		"!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++-No-3.5.131.1I$5363A4F9-8B81-4121-9744-DC548AF5C7B0q\\x10\\x89$9A50DC5E-9DD6-4D80-A669-9BCEA6720B54\\x00\\xCB!\n\\x01i\\x06+05:30\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\\x17\r"
		"AdjacentTabId0\\x00\\x91\\xB8\\xEA\\x8D\\xCA\\x02\\x00\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$eb81d713-434a-487c-ac86-4614ceb7d76c\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x07FrameId0\\x00\\x91\\x08\\x00\nHubAppNamei\\x07Copilot\\x00\tIsAADUser0\\x0C\\x00\\x13IsAutolaunchSession0\\x0C\\x00\\x0EIsFavoriteItem0\\x0C\\x00\\x14IsImportedFromChrome0\\x0C\\x00\\x18IsSameDocumentNavigation0\\x0C\\x00\r"
		"IsTopLevelUrl0\\x0C\\x91\\x02\\x00\\x11NavigationContext0\\x00\\x91\\x04\\x00\\x05TabId0\\x00\\x91\\x01\\x00\tTimestampi\\x182024-10-09T22:12:48.325Z\\x00\tclient_id0\\x00\\x91\\x9B\\xEB\\xBD\\x98\\xA2\\xE9\\xEA\\x97G\\x00\\x04muidi 03EA0C298FBD6525243718DA8EBB642E\\x00\rnavigationUrl\\x00\\x17navigationUrlRejectCode0\\x00\\x91\\x04\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)"
		"\\x034.0IAMicrosoft.WebBrowser.Personalization.SAN.BrowserWindowGainedFocusq\\xC0\\xB2\\xBF\\xC9\\xF4\\xAB\\xF4\\xDC\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t\\x07\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\\x02HP\\x89\\x17HP ENVY Laptop 13-ad1xx\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:edfe3246-7d56-4faf-ad71-23a714b8e3b8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9,"
		"10.0.19041.1.amd64fre.vb_release.191206-1406\\x00\\xCB\\x19\n\\x01\\xA9fW:00061537ac8a115f77e58dc70d7f3ee7f8d300000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2024/10/03:00:47:07!39ec9f!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++-No-3.5.131.1I$5363A4F9-8B81-4121-9744-DC548AF5C7B0q\\x0E\\x89$9A50DC5E-9DD6-4D80-A669-9BCEA6720B54\\x00\\xCB!\n\\x01i\\x06+05:30\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n"
		"\\x0C\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$7f3f162f-595a-4ada-b0bd-8309daa48d35\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x11NavigationContext0\\x00\\x00\\x05TabId0\\x00\\x91\\xB8\\xEA\\x8D\\xCA\\x02\\x00\tTimestampi\\x182024-10-09T22:12:46.029Z\\x00\tclient_id0\\x00\\x91\\x9B\\xEB\\xBD\\x98\\xA2\\xE9\\xEA\\x97G\\x00\\x04muidi 03EA0C298FBD6525243718DA8EBB642E\\x00\n"
		"pop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x034.0I3Microsoft.WebBrowser.Personalization.SAN.TabCreatedq\\xC0\\xB2\\xBF\\xC9\\xF4\\xAB\\xF4\\xDC\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t\\x06\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\\x02HP\\x89\\x17HP ENVY Laptop 13-ad1xx\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r"
		":edfe3246-7d56-4faf-ad71-23a714b8e3b8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9,10.0.19041.1.amd64fre.vb_release.191206-1406\\x00\\xCB\\x19\n\\x01\\xA9fW:00061537ac8a115f77e58dc70d7f3ee7f8d300000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2024/10/03:00:47:07!39ec9f!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++"
		"-No-3.5.131.1I$5363A4F9-8B81-4121-9744-DC548AF5C7B0q\\x0C\\x89$9A50DC5E-9DD6-4D80-A669-9BCEA6720B54\\x00\\xCB!\n\\x01i\\x06+05:30\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\\x0E\r"
		"AdjacentTabId0\\x00\\x91\\x01\\x00\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$7f3f162f-595a-4ada-b0bd-8309daa48d35\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x11NavigationContext0\\x00\\x00\\x10SplitScreenFlags0\\x00\\x00\\x05TabId0\\x00\\x91\\xB8\\xEA\\x8D\\xCA\\x02\\x00\tTimestampi\\x182024-10-09T22:12:46.011Z\\x00\tclient_id0\\x00\\x91\\x9B\\xEB\\xBD\\x98\\xA2\\xE9\\xEA\\x97G\\x00\\x04muidi "
		"03EA0C298FBD6525243718DA8EBB642E\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x034.0I?Microsoft.WebBrowser.Personalization.SAN.BeforeNavigateExtendedq\\xC0\\xB2\\xBF\\xC9\\xF4\\xAB\\xF4\\xDC\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t\\x05\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\\x02HP\\x89\\x17HP ENVY Laptop 13-ad1xx\\x00\\xCB\\x16\n"
		"\\x01\\x00\\xCB\\x17\n\\x01I&r:edfe3246-7d56-4faf-ad71-23a714b8e3b8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9,10.0.19041.1.amd64fre.vb_release.191206-1406\\x00\\xCB\\x19\n\\x01\\xA9fW:00061537ac8a115f77e58dc70d7f3ee7f8d300000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2024/10/03:00:47:07!39ec9f!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++"
		"-No-3.5.131.1I$5363A4F9-8B81-4121-9744-DC548AF5C7B0q\n\\x89$9A50DC5E-9DD6-4D80-A669-9BCEA6720B54\\x00\\xCB!\n\\x01i\\x06+05:30\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\\x17\rAdjacentTabId0\\x00\\x91\\x01\\x00\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$7f3f162f-595a-4ada-b0bd-8309daa48d35\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x07FrameId0\\x00\\x91\\x04\\x00\nHubAppName\\x00\t"
		"IsAADUser0\\x0C\\x00\\x13IsAutolaunchSession0\\x0C\\x00\\x0EIsFavoriteItem0\\x0C\\x00\\x14IsImportedFromChrome0\\x0C\\x00\\x18IsSameDocumentNavigation0\\x0C\\x00\rIsTopLevelUrl0\\x0C\\x91\\x02\\x00\\x11NavigationContext0\\x00\\x00\\x05TabId0\\x00\\x91\\xB8\\xEA\\x8D\\xCA\\x02\\x00\tTimestampi\\x182024-10-09T22:12:45.959Z\\x00\tclient_id0\\x00\\x91\\x9B\\xEB\\xBD\\x98\\xA2\\xE9\\xEA\\x97G\\x00\\x04muidi 03EA0C298FBD6525243718DA8EBB642E\\x00\rnavigationUrli\\x1Dhttp://petstore.octoperf.com/"
		"\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x034.0I=Microsoft.WebBrowser.Personalization.SAN.PreferenceSanConsentq\\xC0\\xB2\\xBF\\xC9\\xF4\\xAB\\xF4\\xDC\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t\\x04\\x0510001\\x0510001\\x0510001\\x0510001i\\x02HP\\x89\\x17HP ENVY Laptop 13-ad1xx\\x00\\xCB\\x16\n"
		"\\x01\\x00\\xCB\\x17\n\\x01I&r:edfe3246-7d56-4faf-ad71-23a714b8e3b8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9,10.0.19041.1.amd64fre.vb_release.191206-1406\\x00\\xCB\\x19\n\\x01\\xA9fW:00061537ac8a115f77e58dc70d7f3ee7f8d300000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2024/10/03:00:47:07!39ec9f!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++"
		"-No-3.5.131.1I$5363A4F9-8B81-4121-9744-DC548AF5C7B0q\\x08\\x89$9A50DC5E-9DD6-4D80-A669-9BCEA6720B54\\x00\\xCB!\n\\x01i\\x06+05:30\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\n\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\nSanConsent0\\x0C\\x91\\x02\\x00\tTimestampi\\x182024-10-09T22:12:45.801Z\\x00\tclient_id0\\x00\\x91\\x9B\\xEB\\xBD\\x98\\xA2\\xE9\\xEA\\x97G\\x00\\x04muidi "
		"03EA0C298FBD6525243718DA8EBB642E\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x034.0I4Microsoft.WebBrowser.Personalization.SAN.BrowserInfoq\\xC0\\xB2\\xBF\\xC9\\xF4\\xAB\\xF4\\xDC\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t\\x03\\x0510001\\x0510001\\x0510001i\\x02HP\\x89\\x17HP ENVY Laptop 13-ad1xx\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r"
		":edfe3246-7d56-4faf-ad71-23a714b8e3b8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9,10.0.19041.1.amd64fre.vb_release.191206-1406\\x00\\xCB\\x19\n\\x01\\xA9fW:00061537ac8a115f77e58dc70d7f3ee7f8d300000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2024/10/03:00:47:07!39ec9f!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++"
		"-No-3.5.131.1I$5363A4F9-8B81-4121-9744-DC548AF5C7B0q\\x06\\x89$9A50DC5E-9DD6-4D80-A669-9BCEA6720B54\\x00\\xCB!\n\\x01i\\x06+05:30\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\n\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x08Languagei\\x05en-GB\\x00\tTimestampi\\x182024-10-09T22:12:45.801Z\\x00\tclient_id0\\x00\\x91\\x9B\\xEB\\xBD\\x98\\xA2\\xE9\\xEA\\x97G\\x00\\x04muidi "
		"03EA0C298FBD6525243718DA8EBB642E\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x034.0IOMicrosoft.WebBrowser.Personalization.SAN.PreferenceDefaultSearchProviderCurrentq\\xC0\\xB2\\xBF\\xC9\\xF4\\xAB\\xF4\\xDC\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t\\x02\\x0510001\\x0510001i\\x02HP\\x89\\x17HP ENVY Laptop 13-ad1xx\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n"
		"\\x01I&r:edfe3246-7d56-4faf-ad71-23a714b8e3b8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9,10.0.19041.1.amd64fre.vb_release.191206-1406\\x00\\xCB\\x19\n\\x01\\xA9fW:00061537ac8a115f77e58dc70d7f3ee7f8d300000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2024/10/03:00:47:07!39ec9f!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++"
		"-No-3.5.131.1I$5363A4F9-8B81-4121-9744-DC548AF5C7B0q\\x04\\x89$9A50DC5E-9DD6-4D80-A669-9BCEA6720B54\\x00\\xCB!\n\\x01i\\x06+05:30\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\\x0B\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x14DSPCurrentRejectCode0\\x00\\x00\rDSPCurrentUrliU{bing:baseURL}search?q={searchTerms}&{bing:cvid}{bing:msb}{google:assistedQueryStats}\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\tTimestampi\\x182024-10-09T22:12"
		":45.801Z\\x00\tclient_id0\\x00\\x91\\x9B\\xEB\\xBD\\x98\\xA2\\xE9\\xEA\\x97G\\x00\\x04muidi 03EA0C298FBD6525243718DA8EBB642E\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x034.0IBMicrosoft.WebBrowser.Personalization.SAN.PreferenceHomepageCurrentq\\xC0\\xB2\\xBF\\xC9\\xF4\\xAB\\xF4\\xDC\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t"
		"\\x01\\x0510001i\\x02HP\\x89\\x17HP ENVY Laptop 13-ad1xx\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:edfe3246-7d56-4faf-ad71-23a714b8e3b8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9,10.0.19041.1.amd64fre.vb_release.191206-1406\\x00\\xCB\\x19\n\\x01\\xA9fW:00061537ac8a115f77e58dc70d7f3ee7f8d300000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2024/10/03:00:47:07!39ec9f!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n"
		"\\x01)\\x1CEVT-Windows-C++-No-3.5.131.1I$5363A4F9-8B81-4121-9744-DC548AF5C7B0q\\x02\\x89$9A50DC5E-9DD6-4D80-A669-9BCEA6720B54\\x00\\xCB!\n\\x01i\\x06+05:30\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\n\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x19HomepageCurrentRejectCode0\\x00\\x00\\x12HomepageCurrentUrli\\x16http://www.google.com/\\x00\tTimestampi\\x182024-10-09T22:12:45.800Z\\x00\t"
		"client_id0\\x00\\x91\\x9B\\xEB\\xBD\\x98\\xA2\\xE9\\xEA\\x97G\\x00\\x04muidi 03EA0C298FBD6525243718DA8EBB642E\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00", 
		LAST);

	web_url("Catalog.action_2", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action?viewProduct=&productId=FI-FW-01", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action;jsessionid=733736DF1D744BCE010B09162A0256BF?viewCategory=&categoryId=FISH", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("3_4", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/129.0.0.0 Safari/537.36 Edg/129.0.0.0\",\"identity\":{\"user\":{\"locale\":\"en-GB\"},\"device\":{\"id\":null,\"customId\":\"17963b7b-128c-46d6-9737-1c8358f94be7\",\"onlineIdTicket\":\"t=GwAWAd9tBAAUanPXNspPGlCQJmFge+TK6U86WWUOZgAAEBwPOASsiXkG3aU+/+j/JVPgADEgcvltHhECdbhDo8yQCCcz0Hne3MBamsMwL2mwVj8xmNzgLwC05pJcB5/xhqV51TNnsu7kxvo7VKWUfO9ZRHIxr2GhFerya6lkfP2i9m5qWCAY+Ie575MqUdZub4ASi+"
		"kG9E9OSp8rjx+LeBddUea0kNr0+OsAr/R/4MeFRtisIBdZJe89SnLvSJnUcuxvYGGAWAAPfSFwvdgcC+k3dHFtVYyVZ953RLSYojregT42kN2sg6sE+9KBobnJFVGZLfY1GGH+rB65YTLI8D8qJrt9S9btvwwTTNJCC1nucstbHgE=&p=\",\"family\":3,\"locale\":\"en-GB\",\"osVersion\":\"10.0.19045.5011.vb_release\",\"browser\":{\"internetExplorer\":\"9.11.19041.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-GB\",\"name\":\"\",\"version\":\"129.0.2792.79 (Official build) \"},\"client\":{\""
		"version\":\"281483724390400\",\"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}}},\"destination\":{\"uri\":\""
		"https://petstore.octoperf.com/actions/Catalog.action?viewProduct=&productId=FI-FW-01\",\"ip\":null},\"referrer\":{\"uri\":\"https://petstore.octoperf.com/actions/Catalog.action;jsessionid=733736DF1D744BCE010B09162A0256BF?viewCategory=&categoryId=FISH\",\"ip\":null},\"type\":\"top\",\"forceServiceDetermination\":false,\"correlationId\":\"d47e55c9-0f85-4888-b69f-cc1af75010a6\",\"synchronous\":false}", 
		LAST);

	web_custom_request("command_3", 
		"URL=https://edge.microsoft.com/sync/v1/feeds/me/syncEntities/command/?client=Chromium&client_id=woyHE6xU2pJWSn1hOBnDEA%3D%3D", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t40.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x18woyHE6xU2pJWSn1hOBnDEA==\\x10c\\x18\\x01\"\\x9B\n\n\\xA1\\x07\n$7d9dc125-3bc4-4ce0-bdf6-2595a507bb7e \\x9A\\xB6\\xE0\\x9A\\xA72(\\xE4\\x92\\xE2\\x9A\\xA720\\x8B\\xE4\\xDE\\x9A\\xA72:\\x0FDESKTOP-B023V6C\\x90\\x01\\x00\\xAA\\x01\\xAC\\x06\\xBA\\xBC\\x18\\xA7\\x06\n\\x18woyHE6xU2pJWSn1hOBnDEA==\\x1A\\x88\\x06\\x08\\x9C\\xF5\\x86\\xA5\\x01\\x10\\x9A\\xF5\\x86\\xA5\\x01\\x18\\x00 \\x03(\\x002\\x00:Y\\x12\\x1Ehttps://petstore.octoperf.com/\\x1A\\x00\"\\x0EJPetStore "
		"Demo0\\x06@\\x03H\\xF4\\xE3\\xDE\\x9A\\xA72P\\x00X\\x00`\\x00x\\xEE\\xC6\\xD5\\xB8\\x8D\\xD5\\xE0\\x17\\xA0\\x01\\xC8\\x01\\xC8\\x01\\x06\\xD0\\x01\\x01\\xC8>\\x00:\\x8D\\x01\\x124https://petstore.octoperf.com/actions/Catalog.action\\x1A\\x1Ehttps://petstore.octoperf.com/\"\\x0EJPetStore Demo0\\x00@\\x10H\\xE4\\xAF\\xE0\\x9A\\xA72P\\x00X\\x00`\\x00x\\xEB\\xA6\\x8E\\xC5\\x8D\\xD5\\xE0\\x17\\xA0\\x01\\xC8\\x01\\xC8\\x01\\x06\\xD0\\x01\\x00\\xC8>\\x00:\\xED\\x01\\x12~https://petstore.octoperf.com/"
		"actions/Catalog.action;jsessionid=733736DF1D744BCE010B09162A0256BF?viewCategory=&categoryId=FISH\\x1A4https://petstore.octoperf.com/actions/Catalog.action\"\\x0EJPetStore Demo0\\x00@\\x12H\\xE3\\xB7\\xE1\\x9A\\xA72P\\x00X\\x00`\\x00x\\xE9\\xDE\\xB4\\xCD\\x8D\\xD5\\xE0\\x17\\xA0\\x01\\xC8\\x01\\xC8\\x01\\x06\\xD0\\x01\\x01\\xC8>\\x00:\\x8D\\x02\\x12Thttps://petstore.octoperf.com/actions/Catalog.action?viewProduct=&productId=FI-FW-01\\x1A~https://petstore.octoperf.com/actions/Catalog.action;"
		"jsessionid=733736DF1D744BCE010B09162A0256BF?viewCategory=&categoryId=FISH\"\\x0EJPetStore Demo0\\x00@\\x14H\\xC0\\x91\\xE2\\x9A\\xA72P\\x00X\\x00`\\x00x\\xA2\\xE2\\xF1\\xD2\\x8D\\xD5\\xE0\\x17\\xA0\\x01\\xC8\\x01\\xC8\\x01\\x06\\xD0\\x01\\x01\\xC8>\\x00h\\x01p\\xD6\\xF6\\xDD\\x9A\\xA72 \\x00\\xBA\\x01\\x1C3MdCymJceGxvCwoARU+thDH+s0s=\\xC2>\\x00\\x12\\x18woyHE6xU2pJWSn1hOBnDEA==\""
		"X\\x08\\x88\\x81\\x02\\x08\\xC6\\xA6\\x02\\x08\\xB1\\xE6\\x02\\x08\\xCF\\xF3\\x03\\x08\\xF1\\xF7\\x01\\x08\\xCD\\xBE\\x02\\x08\\xF7\\xF7\\x02\\x08\\xC7\\x87\\x03\\x08\\x9F\\xEF\\x05\\x08\\xEB\\x95\t\\x08\\x9A\\xB7\t\\x08\\xEE\\xF7!\\x08\\xFC\\xDE$\\x08\\xC9\\x8B)\\x08\\xA1\\xDD'\\x08\\xD0\\xAF:\\x08\\xA9\\xF0O\\x08\\xF1\\xBFG\\x08\\xB5\\xDAD\\x08\\x81\\xF5\\x02\\x18\\x00 \\x010\\x01@\\x002\\x80\\x02n~uxT4+irOyR3[FF#t>X)a?+?u:K&6*e874wDBBl%EMVk6\"@8&4<UE?s\"]~L&N@p(#4.@t|Pz=(x=_l]0`+I'DR;Nz7W$&S5}_"
		">\"$/({0}Fb\"hz+J!)5RkC7D:8B4h1)`/=5+M\\\\g|>g-7Mrm9g1sdsPK6mK@.hl2io$j%>_&l~w)BhAEMi#AV}kRDTn<fTr>W{2IhXq([0AXx7_{&9^ (*uL&9 5|@t^VE\\\\]2geEgD-u/iBVR3Z:$Sj`jQp?w'#y:\\x1FProductionEnvironmentDefinitionR\\xD0\\x01\nB\\x12@8\\x00@\\x03R\\x02\\x10\\x01`\\x0C\\x92\\x03\\x18PN8p07v2E6BDy/g3CkemXv.1\\x92\\x03\\x18opWtP61sOJGoS/UsnS07ZF.1\n\\x04\\x18\\xC7\\x87\\x03\n\\x04\\x18\\xC7\\x87\\x03\n\\x04\\x18\\xC7\\x87\\x03\n\\x04\\x18\\xC7\\x87\\x03\n\\x04\\x18\\xC7\\x87\\x03\n\\x04\\x18\\xC7\\x87\\x03\n"
		"\\x04\\x18\\xC7\\x87\\x03\n\\x04\\x18\\xC7\\x87\\x03\n\\x04\\x18\\xC7\\x87\\x03\n\\x04\\x18\\xC7\\x87\\x03\n\\x04\\x18\\xC7\\x87\\x03\n\\x04\\x18\\xC7\\x87\\x03\n\\x04\\x18\\xC7\\x87\\x03\\x10\\x01\\x18\\x00 \\x00(\\x88\\x81\\x02(\\xC6\\xA6\\x02(\\xB1\\xE6\\x02(\\xCD\\xBE\\x02(\\xF7\\xF7\\x02(\\x9F\\xEF\\x05(\\xEB\\x95\t(\\xFC\\xDE$(\\xC9\\x8B)(\\xA1\\xDD'(\\xD0\\xAF:(\\xF1\\xBFG(\\xB5\\xDAD(\\x81\\xF5\\x02Z\\x00b\ndummytokenj\\x02\\x10\\x01r\\x1Cchr:woyHE6xU2pJWSn1hOBnDEA==", 
		LAST);

	web_custom_request("1.0_3", 
		"URL=https://functional.events.data.microsoft.com/OneCollector/1.0/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t41.inf", 
		"ContentEncoding=deflate", 
		"Mode=HTML", 
		"EncType=application/bond-compact-binary", 
		"BodyBinary=)\\x034.0I?Microsoft.WebBrowser.Personalization.SAN.BeforeNavigateExtendedq\\x80\\x97\\xEA\\x99\\xF5\\xAB\\xF4\\xDC\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t"
		"\\x1F\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\\x02HP\\x89\\x17HP ENVY Laptop 13-ad1xx\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:edfe3246-7d56-4faf-ad71-23a714b8e3b8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n"
		"\\x01\\x89\\x0FWindows Desktop\\xA9,10.0.19041.1.amd64fre.vb_release.191206-1406\\x00\\xCB\\x19\n\\x01\\xA9fW:00061537ac8a115f77e58dc70d7f3ee7f8d300000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2024/10/03:00:47:07!39ec9f!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++-No-3.5.131.1I$5363A4F9-8B81-4121-9744-DC548AF5C7B0q>\\x89$9A50DC5E-9DD6-4D80-A669-9BCEA6720B54\\x00\\xCB!\n\\x01i\\x06+05:30\\x00\\xCB%\n\\x01\\x00\\xC9"
		"<\\x06custom\\xCBF\n\\x01-\t\n\\x17\rAdjacentTabId0\\x00\\x91\\x01\\x00\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$cd5ad1ce-8faf-4979-9255-58582d2198a7\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x07FrameId0\\x00\\x91\\x04\\x00\nHubAppName\\x00\tIsAADUser0\\x0C\\x00\\x13IsAutolaunchSession0\\x0C\\x00\\x0EIsFavoriteItem0\\x0C\\x00\\x14IsImportedFromChrome0\\x0C\\x00\\x18IsSameDocumentNavigation0\\x0C\\x00\r"
		"IsTopLevelUrl0\\x0C\\x91\\x02\\x00\\x11NavigationContext0\\x00\\x00\\x05TabId0\\x00\\x91\\xB8\\xEA\\x8D\\xCA\\x02\\x00\tTimestampi\\x182024-10-09T22:13:54.234Z\\x00\tclient_id0\\x00\\x91\\x9B\\xEB\\xBD\\x98\\xA2\\xE9\\xEA\\x97G\\x00\\x04muidi 03EA0C298FBD6525243718DA8EBB642E\\x00\rnavigationUrliThttps://petstore.octoperf.com/actions/Catalog.action?viewProduct=&productId=FI-FW-01\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\t"
		"utc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x034.0I?Microsoft.WebBrowser.Personalization.SAN.NavigateElementClickedq\\xC6\\xE4\\xE1\\x99\\xF5\\xAB\\xF4\\xDC\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t"
		"\\x1E\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\\x02HP\\x89\\x17HP ENVY Laptop 13-ad1xx\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:edfe3246-7d56-4faf-ad71-23a714b8e3b8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows "
		"Desktop\\xA9,10.0.19041.1.amd64fre.vb_release.191206-1406\\x00\\xCB\\x19\n\\x01\\xA9fW:00061537ac8a115f77e58dc70d7f3ee7f8d300000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2024/10/03:00:47:07!39ec9f!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++-No-3.5.131.1I$5363A4F9-8B81-4121-9744-DC548AF5C7B0q<\\x89$9A50DC5E-9DD6-4D80-A669-9BCEA6720B54\\x00\\xCB!\n\\x01i\\x06+05:30\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t"
		"\n\\x0E\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$be4aed6d-e1a2-43e9-a9c8-859c0f527e1d\\x00\\x10DOMAnchorHrefUrliThttps://petstore.octoperf.com/actions/Catalog.action?viewProduct=&productId=FI-FW-01\\x00\\x0EDOMElementPathiWA|0||;TD|1||;TR|6||;TBODY|1||;TABLE|3||;DIV|3|Catalog|;DIV|3|Content|;BODY|2||;HTML|1||\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x05TabId0\\x00\\x91\\xB8\\xEA\\x8D\\xCA\\x02\\x00\t"
		"Timestampi\\x182024-10-09T22:13:54.227Z\\x00\tclient_id0\\x00\\x91\\x9B\\xEB\\xBD\\x98\\xA2\\xE9\\xEA\\x97G\\x00\\x04muidi 03EA0C298FBD6525243718DA8EBB642E\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00", 
		LAST);

	web_url("find-assets", 
		"URL=https://edge.microsoft.com/entityextractiontemplates/api/v1/assets/find-assets?name=extraction.proactiveProduct.en-us&version=5.*.*&channel=stable&key=d414dd4f9db345fa8003e32adc81b362", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t42.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("telemetry", 
		"URL=https://www.bing.com/api/shopping/v1/telemetry", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t43.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"ClientContext\":{\"AppInfoClientName\":\"Edge\",\"BuildVersion\":\"129.0.2792.79\",\"EnabledServiceFlights\":\"\",\"JSVersion\":\"\"},\"EventTime\":1.728512037354e+12,\"EventType\":\"EdgeTrigger\",\"ImpressionId\":\"\",\"JsonData\":\"{\\\"EdgeTrigger\\\":\\\"msEdgeShoppingPdpReached\\\"}\",\"LogLevel\":\"Information\",\"Message\":\"\"}", 
		LAST);

	web_custom_request("1.0_4", 
		"URL=https://functional.events.data.microsoft.com/OneCollector/1.0/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t44.inf", 
		"ContentEncoding=deflate", 
		"Mode=HTML", 
		"EncType=application/bond-compact-binary", 
		"BodyBinary=)\\x034.0I8Microsoft.WebBrowser.Personalization.SAN.PageContentInfoq\\xBE\\xC0\\xF6\\xA2\\xF5\\xAB\\xF4\\xDC\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t"
		"#\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\\x02HP\\x89\\x17HP ENVY Laptop 13-ad1xx\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r"
		":edfe3246-7d56-4faf-ad71-23a714b8e3b8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9,10.0.19041.1.amd64fre.vb_release.191206-1406\\x00\\xCB\\x19\n\\x01\\xA9fW:00061537ac8a115f77e58dc70d7f3ee7f8d300000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2024/10/03:00:47:07!39ec9f!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++"
		"-No-3.5.131.1I$5363A4F9-8B81-4121-9744-DC548AF5C7B0qF\\x89$9A50DC5E-9DD6-4D80-A669-9BCEA6720B54\\x00\\xCB!\n\\x01i\\x06+05:30\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n"
		"\\x0F\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$cd5ad1ce-8faf-4979-9255-58582d2198a7\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x10Serp2ndChunkTime0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00\\xF0\\xBF\\x00\\x07SimHash0\\x00\\x91\\xC0\\xEB\\x99\\xCF\\xFD\\xCD\\xFA\\xB6\\x9C\\x01\\x00\\x05TabId0\\x00\\x91\\xB8\\xEA\\x8D\\xCA\\x02\\x00\tTimestampi\\x182024-10-09T22:13:55.188Z\\x00\t"
		"client_id0\\x00\\x91\\x9B\\xEB\\xBD\\x98\\xA2\\xE9\\xEA\\x97G\\x00\\x04muidi 03EA0C298FBD6525243718DA8EBB642E\\x00\rnavigationUrliThttps://petstore.octoperf.com/actions/Catalog.action?viewProduct=&productId=FI-FW-01\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)"
		"\\x034.0I8Microsoft.WebBrowser.Personalization.SAN.HistoryAddUrlExq\\xCE\\xE6\\xD5\\xA1\\xF5\\xAB\\xF4\\xDC\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t\""
		"\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\\x02HP\\x89\\x17HP ENVY Laptop 13-ad1xx\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r"
		":edfe3246-7d56-4faf-ad71-23a714b8e3b8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9,10.0.19041.1.amd64fre.vb_release.191206-1406\\x00\\xCB\\x19\n\\x01\\xA9fW:00061537ac8a115f77e58dc70d7f3ee7f8d300000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2024/10/03:00:47:07!39ec9f!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++"
		"-No-3.5.131.1I$5363A4F9-8B81-4121-9744-DC548AF5C7B0qD\\x89$9A50DC5E-9DD6-4D80-A669-9BCEA6720B54\\x00\\xCB!\n\\x01i\\x06+05:30\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\\x0C\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$cd5ad1ce-8faf-4979-9255-58582d2198a7\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\tPageTitlei\\x0EJPetStore Demo\\x00\\x05TabId0\\x00\\x91\\xB8\\xEA\\x8D\\xCA\\x02\\x00\tTimestampi\\x182024-10-09T22:13"
		":55.057Z\\x00\tclient_id0\\x00\\x91\\x9B\\xEB\\xBD\\x98\\xA2\\xE9\\xEA\\x97G\\x00\\x04muidi 03EA0C298FBD6525243718DA8EBB642E\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x034.0IAMicrosoft.WebBrowser.Personalization.SAN.NavigateCompleteExtendedq\\x8E\\x93\\xB6\\xA1\\xF5\\xAB\\xF4\\xDC\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t"
		"!\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\\x02HP\\x89\\x17HP ENVY Laptop 13-ad1xx\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:edfe3246-7d56-4faf-ad71-23a714b8e3b8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n"
		"\\x01\\x89\\x0FWindows Desktop\\xA9,10.0.19041.1.amd64fre.vb_release.191206-1406\\x00\\xCB\\x19\n\\x01\\xA9fW:00061537ac8a115f77e58dc70d7f3ee7f8d300000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2024/10/03:00:47:07!39ec9f!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++-No-3.5.131.1I$5363A4F9-8B81-4121-9744-DC548AF5C7B0qB\\x89$9A50DC5E-9DD6-4D80-A669-9BCEA6720B54\\x00\\xCB!\n\\x01i\\x06+05:30\\x00\\xCB%\n\\x01\\x00\\xC9"
		"<\\x06custom\\xCBF\n\\x01-\t\n\\x1C\rAdjacentTabId0\\x00\\x91\\x01\\x00\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$cd5ad1ce-8faf-4979-9255-58582d2198a7\\x00\tDNSErrors0\\x0C\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x07FrameId0\\x00\\x91\\x04\\x00\\x0EHttpStatusCode0\\x00\\x91\\x90\\x03\\x00\nHubAppName\\x00\t"
		"IsAADUser0\\x0C\\x00\\x13IsAutolaunchSession0\\x0C\\x00\\x0EIsFavoriteItem0\\x0C\\x00\\x14IsImportedFromChrome0\\x0C\\x00\\x18IsSameDocumentNavigation0\\x0C\\x00\rIsTopLevelUrl0\\x0C\\x91\\x02\\x00\\x11NavigationContext0\\x00\\x00\\x10NavigationSource0\\x00\\x00\\x05TabId0\\x00\\x91\\xB8\\xEA\\x8D\\xCA\\x02\\x00\tTimestampi\\x182024-10-09T22:13:55.020Z\\x00\tclient_id0\\x00\\x91\\x9B\\xEB\\xBD\\x98\\xA2\\xE9\\xEA\\x97G\\x00\\x04muidi 03EA0C298FBD6525243718DA8EBB642E\\x00\rnavigationUrliThttps://"
		"petstore.octoperf.com/actions/Catalog.action?viewProduct=&productId=FI-FW-01\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\\x08referUrli~https://petstore.octoperf.com/actions/Catalog.action;jsessionid=733736DF1D744BCE010B09162A0256BF?viewCategory=&categoryId=FISH\\x00\\x12referUrlRejectCode0\\x00\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)"
		"\\x034.0I6Microsoft.WebBrowser.Personalization.SAN.HistoryAddUrlq\\x82\\xF7\\xB4\\xA1\\xF5\\xAB\\xF4\\xDC\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t "
		"\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\\x02HP\\x89\\x17HP ENVY Laptop 13-ad1xx\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:edfe3246-7d56-4faf-ad71-23a714b8e3b8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n"
		"\\x01\\x89\\x0FWindows Desktop\\xA9,10.0.19041.1.amd64fre.vb_release.191206-1406\\x00\\xCB\\x19\n\\x01\\xA9fW:00061537ac8a115f77e58dc70d7f3ee7f8d300000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2024/10/03:00:47:07!39ec9f!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++-No-3.5.131.1I$5363A4F9-8B81-4121-9744-DC548AF5C7B0q@\\x89$9A50DC5E-9DD6-4D80-A669-9BCEA6720B54\\x00\\xCB!\n\\x01i\\x06+05:30\\x00\\xCB%\n\\x01\\x00\\xC9"
		"<\\x06custom\\xCBF\n\\x01-\t\n\\x12\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$cd5ad1ce-8faf-4979-9255-58582d2198a7\\x00\\x12EdgeShoppingToggle0\\x0C\\x91\\x02\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x10IsShoppingDomain0\\x0C\\x00\tPageTitle\\x00\\x05TabId0\\x00\\x91\\xB8\\xEA\\x8D\\xCA\\x02\\x00\tTimestampi\\x182024-10-09T22:13:55.018Z\\x00\tclient_id0\\x00\\x91\\x9B\\xEB\\xBD\\x98\\xA2\\xE9\\xEA\\x97G\\x00\\x04muidi "
		"03EA0C298FBD6525243718DA8EBB642E\\x00\rnavigationUrliThttps://petstore.octoperf.com/actions/Catalog.action?viewProduct=&productId=FI-FW-01\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\\x08referUrli~https://petstore.octoperf.com/actions/Catalog.action;jsessionid=733736DF1D744BCE010B09162A0256BF?viewCategory=&categoryId=FISH\\x00\\x12referUrlRejectCode0\\x00\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00", 
		LAST);

	web_custom_request("3_5", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/129.0.0.0 Safari/537.36 Edg/129.0.0.0\",\"identity\":{\"user\":{\"locale\":\"en-GB\"},\"device\":{\"id\":null,\"customId\":\"e26b06d6-5d3f-4fb7-9da4-7be9844ce943\",\"onlineIdTicket\":\"t=GwAWAd9tBAAUanPXNspPGlCQJmFge+TK6U86WWUOZgAAEBwPOASsiXkG3aU+/+j/JVPgADEgcvltHhECdbhDo8yQCCcz0Hne3MBamsMwL2mwVj8xmNzgLwC05pJcB5/xhqV51TNnsu7kxvo7VKWUfO9ZRHIxr2GhFerya6lkfP2i9m5qWCAY+Ie575MqUdZub4ASi+"
		"kG9E9OSp8rjx+LeBddUea0kNr0+OsAr/R/4MeFRtisIBdZJe89SnLvSJnUcuxvYGGAWAAPfSFwvdgcC+k3dHFtVYyVZ953RLSYojregT42kN2sg6sE+9KBobnJFVGZLfY1GGH+rB65YTLI8D8qJrt9S9btvwwTTNJCC1nucstbHgE=&p=\",\"family\":3,\"locale\":\"en-GB\",\"osVersion\":\"10.0.19045.5011.vb_release\",\"browser\":{\"internetExplorer\":\"9.11.19041.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-GB\",\"name\":\"\",\"version\":\"129.0.2792.79 (Official build) \"},\"client\":{\""
		"version\":\"281483724390400\",\"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}}},\"destination\":{\"uri\":\""
		"https://petstore.octoperf.com/actions/Cart.action?addItemToCart=&workingItemId=EST-4\",\"ip\":null},\"referrer\":{\"uri\":\"https://petstore.octoperf.com/actions/Catalog.action?viewProduct=&productId=FI-FW-01\",\"ip\":null},\"type\":\"top\",\"forceServiceDetermination\":false,\"correlationId\":\"7b76c8b3-2d1f-4e52-ba67-60d21e5e344f\",\"synchronous\":false}", 
		LAST);

	web_url("Cart.action", 
		"URL=https://petstore.octoperf.com/actions/Cart.action?addItemToCart=&workingItemId=EST-4", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action?viewProduct=&productId=FI-FW-01", 
		"Snapshot=t46.inf", 
		"Mode=HTML", 
		LAST);

	web_url("4001093852167439374%7C-4773625253421578413", 
		"URL=https://edge.microsoft.com/autofillservice/core/page/-2883966096674770251/4001093852167439374%7C-4773625253421578413", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t47.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("1.0_5", 
		"URL=https://functional.events.data.microsoft.com/OneCollector/1.0/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t48.inf", 
		"ContentEncoding=deflate", 
		"Mode=HTML", 
		"EncType=application/bond-compact-binary", 
		"BodyBinary=)\\x034.0I8Microsoft.WebBrowser.Personalization.SAN.HistoryAddUrlExq\\xAC\\xAD\\xA5\\xD2\\xF5\\xAB\\xF4\\xDC\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t"
		"(\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\\x02HP\\x89\\x17HP ENVY Laptop 13-ad1xx\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r"
		":edfe3246-7d56-4faf-ad71-23a714b8e3b8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9,10.0.19041.1.amd64fre.vb_release.191206-1406\\x00\\xCB\\x19\n\\x01\\xA9fW:00061537ac8a115f77e58dc70d7f3ee7f8d300000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2024/10/03:00:47:07!39ec9f!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++"
		"-No-3.5.131.1I$5363A4F9-8B81-4121-9744-DC548AF5C7B0qP\\x89$9A50DC5E-9DD6-4D80-A669-9BCEA6720B54\\x00\\xCB!\n\\x01i\\x06+05:30\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\\x0C\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$a6736ec5-902e-46b7-b890-30c2ada0b149\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\tPageTitlei\\x0EJPetStore Demo\\x00\\x05TabId0\\x00\\x91\\xB8\\xEA\\x8D\\xCA\\x02\\x00\tTimestampi\\x182024-10-09T22:14"
		":00.154Z\\x00\tclient_id0\\x00\\x91\\x9B\\xEB\\xBD\\x98\\xA2\\xE9\\xEA\\x97G\\x00\\x04muidi 03EA0C298FBD6525243718DA8EBB642E\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x034.0IAMicrosoft.WebBrowser.Personalization.SAN.NavigateCompleteExtendedq\\xDC\\xE4\\x8B\\xD2\\xF5\\xAB\\xF4\\xDC\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t"
		"'\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\\x02HP\\x89\\x17HP ENVY Laptop 13-ad1xx\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r"
		":edfe3246-7d56-4faf-ad71-23a714b8e3b8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9,10.0.19041.1.amd64fre.vb_release.191206-1406\\x00\\xCB\\x19\n\\x01\\xA9fW:00061537ac8a115f77e58dc70d7f3ee7f8d300000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2024/10/03:00:47:07!39ec9f!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++"
		"-No-3.5.131.1I$5363A4F9-8B81-4121-9744-DC548AF5C7B0qN\\x89$9A50DC5E-9DD6-4D80-A669-9BCEA6720B54\\x00\\xCB!\n\\x01i\\x06+05:30\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\\x1C\rAdjacentTabId0\\x00\\x91\\x01\\x00\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$a6736ec5-902e-46b7-b890-30c2ada0b149\\x00\t"
		"DNSErrors0\\x0C\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x07FrameId0\\x00\\x91\\x04\\x00\\x0EHttpStatusCode0\\x00\\x91\\x90\\x03\\x00\nHubAppName\\x00\tIsAADUser0\\x0C\\x00\\x13IsAutolaunchSession0\\x0C\\x00\\x0EIsFavoriteItem0\\x0C\\x00\\x14IsImportedFromChrome0\\x0C\\x00\\x18IsSameDocumentNavigation0\\x0C\\x00\rIsTopLevelUrl0\\x0C\\x91\\x02\\x00\\x11NavigationContext0\\x00\\x00\\x10NavigationSource0\\x00\\x00\\x05TabId0\\x00\\x91\\xB8\\xEA\\x8D\\xCA\\x02\\x00\tTimestampi\\x182024-10-09T22"
		":14:00.133Z\\x00\tclient_id0\\x00\\x91\\x9B\\xEB\\xBD\\x98\\xA2\\xE9\\xEA\\x97G\\x00\\x04muidi 03EA0C298FBD6525243718DA8EBB642E\\x00\rnavigationUrliThttps://petstore.octoperf.com/actions/Cart.action?addItemToCart=&workingItemId=EST-4\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\\x08referUrliThttps://petstore.octoperf.com/actions/Catalog.action?viewProduct=&productId=FI-FW-01\\x00\\x12referUrlRejectCode0\\x00\\x00\t"
		"utc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x034.0I6Microsoft.WebBrowser.Personalization.SAN.HistoryAddUrlq\\xF8\\xC8\\x8A\\xD2\\xF5\\xAB\\xF4\\xDC\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t&"
		"\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\\x02HP\\x89\\x17HP ENVY Laptop 13-ad1xx\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r"
		":edfe3246-7d56-4faf-ad71-23a714b8e3b8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9,10.0.19041.1.amd64fre.vb_release.191206-1406\\x00\\xCB\\x19\n\\x01\\xA9fW:00061537ac8a115f77e58dc70d7f3ee7f8d300000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2024/10/03:00:47:07!39ec9f!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++"
		"-No-3.5.131.1I$5363A4F9-8B81-4121-9744-DC548AF5C7B0qL\\x89$9A50DC5E-9DD6-4D80-A669-9BCEA6720B54\\x00\\xCB!\n\\x01i\\x06+05:30\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\\x12\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$a6736ec5-902e-46b7-b890-30c2ada0b149\\x00\\x12EdgeShoppingToggle0\\x0C\\x91\\x02\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x10IsShoppingDomain0\\x0C\\x00\t"
		"PageTitle\\x00\\x05TabId0\\x00\\x91\\xB8\\xEA\\x8D\\xCA\\x02\\x00\tTimestampi\\x182024-10-09T22:14:00.132Z\\x00\tclient_id0\\x00\\x91\\x9B\\xEB\\xBD\\x98\\xA2\\xE9\\xEA\\x97G\\x00\\x04muidi 03EA0C298FBD6525243718DA8EBB642E\\x00\rnavigationUrliThttps://petstore.octoperf.com/actions/Cart.action?addItemToCart=&workingItemId=EST-4\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\\x08referUrliThttps://petstore.octoperf.com/actions/Catalog.action?"
		"viewProduct=&productId=FI-FW-01\\x00\\x12referUrlRejectCode0\\x00\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x034.0I?Microsoft.WebBrowser.Personalization.SAN.BeforeNavigateExtendedq\\xD4\\xAA\\xCF\\xCB\\xF5\\xAB\\xF4\\xDC\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t"
		"%\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\\x02HP\\x89\\x17HP ENVY Laptop 13-ad1xx\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r"
		":edfe3246-7d56-4faf-ad71-23a714b8e3b8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9,10.0.19041.1.amd64fre.vb_release.191206-1406\\x00\\xCB\\x19\n\\x01\\xA9fW:00061537ac8a115f77e58dc70d7f3ee7f8d300000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2024/10/03:00:47:07!39ec9f!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++"
		"-No-3.5.131.1I$5363A4F9-8B81-4121-9744-DC548AF5C7B0qJ\\x89$9A50DC5E-9DD6-4D80-A669-9BCEA6720B54\\x00\\xCB!\n\\x01i\\x06+05:30\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\\x17\rAdjacentTabId0\\x00\\x91\\x01\\x00\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$a6736ec5-902e-46b7-b890-30c2ada0b149\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x07FrameId0\\x00\\x91\\x04\\x00\nHubAppName\\x00\t"
		"IsAADUser0\\x0C\\x00\\x13IsAutolaunchSession0\\x0C\\x00\\x0EIsFavoriteItem0\\x0C\\x00\\x14IsImportedFromChrome0\\x0C\\x00\\x18IsSameDocumentNavigation0\\x0C\\x00\rIsTopLevelUrl0\\x0C\\x91\\x02\\x00\\x11NavigationContext0\\x00\\x00\\x05TabId0\\x00\\x91\\xB8\\xEA\\x8D\\xCA\\x02\\x00\tTimestampi\\x182024-10-09T22:13:59.454Z\\x00\tclient_id0\\x00\\x91\\x9B\\xEB\\xBD\\x98\\xA2\\xE9\\xEA\\x97G\\x00\\x04muidi 03EA0C298FBD6525243718DA8EBB642E\\x00\rnavigationUrliThttps://petstore.octoperf.com/actions/"
		"Cart.action?addItemToCart=&workingItemId=EST-4\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x034.0I?Microsoft.WebBrowser.Personalization.SAN.NavigateElementClickedq\\x94\\xA8\\xC6\\xCB\\xF5\\xAB\\xF4\\xDC\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t"
		"$\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\\x02HP\\x89\\x17HP ENVY Laptop 13-ad1xx\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r"
		":edfe3246-7d56-4faf-ad71-23a714b8e3b8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9,10.0.19041.1.amd64fre.vb_release.191206-1406\\x00\\xCB\\x19\n\\x01\\xA9fW:00061537ac8a115f77e58dc70d7f3ee7f8d300000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2024/10/03:00:47:07!39ec9f!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++"
		"-No-3.5.131.1I$5363A4F9-8B81-4121-9744-DC548AF5C7B0qH\\x89$9A50DC5E-9DD6-4D80-A669-9BCEA6720B54\\x00\\xCB!\n\\x01i\\x06+05:30\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\\x0E\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$cd5ad1ce-8faf-4979-9255-58582d2198a7\\x00\\x10DOMAnchorHrefUrliThttps://petstore.octoperf.com/actions/Cart.action?addItemToCart=&workingItemId=EST-4\\x00\\x0EDOMElementPathi]A|0||Button;TD|9||;TR|2||;"
		"TBODY|1||;TABLE|3||;DIV|3|Catalog|;DIV|3|Content|;BODY|2||;HTML|1||\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x05TabId0\\x00\\x91\\xB8\\xEA\\x8D\\xCA\\x02\\x00\tTimestampi\\x182024-10-09T22:13:59.447Z\\x00\tclient_id0\\x00\\x91\\x9B\\xEB\\xBD\\x98\\xA2\\xE9\\xEA\\x97G\\x00\\x04muidi 03EA0C298FBD6525243718DA8EBB642E\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00", 
		LAST);

	web_url("Order.action", 
		"URL=https://petstore.octoperf.com/actions/Order.action?newOrderForm=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Cart.action?addItemToCart=&workingItemId=EST-4", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("1.0_6", 
		"URL=https://functional.events.data.microsoft.com/OneCollector/1.0/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t50.inf", 
		"ContentEncoding=deflate", 
		"Mode=HTML", 
		"EncType=application/bond-compact-binary", 
		"BodyBinary=)\\x034.0I8Microsoft.WebBrowser.Personalization.SAN.PageContentInfoq\\xC4\\xB1\\x94\\xDD\\xF5\\xAB\\xF4\\xDC\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t)"
		"\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\\x02HP\\x89\\x17HP ENVY Laptop 13-ad1xx\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r"
		":edfe3246-7d56-4faf-ad71-23a714b8e3b8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9,10.0.19041.1.amd64fre.vb_release.191206-1406\\x00\\xCB\\x19\n\\x01\\xA9fW:00061537ac8a115f77e58dc70d7f3ee7f8d300000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2024/10/03:00:47:07!39ec9f!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++"
		"-No-3.5.131.1I$5363A4F9-8B81-4121-9744-DC548AF5C7B0qR\\x89$9A50DC5E-9DD6-4D80-A669-9BCEA6720B54\\x00\\xCB!\n\\x01i\\x06+05:30\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n"
		"\\x0F\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$a6736ec5-902e-46b7-b890-30c2ada0b149\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x10Serp2ndChunkTime0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00\\xF0\\xBF\\x00\\x07SimHash0\\x00\\x91\\xC0\\xE7\\x8B\\xC3\\xED\\xC7\\xD2\\xB7\\xDE\\x01\\x00\\x05TabId0\\x00\\x91\\xB8\\xEA\\x8D\\xCA\\x02\\x00\tTimestampi\\x182024-10-09T22:14:01.294Z\\x00\t"
		"client_id0\\x00\\x91\\x9B\\xEB\\xBD\\x98\\xA2\\xE9\\xEA\\x97G\\x00\\x04muidi 03EA0C298FBD6525243718DA8EBB642E\\x00\rnavigationUrliThttps://petstore.octoperf.com/actions/Cart.action?addItemToCart=&workingItemId=EST-4\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00", 
		LAST);

	web_custom_request("3_6", 
		"URL=https://nav-edge.smartscreen.microsoft.com/api/browser/edge/navigate/3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/129.0.0.0 Safari/537.36 Edg/129.0.0.0\",\"identity\":{\"user\":{\"locale\":\"en-GB\"},\"device\":{\"id\":null,\"customId\":\"8e3bf92b-91c9-4599-9071-1433921d57ec\",\"onlineIdTicket\":\"t=GwAWAd9tBAAUanPXNspPGlCQJmFge+TK6U86WWUOZgAAEBwPOASsiXkG3aU+/+j/JVPgADEgcvltHhECdbhDo8yQCCcz0Hne3MBamsMwL2mwVj8xmNzgLwC05pJcB5/xhqV51TNnsu7kxvo7VKWUfO9ZRHIxr2GhFerya6lkfP2i9m5qWCAY+Ie575MqUdZub4ASi+"
		"kG9E9OSp8rjx+LeBddUea0kNr0+OsAr/R/4MeFRtisIBdZJe89SnLvSJnUcuxvYGGAWAAPfSFwvdgcC+k3dHFtVYyVZ953RLSYojregT42kN2sg6sE+9KBobnJFVGZLfY1GGH+rB65YTLI8D8qJrt9S9btvwwTTNJCC1nucstbHgE=&p=\",\"family\":3,\"locale\":\"en-GB\",\"osVersion\":\"10.0.19045.5011.vb_release\",\"browser\":{\"internetExplorer\":\"9.11.19041.0\"},\"netJoinStatus\":2,\"enterprise\":{},\"cloudSku\":false,\"architecture\":9},\"caller\":{\"locale\":\"en-GB\",\"name\":\"\",\"version\":\"129.0.2792.79 (Official build) \"},\"client\":{\""
		"version\":\"281483724390400\",\"data\":{\"topTraffic\":\"638004170464094982\",\"customSynchronousLookupUris\":\"0\",\"edgeSettings\":\"2.0-48b11410dc937a1723bf4c5ad33ecdb286d8ec69544241bc373f753e64b396c1\",\"customSettings\":\"F95BA787499AB4FA9EFFF472CE383A14\"}}},\"config\":{\"user\":{\"uriReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}},\"device\":{\"appControl\":{\"level\":\"anywhere\"},\"appReputation\":{\"enforcedByPolicy\":false,\"level\":\"warn\"}}},\"destination\":{\"uri\":\""
		"https://petstore.octoperf.com/actions/Order.action?newOrderForm=\",\"ip\":null},\"referrer\":{\"uri\":\"https://petstore.octoperf.com/actions/Cart.action?addItemToCart=&workingItemId=EST-4\",\"ip\":null},\"type\":\"top\",\"forceServiceDetermination\":false,\"correlationId\":\"c750070f-2900-4489-8a32-fb5522fa4b6d\",\"synchronous\":false}", 
		LAST);

	web_custom_request("1.0_7", 
		"URL=https://functional.events.data.microsoft.com/OneCollector/1.0/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t52.inf", 
		"ContentEncoding=deflate", 
		"Mode=HTML", 
		"EncType=application/bond-compact-binary", 
		"BodyBinary=)\\x034.0I?Microsoft.WebBrowser.Personalization.SAN.BeforeNavigateExtendedq\\xE2\\xDE\\xF6\\xFA\\xF5\\xAB\\xF4\\xDC\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t+"
		"\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\\x02HP\\x89\\x17HP ENVY Laptop 13-ad1xx\\x00\\xCB\\x16\n"
		"\\x01\\x00\\xCB\\x17\n\\x01I&r:edfe3246-7d56-4faf-ad71-23a714b8e3b8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9,10.0.19041.1.amd64fre.vb_release.191206-1406\\x00\\xCB\\x19\n\\x01\\xA9fW:00061537ac8a115f77e58dc70d7f3ee7f8d300000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2024/10/03:00:47:07!39ec9f!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++"
		"-No-3.5.131.1I$5363A4F9-8B81-4121-9744-DC548AF5C7B0qV\\x89$9A50DC5E-9DD6-4D80-A669-9BCEA6720B54\\x00\\xCB!\n\\x01i\\x06+05:30\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\\x17\rAdjacentTabId0\\x00\\x91\\x01\\x00\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$de5ed432-e4d2-4105-9b8d-f907d469195c\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x07FrameId0\\x00\\x91\\x04\\x00\nHubAppName\\x00\t"
		"IsAADUser0\\x0C\\x00\\x13IsAutolaunchSession0\\x0C\\x00\\x0EIsFavoriteItem0\\x0C\\x00\\x14IsImportedFromChrome0\\x0C\\x00\\x18IsSameDocumentNavigation0\\x0C\\x00\rIsTopLevelUrl0\\x0C\\x91\\x02\\x00\\x11NavigationContext0\\x00\\x00\\x05TabId0\\x00\\x91\\xB8\\xEA\\x8D\\xCA\\x02\\x00\tTimestampi\\x182024-10-09T22:14:04.415Z\\x00\tclient_id0\\x00\\x91\\x9B\\xEB\\xBD\\x98\\xA2\\xE9\\xEA\\x97G\\x00\\x04muidi 03EA0C298FBD6525243718DA8EBB642E\\x00\rnavigationUrli@https://petstore.octoperf.com/actions/"
		"Order.action?newOrderForm=\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x034.0I?Microsoft.WebBrowser.Personalization.SAN.NavigateElementClickedq\\xF8\\xF4\\xED\\xFA\\xF5\\xAB\\xF4\\xDC\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t"
		"*\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\\x02HP\\x89\\x17HP ENVY Laptop 13-ad1xx\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n"
		"\\x01I&r:edfe3246-7d56-4faf-ad71-23a714b8e3b8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9,10.0.19041.1.amd64fre.vb_release.191206-1406\\x00\\xCB\\x19\n\\x01\\xA9fW:00061537ac8a115f77e58dc70d7f3ee7f8d300000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2024/10/03:00:47:07!39ec9f!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++"
		"-No-3.5.131.1I$5363A4F9-8B81-4121-9744-DC548AF5C7B0qT\\x89$9A50DC5E-9DD6-4D80-A669-9BCEA6720B54\\x00\\xCB!\n\\x01i\\x06+05:30\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\\x0E\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$a6736ec5-902e-46b7-b890-30c2ada0b149\\x00\\x10DOMAnchorHrefUrli@https://petstore.octoperf.com/actions/Order.action?newOrderForm=\\x00\\x0EDOMElementPathiGA|5||Button;DIV|1|Cart|;DIV|3|Catalog|;DIV|3|"
		"Content|;BODY|2||;HTML|1||\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x05TabId0\\x00\\x91\\xB8\\xEA\\x8D\\xCA\\x02\\x00\tTimestampi\\x182024-10-09T22:14:04.407Z\\x00\tclient_id0\\x00\\x91\\x9B\\xEB\\xBD\\x98\\xA2\\xE9\\xEA\\x97G\\x00\\x04muidi 03EA0C298FBD6525243718DA8EBB642E\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00", 
		LAST);

	web_url("-7519006624476314546%7C1947641394775173751", 
		"URL=https://edge.microsoft.com/autofillservice/core/page/-2883966096674770251/-7519006624476314546%7C1947641394775173751", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		LAST);

	web_url("selection", 
		"URL=https://arc.msn.com/v4/api/selection?placement=88000360&nct=1&fmt=json&ISU=1&AREF=0&APRIMB=0&ADEFAB=13&OPSYS=WIN10&locale=en-GB&country=IN&edgeid=-2564753417751214798&ACHANNEL=4&ABUILD=129.0.6668.90&poptin=1&devosver=10.0.19045.5011&clr=esdk&UITHEME=dark&EPCON=0&AMAJOR=129&AMINOR=0&ABLD=6668&APATCH=90", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("1.0_8", 
		"URL=https://functional.events.data.microsoft.com/OneCollector/1.0/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t55.inf", 
		"ContentEncoding=deflate", 
		"Mode=HTML", 
		"EncType=application/bond-compact-binary", 
		"BodyBinary=)\\x034.0I8Microsoft.WebBrowser.Personalization.SAN.PageContentInfoq\\xAC\\xA9\\xBC\\x86\\xF6\\xAB\\xF4\\xDC\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t/"
		"\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\\x02HP\\x89\\x17HP ENVY Laptop"
		" 13-ad1xx\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:edfe3246-7d56-4faf-ad71-23a714b8e3b8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9,10.0.19041.1.amd64fre.vb_release.191206-1406\\x00\\xCB\\x19\n\\x01\\xA9fW:00061537ac8a115f77e58dc70d7f3ee7f8d300000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2024/10/03:00:47:07!39ec9f!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++"
		"-No-3.5.131.1I$5363A4F9-8B81-4121-9744-DC548AF5C7B0q^\\x89$9A50DC5E-9DD6-4D80-A669-9BCEA6720B54\\x00\\xCB!\n\\x01i\\x06+05:30\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n"
		"\\x0F\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$de5ed432-e4d2-4105-9b8d-f907d469195c\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x10Serp2ndChunkTime0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00\\xF0\\xBF\\x00\\x07SimHash0\\x00\\x91\\x90\\xE6\\xC9\\xC1\\x8F\\x83\\xC2\\xEF\\xEC\\x01\\x00\\x05TabId0\\x00\\x91\\xB8\\xEA\\x8D\\xCA\\x02\\x00\tTimestampi\\x182024-10-09T22:14:05.626Z\\x00\t"
		"client_id0\\x00\\x91\\x9B\\xEB\\xBD\\x98\\xA2\\xE9\\xEA\\x97G\\x00\\x04muidi 03EA0C298FBD6525243718DA8EBB642E\\x00\rnavigationUrli@https://petstore.octoperf.com/actions/Order.action?newOrderForm=\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x034.0I8Microsoft.WebBrowser.Personalization.SAN.HistoryAddUrlExq\\xF4\\xE2\\x93\\x81\\xF6\\xAB\\xF4\\xDC\\x11\\xA9\"o"
		":70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t"
		".\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\\x02HP\\x89\\x17HP ENVY Laptop "
		"13-ad1xx\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:edfe3246-7d56-4faf-ad71-23a714b8e3b8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9,10.0.19041.1.amd64fre.vb_release.191206-1406\\x00\\xCB\\x19\n\\x01\\xA9fW:00061537ac8a115f77e58dc70d7f3ee7f8d300000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2024/10/03:00:47:07!39ec9f!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++"
		"-No-3.5.131.1I$5363A4F9-8B81-4121-9744-DC548AF5C7B0q\\\\\\x89$9A50DC5E-9DD6-4D80-A669-9BCEA6720B54\\x00\\xCB!\n\\x01i\\x06+05:30\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\\x0C\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$de5ed432-e4d2-4105-9b8d-f907d469195c\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\tPageTitlei\\x0EJPetStore Demo\\x00\\x05TabId0\\x00\\x91\\xB8\\xEA\\x8D\\xCA\\x02\\x00\tTimestampi\\x182024-10-09T22"
		":14:05.069Z\\x00\tclient_id0\\x00\\x91\\x9B\\xEB\\xBD\\x98\\xA2\\xE9\\xEA\\x97G\\x00\\x04muidi 03EA0C298FBD6525243718DA8EBB642E\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x034.0IAMicrosoft.WebBrowser.Personalization.SAN.NavigateCompleteExtendedq\\x92\\xA6\\x80\\x81\\xF6\\xAB\\xF4\\xDC\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t"
		"-\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\\x02HP\\x89\\x17HP ENVY Laptop "
		"13-ad1xx\\x00\\xCB\\x16\n\\x01\\x00\\xCB\\x17\n\\x01I&r:edfe3246-7d56-4faf-ad71-23a714b8e3b8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9,10.0.19041.1.amd64fre.vb_release.191206-1406\\x00\\xCB\\x19\n\\x01\\xA9fW:00061537ac8a115f77e58dc70d7f3ee7f8d300000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2024/10/03:00:47:07!39ec9f!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++"
		"-No-3.5.131.1I$5363A4F9-8B81-4121-9744-DC548AF5C7B0qZ\\x89$9A50DC5E-9DD6-4D80-A669-9BCEA6720B54\\x00\\xCB!\n\\x01i\\x06+05:30\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\\x1C\rAdjacentTabId0\\x00\\x91\\x01\\x00\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$de5ed432-e4d2-4105-9b8d-f907d469195c\\x00\t"
		"DNSErrors0\\x0C\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x07FrameId0\\x00\\x91\\x04\\x00\\x0EHttpStatusCode0\\x00\\x91\\x90\\x03\\x00\nHubAppName\\x00\tIsAADUser0\\x0C\\x00\\x13IsAutolaunchSession0\\x0C\\x00\\x0EIsFavoriteItem0\\x0C\\x00\\x14IsImportedFromChrome0\\x0C\\x00\\x18IsSameDocumentNavigation0\\x0C\\x00\rIsTopLevelUrl0\\x0C\\x91\\x02\\x00\\x11NavigationContext0\\x00\\x00\\x10NavigationSource0\\x00\\x00\\x05TabId0\\x00\\x91\\xB8\\xEA\\x8D\\xCA\\x02\\x00\tTimestampi\\x182024-10-09T22"
		":14:05.051Z\\x00\tclient_id0\\x00\\x91\\x9B\\xEB\\xBD\\x98\\xA2\\xE9\\xEA\\x97G\\x00\\x04muidi 03EA0C298FBD6525243718DA8EBB642E\\x00\rnavigationUrli@https://petstore.octoperf.com/actions/Order.action?newOrderForm=\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\\x08referUrliThttps://petstore.octoperf.com/actions/Cart.action?addItemToCart=&workingItemId=EST-4\\x00\\x12referUrlRejectCode0\\x00\\x00\t"
		"utc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00)\\x034.0I6Microsoft.WebBrowser.Personalization.SAN.HistoryAddUrlq\\xF6\\xED\\xFD\\x80\\xF6\\xAB\\xF4\\xDC\\x11\\xA9\"o:70109aa3567b40e3bb8ac9e67a07b58a\\xD1\\x06\\x82\\x84@\\xCB\\x15\n\\x01K\\x0B\\x01\t,"
		"\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001\\x0510001i\\x02HP\\x89\\x17HP ENVY Laptop 13-ad1xx\\x00\\xCB\\x16\n"
		"\\x01\\x00\\xCB\\x17\n\\x01I&r:edfe3246-7d56-4faf-ad71-23a714b8e3b8\\xA9\\x0FWindows.Desktop\\x00\\xCB\\x18\n\\x01\\x89\\x0FWindows Desktop\\xA9,10.0.19041.1.amd64fre.vb_release.191206-1406\\x00\\xCB\\x19\n\\x01\\xA9fW:00061537ac8a115f77e58dc70d7f3ee7f8d300000904!0000da39a3ee5e6b4b0d3255bfef95601890afd80709!msedge.exe\\xC9\\x06%2024/10/03:00:47:07!39ec9f!msedge.exe\\x00\\xCB\\x1F\n\\x01I\tUnmeteredi\\x07Unknown\\x00\\xCB \n\\x01)\\x1CEVT-Windows-C++"
		"-No-3.5.131.1I$5363A4F9-8B81-4121-9744-DC548AF5C7B0qX\\x89$9A50DC5E-9DD6-4D80-A669-9BCEA6720B54\\x00\\xCB!\n\\x01i\\x06+05:30\\x00\\xCB%\n\\x01\\x00\\xC9<\\x06custom\\xCBF\n\\x01-\t\n\\x12\\x0CAppInfo.ETag\\x00\\x07Channel0\\x00\\x91\\x08\\x00\\x0EConnectionTypei\\x04WiFi\\x00\\x0FCorrelationGuidi$de5ed432-e4d2-4105-9b8d-f907d469195c\\x00\\x12EdgeShoppingToggle0\\x0C\\x91\\x02\\x00\\x0FEventInfo.Level0\\x00\\x91\\x04\\x00\\x10IsShoppingDomain0\\x0C\\x00\t"
		"PageTitle\\x00\\x05TabId0\\x00\\x91\\xB8\\xEA\\x8D\\xCA\\x02\\x00\tTimestampi\\x182024-10-09T22:14:05.050Z\\x00\tclient_id0\\x00\\x91\\x9B\\xEB\\xBD\\x98\\xA2\\xE9\\xEA\\x97G\\x00\\x04muidi 03EA0C298FBD6525243718DA8EBB642E\\x00\rnavigationUrli@https://petstore.octoperf.com/actions/Order.action?newOrderForm=\\x00\\x17navigationUrlRejectCode0\\x00\\x00\npop_sample0\\x08\\xA8\\x00\\x00\\x00\\x00\\x00\\x00Y@\\x00\\x08referUrliThttps://petstore.octoperf.com/actions/Cart.action?addItemToCart=&"
		"workingItemId=EST-4\\x00\\x12referUrlRejectCode0\\x00\\x00\tutc_flags0\\x00\\x91\\x80\\x80\\x80\\x80\\x80\\x80@\\x00\\x00\\x00", 
		LAST);

	return 0;
}