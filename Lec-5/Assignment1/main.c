#include <stdio.h>
#include <stdlib.h>

int Get_SizeOfArr(void);
void Populate_Array(int arr[], int Copy_size);
int compare(const void *a, const void *b);

int main(void)
{
	int size = Get_SizeOfArr();
	int arr[size];

	Populate_Array(arr, size);

	qsort(arr, size, sizeof(arr[0]), compare);

	printf("Max = %d.\n", arr[size - 1]);
	printf("Min = %d.\n", arr[0]);

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

int compare(const void *a, const void *b)
{
	return *(int *)a - *(int *)b;
}
