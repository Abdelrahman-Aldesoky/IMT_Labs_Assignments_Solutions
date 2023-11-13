#include <stdio.h>

#define TRUE 1
#define FALSE 0

int Get_Max(int Copy_FirstNumber, int Copy_SecondNumber, int *Equal_flag);

int main(void)
{
    int Local_FirstNumber = 0, Local_SecondNumber = 0, Equal_flag = FALSE;

    printf("Please Enter First Number: ");
    scanf("%d", &Local_FirstNumber);

    printf("Please Enter Second Number: ");
    scanf("%d", &Local_SecondNumber);

    int max = Get_Max(Local_FirstNumber, Local_SecondNumber, &Equal_flag);

    if (Equal_flag == TRUE)
    {
        printf("Both Numbers are Equal\n");
    }
    else
    {
        printf("Max = %d.", max);
    }
    return 0;
}

int Get_Max(int Copy_FirstNumber, int Copy_SecondNumber, int *Equal_flag)
{
    if (Copy_FirstNumber > Copy_SecondNumber)
    {
        return Copy_FirstNumber;
    }
    else if (Copy_FirstNumber < Copy_SecondNumber)
    {
        return Copy_SecondNumber;
    }
    else
    {
        *Equal_flag = TRUE;
    }
}