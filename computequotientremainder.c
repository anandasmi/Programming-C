#include <stdio.h>
int main()
{
    int dividend, divisor, quotient, remainder;
    printf("Enter the dividend = ");
    scanf("%d", &dividend);
    printf("Enter the divisor = ");
    scanf("%d", &divisor);

    // Computes Quotient
    quotient = dividend / divisor;

    // Computes Remainder
    remainder = dividend % divisor;

    printf("Quoteint = %d\n", quotient);
    printf("Remainder = %d", remainder);
}