@echo off
set outfile="snippets\cpp-template.snippets"
set incfile="myincludes.h"

echo snippet template | tee %outfile%
grep -v "^//" %incfile% | grep . | sed "s/^/	/" | tee -a %outfile%
cat add_to_template.cpp | tee -a %outfile%
pause

