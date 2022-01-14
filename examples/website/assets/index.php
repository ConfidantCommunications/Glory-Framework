<!DOCTYPE html>
<html lang="en">
<head>

	<meta charset="utf-8">

	<title>::APP_TITLE::</title>

	<meta id="viewport" name="viewport" content="width=device-width, initial-scale=1.0, maximum-scale=1.0, user-scalable=no" />
	<meta name="apple-mobile-web-app-capable" content="yes">

	::if favicons::::foreach (favicons)::
	<link rel="::__current__.rel::" type="::__current__.type::" href="::__current__.href::">::end::::end::

	::if linkedLibraries::::foreach (linkedLibraries)::
	<script type="text/javascript" src="::__current__::"></script>::end::::end::
	<script type="text/javascript" src="./::APP_FILE::.js"></script>

	<script>
		window.addEventListener ("touchmove", function (event) { event.preventDefault (); }, { capture: false, passive: false });
		if (typeof window.devicePixelRatio != 'undefined' && window.devicePixelRatio > 2) {
			var meta = document.getElementById ("viewport");
			meta.setAttribute ('content', 'width=device-width, initial-scale=' + (2 / window.devicePixelRatio) + ', user-scalable=no');
		}
	</script>

	<style>
		html,body { margin: 0; padding: 0; height: 100%; }
		#content { ::if (WIN_BACKGROUND)::background: #ffffff; ::end::width: ::if (WIN_RESIZABLE)::100%::elseif (WIN_WIDTH > 0)::::WIN_WIDTH::px::else::100%::end::; height: ::if (WIN_RESIZABLE)::100%::elseif (WIN_WIDTH > 0)::::WIN_HEIGHT::px::else::100%::end::; display:none;}
::foreach assets::::if (type == "font")::::if (cssFontFace)::::cssFontFace::::end::::end::::end::
	</style>

</head>
<body>
	::foreach assets::::if (type == "font")::
	<span style="font-family: ::id::"> </span>::end::::end::

	<div id="content"></div>
	<?php include_once('seo.php'); ?>
	<script type="text/javascript">
		lime.embed ("::APP_FILE::", "content", ::WIN_WIDTH::, ::WIN_HEIGHT::);
		document.getElementById("content").style.display = "block"; 
		document.getElementsByTagName("html")[0].style.overflow = "hidden"; 
		document.getElementsByTagName("body")[0].style.overflow = "hidden"; 
	</script>

</body>
</html>