#include <stdio.h>
#include <conio.h>
int main()
{
    int a, b, division;
    printf("Enter the numbers that are to be divided = ");
    scanf("%d %d", &a, &b);
    division = a / b;
    printf("The answer is = %d ", division);
}