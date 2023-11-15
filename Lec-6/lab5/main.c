#include <stdio.h>

int Get_SizeOfArr(void);
void Populate_Array(int arr[], int Copy_size);
int Scalar_Mul(int *ptr1, int *ptr2, int Copy_size);

int main(void)
{
    printf("array Size: \n");
    int size = Get_SizeOfArr();

    int arr1[size];
    int arr2[size];

    printf("Please Populate First array\n");
    Populate_Array(arr1, size);
    printf("Please Populate Second array\n");
    Populate_Array(arr2, size);

    int result = Scalar_Mul(arr1, arr2, size);

    printf("The Result is:  %d", result);

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

int Scalar_Mul(int *ptr1, int *ptr2, int Copy_size)
{
    int Local_sum = 0;
    for (int i = 0; i < 10; i++)
    {
        Local_sum += (ptr1[i] * ptr2[i]);
    }
    return Local_sum;
}