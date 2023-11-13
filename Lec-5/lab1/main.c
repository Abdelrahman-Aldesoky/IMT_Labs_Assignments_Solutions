#include <stdio.h>

int Get_SizeOfArr(void);
void Populate_Array(int arr[], int Copy_size);

int main(void)
{
	int size = Get_SizeOfArr();
	int arr[size];
	Populate_Array(arr, size);
	printf("\n");
	printf("Array in Reverse Order\n");
	printf("***********************\n");
	for (int i = size - 1; i >= 0; i--)
	{
		printf("Element %d = %d.\n", i + 1, arr[i]);
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