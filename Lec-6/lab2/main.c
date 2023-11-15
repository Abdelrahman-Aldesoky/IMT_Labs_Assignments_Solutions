#include <stdio.h>

int Add(int *a, int *b);

int main(void)
{
	int x = 0, y = 0;
	int result;

	printf("Please Enter a Number:  ");
	scanf("%d", &x);

	printf("Please Enter a second Number:  ");
	scanf("%d", &y);

	result = Add(&x, &y);

	printf("The result is:  %d", result);
}

int Add(int *a, int *b)
{
	int sum = *a + *b;
	return sum;
}