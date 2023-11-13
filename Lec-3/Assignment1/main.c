#include <stdio.h>

int main(void)
{
    int first_number = 0, second_number = 0;
    while (1)
    {
        printf("Please enter first number: \n");
        scanf("%d", &first_number);
        printf("Please enter second number: \n");
        scanf("%d", &second_number);
        printf("The result is = %d.\n", first_number + second_number);
    }
    return 0;
}