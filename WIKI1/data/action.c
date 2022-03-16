Action()
{

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_add_cookie("WMF-Last-Access=16-Mar-2022; DOMAIN=en.wikipedia.org");

	web_add_cookie("WMF-Last-Access-Global=16-Mar-2022; DOMAIN=en.wikipedia.org");

	web_add_auto_header("X-P2P-PeerDist", 
		"Version=1.1");

	web_add_auto_header("X-P2P-PeerDistEx", 
		"MinContentInformation=1.0, MaxContentInformation=2.0");

	web_url("Wiki", 
		"URL=https://en.wikipedia.org/wiki/Wiki", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../w/skins/Vector/resources/common/images/search.svg?bbf78", ENDITEM, 
		"Url=../w/skins/Vector/resources/common/images/bullet-icon.svg?d4515", ENDITEM, 
		"Url=../w/skins/Vector/resources/skins.vector.styles.legacy/images/user-avatar.svg?b7f58", ENDITEM, 
		"Url=../w/skins/Vector/resources/common/images/external-link-ltr-icon.svg?48e54", ENDITEM, 
		"Url=../w/resources/src/mediawiki.skinning/images/magnify-clip-ltr.svg?8330e", ENDITEM, 
		"Url=../static/images/mobile/copyright/wikipedia-wordmark-en.svg", ENDITEM, 
		"Url=../w/extensions/Wikibase/client/resources/images/edit.svg?34bc5", ENDITEM, 
		"Url=../w/load.php?lang=en&modules=ext.scribunto.logs%7Cext.tmh.OgvJsSupport%7Cjquery%7Cjquery.embedPlayer%7Cmw.MediaWikiPlayer.loader%7Cmw.MwEmbedSupport%2CPopUpMediaTransform%7Cmw.TMHGalleryHook.js&skin=vector&version=7g349", ENDITEM, 
		"Url=../static/images/project-logos/enwiki-1.5x.png", ENDITEM, 
		"Url=https://upload.wikimedia.org/wikipedia/commons/4/4d/Icon_pdf_file.png", ENDITEM, 
		"Url=https://upload.wikimedia.org/wikipedia/commons/6/65/Lock-green.svg", ENDITEM, 
		LAST);

	web_add_cookie("enwikimwuser-sessionId=1651bf7814c6327f794a; DOMAIN=en.wikipedia.org");

	web_link("Wiki (disambiguation)", 
		"Text=Wiki (disambiguation)", 
		"Snapshot=t2.inf", 
		EXTRARES, 
		"Url=../w/load.php?lang=en&modules=jquery&skin=vector&version=bh3lo", ENDITEM, 
		"Url=../static/images/project-logos/enwiki.png", ENDITEM, 
		"Url=../w/extensions/UniversalLanguageSelector/resources/images/cog-sprite.svg?cca73", ENDITEM, 
		"Url=../w/extensions/UniversalLanguageSelector/resources/images/language-base20.svg?b7954", ENDITEM, 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url(".wiki", 
		"URL=https://en.wikipedia.org/api/rest_v1/page/summary/.wiki", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://en.wikipedia.org/wiki/Wiki_(disambiguation)", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_url(".wiki_2", 
		"URL=https://en.wikipedia.org/wiki/.wiki", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://en.wikipedia.org/wiki/Wiki_(disambiguation)", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("Top-level_domain", 
		"URL=https://en.wikipedia.org/api/rest_v1/page/summary/Top-level_domain", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://en.wikipedia.org/wiki/.wiki", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_url("Top-level_domain_2", 
		"URL=https://en.wikipedia.org/wiki/Top-level_domain", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://en.wikipedia.org/wiki/.wiki", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("Country_code_top-level_domain", 
		"URL=https://en.wikipedia.org/api/rest_v1/page/summary/Country_code_top-level_domain", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://en.wikipedia.org/wiki/Top-level_domain", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}