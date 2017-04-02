@echo off
title compiling
setlocal enableDelayedExpansion
for %%F in (*.c) do (
  set "name=%%F"
  gcc -o0 -o "!name:.c=C.exe!" "!name!" 
  echo "!name!"
)
pause