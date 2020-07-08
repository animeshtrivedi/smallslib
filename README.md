make DESTDIR=/home/atr/local install

gcc main.c -lsmallslib -L/home/atr/local/usr/local/lib/ -I/home/atr/local/usr/local/include/