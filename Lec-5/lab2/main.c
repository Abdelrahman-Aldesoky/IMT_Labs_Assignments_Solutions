#include <stdio.h>

int Get_SizeOfArr(void);

int main(void)
{
    int size = Get_SizeOfArr();
    int arr[size];

    int sum = 0;
    float average = 0;
    
    for (int i = 0; i < size; i++)
    {
        printf("element - %d : ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = (float)sum / size;
    printf("sum= %d\n", sum);
    printf("average= %.1f", average);

    return 0;
}

int Get_SizeOfArr(void)
{
    int Local_ArrSize = 0;
    printf("Please enter how many elements you want in the array: \n");
    while (Local_ArrSize <= 0)
    {
        scanf("%d", &Local_ArrSize);
        if (Local_ArrSize > 0)
            break;
        printf("array size can't be less than or equal zero Please Try again: \n");
    }
    return Local_ArrSize;
}