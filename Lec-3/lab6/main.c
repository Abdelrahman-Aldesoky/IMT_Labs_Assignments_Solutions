#include <stdio.h>

int main(void)
{
    int number = 0, result = 1;
    printf("Please enter an integer: \n");
    scanf("%d", &number);
    while (number)
    {
        result *= number;
        if (number > 0)
            number--;
        else
            number++;
    }
    printf("Factorial=%d.", result);
    return 0;
}