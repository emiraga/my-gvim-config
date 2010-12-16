set ai ts=4 sw=4 st=4 noet nu nohls
syntax enable
filetype plugin indent on
map <F6> :w<CR>:!g++ % -g && (ulimit -c unlimited; ./a.out < ~/input.txt) <CR>
map <F5> <F6>
map <F12> :!gdb ./a.out -c core <CR>
" team cat-us-trophy vimrc
set ai ts=4 sw=4 st=4 noet nu nohls
syntax enable
filetype plugin indent on
if has('gui_running')
	colo pablo
endif

" for usaco, cannot end with .out
map <F8> :w<CR>:!g++ % -g -o a.exe && ./a.exe && cat *.out <CR>
" omni-completion
inoremap <Nul> <C-x><C-o>


" Don't write backup files
set nobackup
set nowritebackup

"more options
set nocompatible
set encoding=utf-8
" set scrolloff=1
set autoindent
set showmode
set showcmd
set hidden "allow creating hidden buffers
set wildmenu
set wildmode=list:longest
" set visualbell " blink screen
set noeb
" set cursorline " highlight current line
set ttyfast
set ruler
set backspace=indent,eol,start
" set laststatus=2
" set undofile " save more undo files

" Useful for html/xml
set matchpairs+=<:>

" Put dolar sign at the end of change
set cpoptions+=$

" Save on loosing focus
au FocusLost * :wa

" Some abbreviations, misspellings
abbreviate teh the
abbreviate itn int
abbreviate adn and

" leader mappings
let mapleader = ","
map <leader>c :update<cr>:!xsel --clipboard < %<cr>:echo "File copied to clipboard!"<cr>

" for python
au FileType python highlight OverLength ctermbg=red ctermfg=white guibg=#592929
au FileType python match OverLength /\%81v.\+/
au FileType python set et
au FileType python set sta

" for javascript
au FileType javascript map <F6> :w<CR>:!node %<CR>

