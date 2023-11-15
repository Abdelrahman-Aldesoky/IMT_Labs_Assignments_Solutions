#include <stdio.h>

void Add_and_Subtract(int Copy_x, int Copy_y, int *sum, int *sub);

int main(void)
{
	int x = 0, y = 0;
	int Sum = 0, Sub = 0;

	printf("Please Enter a number :  ");
	scanf("%d", &x);

	printf("Please Enter a second number :  ");
	scanf("%d", &y);

	Add_and_Subtract(x, y, &Sum, &Sub);

	printf("The result of Addition is:  %d\n", Sum);
	printf("The result of Subtraction is:  %d", Sub);

	return 0;
}

void Add_and_Subtract(int Copy_x, int Copy_y, int *sum, int *sub)
{
	*sum = Copy_x + Copy_y;
	*sub = Copy_x - Copy_y;
}