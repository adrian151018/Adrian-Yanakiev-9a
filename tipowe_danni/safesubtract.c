#include<stdio.h>
#include<stdlib.h>
#include"safeint.h"

int main(int argc, char ** argv){
    struct SafeResult a = safestrtoint(argv[1]);
    if(a.errorflag == 1){printf("Overflow or underflow detected!"); return 0;}
    struct SafeResult b = safestrtoint(argv[2]);
    if(b.errorflag == 1){printf("Overflow or underflow detected!"); return 0;}
    struct SafeResult subtract = safesubtract(a.value, b.value);
    if(subtract.errorflag == 1)printf("Overflow or underflow detected!");
    else printf("Result: %d\n", subtract.value);
    return 0;
}