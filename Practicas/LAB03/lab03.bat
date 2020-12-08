echo compiling
gcc -c lab03.c -o lab03.o
gcc -c MENU.c -o MENU.o
gcc -c BML.c -o BML.o
gcc -c B1.c -o B1.o
gcc -c B2.c -o B2.o
gcc -c B3.c -o B3.o
gcc -o lab3.exe lab03.o MENU.o BML.o B1.o B2.o B3.o
.\lab3.exe
pause