@echo off
title compiling
setlocal enableDelayedExpansion
for %%F in (*.cpp) do (
  set "name=%%F"
  g++ -std=c++11 -o0 -o "!name:.cpp=CPP.exe!" "!name!" 
  echo "!name!"
)
pause