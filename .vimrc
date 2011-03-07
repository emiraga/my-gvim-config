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
""" inoremap <Nul> <C-x><C-o>
let g:clang_complete_copen = 1

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
" set cpoptions+=$

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
au FileType python map <F6> :w<CR>:!python %<CR>

" for javascript
au FileType javascript map <F6> :w<CR>:!node %<CR>
au FileType javascript set et

" for coffeescript
au FileType coffee map <F6> :w<CR>:!coffee %<CR>
au FileType coffee set et

" for templates
au FileType htmldjango set et

"-----------------------------------------------
"
"
"
"-----------------------------------------------

" Pathogen config needs this
filetype off
" call pathogen#runtime_append_all_bundles()
filetype plugin indent on

" Remove compatibility with old versions
set nocompatible

" Security issues, not sure if needed
" set modelines=0

" Better colors
syntax enable
" colorscheme pablo 
" colorscheme ir_black

" Show numbers
set number
" set relativenumber " weird numbers

" Don't write backup files
set nobackup
set nowritebackup

" Nice tabs, tabs to spaces conversion
set tabstop=4
set shiftwidth=4
set softtabstop=4
set expandtab

" Make things better, 
" according to http://stevelosh.com/blog/2010/09/coming-home-to-vim/
set encoding=utf-8
set scrolloff=1
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
set backspace=indent,eol,start

" Smart searching
" nnoremap / /\v
" vnoremap / /\v
set ignorecase
set smartcase
set gdefault
set incsearch
set hlsearch

" Never, ever do 'set showmatch'

" Handle long lines correctly
" set wrap
set textwidth=79
set formatoptions=qrn1

" Save on loosing focus
au FocusLost * :wa

" Disable F1 help key
inoremap <F1> <ESC>
nnoremap <F1> <ESC>
vnoremap <F1> <ESC>

" F4 - background compile a file
map <silent><F4> :update<CR>:silent make %.exe<CR>

map <leader>i <C-w>v<C-w>l:open input.txt<CR>

map <leader>r :%s///<Left>

