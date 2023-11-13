#include <stdio.h>

int main(void)
{
    int user_input = 0;
    int result = 12;

    printf("Enter the result of 3x4 \n");

    while (1)
    {
        scanf("%d", &user_input);
        if (user_input == result)
        {
            break;
        }
        else
        {
            printf("Not Correct try again : ");
        }
    }
    printf("Thank You %d is the correct answer.\n", user_input);

    return 0;
}