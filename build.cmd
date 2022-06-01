set D_FLAGS= -D_DEBUG
set R_FLAGS= -Ofast
gcc src\*.c -g -std=c17 -Iinclude -Wall -lmingw32 -lSDL2main -lSDL2 -Llib %D_FLAGS% -o bin\App