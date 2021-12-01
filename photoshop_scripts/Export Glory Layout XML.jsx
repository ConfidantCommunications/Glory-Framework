// This script exports extended layer.bounds information to [psd_file_name].xml
// Original by pattesdours http://ps-scripts.com/bb/viewtopic.php?t=2268
// Modified for Glory Framework by Allan Dowdeswell of Confidant Communications (www.confidant.ca)
// Derivatives of this script must keep these above messages intact.

function docCheck() {
    // ensure that there is at least one document open
    if (!documents.length) {
        alert('There are no documents open.');
        return; // quit
    }
}

docCheck();

var originalRulerUnits = preferences.rulerUnits;
preferences.rulerUnits = Units.PIXELS;

var docRef = activeDocument;

var docWidth = docRef.width.value;
var docHeight = docRef.height.value;
var mySourceFilePath = activeDocument.fullName.path + "/";

//  Code to get layer index / descriptor
//
cTID = function(s) { return app.charIDToTypeID(s); };
sTID = function(s) { return app.stringIDToTypeID(s); };
function getLayerDescriptor (doc, layer) {
    var ref = new ActionReference();
    ref.putEnumerated(cTID("Lyr "), cTID("Ordn"), cTID("Trgt"));
    return executeActionGet(ref)
};

function getLayerID(doc, layer) {
  var d = getLayerDescriptor(doc, layer);
  return d.getInteger(cTID('LyrI'));
};

var stackorder = 0;

// function from Xbytor to traverse all layers
traverseLayers = function(doc, ftn, reverse) {
  function _traverse(doc, layers, ftn, reverse) {
    var ok = true;
    for (var i = 1; i <= layers.length && ok != false; i++) {
      var index = (reverse == true) ? layers.length-i : i - 1;
      var layer = layers[index];

      if (layer.typename == "LayerSet") {
        ok = _traverse(doc, layer.layers, ftn, reverse);

      } else {
  stackorder = stackorder + 1;
        ok = ftn(doc, layer, stackorder);
      }
    }
    return ok;
  };

  return _traverse(doc, doc.layers, ftn, reverse);
};

// create a string to hold the data
var str ="";

// class using a contructor
function cLayer(doc, layer) {

//this.layerID = Stdlib.getLayerID(doc, layer);
	this.layerID = getLayerID(doc, layer);
  //alert("layer ID: " + this.layerID);
	this.layerWidth = layer.bounds[2].value - layer.bounds[0].value;
      this.layerHeight = layer.bounds[3].value - layer.bounds[1].value;
  
	// these return object coordinates relative to canvas
      this.upperLeftX = layer.bounds[0].value;
      this.upperLeftY = layer.bounds[1].value;
      this.upperCenterX = this.layerWidth / 2 + layer.bounds[0].value;
      this.upperCenterY = layer.bounds[1].value;
      this.upperRightX = layer.bounds[2].value;
      this.upperRightY = layer.bounds[1].value;
      this.middleLeftX = layer.bounds[0].value;
      this.middleLeftY = this.layerHeight / 2 + layer.bounds[1].value;
      this.middleCenterX = this.layerWidth / 2 + layer.bounds[0].value;
      this.middleCenterY = this.layerHeight / 2 + layer.bounds[1].value;
      this.middleRightX = layer.bounds[2].value;
      this.middleRightY = this.layerHeight / 2 + layer.bounds[1].value;
      this.lowerLeftX = layer.bounds[0].value;
      this.lowerLeftY = layer.bounds[3].value;
      this.lowerCenterX = this.layerWidth / 2 + layer.bounds[0].value;
      this.lowerCenterY = layer.bounds[3].value;
      this.lowerRightX = layer.bounds[2].value;
      this.lowerRightY = layer.bounds[3].value;
	  
	  // I'm adding these for easier editing of flash symbol transformation point (outputs a 'x, y' format)
	  // because I like to assign shortcut keys that use the numeric pad keyboard, like such:
	  //		7	8	9
	  //		4	5	6
	  //		1	2	3
	  //
	  this.leftBottom = this.lowerLeftX + ", " + this.lowerLeftY;
	  this.bottomCenter = this.lowerCenterX + ", " + this.lowerCenterY;
	  this.rightBottom = this.lowerRightX + ", " + this.lowerRightY;
	  
	  this.leftCenter = this.middleLeftX + ", " + this.middleLeftY;
	  this.center = this.middleCenterX + ", " + this.middleCenterY;
	  this.rightCenter = this.middleRightX + ", " + this.middleRightY;
	  
	  this.leftTop = this.upperLeftX + ", " + this.upperLeftY;
	  this.topCenter = this.upperCenterX + ", " + this.upperCenterY;
	  this.rightTop = this.upperRightX + ", " + this.upperRightY;

	// these return object coordinates relative to layer bounds
      this.relUpperLeftX = layer.bounds[1].value - layer.bounds[1].value;
      this.relUpperLeftY =  layer.bounds[0].value - layer.bounds[0].value;
      this.relUpperCenterX = this.layerWidth / 2;
      this.relUpperCenterY = layer.bounds[0].value - layer.bounds[0].value;
      this.relUpperRightX = this.layerWidth;
      this.relUpperRightY = layer.bounds[0].value - layer.bounds[0].value;
      this.relMiddleLeftX = layer.bounds[1].value - layer.bounds[1].value;
      this.relMiddleLeftY = this.layerHeight / 2;
      this.relMiddleCenterX = this.layerWidth / 2;
      this.relMiddleCenterY = this.layerHeight / 2;
      this.relMiddleRightX = this.layerWidth;
	this.relMiddleRightY = this.layerHeight / 2;
      this.relLowerLeftX = layer.bounds[1].value - layer.bounds[1].value;
      this.relLowerLeftY = this.layerHeight;
      this.relLowerCenterX = this.layerWidth / 2;
	this.relLowerCenterY = this.layerHeight / 2;
      this.relLowerRightY = this.layerHeight;
      this.relLowerRightX = this.layerWidth;
      this.relLowerRightY = this.layerHeight;
  
  return this;
}

// add header line
str = "<page id=\"" + docRef.name + "\" type=\"normal\" original=\"" + mySourceFilePath + "\" title=\"" + app.activeDocument.name.match(/([^\.]+)/)[1] + "\" width=\"" + docWidth + "\" height=\"" + docHeight + "\">\n";

// now a function to collect the data
function exportBounds(doc, layer, i) {
    var isVisible = layer.visible;
    var layerData = cLayer(doc, layer);

  if(isVisible){
// Layer object main coordinates relative to its active pixels
	var tagname;
	// if(layer.name=="bg") {
	// 	tagname="background";
	// } else {
		tagname="actor";
	// }
	var zeros = "000";
	// if(i<10){
	// 	zeros="000";
	// } else if (i<100){
	// 	zeros="00";
	// } else {
	// 	zeros="0";
	// }
	var prefix=zeros;
    var str2 = "\t<"+tagname+" id=\"" + layer.name + "\" type=\"prop\""
	+ " z=\"" + (i - 1)+ "\""  // order in which layers are stacked, starting with zero for the bottom-most layer
	//+ "\" position=\"" + leftTop // this is the 
	+ " x=\"" + layerData.upperLeftX + "\"" 
	+ " y=\"" + layerData.upperLeftY + "\"" 
	+ " width=\"" + layerData.layerWidth + "\"" 
	+ " height=\"" + layerData.layerHeight + "\"" 
	//+ "\" transformpoint=\"" + "center" + "\">" // hard-coding 'center' as the default transformation point
	+ " src=\""+prefix+ (i - 1)+"_" +layer.name + ".png" + "\"" 
	+ " layout=\"\"" 
	+ ">" 
	+ "</"+tagname+">\n" // I have to put some content here otherwise sometimes tags are ignored
str += str2.toString();
   };
};


// call X's function using the one above
traverseLayers(app.activeDocument, exportBounds, true);

// Use this to export XML file to same directory where PSD file is located
    var mySourceFilePath = activeDocument.fullName.path + "/";
// create a reference to a file for output
    var csvFile = new File(mySourceFilePath.toString().match(/([^\.]+)/)[1] + app.activeDocument.name.match(/([^\.]+)/)[1] + ".xml");
// open the file, write the data, then close the file
csvFile.open('w');
csvFile.writeln(str + "</page>");
csvFile.close();
preferences.rulerUnits = originalRulerUnits;
// Confirm that operation has completed
alert("Operation Complete!" + "\n" + "Layer coordinates were successfully exported to:" + "\n" + "\n" + mySourceFilePath.toString().match(/([^\.]+)/)[1] + app.activeDocument.name.match(/([^\.]+)/)[1] + ".xml");