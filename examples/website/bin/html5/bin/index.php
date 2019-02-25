<!DOCTYPE html>
<html lang="en">
<head>
	
	<meta charset="utf-8">
	
	<title>Glory Framework Website Demo</title>
	
	<meta id="viewport" name="viewport" content="width=device-width, initial-scale=1.0, maximum-scale=1.0, user-scalable=no" />
	<meta name="apple-mobile-web-app-capable" content="yes">
	
	
	<link rel="shortcut icon" type="image/png" href="./favicon.png">
	
	
	<script type="text/javascript" src="./lib/howler.min.js"></script>
	<script type="text/javascript" src="./lib/pako.min.js"></script>
	<script type="text/javascript" src="./lib/FileSaver.min.js"></script>
	
	<script>
		window.addEventListener ("touchmove", function (event) { event.preventDefault (); }, false);
		if (typeof window.devicePixelRatio != 'undefined' && window.devicePixelRatio > 2) {
			var meta = document.getElementById ("viewport");
			meta.setAttribute ('content', 'width=device-width, initial-scale=' + (2 / window.devicePixelRatio) + ', user-scalable=no');
		}
	</script>
	
	<style>
		html,body { margin: 0; padding: 0; height: 100%; overflow: hidden; }
		#openfl-content { background: #000000; width: 100%; height: 100%; }

	</style>
	
</head>
<body>
	
	<noscript>This webpage makes extensive use of JavaScript. Please enable JavaScript in your web browser to view this page.</noscript>
	
	<div id="openfl-content"></div>
	
	<script type="text/javascript" src="./GloryWebsiteDemo.js"></script>
	<script type="text/javascript">
		lime.embed ("GloryWebsiteDemo", "openfl-content", null, null, { parameters: {} });
	</script>
	
</body>
</html>
