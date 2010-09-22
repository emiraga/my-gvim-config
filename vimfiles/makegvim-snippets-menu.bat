@echo off
set outfile="snippetsMenu"
set incfile="snippets"
cd "%incfile%"
grep "^snippet " cpp* | cut -d "\\" -f 6 | sed "s/^cpp-\(.*\).snippets:snippet \(.*\)$/amenu Snippets.\1.\2 :<ESC><ESC>i\2<TAB><CR>/" | grep "^amenu" | tee ..\\%outfile%
pause
