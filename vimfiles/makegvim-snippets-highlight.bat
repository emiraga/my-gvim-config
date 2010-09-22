@echo off
set outfile="snippetsHighlight"
set incfile="myincludes.h"

grep "//BEGIN [^D]" %incfile% | sed "s://BEGIN :\\\|:" | tr -d "\n" | tr -d "\r" | sed "s:^..:Hi 2 \\<\\(:" | sed "s:$:\\)\\>:" | tee %outfile%

pause

