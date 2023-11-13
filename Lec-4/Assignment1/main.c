#include <stdio.h>

int Get_SizeOfArr(void);
void Populate_Array(int arr[], int Copy_size);
int Get_Max(int arr[], int size);
int Get_Min(int arr[], int size);

int main(void)
{
    int size = Get_SizeOfArr();
    int arr[size];

    Populate_Array(arr, size);

    printf("Max = %d.\n", Get_Max(arr, size));
    printf("Min = %d.\n", Get_Min(arr, size));

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

void Populate_Array(int arr[], int Copy_size)
{
    for (int i = 0; i < Copy_size; i++)
    {
        printf("Please Enter Element - %d:  ", i + 1);
        scanf("%d", &arr[i]);
    }
}

int Get_Max(int arr[], int size)
{
    int Local_Max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > Local_Max)
        {
            Local_Max = arr[i];
        }
    }
    return Local_Max;
}

int Get_Min(int arr[], int size)
{
    int Local_Min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < Local_Min)
        {
            Local_Min = arr[i];
        }
    }
    return Local_Min;
}