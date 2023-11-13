#include <stdio.h>
#include <stdlib.h>
#include "STD_TYPES.h"

u32 Get_NumberOfElements(void);
void Populate_DynamicArray(s32 *p_Arr, u32 Copy_NumberOfElements);
int compare(const void *a, const void *b);
void PrintDynamicArray(s32 *p_Arr, u32 Copy_NumberOfElements);

s32 main(void)
{
    u32 Local_NumberOfElements = Get_NumberOfElements();
    s32 *p_Arr = (s32 *)malloc(Local_NumberOfElements * sizeof(p_Arr[0]));

    Populate_DynamicArray(p_Arr, Local_NumberOfElements);

    qsort(p_Arr, Local_NumberOfElements, sizeof(p_Arr[0]), compare);

    PrintDynamicArray(p_Arr, Local_NumberOfElements);

    return 0;
}

u32 Get_NumberOfElements(void)
{
    u32 Local_NumberOfElements = 0;
    printf("Please enter how many elements you want in the array: \n");
    while (Local_NumberOfElements <= 0)
    {
        scanf("%d", &Local_NumberOfElements);
        if (Local_NumberOfElements > 0)
            break;
        printf("Number of Elements can't be less than or equal zero Please Try again: \n");
    }
    return Local_NumberOfElements;
}

void Populate_DynamicArray(s32 *p_Arr, u32 Copy_NumberOfElements)
{
    for (u8 i = 0; i < Copy_NumberOfElements; i++)
    {
        printf("Please Enter Element - %d:  ", i + 1);
        scanf("%d", &p_Arr[i]);
    }
}

int compare(const void *a, const void *b)
{
    return *(int *)a - *(int *)b;
}

void PrintDynamicArray(s32 p_Arr[], u32 Copy_NumberOfElements)
{
    printf("\n");
    printf("Array: ");
    for (u8 i = 0; i < Copy_NumberOfElements; i++)
    {
        if (i == Copy_NumberOfElements - 1)
        {
            printf("%d.\n", p_Arr[i]);
        }
        else
        {
            printf("%d,", p_Arr[i]);
        }
    }
}