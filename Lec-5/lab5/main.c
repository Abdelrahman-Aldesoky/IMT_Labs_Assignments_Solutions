#include <stdio.h>

int Get_SizeOfArr(void);
void Populate_Array(int arr[], int Copy_size);
void BubbleSort(int arr[], int Copy_size);
int BinarySearch(int arr[], int Copy_SearchElement, int Copy_LeftIndex, int Copy_RightIndex);

int main(void)
{
	int size = Get_SizeOfArr();
	int arr[size];
	int Exist = -1, SearchElement = 0;

	Populate_Array(arr, size);
	BubbleSort(arr, size);

	printf("Please Enter the number you are looking for :  ");
	scanf("%d", &SearchElement);

	Exist = BinarySearch(arr, SearchElement, 0, size - 1);

	if (Exist == -1)
	{
		printf("Number %d does not exist in the array.\n", SearchElement);
	}
	else
	{
		printf("Number %d does exist and in index %d in the array", SearchElement, Exist);
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

void BubbleSort(int arr[], int size)
{
	int Local_temp = 0;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
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

int BinarySearch(int arr[], int Copy_SearchElement, int Copy_LeftIndex, int Copy_RightIndex)
{
	int Local_Mid_Index = (Copy_LeftIndex + Copy_RightIndex) / 2;

	if (Copy_LeftIndex > Copy_RightIndex)
		return -1; /*didn't find element*/

	if (arr[Local_Mid_Index] == Copy_SearchElement) /*Found the element*/
	{
		return Local_Mid_Index;
	}
	else if (arr[Local_Mid_Index] > Copy_SearchElement) /*if number in mid index is greater than the element */
	{ /*look in the left half of the sorted array*/		/*1,2,3,4,5,6,7,8,9,10*/
		return BinarySearch(arr, Copy_SearchElement, Copy_LeftIndex, Local_Mid_Index - 1);
	}
	else /*number in mid index is smaller than the element*/
	{	 /*look in the right half of the sorted array*/
		return BinarySearch(arr, Copy_SearchElement, Local_Mid_Index + 1, Copy_RightIndex);
	}
}