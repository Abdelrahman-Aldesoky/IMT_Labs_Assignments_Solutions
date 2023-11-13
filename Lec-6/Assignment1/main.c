#include <stdio.h>

int Get_SizeOfArr(void);
void Populate_Array(int arr[], int Copy_size);
void BubbleSort(int arr[], int Copy_size);
void PrintArray(int arr[], int Copy_size);

int main(void)
{
    int size = Get_SizeOfArr();
    int arr[size];

    Populate_Array(arr, size);

    BubbleSort(arr, size);

    printf("After Bubble Sort:\n");

    PrintArray(arr, size);

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

void BubbleSort(int arr[], int Copy_size)
{
    int Local_temp = 0;
    for (int i = 0; i < Copy_size - 1; i++)
    {
        for (int j = 0; j < Copy_size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                Local_temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = Local_temp;
            }
        }
    }
}

void PrintArray(int arr[], int Copy_size)
{
    for (int i = 0; i < Copy_size; i++)
    {
        if (i == Copy_size - 1)
        {
            printf("%d.\n", arr[i]);
        }
        else
        {
            printf("%d,", arr[i]);
        }
    }
}