#include <stdio.h>

int main(void)
{
    int first_number = 0, second_number = 0;

    /*user input*/
    printf("please enter first number: \n");
    scanf("%d", &first_number);
    printf("please enter second number: \n");
    scanf("%d", &second_number);

    /*output*/
    printf("Addition= %d.\n", (first_number + second_number));
    printf("Subtraction= %d.\n", (first_number - second_number));
    printf("Multiplication= %d.\n", (first_number * second_number));
    printf("And= %d.\n", (first_number & second_number));
    printf("Or= %d.\n", (first_number | second_number));
    printf("Xor= %d.\n", (first_number ^ second_number));
}