#include <stdio.h>
#include <conio.h>
int main()
{
    int age;
    printf("Enter the age = ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You are eligible to vote.");
    }

    if (age <= 18)
    {
        printf("You are not eligible to vote.");
    }
}
