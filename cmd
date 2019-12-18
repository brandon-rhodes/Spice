make && cc -Iinclude -Iinclude/linux test.c ./libSpice.so -lm && LD_LIBRARY_PATH=. ./a.out
