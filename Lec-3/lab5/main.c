#include <stdio.h>

int main(void)
{
    int number = 0;
    printf("Please enter a number : \n");
    scanf("%d", &number);

    printf("*******************Multiplication Table*******************\n");
    for (int i = 1; i < 11; i++)
    {
        printf("\t\t\t %dx%d=%d.\n", number, i, number * i);
    }
    printf("***************************END***************************\n");

    return 0;
}