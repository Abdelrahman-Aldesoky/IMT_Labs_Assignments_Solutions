#include <stdio.h>

int Get_SizeOfArr(void);
void Populate_Array(int arr[], int Copy_size);
int LinearSearch(int arr[], int Copy_size, int Copy_ElementLookingFor);

int main(void)
{
    int size = Get_SizeOfArr();
    int arr[size];
    int number_looking_for = 0, count = 0;

    Populate_Array(arr, size);

    printf("Please Enter the number you are looking for: ");
    scanf("%d", &number_looking_for);

    count = LinearSearch(arr, size, number_looking_for);

    if (count)
    {
        printf("number %d exists %d times", number_looking_for, count);
    }
    else
    {
        printf("number %d does not exist.", number_looking_for);
    }

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

int LinearSearch(int arr[], int Copy_size, int Copy_ElementLookingFor)
{
    int Local_Count = 0;
    for (int i = 0; i < Copy_size; i++)
    {
        if (arr[i] == Copy_ElementLookingFor)
        {
            Local_Count++;
        }
    }
    return Local_Count;
}