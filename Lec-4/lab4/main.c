#include <stdio.h>

int Get_Factorial(int Copy_number);

int main(void)
{
    int Local_Number = 0;

    printf("Please Enter a number: ");
    scanf("%d", &Local_Number);

    printf("%d! = %d.", Local_Number, Get_Factorial(Local_Number));

    return 0;
}

int Get_Factorial(int Copy_number)
{
    if (Copy_number >= 1)
    {
        return Copy_number * Get_Factorial(Copy_number - 1);
    }
    else
    {
        return 1;
    }
}