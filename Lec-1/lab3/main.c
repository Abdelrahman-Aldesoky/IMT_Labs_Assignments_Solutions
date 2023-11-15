#include <stdio.h>

int main(void)
{
    /*variables*/
    int first_number = 0, second_number = 0;
    int addition = 0, multiplication = 0;

    /*user input*/
    printf("Please enter first number: \n");
    scanf("%d", &first_number);
    printf("Please enter second number: \n");
    scanf("%d", &second_number);

    /*addition*/
    addition = first_number + second_number;
    printf("Addition= %d.\n", addition);

    /*multiplication*/
    multiplication = first_number * second_number;
    printf("Multiplication= %d.\n", multiplication);

    return 0;
}