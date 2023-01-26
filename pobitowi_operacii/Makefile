main.exe: quadraticroots.o main.c
	gcc main.c quadraticroots.o -lm -o main.exe

quadraticroots.o: quadraticroots.h quadraticroots.c
	gcc -c quadraticroots.c

clean:
	del *.o *.exe