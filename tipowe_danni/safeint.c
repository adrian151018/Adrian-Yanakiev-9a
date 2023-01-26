#include<stdio.h>
#include<limits.h>
#include"safeint.h"

struct SafeResult safeadd(long long a, long long b){
    struct SafeResult sybirane;
    long long sum = a + b;
    if(a > INT_MAX || a < INT_MIN || b > INT_MAX || b < INT_MIN || sum > INT_MAX || sum < INT_MIN){
        sybirane.value = 0;
        sybirane.errorflag = 1;
    }
    else{
        sybirane.value = (int)(a + b); 
        sybirane.errorflag = 0;
    }
    return sybirane;
}

struct SafeResult safesubtract(long long a, long long b){
    struct SafeResult izwajdane;
    long long sub = a - b;
    if(a > INT_MAX || a < INT_MIN || b > INT_MAX || b < INT_MIN || sub > INT_MAX || sub < INT_MIN){
        izwajdane.value = 0;
        izwajdane.errorflag = 1;
    }
    else{
        izwajdane.value = (int)(a - b); 
        izwajdane.errorflag = 0;
    }
    return izwajdane;
}

struct SafeResult safemultiply(long long a, long long b){
    struct SafeResult umnojenie;
    long long mult = a * b;
    if(a > INT_MAX || a < INT_MIN || b > INT_MAX || b < INT_MIN || mult > INT_MAX || mult < INT_MIN){
        umnojenie.value = 0;
        umnojenie.errorflag = 1;
    }
    else{
        umnojenie.value = (int)(a * b); 
        umnojenie.errorflag = 0;
    }
    return umnojenie;
}

struct SafeResult safedivide(long long a, long long b){
    struct SafeResult delenie;
    long long chastno = a / b;
    if(a > INT_MAX || a < INT_MIN || b > INT_MAX || b < INT_MIN || chastno > INT_MAX || chastno < INT_MIN){
        delenie.value = 0;
        delenie.errorflag = 1;
    }
    else{
        delenie.value = (int)(a / b); 
        delenie.errorflag = 0;
    }
    return delenie;
}

struct SafeResult safestrtoint(char * string){
    struct SafeResult sti;
    long long chislo = 0;
    for(int i = 0; string[i] != '\0';i++)
    {
        if((string[i] > 57 || string[i] < 48) &&  string[i] != 45){
            sti.value = 0;
            sti.errorflag = 1;
            return sti;            
        }

        else if((string[i] < 58 && string[i] > 47) ||  string[i] == 45){
            if(string[i] == 45 && i == 0)continue;
            else chislo = (chislo * 10) + (string[i] - 48);
        }
    }
    if(string[0] == 45)chislo *= (-1);
    sti = safeadd(chislo, 0);
    return sti;
}