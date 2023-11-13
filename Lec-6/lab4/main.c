#include <stdio.h>

int Get_SizeOfArr(void);
void Populate_Array(int arr[], int Copy_size);

int main (void)
{
    int size=Get_SizeOfArr();
	int arr[size];
    Populate_Array(arr,size);
	int sum=0;
	int *pARR = arr;
	
	for(int i=0; i<size; i++)
	{
		sum += *pARR;
		pARR++;
	}
	
	printf("The sum of the array is:  %d",sum);
    
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