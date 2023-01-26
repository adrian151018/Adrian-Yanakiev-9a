#ifndef GUARD
#define GUARD

struct SafeResult{
    int value;
    char errorflag;
};
struct SafeResult safeadd(long long a, long long b);
struct SafeResult safesubtract(long long a, long long b);
struct SafeResult safemultiply(long long a, long long b);
struct SafeResult safedivide(long long a, long long b);
struct SafeResult safestrtoint(char * string);

#endif