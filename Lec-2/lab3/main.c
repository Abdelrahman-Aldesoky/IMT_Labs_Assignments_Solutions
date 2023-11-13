#include <stdio.h>

int main(void)
{
    int number = 0;
    printf("Please enter a number: \n");
    scanf("%d", &number);

    if (number % 2)
    {
        printf("number is odd\n");
    }
    else
    {
        printf("number is even\n");
    }
}