#include <stdio.h>

int main (void)
{
	int x = 10;
	
	int *pX=&x;
	
	printf("X before change is: %d\n",x);
	
	*pX = 20;
	
	printf("X after change is: %d",x);
}