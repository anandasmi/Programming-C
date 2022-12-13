#include <stdio.h>
void main()
{
    short a;
    long b;
    long long c;
    long double d;

    printf("Size of Short = %d bytes\n", sizeof(a));
    printf("Size of long = %d bytes\n", sizeof(b));
    printf("Size of long long = %d bytes\n", sizeof(c));
    printf("Size of long double = %d bytes\n", sizeof(d));
}