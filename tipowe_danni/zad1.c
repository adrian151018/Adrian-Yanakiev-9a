#include<stdio.h>
#include<limits.h>

void main()
{
    printf("%-10s %-7s %-6s %-20s %-20s %-10s\n\n", "TYPE", "FORMAT", "BYTES", 
                                                        "MIN", "MAX",
                                                        "UNSIGNED MAX");

    printf("%-10s %-7s %-6zu %-20hd %-20hd %-10hd\n", "char", "%c", sizeof(char), 
                                                        SCHAR_MIN, SCHAR_MAX, UCHAR_MAX);

    printf("%-10s %-7s %-6zu %-20hd %-20hd %-10d\n", "short", "%hd", sizeof(short), 
                                                        SHRT_MIN, SHRT_MAX, USHRT_MAX);

    printf("%-10s %-7s %-6zu %-20d %-20d %-10u\n", "int", "%d", sizeof(int), 
                                                        INT_MIN, INT_MAX, UINT_MAX);

    printf("%-10s %-7s %-6zu %-20ld %-20ld %-10lu\n", "long", "%ld", sizeof(long), 
                                                        LONG_MIN, LONG_MAX, ULONG_MAX);
                                                    
    printf("%-10s %-7s %-6zu %-20lld %-20lld %-10llu\n", "long long", "%lld", sizeof(long long), 
                                                       LLONG_MIN, LLONG_MAX, ULLONG_MAX);
}