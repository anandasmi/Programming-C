#include <stdio.h>
int main()
{
    int a = 2, b = 4, c;
    c = a;
    a = b;
    b = c;

    printf("After Swapping = %d ", a);
    printf("After Swapping  = %d ", b);
}