#include <stdio.h>

int main(void)
{
    int grade = 0;

    printf("Please enter your Grade: \n");
    scanf("%d", &grade);

    if (grade < 0)
    {
        printf("you entered a number less than zero\n");
    }
    else
    {
        if (grade < 50)
        {
            printf("Failed\n");
        }
        else if (grade < 65)
        {
            printf("Normal\n");
        }
        else if (grade < 75)
        {
            printf("Good\n");
        }
        else if (grade < 85)
        {
            printf("Very Good\n");
        }
        else if (grade >= 85 && grade <= 100)
        {
            printf("Excellent\n");
        }
        else
        {
            printf("you entered number that is larger than 100\n");
        }
    }
    return 0;
}