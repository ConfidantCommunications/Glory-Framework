#!/bin/bash
# read more about shell script at http://ss64.com/bash/
clear
echo '----------------------------------------------------------'
echo 'Automation script for NME project "${projectName}"'
echo 'Make sure that you have all the sdk-s installed'
echo 'Read more about this:' 
echo '     http://www.haxenme.org/developers/get-started/'
echo ''
echo 'Start compiling different targets'
echo '----------------------------------------------------------'

BASEDIR=$(dirname $0)
# echo $BASEDIR

# set dir to the 'root' dir 
cd $BASEDIR/../
echo '------ compile flash'
nme test "config.nmml" flash

echo '------ compile html5'
nme test "config.nmml" html5

echo '------ compile window'
nme test "config.nmml" windows

echo '------ compile mac'
nme test "config.nmml" mac

echo '------ compile linux'
nme test "config.nmml" linux

echo '------ compile iOS (need XCode)'
nme test "config.nmml" ios -simulator

echo '------ compile webos (need webOS SDK)'
nme test "config.nmml" webos

echo '------ compile android (need Android SDK, Android NDK, Java JDK and Apache Ant)'
nme test "config.nmml" android

echo '------ end shell script'
