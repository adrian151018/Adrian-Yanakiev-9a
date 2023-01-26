all: safeadd.exe safesubtract.exe safemultiply.exe safedivide.exe

safeadd.exe: safeint.o safeadd.c
	gcc safeint.o safeadd.c -o safeadd.exe

safesubtract.exe: safeint.o safesubtract.c
	gcc safeint.o safesubtract.c -o safesubtract.exe

safemultiply.exe: safeint.o safemultiply.c
	gcc safeint.o safemultiply.c -o safemultiply.exe

safedivide.exe: safeint.o safedivide.c
	gcc safeint.o safedivide.c -o safedivide.exe

safeint.o: safeint.c safeint.h
	gcc -c safeint.c