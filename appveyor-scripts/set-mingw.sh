#!/bin/sh
set -e
cd `dirname "$0"`/..
if [ "$Arch" = "Win32" ]; then
  echo 'C:\MinGW\ /MinGW' > /etc/fstab
elif [ "$Arch" = "i686" ]; then
  f=i686-4.9.2-release-win32-sjlj-rt_v3-rev1.7z
  if ! [ -e $f ]; then
    curl -LsSO http://sourceforge.net/projects/mingw-w64/files/Toolchains%20targetting%20Win32/Personal%20Builds/mingw-builds/4.9.2/threads-win32/sjlj/$f
  fi
  7z x $f > /dev/null
  mv mingw32 /MinGW
else
  f=x86_64-4.9.2-release-win32-seh-rt_v3-rev1.7z
  if ! [ -e $f ]; then
    curl -LsSO http://sourceforge.net/projects/mingw-w64/files/Toolchains%20targetting%20Win64/Personal%20Builds/mingw-builds/4.9.2/threads-win32/seh/$f
  fi
  7z x $f > /dev/null
  mv mingw64 /MinGW
fi