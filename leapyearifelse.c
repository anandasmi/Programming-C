#include <stdio.h>
#include <conio.h>
int main()
{
    int year;
    printf("Enter the year = ");
    scanf("%d", &year);

    if (year % 400 == 0)
    {
        printf("This year is a Leap Year.", year);
    }

    else if (year % 100 == 0)
    {
        printf("%d year is not a Leap Year.", year);
    }

    else if (year % 4 == 0)
    {
        printf("%d year is a Leap Year.", year);
    }
    else
    {
        printf("%d is not a Leap Year.", year);
    }
}