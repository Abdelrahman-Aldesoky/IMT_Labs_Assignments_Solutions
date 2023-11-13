#include <stdio.h>

#define TRUE 1
#define FALSE 0
#define NUMBER_DOES_NOT_EXIST number_does_exist == FALSE

int main(void)
{
    int arr[10];
    int number_looking_for = 0, number_does_exist = FALSE;
    int i = 0, j = 0;

    printf("Input 10 elements in the array :\n");
    for (i = 0; i < 10; i++)
    {
        printf("element - %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Please enter the number you are looking for: \n");
    scanf("%d", &number_looking_for);

    for (j = 0; j < 10; j++)
    {
        if (arr[j] == number_looking_for)
        {
            number_does_exist = TRUE;
            printf("number you are looking for is %d and its location is %d.\n", arr[j], j + 1);
            break;
        }
    }

    if (NUMBER_DOES_NOT_EXIST)
    {
        printf("number doesn't exist\n");
    }
    return 0;
}