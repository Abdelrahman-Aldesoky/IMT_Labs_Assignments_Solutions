#include <stdio.h>

int main(void)
{
    int first = 0, second = 0, third = 0;

    /*user input*/
    printf("Please enter first number: \n");
    scanf("%d", &first);
    printf("Please enter second number: \n");
    scanf("%d", &second);
    printf("Please enter third number: \n");
    scanf("%d", &third);

    /*output*/
    printf("Reverse order of input:\n");
    printf("Third  = %d.\n", third);
    printf("Second = %d.\n", second);
    printf("First  = %d.\n", first);

    return 0;
}